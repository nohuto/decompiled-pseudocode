/*
 * XREFs of ?ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@AEA_N@Z @ 0x18005036C
 * Callers:
 *     ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x18004C7E8 (-ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     wil::details::ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___::_ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___ @ 0x18005063C (wil--details--ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___--_ScopeExitFn__lambda_2c96.c)
 *     wil::scope_exit__lambda_417363d58b469e4858bc9400fe1d141b___ @ 0x180050714 (wil--scope_exit__lambda_417363d58b469e4858bc9400fe1d141b___.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCCursorManager::ProcessProviderHitTest(
        MPCCursorManager *this,
        struct IMPCInputProviderBase *a2,
        const struct HitTestResult3D *a3,
        bool *a4)
{
  int v7; // ecx
  bool v8; // al
  bool v9; // al
  const char *v10; // r9
  bool v11; // cl
  bool v12; // al
  _QWORD v14[6]; // [rsp+30h] [rbp-21h] BYREF
  _BYTE v15[72]; // [rsp+60h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  char v17; // [rsp+B8h] [rbp+67h] BYREF
  char v18; // [rsp+C8h] [rbp+77h] BYREF
  bool v19; // [rsp+D0h] [rbp+7Fh] BYREF

  v19 = 0;
  v7 = *((_DWORD *)this + 15);
  v8 = v7 == 1 || (v7 & 0x1A) != 0x18;
  v17 = v8;
  v9 = v7 == 1 || (v7 & 0x1C) != 0x18;
  v18 = v9;
  v14[0] = this;
  v14[1] = a4;
  v14[2] = &v17;
  v14[3] = &v18;
  v14[4] = &v19;
  v14[5] = a3;
  wil::scope_exit__lambda_417363d58b469e4858bc9400fe1d141b___(v15, v14);
  if ( !*((_BYTE *)this + 56) || !*((_BYTE *)this + 65) )
    goto LABEL_30;
  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x6C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
      v10);
    __debugbreak();
  }
  if ( !(*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 208LL))(a2)
    || ((*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 48LL))(a2) & 2) == 0 )
  {
LABEL_29:
    v18 = 1;
    v17 = 0;
    goto LABEL_30;
  }
  v11 = *(_DWORD *)this < *((_DWORD *)this + 2) && *((_DWORD *)this + 1) < *((_DWORD *)this + 3);
  v12 = *((_DWORD *)a3 + 68) < *((_DWORD *)a3 + 70) && *((_DWORD *)a3 + 69) < *((_DWORD *)a3 + 71);
  v19 = v12;
  if ( !v11 )
  {
    if ( v12 )
    {
LABEL_28:
      v18 = 0;
      v17 = 1;
      goto LABEL_30;
    }
    goto LABEL_29;
  }
  if ( !v12 )
    goto LABEL_29;
  if ( *((_DWORD *)this + 8) != *((_DWORD *)a3 + 67) )
    goto LABEL_28;
LABEL_30:
  wil::details::ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___::_ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___(v15);
  return 0LL;
}
