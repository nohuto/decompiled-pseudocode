/*
 * XREFs of BiBindEfiNamespaceObjects @ 0x14068F23C
 * Callers:
 *     BiOpenSystemStore @ 0x1404FB6E8 (BiOpenSystemStore.c)
 * Callees:
 *     BiBindEfiBootManager @ 0x14068EE8C (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x14068F08C (BiBindEfiEntries.c)
 *     BiBuildIdentifierList @ 0x14068F2A4 (BiBuildIdentifierList.c)
 *     BiFreeIdentifierList @ 0x140690668 (BiFreeIdentifierList.c)
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
