/*
 * XREFs of RawCleanup @ 0x1403EBB4C
 * Callers:
 *     RawDispatch @ 0x1403E98F8 (RawDispatch.c)
 * Callees:
 *     RawInitiateDeleteVolume @ 0x1400072F8 (RawInitiateDeleteVolume.c)
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     IofCompleteRequest @ 0x140053560 (IofCompleteRequest.c)
 *     IoRemoveShareAccess @ 0x1403EBC00 (IoRemoveShareAccess.c)
 *     FsRtlNotifyVolumeEvent @ 0x140529C40 (FsRtlNotifyVolumeEvent.c)
 */

__int64 __fastcall RawCleanup(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, PIRP Irp, __int64 a3)
{
  struct _FAST_MUTEX *p_PagingIoResource; // r14
  char v7; // bp

  p_PagingIoResource = (struct _FAST_MUTEX *)&AdvancedHeader[2].PagingIoResource;
  v7 = 0;
  ExAcquireFastMutex((PFAST_MUTEX)&AdvancedHeader[2].PagingIoResource);
  IoRemoveShareAccess(*(PFILE_OBJECT *)(a3 + 48), (PSHARE_ACCESS)((char *)&AdvancedHeader[1].Resource + 4));
  if ( *(_QWORD *)(a3 + 48) == *(_QWORD *)&AdvancedHeader[2].NodeTypeCode )
  {
    *(_DWORD *)&AdvancedHeader[1].NodeTypeCode &= ~1u;
    v7 = 1;
    *(_QWORD *)&AdvancedHeader[2].NodeTypeCode = 0LL;
  }
  if ( *(void **)(a3 + 48) == AdvancedHeader[1].ReservedContext )
  {
    AdvancedHeader[1].ReservedContext = 0LL;
    RawInitiateDeleteVolume(AdvancedHeader, 1, 0);
  }
  KeReleaseGuardedMutex(p_PagingIoResource);
  if ( v7 )
    FsRtlNotifyVolumeEvent(*(PFILE_OBJECT *)(a3 + 48), 5u);
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 1);
  return 0LL;
}
