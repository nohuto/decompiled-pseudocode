/*
 * XREFs of CmpFindPathByName @ 0x14055628C
 * Callers:
 *     CmpVEExecuteParseLogic @ 0x1404071F8 (CmpVEExecuteParseLogic.c)
 * Callees:
 *     CmpFindPathByNameEx @ 0x1401DFBAC (CmpFindPathByNameEx.c)
 */

char __fastcall CmpFindPathByName(__int64 a1, __m128i *a2, __int64 a3, unsigned int *a4, __int64 *a5)
{
  return CmpFindPathByNameEx(a1, a2, a3, 0, a4, a5);
}
