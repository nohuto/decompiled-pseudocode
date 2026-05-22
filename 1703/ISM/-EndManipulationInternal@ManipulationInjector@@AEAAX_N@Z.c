/*
 * XREFs of ?EndManipulationInternal@ManipulationInjector@@AEAAX_N@Z @ 0x180097098
 * Callers:
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180031DA8 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x1800358DC (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     ??0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z @ 0x18004F21C (--0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z @ 0x18004F62C (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z.c)
 *     ?OnSpatialNavigationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialNavigationStartedEventArgs@3456@@Z @ 0x1800518A0 (-OnSpatialNavigationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogniz.c)
 *     ?OnSpatialNavigationCompleted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialNavigationCompletedEventArgs@3456@@Z @ 0x180051A50 (-OnSpatialNavigationCompleted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogn.c)
 *     ?OnSpatialNavigationCanceled@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialNavigationCanceledEventArgs@3456@@Z @ 0x180051AC0 (-OnSpatialNavigationCanceled@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogni.c)
 *     ?OnSpatialManipulationCompleted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationCompletedEventArgs@3456@@Z @ 0x180051D60 (-OnSpatialManipulationCompleted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureReco.c)
 *     ?OnSpatialManipulationCanceled@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationCanceledEventArgs@3456@@Z @ 0x180051DB0 (-OnSpatialManipulationCanceled@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecog.c)
 *     ?StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_N@Z @ 0x180096E04 (-StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_N@Z.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@@Z @ 0x180096E50 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x180097AB0 (-InjectAndScrub@ManipulationInjector@@AEAAXXZ.c)
 */

void __fastcall ManipulationInjector::EndManipulationInternal(
        ManipulationInjector *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v5; // cl
  int v6; // eax
  bool v7; // zf
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  LOBYTE(a4) = a2;
  if ( *((_DWORD *)this + 12) )
  {
    v5 = 0;
    LODWORD(a3) = 0;
    do
    {
      a2 = 152LL * (unsigned int)a3;
      v6 = *(_DWORD *)((char *)this + a2 + 124);
      if ( v6 != 2 )
      {
        if ( ((v6 - 65542) & 0xFFFEFFFF) != 0 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x259,
            (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            a4);
          JUMPOUT(0x18009714CLL);
        }
        *(_DWORD *)((char *)this + a2 + 124) = (_BYTE)a4 != 0 ? 0x8000 : 0x40000;
        v5 = 1;
      }
      a3 = (unsigned int)(a3 + 1);
    }
    while ( (unsigned int)a3 < *((_DWORD *)this + 12) );
    if ( v5 )
      ManipulationInjector::InjectAndScrub(this);
  }
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 10) = 0;
  v7 = *((_BYTE *)this + 13) == 0;
  *((_BYTE *)this + 724) = 0;
  if ( !v7 )
    DbgPrint("EndManipulation\n", a2, a3, a4);
}
