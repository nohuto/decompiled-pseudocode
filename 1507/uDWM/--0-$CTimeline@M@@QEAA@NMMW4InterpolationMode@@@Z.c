/*
 * XREFs of ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x1800159C0
 * Callers:
 *     ?ActivateTimeline@CButton@@AEAAJPEAPEAV?$CTimeline@M@@NMMW4InterpolationMode@@@Z @ 0x1800038DC (-ActivateTimeline@CButton@@AEAAJPEAPEAV-$CTimeline@M@@NMMW4InterpolationMode@@@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180025A60 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?StartAlphaAnimation@CAnimatedGlassSheet@@QEAAJMMM@Z @ 0x18007BC14 (-StartAlphaAnimation@CAnimatedGlassSheet@@QEAAJMMM@Z.c)
 *     ?StartRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@0M@Z @ 0x18007BD2C (-StartRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@0M@Z.c)
 *     ?Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z @ 0x18007C6C0 (-Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z.c)
 *     ?FadeOut@CDirectTouchVisual@@QEAAJXZ @ 0x180081E04 (-FadeOut@CDirectTouchVisual@@QEAAJXZ.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180081F14 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateTransition@CDirectTouchVisual@@MEAAJXZ @ 0x180082130 (-UpdateTransition@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x180082590 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?UpdateTransition@CContactStationaryVisual@@MEAAJXZ @ 0x180082AB0 (-UpdateTransition@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?SnapToAnchor@CTextTetherVisual@@QEAAJXZ @ 0x180083954 (-SnapToAnchor@CTextTetherVisual@@QEAAJXZ.c)
 *     ?Initialize@CTetherVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180086A60 (-Initialize@CTetherVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x180086BB0 (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x180087AF4 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x180088218 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x180088764 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z @ 0x18008EB98 (-SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z.c)
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18008F7B4 (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18008F938 (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18008FAB4 (-StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateTransition@CIndirectTouchVisual@@MEAAJXZ @ 0x18008FEA0 (-UpdateTransition@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009A718 (-StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009A8C0 (-StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009AA50 (-StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180015638 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 */

_QWORD *__fastcall CTimeline<float>::CTimeline<float>(__int64 a1, double a2, float a3, float a4, int a5)
{
  _QWORD *v5; // r8
  _QWORD *result; // rax

  CTimelineBase::CTimelineBase(a1, a2, a3, a4, a5);
  result = v5;
  *v5 = &CTimeline<float>::`vftable';
  return result;
}
