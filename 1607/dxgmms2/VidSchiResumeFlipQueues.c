/*
 * XREFs of VidSchiResumeFlipQueues @ 0x1C00A02C0
 * Callers:
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C004E990 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0052D60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008A120 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 * Callees:
 *     VidSchiMarkFlipQueuesRunningStateOnPresentInfo @ 0x1C0024544 (VidSchiMarkFlipQueuesRunningStateOnPresentInfo.c)
 */

void __fastcall VidSchiResumeFlipQueues(KSPIN_LOCK *a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rsi

  v2 = (__int64 *)(a1 + 371);
  v3 = 16LL;
  do
  {
    if ( *v2 )
      VidSchiMarkFlipQueuesRunningStateOnPresentInfo((__int64)a1, *v2, 1);
    ++v2;
    --v3;
  }
  while ( v3 );
  VidSchiUnwaitFlipQueueUnderSchedulerSpinLock(a1);
}
