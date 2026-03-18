/*
 * XREFs of ?IsOfType@CFlipChain@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B8920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CFlipChain::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  int v3; // eax
  _BOOL8 result; // rax

  v2 = a2 - 55;
  result = 0;
  if ( v2 <= 0x1F )
  {
    v3 = -1006632959;
    if ( _bittest(&v3, v2) )
      return 1;
  }
  return result;
}
