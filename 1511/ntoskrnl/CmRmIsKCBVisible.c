/*
 * XREFs of CmRmIsKCBVisible @ 0x1403B47C4
 * Callers:
 *     CmpFindSubKeyByNumberEx @ 0x1403FDA60 (CmpFindSubKeyByNumberEx.c)
 * Callees:
 *     CmEqualTrans @ 0x1403E0784 (CmEqualTrans.c)
 */

bool __fastcall CmRmIsKCBVisible(__int64 a1, __int64 a2)
{
  return !*(_QWORD *)(a1 + 232) || (unsigned __int8)CmEqualTrans(a2) != 0;
}
