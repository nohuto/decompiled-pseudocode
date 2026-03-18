/*
 * XREFs of CcMdlRead @ 0x1404774E8
 * Callers:
 *     FsRtlMdlReadDev @ 0x14066C8C0 (FsRtlMdlReadDev.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     IoFreeMdl @ 0x140031620 (IoFreeMdl.c)
 *     CcUpdateReadHistory @ 0x140033B8C (CcUpdateReadHistory.c)
 *     IoAllocateMdl @ 0x140033BF0 (IoAllocateMdl.c)
 *     MmProbeAndLockPages @ 0x140034050 (MmProbeAndLockPages.c)
 *     CcGetVirtualAddress @ 0x1400501E0 (CcGetVirtualAddress.c)
 *     CcFetchDataForRead @ 0x140053320 (CcFetchDataForRead.c)
 *     CcFreeVirtualAddress @ 0x140053740 (CcFreeVirtualAddress.c)
 *     CcUpdateSharedCacheMapFlag @ 0x1400851D0 (CcUpdateSharedCacheMapFlag.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 *     CcScheduleReadAheadEx @ 0x1400E4230 (CcScheduleReadAheadEx.c)
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
  volatile signed __int32 *v19; // [rsp+58h] [rbp-80h] BYREF
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
    CcScheduleReadAheadEx((_SLIST_ENTRY *)FileObject, (__int64 *)FileOffset, Length, 0LL);
  __incgsdword(0x5E24u);
  LODWORD(KeGetCurrentThread()[1].Timer.TimerListEntry.Flink) = 0;
  QuadPart = FileOffset->QuadPart;
  v23 = FileOffset->QuadPart;
  v11 = Length;
  while ( v11 )
  {
    VirtualAddress = (PVOID)CcGetVirtualAddress((__int64)SharedCacheMap, QuadPart, &v19, &v21, 0, 0);
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
    CcScheduleReadAheadEx((_SLIST_ENTRY *)FileObject, (__int64 *)FileOffset, Length, 0LL);
  CcUpdateReadHistory((__int64)FileObject, (__int64 *)FileOffset, Length);
  if ( (SharedCacheMap[38] & 8) != 0 )
    CcUpdateSharedCacheMapFlag((__int64)SharedCacheMap, 8, 0);
  IoStatus->Status = 0;
  IoStatus->Information = v16;
}
