/*
 * XREFs of BiBindEfiEntries @ 0x1406D380C
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x1406D39C0 (BiBindEfiNamespaceObjects.c)
 * Callees:
 *     BcdOpenObject @ 0x14053D54C (BcdOpenObject.c)
 *     BcdDeleteObject @ 0x1406D2034 (BcdDeleteObject.c)
 *     BiIsPortableWorkspaceBoot @ 0x1406D2B38 (BiIsPortableWorkspaceBoot.c)
 *     BiAddBootEntryToNvramDisplayOrder @ 0x1406D3524 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiBindEfiEntryToBcdObject @ 0x1406D38D4 (BiBindEfiEntryToBcdObject.c)
 *     BiCreateEfiEntry @ 0x1406D4310 (BiCreateEfiEntry.c)
 *     BiUpdateBcdObject @ 0x1406D5A18 (BiUpdateBcdObject.c)
 */

__int64 __fastcall BiBindEfiEntries(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  int i; // edi
  int v6; // eax
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  for ( i = 0; (__int64 *)v2 != a2; v2 = *(_QWORD *)v2 )
  {
    v6 = *(_DWORD *)(v2 + 48);
    if ( (v6 & 1) != 0 )
    {
      i = BiBindEfiEntryToBcdObject(a1, v2);
      if ( i < 0 )
        return (unsigned int)i;
      i = BiUpdateBcdObject(a1, v2);
      if ( i < 0 )
        return (unsigned int)i;
    }
    else if ( (v6 & 4) != 0 )
    {
      if ( (v6 & 8) != 0 )
      {
        i = BcdOpenObject(a1, (__int128 *)(v2 + 16), &v8);
        if ( i < 0 )
          return (unsigned int)i;
        BcdDeleteObject(v8);
        *(_DWORD *)(v2 + 48) &= 0xFFFFFFF9;
      }
      else if ( !BiIsPortableWorkspaceBoot() && (int)BiCreateEfiEntry(a1, v2) >= 0 )
      {
        BiAddBootEntryToNvramDisplayOrder(v2);
      }
    }
  }
  return (unsigned int)i;
}
