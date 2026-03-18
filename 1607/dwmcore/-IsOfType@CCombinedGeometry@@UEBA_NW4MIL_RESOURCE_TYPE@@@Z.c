/*
 * XREFs of ?IsOfType@CCombinedGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800203A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CCombinedGeometry::IsOfType(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  _BOOL8 result; // rax

  v2 = (unsigned int)(a2 - 66);
  result = 0;
  if ( (unsigned int)v2 <= 0x2C )
  {
    v3 = 0x180000000009LL;
    if ( _bittest64(&v3, v2) )
      return 1;
  }
  return result;
}
