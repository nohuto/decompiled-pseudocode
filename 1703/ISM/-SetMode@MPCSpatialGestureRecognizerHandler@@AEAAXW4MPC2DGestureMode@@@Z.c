/*
 * XREFs of ?SetMode@MPCSpatialGestureRecognizerHandler@@AEAAXW4MPC2DGestureMode@@@Z @ 0x180050EC0
 * Callers:
 *     ??0MPCSpatialGestureRecognizerHandler@@QEAA@AEAVManipulationInjector@@K@Z @ 0x180050914 (--0MPCSpatialGestureRecognizerHandler@@QEAA@AEAVManipulationInjector@@K@Z.c)
 *     ?FeedRecognizer@MPCSpatialGestureRecognizerHandler@@QEAAXPEAUInputInfo@@@Z @ 0x180050F7C (-FeedRecognizer@MPCSpatialGestureRecognizerHandler@@QEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::SetMode(__int64 a1, int a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  int v6; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v9; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 != 1 )
  {
    if ( a2 == 2 )
    {
      v4 = 32776;
      goto LABEL_7;
    }
    if ( a2 != 3 )
    {
      v4 = 0;
      goto LABEL_7;
    }
  }
  v4 = 48;
LABEL_7:
  v5 = *(_QWORD *)(a1 + 24);
  v9 = 0;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 280LL))(v5);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x6A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(a1 + 24) + 288LL))(
             *(_QWORD *)(a1 + 24),
             v4,
             &v9);
  if ( (int)result < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x6B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)result);
    __debugbreak();
  }
  *(_DWORD *)(a1 + 104) = a2;
  return result;
}
