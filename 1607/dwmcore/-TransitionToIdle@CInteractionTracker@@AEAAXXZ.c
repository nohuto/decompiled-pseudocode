/*
 * XREFs of ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18014C300
 * Callers:
 *     ?CheckForIdle@CInteractionTracker@@AEAA_N_N@Z @ 0x18014A2B0 (-CheckForIdle@CInteractionTracker@@AEAA_N_N@Z.c)
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18014AEE0 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@_N@Z @ 0x18014BAF0 (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@_N@Z.c)
 *     ?SetRequestedScale@CInteractionTracker@@AEAA_NM_N@Z @ 0x18014BB58 (-SetRequestedScale@CInteractionTracker@@AEAA_NM_N@Z.c)
 * Callees:
 *     ?ReportInertiaStop@CInteraction@@QEAAJXZ @ 0x180145748 (-ReportInertiaStop@CInteraction@@QEAAJXZ.c)
 *     ?SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z @ 0x180145E0C (-SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z.c)
 *     ?DestroyScrollAnimations@CInteractionTracker@@AEAAXXZ @ 0x18014A3F0 (-DestroyScrollAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x18014BD80 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAXXZ @ 0x18014C22C (-StopCustomAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z @ 0x180168ACC (-StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z.c)
 */

void __fastcall CInteractionTracker::TransitionToIdle(CInteractionTracker *this)
{
  int v2; // ecx
  CManipulation *v3; // rcx
  CInteraction *v4; // rcx

  v2 = *((_DWORD *)this + 51) - 2;
  if ( v2 )
  {
    if ( v2 != 1 )
      return;
    CInteractionTracker::StopCustomAnimations(this);
  }
  else
  {
    v3 = (CManipulation *)*((_QWORD *)this + 68);
    if ( v3 )
    {
      CManipulation::SetCaptureState_RenderThread(v3);
      v4 = (CInteraction *)*((_QWORD *)this + 69);
      if ( v4 )
        CInteraction::ReportInertiaStop(v4);
    }
    CInteractionTracker::DestroyScrollAnimations(this);
  }
  CChainingHelper::StartIdle((CInteractionTracker *)((char *)this + 376), this);
  CInteractionTracker::SetState((__int64)this, 0);
}
