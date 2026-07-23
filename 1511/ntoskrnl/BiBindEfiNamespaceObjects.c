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

__int64 __fastcall BiBindEfiNamespaceObjects(HANDLE BcdStoreHandle)
{
  int v2; // ebx
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[1] = (__int64)v4;
  v4[0] = (__int64)v4;
  v2 = BiBuildIdentifierList(BcdStoreHandle);
  if ( v2 >= 0 )
  {
    v2 = BiBindEfiEntries(BcdStoreHandle, v4);
    if ( v2 >= 0 )
      v2 = BiBindEfiBootManager(BcdStoreHandle, (__int64)v4);
  }
  BiFreeIdentifierList(v4);
  return (unsigned int)v2;
}
