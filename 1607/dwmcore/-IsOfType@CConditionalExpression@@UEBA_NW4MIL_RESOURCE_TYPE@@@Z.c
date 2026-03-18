/*
 * XREFs of ?IsOfType@CConditionalExpression@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180149370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CConditionalExpression::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  int v3; // eax
  _BOOL8 result; // rax

  v2 = a2 - 104;
  result = 0;
  if ( v2 <= 5 )
  {
    v3 = 41;
    if ( _bittest(&v3, v2) )
      return 1;
  }
  return result;
}
