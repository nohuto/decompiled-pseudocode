/*
 * XREFs of SaveDevExt @ 0x1C0006194
 * Callers:
 *     GetNtProcessorNumber @ 0x1C001A550 (GetNtProcessorNumber.c)
 *     GetLpIndex @ 0x1C001D910 (GetLpIndex.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SaveDevExt(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rcx
  _QWORD *result; // rax

  *(_QWORD *)(DevExts + 8LL * a2) = a1;
  v2 = (_QWORD *)(a1 + 32);
  result = (_QWORD *)qword_1C00093C0;
  if ( *(__int64 **)qword_1C00093C0 != &qword_1C00093B8 )
    __fastfail(3u);
  *v2 = &qword_1C00093B8;
  v2[1] = result;
  *result = v2;
  qword_1C00093C0 = (__int64)v2;
  return result;
}
