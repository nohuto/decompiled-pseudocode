/*
 * XREFs of MmQueryApiSetSchema @ 0x1401708D0
 * Callers:
 *     KiMarkBugCheckRegions @ 0x14017BCEC (KiMarkBugCheckRegions.c)
 *     sub_14079BAE4 @ 0x14079BAE4 (sub_14079BAE4.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MmQueryApiSetSchema(_QWORD *a1, _QWORD *a2)
{
  __int64 *result; // rax

  *a1 = &qword_14034E968;
  result = &qword_14034E970;
  *a2 = &qword_14034E970;
  return result;
}
