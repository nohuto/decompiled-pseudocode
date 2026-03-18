/*
 * XREFs of ?IsOfType@CRectangleGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800654D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CRectangleGeometry::IsOfType(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  _BOOL8 result; // rax

  v2 = (unsigned int)(a2 - 65);
  result = 0;
  if ( (unsigned int)v2 <= 0x24 )
  {
    v3 = 0x1800000005LL;
    if ( _bittest64(&v3, v2) )
      return 1;
  }
  return result;
}
