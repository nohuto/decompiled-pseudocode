/*
 * XREFs of ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18014B54C
 * Callers:
 *     ?ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION@@@Z @ 0x18010B310 (-ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_I.c)
 *     ?ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION@@@Z @ 0x18010B460 (-ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTE.c)
 * Callees:
 *     ?CheckForIdle@CInteractionTracker@@AEAA_N_N@Z @ 0x18014A2B0 (-CheckForIdle@CInteractionTracker@@AEAA_N_N@Z.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x18014C1C4 (-StopCustomAnimation@CInteractionTracker@@AEAAXH@Z.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18014C264 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 */

char __fastcall CInteractionTracker::SetCustomAnimation(CInteractionTracker *a1, __int64 a2, int a3)
{
  char v3; // di

  v3 = 0;
  if ( a2 )
    return CInteractionTracker::TransitionToCustomAnimation();
  if ( *((_DWORD *)a1 + 51) == 3 )
  {
    CInteractionTracker::StopCustomAnimation(a1, a3);
    CInteractionTracker::CheckForIdle(a1, 1);
  }
  return v3;
}
