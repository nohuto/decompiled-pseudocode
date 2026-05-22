/*
 * XREFs of ?StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@@Z @ 0x180096DC0
 * Callers:
 *     ?StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x1800359AC (-StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z @ 0x18004F62C (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z.c)
 *     ?OnSpatialNavigationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialNavigationStartedEventArgs@3456@@Z @ 0x1800518A0 (-OnSpatialNavigationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogniz.c)
 * Callees:
 *     <none>
 */

void __fastcall ManipulationInjector::StartPan(ManipulationInjector *this, struct tagPOINT *a2)
{
  if ( *((_DWORD *)this + 22) == 64 )
  {
    if ( *((_BYTE *)this + 13) )
      DbgPrint("Transition from DRAG to PAN\n", a2);
    *((_DWORD *)this + 22) = 1;
  }
  else
  {
    ManipulationInjector::StartManipulation(this, 1LL, *a2);
  }
}
