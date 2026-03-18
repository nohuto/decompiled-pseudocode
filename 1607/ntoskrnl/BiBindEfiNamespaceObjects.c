/*
 * XREFs of BiBindEfiNamespaceObjects @ 0x1406D39C0
 * Callers:
 *     BiOpenSystemStore @ 0x14053BF5C (BiOpenSystemStore.c)
 * Callees:
 *     BiBindEfiBootManager @ 0x1406D3604 (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x1406D380C (BiBindEfiEntries.c)
 *     BiBuildIdentifierList @ 0x1406D3A28 (BiBuildIdentifierList.c)
 *     BiFreeIdentifierList @ 0x1406D4E20 (BiFreeIdentifierList.c)
 */

__int64 __fastcall BiBindEfiNamespaceObjects(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[1] = (__int64)v5;
  v5[0] = (__int64)v5;
  v3 = BiBuildIdentifierList(a1, a2, v5);
  if ( v3 >= 0 )
  {
    v3 = BiBindEfiEntries(a1, v5);
    if ( v3 >= 0 )
      v3 = BiBindEfiBootManager(a1, (__int64)v5);
  }
  BiFreeIdentifierList(v5);
  return (unsigned int)v3;
}
