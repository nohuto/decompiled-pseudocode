/*
 * XREFs of CmRmIsKCBVisible @ 0x140553834
 * Callers:
 *     CmpFindSubKeyByNumberEx @ 0x1404C6BB0 (CmpFindSubKeyByNumberEx.c)
 * Callees:
 *     CmEqualTrans @ 0x140449EE8 (CmEqualTrans.c)
 */

bool __fastcall CmRmIsKCBVisible(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx

  v3 = *(_QWORD *)(a1 + 232);
  return !v3 || CmEqualTrans(a2, v3) != 0;
}
