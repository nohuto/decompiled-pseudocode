/*
 * XREFs of ?GetSourceType@CHwConstantColorSource@@UEBA?AU?$TMILFlagsEnum@W4TypeFlagsEnum@CHwColorSource@@@@XZ @ 0x180150E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int *__fastcall CHwConstantColorSource::GetSourceType(__int64 a1, int *a2)
{
  int *result; // rax

  result = a2;
  *a2 = (*(_QWORD *)(a1 + 24) != 0LL ? 2 : 0) | 1;
  return result;
}
