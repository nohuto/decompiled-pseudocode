/*
 * XREFs of ?StopCustomAnimations@CInteractionTracker@@AEAAXXZ @ 0x18014C22C
 * Callers:
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x180149A8C (--1CInteractionTracker@@UEAA@XZ.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18014C300 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z @ 0x18014C374 (-TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18014C474 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x18014C1C4 (-StopCustomAnimation@CInteractionTracker@@AEAAXH@Z.c)
 */

void __fastcall CInteractionTracker::StopCustomAnimations(CInteractionTracker *this)
{
  int v2; // ebx

  v2 = 0;
  do
    CInteractionTracker::StopCustomAnimation(this, v2++);
  while ( (unsigned __int64)v2 < 2 );
}
