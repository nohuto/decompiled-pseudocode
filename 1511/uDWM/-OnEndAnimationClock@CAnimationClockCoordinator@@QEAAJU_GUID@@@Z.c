/*
 * XREFs of ?OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z @ 0x180005A64
 * Callers:
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x1800064C8 (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180032890 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?End@CAnimationClock@@QEAAJXZ @ 0x180004DAC (-End@CAnimationClock@@QEAAJXZ.c)
 *     ?GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x180005624 (-GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CAnimationClockCoordinator::OnEndAnimationClock(CAnimationClockCoordinator *this, struct _GUID *a2)
{
  struct _GUID v2; // xmm0
  int AnimationClock; // edi
  struct _GUID v5; // [rsp+20h] [rbp-18h] BYREF
  CAnimationClock *v6; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a2;
  v6 = 0LL;
  v5 = v2;
  AnimationClock = CAnimationClockCoordinator::GetAnimationClock(this, &v5, &v6);
  if ( AnimationClock >= 0 )
  {
    AnimationClock = CAnimationClock::End(v6);
    if ( v6 )
      CBaseObject::Release(v6);
  }
  return (unsigned int)AnimationClock;
}
