/*
 * XREFs of BiOpenKey @ 0x14053DE4C
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x140125E80 (BiOpenStoreKeyFromObject.c)
 *     BiDeleteKey @ 0x140532A4C (BiDeleteKey.c)
 *     BiAddStoreFromFile @ 0x14053B9D0 (BiAddStoreFromFile.c)
 *     BiOpenSystemStore @ 0x14053BF5C (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x14053C160 (BiCleanupLoadedStores.c)
 *     BiDeleteRegistryValue @ 0x14053C69C (BiDeleteRegistryValue.c)
 *     BcdDeleteElement @ 0x14053D21C (BcdDeleteElement.c)
 *     BcdOpenObject @ 0x14053D54C (BcdOpenObject.c)
 *     BiGetObjectDescription @ 0x14053D854 (BiGetObjectDescription.c)
 *     BiGetRegistryValue @ 0x14053D91C (BiGetRegistryValue.c)
 *     BcdSetElementDataWithFlags @ 0x14053DADC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14053DC9C (BcdGetElementDataWithFlags.c)
 *     BiSetRegistryValue @ 0x14053E21C (BiSetRegistryValue.c)
 *     BcdEnumerateObjects @ 0x1406D2088 (BcdEnumerateObjects.c)
 *     BiCreateObject @ 0x1406D2334 (BiCreateObject.c)
 *     BiIsPortableWorkspaceBoot @ 0x1406D2B38 (BiIsPortableWorkspaceBoot.c)
 *     BiBuildIdentifierList @ 0x1406D3A28 (BiBuildIdentifierList.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     BiSanitizeHandle @ 0x140124DA8 (BiSanitizeHandle.c)
 *     BiZwOpenKey @ 0x14012E070 (BiZwOpenKey.c)
 *     BiZwClose @ 0x14012E078 (BiZwClose.c)
 *     BiZwSetSecurityObject @ 0x14012E080 (BiZwSetSecurityObject.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     BiCreateKeySecurityDescriptor @ 0x14053E018 (BiCreateKeySecurityDescriptor.c)
 */

__int64 __fastcall BiOpenKey(void *a1, const WCHAR *a2, ACCESS_MASK a3, HANDLE *a4)
{
  const WCHAR *v6; // rax
  unsigned int i; // esi
  void *KeySecurityDescriptor; // r14
  ACCESS_MASK v10; // edx
  char v11; // r15
  NTSTATUS v12; // ebx
  __int64 v14; // rdx
  HANDLE KeyHandle; // [rsp+28h] [rbp-90h] BYREF
  HANDLE v16; // [rsp+30h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-70h] BYREF

  v6 = a2;
  for ( i = 0; ; ++i )
  {
    KeyHandle = 0LL;
    KeySecurityDescriptor = 0LL;
    RtlInitUnicodeString(&DestinationString, v6);
    a1 = (void *)BiSanitizeHandle((__int64)a1);
    a3 |= 0x40000u;
    v10 = a3;
    v11 = 0;
    if ( (a3 & 0x60019) != a3 )
    {
      v10 = 0x40000;
      v11 = 1;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = a1;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v12 = BiZwOpenKey(&KeyHandle, v10, &ObjectAttributes);
    if ( v12 >= 0 )
    {
      if ( !v11 )
        goto LABEL_6;
      KeySecurityDescriptor = (void *)BiCreateKeySecurityDescriptor(983103);
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
      ExFreePoolWithTag(KeySecurityDescriptor, 0x4B444342u);
    if ( v12 != -1073741443 )
      break;
    __debugbreak();
    if ( i >= 5 )
      break;
    v6 = a2;
  }
  return (unsigned int)v12;
}
