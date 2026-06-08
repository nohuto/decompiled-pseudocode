/*
 * XREFs of SaveDevExt @ 0x1C0001E2C
 * Callers:
 *     GetNtProcessorNumber @ 0x1C0015080 (GetNtProcessorNumber.c)
 *     GetLpIndex @ 0x1C001D290 (GetLpIndex.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SaveDevExt(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rcx
  _QWORD *result; // rax

  *(_QWORD *)(DevExts + 8LL * a2) = a1;
  v2 = (_QWORD *)(a1 + 32);
  result = (_QWORD *)qword_1C000ED10;
  if ( *(__int64 **)qword_1C000ED10 != &qword_1C000ED08 )
    __fastfail(3u);
  *v2 = &qword_1C000ED08;
  v2[1] = result;
  *result = v2;
  qword_1C000ED10 = (__int64)v2;
  return result;
}
