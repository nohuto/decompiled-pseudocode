/*
 * XREFs of ?OnSpatialManipulationCompleted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationCompletedEventArgs@3456@@Z @ 0x180051D60
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180043FD0 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z @ 0x180050774 (-GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z.c)
 *     ?EndManipulationInternal@ManipulationInjector@@AEAAX_N@Z @ 0x180097098 (-EndManipulationInternal@ManipulationInjector@@AEAAX_N@Z.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::OnSpatialManipulationCompleted(
        ManipulationInjector **this,
        struct Windows::UI::Input::Spatial::ISpatialGestureRecognizer *a2,
        struct Windows::UI::Input::Spatial::ISpatialManipulationCompletedEventArgs *a3)
{
  _DWORD *v4; // rcx
  ISMTracing *v5; // rcx

  ManipulationInjector::EndManipulationInternal(this[2], 0);
  v4 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v4 && *v4 )
  {
    ISMTracing::Instance();
    ISMTracing::GestureRecognizer_GestureDetected_(v5, L"PathCompleted");
  }
  *((_BYTE *)this + 108) = 0;
  return 0LL;
}
