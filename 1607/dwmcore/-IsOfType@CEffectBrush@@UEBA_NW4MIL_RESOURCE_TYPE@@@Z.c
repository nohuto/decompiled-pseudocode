/*
 * XREFs of ?IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18013C230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CEffectBrush::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  int v3; // eax
  _BOOL8 result; // rax

  v2 = a2 - 77;
  result = 0;
  if ( v2 <= 9 )
  {
    v3 = 529;
    if ( _bittest(&v3, v2) )
      return 1;
  }
  return result;
}
