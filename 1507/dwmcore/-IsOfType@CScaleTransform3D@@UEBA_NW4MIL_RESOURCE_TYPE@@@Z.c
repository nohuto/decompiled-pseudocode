/*
 * XREFs of ?IsOfType@CScaleTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800F9B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CScaleTransform3D::IsOfType(__int64 a1, unsigned int a2)
{
  int v2; // eax
  _BOOL8 result; // rax

  result = 0;
  if ( a2 <= 0x1A )
  {
    v2 = 83886208;
    if ( _bittest(&v2, a2) )
      return 1;
  }
  return result;
}
