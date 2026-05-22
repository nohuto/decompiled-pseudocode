/*
 * XREFs of ?OnSpatialNavigationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialNavigationStartedEventArgs@3456@@Z @ 0x1800518A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180043FD0 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z @ 0x180050774 (-GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z.c)
 *     ?StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@@Z @ 0x180096DC0 (-StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@@Z.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@@Z @ 0x180096E50 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@@Z.c)
 *     ?EndManipulationInternal@ManipulationInjector@@AEAAX_N@Z @ 0x180097098 (-EndManipulationInternal@ManipulationInjector@@AEAAX_N@Z.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::OnSpatialNavigationStarted(
        MPCSpatialGestureRecognizerHandler *this,
        struct Windows::UI::Input::Spatial::ISpatialGestureRecognizer *a2,
        struct Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs *a3)
{
  _DWORD *v4; // rcx
  ISMTracing *v5; // rcx
  const unsigned __int16 *v6; // rdx
  __int64 v7; // rdi
  _DWORD *v8; // rcx

  if ( *((_DWORD *)this + 26) == 1 )
  {
    ManipulationInjector::StartPan(*((ManipulationInjector **)this + 2), (struct tagPOINT *)this + 5);
    v4 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v4 && *v4 )
    {
      ISMTracing::Instance();
      v6 = L"ScrollStarted";
LABEL_10:
      ISMTracing::GestureRecognizer_GestureDetected_(v5, v6);
    }
  }
  else
  {
    v7 = *((_QWORD *)this + 2);
    if ( *(_DWORD *)(v7 + 88) == 64 )
      ManipulationInjector::EndManipulationInternal(*((ManipulationInjector **)this + 2), 1);
    ManipulationInjector::StartManipulation(v7, 16LL, *((_QWORD *)this + 5));
    v8 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v8 && *v8 )
    {
      ISMTracing::Instance();
      v6 = L"ZoomStarted";
      goto LABEL_10;
    }
  }
  return 0LL;
}
