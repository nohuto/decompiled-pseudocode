/*
 * XREFs of ?NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z @ 0x1C02179A8
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C0068CE0 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C0049A24 (xxxCallNextHookEx.c)
 */

__int64 __fastcall NtUserfnHkINLPCBTACTIVATESTRUCT(int a1, __int64 a2, struct tagCBTACTIVATESTRUCT *a3)
{
  return xxxCallNextHookEx(a1);
}
