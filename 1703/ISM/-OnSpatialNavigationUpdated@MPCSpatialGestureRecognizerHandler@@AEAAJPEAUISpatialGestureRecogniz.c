/*
 * XREFs of ?OnSpatialNavigationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialNavigationUpdatedEventArgs@3456@@Z @ 0x180051940
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMM@Z @ 0x18009719C (-InjectPan@ManipulationInjector@@QEAAXMM@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXM@Z @ 0x1800975C8 (-InjectZoom@ManipulationInjector@@QEAAXM@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::OnSpatialNavigationUpdated(
        MPCSpatialGestureRecognizerHandler *this,
        struct Windows::UI::Input::Spatial::ISpatialGestureRecognizer *a2,
        struct Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs *a3)
{
  int v4; // eax
  ManipulationInjector *v5; // rcx
  float v6; // xmm0_4
  float v7; // xmm3_4
  float v8; // xmm2_4
  int v9; // eax
  int v11[2]; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *(_QWORD *)v11 = 0LL;
  v12 = 0;
  v4 = (*(__int64 (__fastcall **)(struct Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs *, int *))(*(_QWORD *)a3 + 56LL))(
         a3,
         v11);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x7B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v4);
    JUMPOUT(0x180051A45LL);
  }
  v5 = (ManipulationInjector *)*((_QWORD *)this + 2);
  v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)v11) & _xmm);
  v7 = *(float *)v11 * v6;
  *(float *)v11 = *(float *)v11 * v6;
  v8 = *(float *)&v11[1] * (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v11[1]) & _xmm);
  *(float *)&v11[1] = v8;
  if ( (*((_DWORD *)v5 + 22) & 0xFFFFFF7F) != 0 )
  {
    if ( *((_DWORD *)this + 26) == 1 )
      ManipulationInjector::InjectPan(v5, v7 * 25.0, v8 * -25.0);
    else
      ManipulationInjector::InjectZoom(v5, (float)(v8 * 0.041999999) + 1.0);
    v9 = v12;
    *((_QWORD *)this + 14) = *(_QWORD *)v11;
    *((_DWORD *)this + 30) = v9;
  }
  *((_BYTE *)this + 108) = 1;
  return 0LL;
}
