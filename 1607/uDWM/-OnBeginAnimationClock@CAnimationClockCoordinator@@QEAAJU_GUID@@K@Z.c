/*
 * XREFs of ?OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x18003BF6C
 * Callers:
 *     ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x1800109FC (-_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F670 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Begin@CAnimationClock@@QEAAJK@Z @ 0x18003B564 (-Begin@CAnimationClock@@QEAAJK@Z.c)
 *     ?GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x18003C208 (-GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 */

__int64 __fastcall CAnimationClockCoordinator::OnBeginAnimationClock(
        CAnimationClockCoordinator *this,
        struct _GUID *a2,
        unsigned int a3)
{
  struct _GUID v3; // xmm0
  int AnimationClock; // edi
  unsigned int v6; // edx
  CAnimationClock *v7; // rbx
  struct _GUID v9; // [rsp+20h] [rbp-18h] BYREF
  CAnimationClock *v10; // [rsp+48h] [rbp+10h] BYREF

  v3 = *a2;
  v10 = 0LL;
  v9 = v3;
  AnimationClock = CAnimationClockCoordinator::GetAnimationClock(this, &v9, &v10);
  if ( AnimationClock >= 0 )
  {
    v6 = a3;
    v7 = v10;
    AnimationClock = CAnimationClock::Begin(v10, v6);
    if ( v7 )
      CBaseObject::Release(v7);
  }
  return (unsigned int)AnimationClock;
}
