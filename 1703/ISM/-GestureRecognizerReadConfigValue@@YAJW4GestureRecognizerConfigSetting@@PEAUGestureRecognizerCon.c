/*
 * XREFs of ?GestureRecognizerReadConfigValue@@YAJW4GestureRecognizerConfigSetting@@PEAUGestureRecognizerConfigValue@@@Z @ 0x180037630
 * Callers:
 *     ?OnTouchSessionBegin@EdgeGestureTarget@@AEAAJAEBUTouchInfo@@@Z @ 0x180024398 (-OnTouchSessionBegin@EdgeGestureTarget@@AEAAJAEBUTouchInfo@@@Z.c)
 * Callees:
 *     ?StaticInitConfig@GestureRecognizer@@KAXXZ @ 0x18003A698 (-StaticInitConfig@GestureRecognizer@@KAXXZ.c)
 */

__int64 __fastcall GestureRecognizerReadConfigValue(int a1, __int64 a2)
{
  unsigned __int16 v4; // ax

  if ( a1 <= 35 && a2 )
  {
    *(_DWORD *)a2 = a1;
    GestureRecognizer::StaticInitConfig();
    switch ( a1 )
    {
      case 1:
        v4 = ClickRecognizer::s_doubleTapTimeThreshold;
        goto LABEL_69;
      case 2:
        v4 = ClickRecognizer::s_doubleTapDistanceThreshold;
        goto LABEL_69;
      case 3:
        v4 = ClickRecognizer::s_tapAndShortHoldTimeThreshold;
        goto LABEL_69;
      case 4:
        v4 = ClickRecognizer::s_tapAndHoldStartTimeThreshold;
        goto LABEL_69;
      case 5:
        v4 = ClickRecognizer::s_tapAndHoldDurationThreshold;
        goto LABEL_69;
      case 6:
        v4 = ClickRecognizer::s_tapAndLongHoldTimeThreshold;
        goto LABEL_69;
      case 7:
        v4 = ClickRecognizer::s_tapAndHoldDistanceThreshold;
        goto LABEL_69;
    }
    GestureRecognizer::StaticInitConfig();
    if ( a1 == 18 )
    {
      v4 = PinchStretchRecognizer::s_minimumUpdateThreshold;
      *(_DWORD *)a2 = 18;
LABEL_70:
      *(_WORD *)(a2 + 4) = v4;
      return 0LL;
    }
    GestureRecognizer::StaticInitConfig();
    switch ( a1 )
    {
      case 8:
        v4 = DragRecognizer::s_initialDragThreshold;
        goto LABEL_69;
      case 9:
        v4 = DragRecognizer::s_orientationBias;
        goto LABEL_69;
      case 10:
        v4 = DragRecognizer::s_directionLockThreshold;
        goto LABEL_69;
      case 11:
        v4 = DragRecognizer::s_directionLockMinorThreshold;
        goto LABEL_69;
      case 12:
        v4 = DragRecognizer::s_minimumUpdateThreshold;
        goto LABEL_69;
      case 13:
        v4 = DragRecognizer::s_jitterDeadZoneThreshold;
        goto LABEL_69;
    }
    GestureRecognizer::StaticInitConfig();
    switch ( a1 )
    {
      case 14:
        v4 = FlickRecognizer::s_minimumFlickSpeed;
        goto LABEL_69;
      case 15:
        v4 = FlickRecognizer::s_minimumFlickDelta;
        goto LABEL_69;
      case 16:
        v4 = FlickRecognizer::s_maximumFlickTail;
        goto LABEL_69;
      case 17:
        v4 = FlickRecognizer::s_maximumFlickUp;
        goto LABEL_69;
    }
    GestureRecognizer::StaticInitConfig();
    GestureRecognizer::StaticInitConfig();
    switch ( a1 )
    {
      case 19:
        v4 = TwoFingerClickRecognizer::s_twoFingerActionTimeThreshold;
        goto LABEL_69;
      case 20:
        v4 = TwoFingerClickRecognizer::s_twoFingerTapAndHoldTimeThreshold;
        goto LABEL_69;
      case 21:
        v4 = TwoFingerClickRecognizer::s_twoFingerTapDistanceThreshold;
        goto LABEL_69;
      case 22:
        v4 = TwoFingerClickRecognizer::s_twoFingerDoubleTapTimeThreshold;
        goto LABEL_69;
      case 23:
        v4 = TwoFingerClickRecognizer::s_twoFingerDoubleTapDistanceThreshold;
        goto LABEL_69;
      case 24:
        v4 = TwoFingerClickRecognizer::s_twoFingerDistanceThreshold;
        goto LABEL_69;
    }
    GestureRecognizer::StaticInitConfig();
    if ( a1 == 25 )
    {
      v4 = TwoFingerDragRecognizer::s_initialDragThreshold;
      goto LABEL_69;
    }
    if ( a1 == 26 )
    {
      v4 = TwoFingerDragRecognizer::s_twoFingerDistanceVariationThreshold;
      goto LABEL_69;
    }
    GestureRecognizer::StaticInitConfig();
    switch ( a1 )
    {
      case 27:
        v4 = CraneGrabRecognizer::s_maximumFingerSeparation;
        goto LABEL_69;
      case 28:
        v4 = CraneGrabRecognizer::s_maximumGrabSeparation;
        goto LABEL_69;
      case 29:
        v4 = CraneGrabRecognizer::s_minimumPickUpAltitude;
        goto LABEL_69;
    }
    GestureRecognizer::StaticInitConfig();
    switch ( a1 )
    {
      case 30:
        v4 = CraneCarryRecognizer::s_maximumReentryTime;
        goto LABEL_69;
      case 31:
        v4 = CraneCarryRecognizer::s_reentryDeadzone;
        goto LABEL_69;
      case 32:
        v4 = CraneCarryRecognizer::s_exitDeadzone;
        goto LABEL_69;
      case 34:
        v4 = CraneCarryRecognizer::s_carryTimeoutMS;
LABEL_69:
        *(_DWORD *)a2 = a1;
        goto LABEL_70;
    }
  }
  return 2147942487LL;
}
