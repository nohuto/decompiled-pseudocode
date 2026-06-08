/*
 * XREFs of SaveDevExt @ 0x1C0004780
 * Callers:
 *     GetNtProcessorNumber @ 0x1C00188D0 (GetNtProcessorNumber.c)
 *     GetLpIndex @ 0x1C001AC70 (GetLpIndex.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall SaveDevExt(__int64 a1, unsigned int a2)
{
  __int64 *v2; // rcx
  __int64 **result; // rax

  *(_QWORD *)(DevExts + 8LL * a2) = a1;
  v2 = (__int64 *)(a1 + 32);
  result = (__int64 **)qword_1C00093C0;
  *v2 = (__int64)&qword_1C00093B8;
  v2[1] = (__int64)result;
  if ( *result != &qword_1C00093B8 )
    __fastfail(3u);
  *result = v2;
  qword_1C00093C0 = (__int64)v2;
  return result;
}
