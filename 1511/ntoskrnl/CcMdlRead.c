/*
 * XREFs of CcMdlRead @ 0x1404D83FC
 * Callers:
 *     FsRtlMdlReadDev @ 0x1405F3A80 (FsRtlMdlReadDev.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     CcScheduleReadAheadEx @ 0x14002E96C (CcScheduleReadAheadEx.c)
 *     IoFreeMdl @ 0x1400395A0 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 *     CcFreeVirtualAddress @ 0x1400A3560 (CcFreeVirtualAddress.c)
 *     CcFetchDataForRead @ 0x1400A3590 (CcFetchDataForRead.c)
 *     CcGetVirtualAddress @ 0x1400A39E0 (CcGetVirtualAddress.c)
 *     MmProbeAndLockPages @ 0x1400A7230 (MmProbeAndLockPages.c)
 *     CcUpdateSharedCacheMapFlag @ 0x1400E7E70 (CcUpdateSharedCacheMapFlag.c)
 *     IoAllocateMdl @ 0x1400FC2E0 (IoAllocateMdl.c)
 *     CcUpdateReadHistory @ 0x1400FC468 (CcUpdateReadHistory.c)
 */

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
  struct _MDL *v18; // [rsp+50h] [rbp-88h]
  _QWORD *v19; // [rsp+58h] [rbp-80h] BYREF
  ULONG v20; // [rsp+60h] [rbp-78h]
  ULONG v21; // [rsp+64h] [rbp-74h] BYREF
  _DWORD *v22; // [rsp+68h] [rbp-70h]
  LONGLONG v23; // [rsp+70h] [rbp-68h] BYREF
  PMDL i; // [rsp+78h] [rbp-60h]
  _DWORD *v25; // [rsp+80h] [rbp-58h]
  _DWORD *v26; // [rsp+88h] [rbp-50h]
  PVOID VirtualAddress; // [rsp+90h] [rbp-48h]

  v18 = 0LL;
  v20 = Length;
  v16 = 0;
  v19 = 0LL;
  v17 = 0;
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  v22 = SharedCacheMap;
  PrivateCacheMap = FileObject->PrivateCacheMap;
  v25 = PrivateCacheMap;
  v26 = PrivateCacheMap;
  if ( (*PrivateCacheMap & 0x20000) != 0 )
    CcScheduleReadAheadEx(FileObject, FileOffset, Length, 0LL);
  __incgsdword(0x5E24u);
  LODWORD(KeGetCurrentThread()[1].Timer.TimerListEntry.Flink) = 0;
  QuadPart = FileOffset->QuadPart;
  v23 = FileOffset->QuadPart;
  v11 = Length;
  while ( v11 )
  {
    VirtualAddress = (PVOID)CcGetVirtualAddress((__int64)SharedCacheMap, QuadPart, (__int64 *)&v19, &v21, 0, 0);
    if ( (SharedCacheMap[38] & 8) == 0 )
      CcFetchDataForRead((__int64)FileObject, &v23, v11, 1, &v17, v19, (*PrivateCacheMap >> 18) & 7);
    v12 = v21;
    if ( v21 > v11 )
      v12 = v11;
    v21 = v12;
    QuadPart += v12;
    Mdl = IoAllocateMdl(VirtualAddress, v12, 0, 0, 0LL);
    v18 = Mdl;
    if ( !Mdl )
      RtlRaiseStatus(-1073741670);
    MmProbeAndLockPages(Mdl, 0, IoReadAccess);
    CcFreeVirtualAddress((__int64)v19);
    v19 = 0LL;
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
      v14->Next = v18;
    }
    else
    {
      *MdlChain = v18;
    }
    v18 = 0LL;
    v23 = QuadPart;
    v16 += v12;
    v11 -= v12;
    PrivateCacheMap = v25;
  }
  __addgsdword(0x5E60u, (unsigned int)KeGetCurrentThread()[1].Timer.TimerListEntry.Flink);
  if ( (*PrivateCacheMap & 0x20000) == 0 && v17 )
    CcScheduleReadAheadEx(FileObject, FileOffset, Length, 0LL);
  CcUpdateReadHistory((__int64)FileObject, (__int64 *)FileOffset, Length);
  if ( (SharedCacheMap[38] & 8) != 0 )
    CcUpdateSharedCacheMapFlag((__int64)SharedCacheMap, 8, 0);
  IoStatus->Status = 0;
  IoStatus->Information = v16;
}
