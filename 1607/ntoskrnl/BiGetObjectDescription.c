/*
 * XREFs of BiGetObjectDescription @ 0x14053DD94
 * Callers:
 *     BiIsFirmwareApplication @ 0x14012E594 (BiIsFirmwareApplication.c)
 *     BcdQueryObject @ 0x14053D87C (BcdQueryObject.c)
 *     BcdEnumerateObjects @ 0x1406D21C0 (BcdEnumerateObjects.c)
 *     BiBuildIdentifierList @ 0x1406D3B60 (BiBuildIdentifierList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     BiGetRegistryValue @ 0x14053DE5C (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x14053E38C (BiOpenKey.c)
 *     BiCloseKey @ 0x14053E50C (BiCloseKey.c)
 */

__int64 __fastcall BiGetObjectDescription(__int64 a1, _DWORD *a2)
{
  void *v3; // rbx
  int v4; // edi
  HANDLE v5; // rcx
  int RegistryValue; // eax
  HANDLE Handle[3]; // [rsp+30h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+18h] BYREF
  _DWORD *v10; // [rsp+68h] [rbp+20h] BYREF

  Handle[0] = 0LL;
  v3 = 0LL;
  v10 = 0LL;
  v4 = BiOpenKey(a1, L"Description", 131097LL, Handle);
  if ( v4 >= 0 )
  {
    v5 = Handle[0];
    v9 = 0;
    *a2 = 1;
    RegistryValue = BiGetRegistryValue(v5, L"Type", 0LL, 4LL, &v10, &v9);
    v3 = v10;
    v4 = RegistryValue;
    if ( RegistryValue >= 0 )
    {
      if ( v9 == 4 )
        a2[1] = *v10;
      else
        v4 = -1073741788;
    }
  }
  if ( Handle[0] )
    BiCloseKey(Handle[0]);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  return (unsigned int)v4;
}
