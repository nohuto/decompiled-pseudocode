/*
 * XREFs of ?GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUHitTestResult3D@@Ufloat3@Numerics@Foundation@Windows@@@Z @ 0x18005223C
 * Callers:
 *     ?OnSpatialManipulationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationStartedEventArgs@3456@@Z @ 0x180051B30 (-OnSpatialManipulationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogn.c)
 *     ?OnSpatialManipulationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationUpdatedEventArgs@3456@@Z @ 0x180051CB0 (-OnSpatialManipulationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogn.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004AC9C (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z @ 0x18004CB14 (-TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void *__fastcall MPCSpatialGestureRecognizerHandler::GetHitTestResultForPathingDelta(__int64 a1, void *a2, float *a3)
{
  MPCHolographicInputManager *v6; // rax
  __int64 v7; // r8
  const char *v8; // r9
  __int64 v9; // rax
  const char *v10; // r9
  __int64 v11; // rbx
  int v12; // eax
  _DWORD v14[16]; // [rsp+30h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  memset(v14, 0, 0x3CuLL);
  memset(a2, 0, 0x128uLL);
  v14[0] = *(_DWORD *)(a1 + 8);
  *(_OWORD *)&v14[1] = *(_OWORD *)(a1 + 72);
  v14[5] = *(_DWORD *)(a1 + 88);
  v14[6] = *(_DWORD *)(a1 + 92);
  MPCHolographicInputManager::GetInstance();
  MPCHolographicInputManager::TransformRayToHeadFromWorld(v6, (struct TargetingRay *)&v14[1], v7, v8);
  *(float *)&v14[1] = *(float *)&v14[1] + *a3;
  *(float *)&v14[2] = *(float *)&v14[2] + a3[1];
  *(float *)&v14[3] = *(float *)&v14[3] + a3[2];
  MPCHolographicInputManager::GetInstance();
  if ( !*(_BYTE *)(v9 + 2160) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x58,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\inc\\mpcholographicinputmanager.h",
      v10);
    __debugbreak();
  }
  v11 = *(_QWORD *)(v9 + 2176);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = (*(__int64 (__fastcall **)(__int64, _DWORD *, void *))(*(_QWORD *)v11 + 40LL))(v11, v14, a2);
  if ( v12 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x224,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v12);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return a2;
}
