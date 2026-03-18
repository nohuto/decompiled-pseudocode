/*
 * XREFs of BiGetObjectDescription @ 0x1404FB254
 * Callers:
 *     BcdQueryObject @ 0x1404FC68C (BcdQueryObject.c)
 *     BcdEnumerateObjects @ 0x14068D82C (BcdEnumerateObjects.c)
 *     BiBuildIdentifierList @ 0x14068F2A4 (BiBuildIdentifierList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     BiGetRegistryValue @ 0x1404FCF24 (BiGetRegistryValue.c)
 *     BiCloseKey @ 0x1404FD274 (BiCloseKey.c)
 *     BiOpenKey @ 0x1404FD5F4 (BiOpenKey.c)
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
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)v4;
}
