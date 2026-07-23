/*
 * XREFs of BiBindEfiEntries @ 0x1406D3944
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x1406D3AF8 (BiBindEfiNamespaceObjects.c)
 * Callees:
 *     BcdOpenObject @ 0x14053DA8C (BcdOpenObject.c)
 *     BcdDeleteObject @ 0x1406D216C (BcdDeleteObject.c)
 *     BiIsPortableWorkspaceBoot @ 0x1406D2C70 (BiIsPortableWorkspaceBoot.c)
 *     BiAddBootEntryToNvramDisplayOrder @ 0x1406D365C (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiBindEfiEntryToBcdObject @ 0x1406D3A0C (BiBindEfiEntryToBcdObject.c)
 *     BiCreateEfiEntry @ 0x1406D4448 (BiCreateEfiEntry.c)
 *     BiUpdateBcdObject @ 0x1406D5B50 (BiUpdateBcdObject.c)
 */

__int64 __fastcall BiBindEfiEntries(HANDLE BcdStoreHandle, __int64 *a2)
{
  __int64 v2; // rbx
  NTSTATUS i; // edi
  int v6; // eax
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  for ( i = 0; (__int64 *)v2 != a2; v2 = *(_QWORD *)v2 )
  {
    v6 = *(_DWORD *)(v2 + 48);
    if ( (v6 & 1) != 0 )
    {
      i = BiBindEfiEntryToBcdObject(BcdStoreHandle, v2);
      if ( i < 0 )
        return (unsigned int)i;
      i = BiUpdateBcdObject(BcdStoreHandle, v2);
      if ( i < 0 )
        return (unsigned int)i;
    }
    else if ( (v6 & 4) != 0 )
    {
      if ( (v6 & 8) != 0 )
      {
        i = BcdOpenObject(BcdStoreHandle, (const GUID *)(v2 + 16), &BcdObjectHandle);
        if ( i < 0 )
          return (unsigned int)i;
        BcdDeleteObject(BcdObjectHandle);
        *(_DWORD *)(v2 + 48) &= 0xFFFFFFF9;
      }
      else if ( !BiIsPortableWorkspaceBoot() && (int)BiCreateEfiEntry(BcdStoreHandle, v2) >= 0 )
      {
        BiAddBootEntryToNvramDisplayOrder(v2);
      }
    }
  }
  return (unsigned int)i;
}
