/*
 * XREFs of ?IsOfType@CBlendEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800F9930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CBlendEffect::IsOfType(__int64 a1, unsigned int a2)
{
  int v2; // eax
  _BOOL8 result; // rax

  result = 0;
  if ( a2 <= 0x16 )
  {
    v2 = 4194944;
    if ( _bittest(&v2, a2) )
      return 1;
  }
  return result;
}
