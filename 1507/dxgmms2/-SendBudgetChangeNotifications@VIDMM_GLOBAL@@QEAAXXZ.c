/*
 * XREFs of ?SendBudgetChangeNotifications@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00727B8
 * Callers:
 *     ?RecalculateBudget@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C0035D0C (-RecalculateBudget@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     memset @ 0x1C0008500 (memset.c)
 */

void __fastcall VIDMM_GLOBAL::SendBudgetChangeNotifications(VIDMM_GLOBAL *this)
{
  int updated; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rax
  _QWORD v8[8]; // [rsp+40h] [rbp-58h] BYREF

  memset(v8, 0, sizeof(v8));
  v8[0] = *(_QWORD *)(*((_QWORD *)this + 3) + 252LL);
  updated = ZwUpdateWnfStateData(&WNF_DX_VIDMM_BUDGETCHANGE_NOTIFICATION, v8, 64LL);
  v6 = updated;
  if ( updated < 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
    *(_QWORD *)(v7 + 24) = v6;
    WdLogEvent5_WdAssertion(v7);
  }
}
