/*
 * XREFs of LINPSourceFromPointerType @ 0x1C00CAF60
 * Callers:
 *     rimProcessPointerDeviceInput @ 0x1C00CDE70 (rimProcessPointerDeviceInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LINPSourceFromPointerType(int a1)
{
  int v1; // ecx
  int v2; // ecx

  v1 = a1 - 2;
  if ( v1 )
  {
    v2 = v1 - 1;
    if ( !v2 )
      return 11LL;
    if ( v2 == 1 )
      return 1LL;
  }
  return 9LL;
}
