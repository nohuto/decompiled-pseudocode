/*
 * XREFs of ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@@Z @ 0x1800977E8
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z @ 0x18004F62C (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z.c)
 *     ?OnSpatialManipulationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationStartedEventArgs@3456@@Z @ 0x180051B30 (-OnSpatialManipulationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogn.c)
 *     ?OnSpatialManipulationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationUpdatedEventArgs@3456@@Z @ 0x180051CB0 (-OnSpatialManipulationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogn.c)
 * Callees:
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@@Z @ 0x180096E50 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@@Z.c)
 *     ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x180097AB0 (-InjectAndScrub@ManipulationInjector@@AEAAXXZ.c)
 *     ?UpdateContact@ManipulationInjector@@AEAAXUtagPOINT@@_N@Z @ 0x180098478 (-UpdateContact@ManipulationInjector@@AEAAXUtagPOINT@@_N@Z.c)
 */

void __fastcall ManipulationInjector::InjectDrag(ManipulationInjector *this, struct tagPOINT *a2)
{
  if ( *((_BYTE *)this + 13) )
    DbgPrint("Drag pt: %d,%d\n", a2->x, a2->y);
  if ( *((_DWORD *)this + 22) == 64 )
  {
    ManipulationInjector::UpdateContact(this, *a2, 0);
    ManipulationInjector::InjectAndScrub(this);
  }
  else
  {
    ManipulationInjector::StartManipulation((__int64)this, 64, *a2);
  }
}
