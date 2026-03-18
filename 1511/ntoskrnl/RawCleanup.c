/*
 * XREFs of RawCleanup @ 0x140493A2C
 * Callers:
 *     RawDispatch @ 0x1404D5D20 (RawDispatch.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     IofCompleteRequest @ 0x140084CE0 (IofCompleteRequest.c)
 *     RawInitiateDeleteVolume @ 0x1400D0B18 (RawInitiateDeleteVolume.c)
 *     IoRemoveShareAccess @ 0x140493AE0 (IoRemoveShareAccess.c)
 *     FsRtlNotifyVolumeEvent @ 0x1404EB578 (FsRtlNotifyVolumeEvent.c)
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
