/*
 * XREFs of BiOpenKey @ 0x140570094
 * Callers:
 *     BiDeleteKey @ 0x140569810 (BiDeleteKey.c)
 *     BiAddStoreFromFile @ 0x14056D638 (BiAddStoreFromFile.c)
 *     BiGetObjectDescription @ 0x14056D7EC (BiGetObjectDescription.c)
 *     BiOpenSystemStore @ 0x14056DC80 (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x14056DE7C (BiCleanupLoadedStores.c)
 *     BcdDeleteElement @ 0x14056F1C8 (BcdDeleteElement.c)
 *     BcdOpenObject @ 0x14056F6CC (BcdOpenObject.c)
 *     BiGetRegistryValue @ 0x14056F9C4 (BiGetRegistryValue.c)
 *     BcdSetElementDataWithFlags @ 0x14056FB78 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14056FEE4 (BcdGetElementDataWithFlags.c)
 *     BiSetRegistryValue @ 0x140570278 (BiSetRegistryValue.c)
 *     BcdEnumerateObjects @ 0x14070D344 (BcdEnumerateObjects.c)
 *     BiCreateObject @ 0x14070D5EC (BiCreateObject.c)
 *     BiDeleteRegistryValue @ 0x14070DD44 (BiDeleteRegistryValue.c)
 *     BiIsPortableWorkspaceBoot @ 0x14070DE6C (BiIsPortableWorkspaceBoot.c)
 *     BiBuildIdentifierList @ 0x14070EDBC (BiBuildIdentifierList.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     BiZwClose @ 0x14014FE44 (BiZwClose.c)
 *     BiZwSetSecurityObject @ 0x14014FE4C (BiZwSetSecurityObject.c)
 *     BiZwOpenKey @ 0x14014FE58 (BiZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     BiCreateKeySecurityDescriptor @ 0x14056FD5C (BiCreateKeySecurityDescriptor.c)
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
