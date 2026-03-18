/*
 * XREFs of ?IsOfType@CHwndBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18000F3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CHwndBitmap::IsOfType(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  _BOOL8 result; // rax

  v2 = (unsigned int)(a2 - 55);
  result = 0;
  if ( (unsigned int)v2 <= 0x22 )
  {
    v3 = 0x444000001LL;
    if ( _bittest64(&v3, v2) )
      return 1;
  }
  return result;
}
