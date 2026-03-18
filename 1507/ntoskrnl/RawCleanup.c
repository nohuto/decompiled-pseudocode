/*
 * XREFs of RawCleanup @ 0x14040BEA0
 * Callers:
 *     RawDispatch @ 0x14040B7FC (RawDispatch.c)
 * Callees:
 *     RawInitiateDeleteVolume @ 0x1400067CC (RawInitiateDeleteVolume.c)
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     IoRemoveShareAccess @ 0x14040BFE0 (IoRemoveShareAccess.c)
 *     FsRtlNotifyVolumeEvent @ 0x14055FB20 (FsRtlNotifyVolumeEvent.c)
 */

__int64 __fastcall RawCleanup(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, PIRP Irp, __int64 a3, __int64 a4)
{
  _ERESOURCE **p_PagingIoResource; // rbx
  char v8; // r15
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned __int8 CurrentIrql; // r12
  unsigned __int8 v12; // di
  signed __int32 v13; // eax

  p_PagingIoResource = &AdvancedHeader[2].PagingIoResource;
  v8 = 0;
  v9 = KeAbPreAcquire((ULONG_PTR)&AdvancedHeader[2].PagingIoResource, 0LL, 0LL, a4);
  v10 = v9;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)p_PagingIoResource, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)p_PagingIoResource, v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  p_PagingIoResource[1] = (_ERESOURCE *)KeGetCurrentThread();
  *((_DWORD *)p_PagingIoResource + 12) = CurrentIrql;
  IoRemoveShareAccess(*(PFILE_OBJECT *)(a3 + 48), (PSHARE_ACCESS)((char *)&AdvancedHeader[1].Resource + 4));
  if ( *(_QWORD *)(a3 + 48) == *(_QWORD *)&AdvancedHeader[2].NodeTypeCode )
  {
    *(_DWORD *)&AdvancedHeader[1].NodeTypeCode &= ~1u;
    v8 = 1;
    *(_QWORD *)&AdvancedHeader[2].NodeTypeCode = 0LL;
  }
  if ( *(void **)(a3 + 48) == AdvancedHeader[1].ReservedContext )
  {
    AdvancedHeader[1].ReservedContext = 0LL;
    RawInitiateDeleteVolume(AdvancedHeader, 1, 0);
  }
  p_PagingIoResource[1] = 0LL;
  v12 = *((_BYTE *)p_PagingIoResource + 48);
  v13 = _InterlockedCompareExchange((volatile signed __int32 *)p_PagingIoResource, 1, 0);
  if ( v13 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)p_PagingIoResource, v13);
  __writecr8(v12);
  KeAbPostRelease((ULONG_PTR)p_PagingIoResource);
  if ( v8 )
    FsRtlNotifyVolumeEvent(*(PFILE_OBJECT *)(a3 + 48), 5u);
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 1);
  return 0LL;
}
