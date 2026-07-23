/*
 * XREFs of MmQueryApiSetSchema @ 0x1400B0D70
 * Callers:
 *     KiMarkBugCheckRegions @ 0x140157534 (KiMarkBugCheckRegions.c)
 *     PsQueryCurrentApiSetSchema @ 0x1404CD96C (PsQueryCurrentApiSetSchema.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MmQueryApiSetSchema(_QWORD *a1, _QWORD *a2)
{
  __int64 *result; // rax

  *a1 = &qword_1403267A8;
  result = &qword_1403267B0;
  *a2 = &qword_1403267B0;
  return result;
}
