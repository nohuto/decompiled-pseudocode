/*
 * XREFs of ?OnSpatialManipulationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationStartedEventArgs@3456@@Z @ 0x180051B30
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180043FD0 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004AC9C (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z @ 0x180050774 (-GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z.c)
 *     ?GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUHitTestResult3D@@Ufloat3@Numerics@Foundation@Windows@@@Z @ 0x18005223C (-GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA-AUHitTestResult3D@@Ufl.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@@Z @ 0x1800977E8 (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::OnSpatialManipulationStarted(
        MPCSpatialGestureRecognizerHandler *this,
        struct Windows::UI::Input::Spatial::ISpatialGestureRecognizer *a2,
        struct Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs *a3)
{
  _OWORD *v4; // rax
  __int64 v5; // rdx
  char *v6; // rcx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  int v17; // eax
  const char *v18; // r9
  ManipulationInjector *v19; // rcx
  _DWORD *v20; // rcx
  ISMTracing *v21; // rcx
  struct tagPOINT v23; // [rsp+20h] [rbp-E0h] BYREF
  int v24; // [rsp+28h] [rbp-D8h]
  char v25; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+C8h] [rbp-38h]
  int v27; // [rsp+D0h] [rbp-30h]
  __int64 v28; // [rsp+D4h] [rbp-2Ch]
  int v29; // [rsp+DCh] [rbp-24h]
  char v30; // [rsp+409h] [rbp+309h]
  float v31; // [rsp+40Ch] [rbp+30Ch]
  float v32; // [rsp+410h] [rbp+310h]
  _BYTE v33[304]; // [rsp+860h] [rbp+760h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+9A8h] [rbp+8A8h]

  MPCHolographicInputManager::GetInstance();
  v5 = 16LL;
  v6 = &v25;
  do
  {
    v7 = v4[1];
    *(_OWORD *)v6 = *v4;
    v8 = v4[2];
    *((_OWORD *)v6 + 1) = v7;
    v9 = v4[3];
    *((_OWORD *)v6 + 2) = v8;
    v10 = v4[4];
    *((_OWORD *)v6 + 3) = v9;
    v11 = v4[5];
    *((_OWORD *)v6 + 4) = v10;
    v12 = v4[6];
    *((_OWORD *)v6 + 5) = v11;
    v13 = v4[7];
    v4 += 8;
    *((_OWORD *)v6 + 6) = v12;
    v6 += 128;
    *((_OWORD *)v6 - 1) = v13;
    --v5;
  }
  while ( v5 );
  v14 = *v4;
  v23 = 0LL;
  v15 = v4[1];
  v24 = 0;
  *(_OWORD *)v6 = v14;
  v16 = v4[2];
  *((_OWORD *)v6 + 1) = v15;
  *((_OWORD *)v6 + 2) = v16;
  v17 = v27;
  *((_QWORD *)this + 9) = v26;
  *(_QWORD *)((char *)this + 84) = v28;
  *(struct tagPOINT *)&v16 = v23;
  *((_DWORD *)this + 20) = v17;
  v23 = (struct tagPOINT)v16;
  *((_DWORD *)this + 23) = v29;
  MPCSpatialGestureRecognizerHandler::GetHitTestResultForPathingDelta(this, v33, &v23);
  if ( !v30 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x174,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      v18);
    __debugbreak();
  }
  v19 = (ManipulationInjector *)*((_QWORD *)this + 2);
  v23.x = (int)v31;
  v23.y = (int)v32;
  ManipulationInjector::InjectDrag(v19, &v23);
  v20 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v20 && *v20 )
  {
    ISMTracing::Instance();
    ISMTracing::GestureRecognizer_GestureDetected_(v21, L"PathStarted");
  }
  return 0LL;
}
