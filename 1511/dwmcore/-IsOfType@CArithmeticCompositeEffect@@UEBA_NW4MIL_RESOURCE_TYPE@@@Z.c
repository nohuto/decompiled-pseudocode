/*
 * XREFs of ?IsOfType@CArithmeticCompositeEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180113760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CArithmeticCompositeEffect::IsOfType(__int64 a1, unsigned int a2)
{
  char v2; // cl
  int v3; // eax

  v2 = 1;
  if ( a2 > 0x12 || (v3 = 262784, !_bittest(&v3, a2)) )
  {
    if ( a2 - 100 > 1 )
      return 0;
  }
  return v2;
}
