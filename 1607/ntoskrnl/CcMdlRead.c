/*
 * XREFs of CcMdlRead @ 0x14045758C
 * Callers:
 *     FsRtlMdlReadDev @ 0x14061DE8C (FsRtlMdlReadDev.c)
 * Callees:
 *     IoAllocateMdl @ 0x14002EB10 (IoAllocateMdl.c)
 *     MmProbeAndLockPages @ 0x14002ECA0 (MmProbeAndLockPages.c)
 *     CcFreeVirtualAddress @ 0x140032AA0 (CcFreeVirtualAddress.c)
 *     CcFetchDataForRead @ 0x140032AD0 (CcFetchDataForRead.c)
 *     CcGetVirtualAddress @ 0x140032F40 (CcGetVirtualAddress.c)
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 *     CcUpdateSharedCacheMapFlag @ 0x14006AD1C (CcUpdateSharedCacheMapFlag.c)
 *     CcUpdateReadHistory @ 0x14006E24C (CcUpdateReadHistory.c)
 *     CcScheduleReadAheadEx @ 0x14006E990 (CcScheduleReadAheadEx.c)
 *     IoFreeMdl @ 0x140071DB0 (IoFreeMdl.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall CcMdlRead(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus)
{
  _DWORD *SharedCacheMap; // r13
  _DWORD *PrivateCacheMap; // r12
  LONGLONG QuadPart; // rbx
  ULONG v11; // esi
  ULONG v12; // r12d
  struct _MDL *Mdl; // rax
  PMDL v14; // rax
  struct _MDL *Next; // rcx
  unsigned int v16; // [rsp+44h] [rbp-94h]
  int v17; // [rsp+48h] [rbp-90h] BYREF
  _DWORD v18[3]; // [rsp+4Ch] [rbp-8Ch] BYREF
  PVOID P; // [rsp+58h] [rbp-80h] BYREF
  struct _MDL *v20; // [rsp+60h] [rbp-78h]
  int v21[2]; // [rsp+68h] [rbp-70h] BYREF
  _DWORD *v22; // [rsp+70h] [rbp-68h]
  PVOID VirtualAddress; // [rsp+78h] [rbp-60h]
  PMDL i; // [rsp+80h] [rbp-58h]
  _DWORD *v25; // [rsp+88h] [rbp-50h]
  _DWORD *v26; // [rsp+90h] [rbp-48h]

  v20 = 0LL;
  v18[1] = Length;
  v16 = 0;
  P = 0LL;
  v17 = 0;
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  v22 = SharedCacheMap;
  PrivateCacheMap = FileObject->PrivateCacheMap;
  v25 = PrivateCacheMap;
  v26 = PrivateCacheMap;
  if ( (*PrivateCacheMap & 0x20000) != 0 )
    CcScheduleReadAheadEx(FileObject, FileOffset, *(__int64 *)&Length, 0LL);
  __incgsdword(0x5E24u);
  HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink) = 0;
  QuadPart = FileOffset->QuadPart;
  *(LARGE_INTEGER *)v21 = *FileOffset;
  v11 = Length;
  while ( v11 )
  {
    VirtualAddress = (PVOID)CcGetVirtualAddress(
                              (__int64)SharedCacheMap,
                              QuadPart,
                              (volatile signed __int32 **)&P,
                              v18,
                              0,
                              0);
    if ( (SharedCacheMap[38] & 8) == 0 )
      CcFetchDataForRead((__int64)FileObject, v21, v11, 1, &v17, P, (*PrivateCacheMap >> 18) & 7);
    v12 = v18[0];
    if ( v18[0] > v11 )
      v12 = v11;
    v18[0] = v12;
    QuadPart += v12;
    Mdl = IoAllocateMdl(VirtualAddress, v12, 0, 0, 0LL);
    v20 = Mdl;
    if ( !Mdl )
      RtlRaiseStatus(-1073741670);
    MmProbeAndLockPages(Mdl, 0, IoReadAccess);
    CcFreeVirtualAddress((__int64)P);
    P = 0LL;
    v14 = *MdlChain;
    if ( *MdlChain )
    {
      for ( i = *MdlChain; ; i = Next )
      {
        Next = v14->Next;
        if ( !v14->Next )
          break;
        v14 = v14->Next;
      }
      v14->Next = v20;
    }
    else
    {
      *MdlChain = v20;
    }
    v20 = 0LL;
    *(_QWORD *)v21 = QuadPart;
    v16 += v12;
    v11 -= v12;
    PrivateCacheMap = v25;
  }
  __addgsdword(0x5E60u, HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink));
  if ( (*PrivateCacheMap & 0x20000) == 0 && v17 )
    CcScheduleReadAheadEx(FileObject, FileOffset, Length, 0LL);
  CcUpdateReadHistory((__int64)FileObject, (__int64 *)FileOffset, Length);
  if ( (SharedCacheMap[38] & 8) != 0 )
    CcUpdateSharedCacheMapFlag((__int64)SharedCacheMap, 8, 0);
  IoStatus->Status = 0;
  IoStatus->Information = v16;
}
