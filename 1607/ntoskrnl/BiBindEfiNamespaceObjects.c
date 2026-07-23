/*
 * XREFs of BiBindEfiNamespaceObjects @ 0x1406D3AF8
 * Callers:
 *     BiOpenSystemStore @ 0x14053C49C (BiOpenSystemStore.c)
 * Callees:
 *     BiBindEfiBootManager @ 0x1406D373C (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x1406D3944 (BiBindEfiEntries.c)
 *     BiBuildIdentifierList @ 0x1406D3B60 (BiBuildIdentifierList.c)
 *     BiFreeIdentifierList @ 0x1406D4F58 (BiFreeIdentifierList.c)
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
