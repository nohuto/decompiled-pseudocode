/*
 * XREFs of MmQueryApiSetSchema @ 0x1400B2E24
 * Callers:
 *     KiMarkBugCheckRegions @ 0x140156FC4 (KiMarkBugCheckRegions.c)
 *     PsQueryCurrentApiSetSchema @ 0x1404EB8E4 (PsQueryCurrentApiSetSchema.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MmQueryApiSetSchema(_QWORD *a1, _QWORD *a2)
{
  __int64 *result; // rax

  *a1 = &qword_140326768;
  result = &qword_140326770;
  *a2 = &qword_140326770;
  return result;
}
