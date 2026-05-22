/*
 * XREFs of ?OnSpatialManipulationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationUpdatedEventArgs@3456@@Z @ 0x180051CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUfloat3@Numerics@Foundation@Windows@@PEAUISpatialManipulationUpdatedEventArgs@Spatial@Input@UI@5@@Z @ 0x180051DF4 (-CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA-AUfloat3@Numerics@Foundation@Win.c)
 *     ?GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUHitTestResult3D@@Ufloat3@Numerics@Foundation@Windows@@@Z @ 0x18005223C (-GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA-AUHitTestResult3D@@Ufl.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@@Z @ 0x1800977E8 (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::OnSpatialManipulationUpdated(
        ManipulationInjector **this,
        struct Windows::UI::Input::Spatial::ISpatialGestureRecognizer *a2,
        struct Windows::UI::Input::Spatial::ISpatialManipulationUpdatedEventArgs *a3)
{
  ManipulationInjector *v4; // rcx
  struct tagPOINT v6; // [rsp+20h] [rbp-E0h] BYREF
  int v7; // [rsp+28h] [rbp-D8h]
  struct tagPOINT v8; // [rsp+30h] [rbp-D0h] BYREF
  int v9; // [rsp+38h] [rbp-C8h]
  _BYTE v10[4]; // [rsp+40h] [rbp-C0h] BYREF
  float v11; // [rsp+44h] [rbp-BCh]
  float v12; // [rsp+48h] [rbp-B8h]

  MPCSpatialGestureRecognizerHandler::CalculatePathingDelta(this, &v8, a3);
  v6 = v8;
  v7 = v9;
  MPCSpatialGestureRecognizerHandler::GetHitTestResultForPathingDelta(this, v10, &v6);
  if ( v10[1] )
  {
    v4 = this[2];
    v6.x = (int)v11;
    v6.y = (int)v12;
    ManipulationInjector::InjectDrag(v4, &v6);
  }
  *((_BYTE *)this + 108) = 1;
  return 0LL;
}
