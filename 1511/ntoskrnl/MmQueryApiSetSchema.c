/*
 * XREFs of MmQueryApiSetSchema @ 0x1401429C8
 * Callers:
 *     KiMarkBugCheckRegions @ 0x14014DBFC (KiMarkBugCheckRegions.c)
 *     sub_14072EAFC @ 0x14072EAFC (sub_14072EAFC.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MmQueryApiSetSchema(_QWORD *a1, _QWORD *a2)
{
  __int64 *result; // rax

  *a1 = &qword_1402FE4A0;
  result = &qword_1402FE4A8;
  *a2 = &qword_1402FE4A8;
  return result;
}
