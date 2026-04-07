/*
 * XREFs of ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180088E8C
 * Callers:
 *     ?FadeOut@CDirectTouchVisual@@QEAAJXZ @ 0x180081E04 (-FadeOut@CDirectTouchVisual@@QEAAJXZ.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180081F14 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x180082590 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?SnapToAnchor@CTextTetherVisual@@QEAAJXZ @ 0x180083954 (-SnapToAnchor@CTextTetherVisual@@QEAAJXZ.c)
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x180085BA4 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Initialize@CTetherVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180086A60 (-Initialize@CTetherVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x180086BB0 (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x180087AF4 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x180088218 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x180088764 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18008F7B4 (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18008F938 (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18008FAB4 (-StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009A718 (-StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009A8C0 (-StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009AA50 (-StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x18000831C (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CTouchVisual::RegisterGlobalTimer(CTouchVisual *this)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( !*((_BYTE *)this + 264) )
  {
    v3 = CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
    v1 = v3;
    if ( v3 >= 0 )
      *((_BYTE *)this + 264) = 1;
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x30u);
  }
  return v1;
}
