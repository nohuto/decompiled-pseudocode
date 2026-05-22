/*
 * XREFs of ?OnSpatialNavigationCompleted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialNavigationCompletedEventArgs@3456@@Z @ 0x180051A50
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180043FD0 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z @ 0x180050774 (-GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z.c)
 *     ?EndManipulationInternal@ManipulationInjector@@AEAAX_N@Z @ 0x180097098 (-EndManipulationInternal@ManipulationInjector@@AEAAX_N@Z.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::OnSpatialNavigationCompleted(
        ManipulationInjector **this,
        struct Windows::UI::Input::Spatial::ISpatialGestureRecognizer *a2,
        struct Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs *a3)
{
  _DWORD *v4; // rcx
  ISMTracing *v5; // rcx
  const unsigned __int16 *v6; // rdx
  _DWORD *v7; // rcx

  ManipulationInjector::EndManipulationInternal(this[2], 0);
  if ( *((_DWORD *)this + 26) == 1 )
  {
    v4 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v4 && *v4 )
    {
      ISMTracing::Instance();
      v6 = L"ScrollCompleted";
LABEL_8:
      ISMTracing::GestureRecognizer_GestureDetected_(v5, v6);
    }
  }
  else
  {
    v7 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v7 && *v7 )
    {
      ISMTracing::Instance();
      v6 = L"ZoomCompleted";
      goto LABEL_8;
    }
  }
  *((_BYTE *)this + 108) = 0;
  return 0LL;
}
