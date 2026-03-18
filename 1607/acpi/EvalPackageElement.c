/*
 * XREFs of EvalPackageElement @ 0x1C0022CEC
 * Callers:
 *     AMLIEvalPackageElement @ 0x1C0022C00 (AMLIEvalPackageElement.c)
 *     Match_32 @ 0x1C005F798 (Match_32.c)
 *     Match_64 @ 0x1C005F8CC (Match_64.c)
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
