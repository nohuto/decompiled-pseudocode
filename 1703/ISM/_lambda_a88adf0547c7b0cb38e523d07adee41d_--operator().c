/*
 * XREFs of _lambda_a88adf0547c7b0cb38e523d07adee41d_::operator() @ 0x18004BF64
 * Callers:
 *     std::_Func_impl__lambda_a88adf0547c7b0cb38e523d07adee41d__std::allocator_int__void_IMPCInputProviderBase_____ptr64_::_Do_call @ 0x18004E180 (std--_Func_impl__lambda_a88adf0547c7b0cb38e523d07adee41d__std--allocator_int__void__ea_18004E180.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x18004C7E8 (-ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_a88adf0547c7b0cb38e523d07adee41d_::operator()(_QWORD *a1, __int64 a2)
{
  const char *v4; // r9
  __int64 *v6; // rdi
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rcx
  BOOL v10; // r9d
  _BYTE *v11; // r8
  int v12; // eax
  void *v13[4]; // [rsp+30h] [rbp-178h] BYREF
  _BYTE v14[304]; // [rsp+50h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  v13[3] = (void *)-2LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2)
    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1CE,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      v4);
    __debugbreak();
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2) )
  {
    v6 = *(__int64 **)(*a1 + 2176LL);
    v7 = *v6;
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 88LL))(a2);
    if ( (*(int (__fastcall **)(__int64 *, _QWORD, _BYTE *))(v7 + 72))(v6, v8, v14) < 0 )
      goto LABEL_13;
    v9 = *a1;
    v10 = a2 != **(_QWORD **)(*a1 + 2360LL);
    v11 = v14;
  }
  else
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2) )
      goto LABEL_13;
    v9 = *a1;
    v10 = a2 != **(_QWORD **)(*a1 + 2360LL);
    v11 = (_BYTE *)(*(_QWORD *)a1[1] + 784LL);
  }
  MPCHolographicInputManager::ProcessCursorData(v9, a2, v11, (unsigned int)(v10 + 1), v9 + 2192);
LABEL_13:
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 136LL))(a2, *(_QWORD *)a1[1]);
  (*(void (__fastcall **)(__int64, void **, _QWORD))(*(_QWORD *)a2 + 104LL))(a2, v13, *a1);
  v12 = (*(__int64 (__fastcall **)(_QWORD, signed __int64))(**(_QWORD **)(*a1 + 2176LL) + 80LL))(
          *(_QWORD *)(*a1 + 2176LL),
          ((char *)v13[1] - (char *)v13[0]) / 80);
  if ( v12 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x1EA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v12);
  if ( v13[0] )
    std::_Deallocate((char *)v13[0], ((char *)v13[2] - (char *)v13[0]) / 80, 0x50uLL);
}
