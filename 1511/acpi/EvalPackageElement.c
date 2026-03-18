/*
 * XREFs of EvalPackageElement @ 0x1C001B0D4
 * Callers:
 *     AMLIEvalPackageElement @ 0x1C001AFE8 (AMLIEvalPackageElement.c)
 *     Match_32 @ 0x1C0047DFC (Match_32.c)
 *     Match_64 @ 0x1C0047F30 (Match_64.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EvalPackageElement(unsigned int *a1, unsigned int a2, __int64 a3)
{
  if ( a2 >= *a1 )
    return 3222536196LL;
  else
    return DupObjData(gpheapGlobal, a3, (__int64)&a1[8 * a2 + 2 + 2 * a2]);
}
