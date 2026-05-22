/*
 * XREFs of ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x1800504D4
 * Callers:
 *     ?Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x18004AD44 (-Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ?UnInitialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x18004B028 (-UnInitialize3DComponents@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ??1?$unique_ptr@VMPCCursorManager@@U?$default_delete@VMPCCursorManager@@@std@@@std@@QEAA@XZ @ 0x18004D93C (--1-$unique_ptr@VMPCCursorManager@@U-$default_delete@VMPCCursorManager@@@std@@@std@@QEAA@XZ.c)
 *     std::_Func_impl__lambda_b14b63c0582e0f697813a04f12ff944e__std::allocator_int__void_IMPCInputProviderBase_____ptr64_::_Do_call @ 0x18004E010 (std--_Func_impl__lambda_b14b63c0582e0f697813a04f12ff944e__std--allocator_int__void__ea_18004E010.c)
 *     ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x180050580 (-UpdateMouseBinding@MPCCursorManager@@AEAAXXZ.c)
 *     wil::details::ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___::_ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___ @ 0x18005063C (wil--details--ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___--_ScopeExitFn__lambda_2c96.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCCursorManager::UpdateCursorVisibility(MPCCursorManager *this, char a2, char a3, char a4)
{
  int v4; // r11d
  unsigned int (*v5)(void); // rax
  signed int LastError; // eax
  unsigned __int64 v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (a3 != 0 ? 4 : 0) | (a2 != 0 ? 2 : 0) | (*((_BYTE *)this + 56) != 0 ? 8 : 0) | (*((_BYTE *)this + 65) != 0
                                                                                     ? 0x10
                                                                                     : 0);
  if ( *((_DWORD *)this + 15) != v4 || a4 )
  {
    *((_DWORD *)this + 15) = v4;
    v5 = (unsigned int (*)(void))*((_QWORD *)this + 6);
    if ( v5 )
    {
      if ( !v5() )
      {
        LastError = GetLastError();
        v7 = (unsigned __int16)LastError | 0x80070000;
        if ( LastError <= 0 )
          v7 = (unsigned int)LastError;
        if ( (v7 & 0x80000000) != 0LL )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0xF6,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
            (const char *)v7);
          JUMPOUT(0x18005057DLL);
        }
      }
    }
  }
}
