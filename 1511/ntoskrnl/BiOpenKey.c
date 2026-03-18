/*
 * XREFs of BiOpenKey @ 0x1404FD5F4
 * Callers:
 *     BiDeleteKey @ 0x1404F5314 (BiDeleteKey.c)
 *     BiAddStoreFromFile @ 0x1404FB0A0 (BiAddStoreFromFile.c)
 *     BiGetObjectDescription @ 0x1404FB254 (BiGetObjectDescription.c)
 *     BiOpenSystemStore @ 0x1404FB6E8 (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x1404FB8E4 (BiCleanupLoadedStores.c)
 *     BcdDeleteElement @ 0x1404FC728 (BcdDeleteElement.c)
 *     BcdOpenObject @ 0x1404FCC2C (BcdOpenObject.c)
 *     BiGetRegistryValue @ 0x1404FCF24 (BiGetRegistryValue.c)
 *     BcdSetElementDataWithFlags @ 0x1404FD0D8 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1404FD444 (BcdGetElementDataWithFlags.c)
 *     BiSetRegistryValue @ 0x1404FD7D8 (BiSetRegistryValue.c)
 *     BcdEnumerateObjects @ 0x14068D82C (BcdEnumerateObjects.c)
 *     BiCreateObject @ 0x14068DAD4 (BiCreateObject.c)
 *     BiDeleteRegistryValue @ 0x14068E22C (BiDeleteRegistryValue.c)
 *     BiIsPortableWorkspaceBoot @ 0x14068E354 (BiIsPortableWorkspaceBoot.c)
 *     BiBuildIdentifierList @ 0x14068F2A4 (BiBuildIdentifierList.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     BiZwClose @ 0x14011BBB8 (BiZwClose.c)
 *     BiZwSetSecurityObject @ 0x14011BBC0 (BiZwSetSecurityObject.c)
 *     BiZwOpenKey @ 0x14011BBCC (BiZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     BiCreateKeySecurityDescriptor @ 0x1404FD2BC (BiCreateKeySecurityDescriptor.c)
 */

__int64 __fastcall BiOpenKey(void *a1, const WCHAR *a2, ACCESS_MASK a3, HANDLE *a4)
{
  void *v7; // rbx
  unsigned int i; // esi
  ACL *KeySecurityDescriptor; // r14
  ACCESS_MASK v10; // edx
  char v11; // r15
  NTSTATUS v12; // ebx
  __int64 v14; // rdx
  HANDLE KeyHandle; // [rsp+28h] [rbp-90h] BYREF
  HANDLE v16; // [rsp+30h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-70h] BYREF

  v7 = a1;
  for ( i = 0; ; ++i )
  {
    KeyHandle = 0LL;
    KeySecurityDescriptor = 0LL;
    RtlInitUnicodeString(&DestinationString, a2);
    a3 |= 0x40000u;
    v10 = a3;
    v11 = 0;
    if ( (a3 & 0x60019) != a3 )
    {
      v10 = 0x40000;
      v11 = 1;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = v7;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v12 = BiZwOpenKey(&KeyHandle, v10, &ObjectAttributes);
    if ( v12 >= 0 )
    {
      if ( !v11 )
        goto LABEL_6;
      KeySecurityDescriptor = BiCreateKeySecurityDescriptor(983103);
      v12 = BiZwSetSecurityObject(KeyHandle, v14, KeySecurityDescriptor);
      if ( v12 >= 0 )
      {
        v12 = BiZwOpenKey(&v16, a3, &ObjectAttributes);
        if ( v12 >= 0 )
        {
          BiZwClose(KeyHandle);
          KeyHandle = v16;
LABEL_6:
          *a4 = KeyHandle;
        }
      }
    }
    if ( v12 < 0 && KeyHandle )
      BiZwClose(KeyHandle);
    if ( KeySecurityDescriptor )
      ExFreePoolWithTag(KeySecurityDescriptor, 0);
    if ( v12 != -1073741443 )
      break;
    __debugbreak();
    if ( i >= 5 )
      break;
    v7 = a1;
  }
  return (unsigned int)v12;
}
