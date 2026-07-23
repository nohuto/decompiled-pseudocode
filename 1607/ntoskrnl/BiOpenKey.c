/*
 * XREFs of BiOpenKey @ 0x14053E38C
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x1401263F0 (BiOpenStoreKeyFromObject.c)
 *     BiDeleteKey @ 0x140532F8C (BiDeleteKey.c)
 *     BiAddStoreFromFile @ 0x14053BF10 (BiAddStoreFromFile.c)
 *     BiOpenSystemStore @ 0x14053C49C (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x14053C6A0 (BiCleanupLoadedStores.c)
 *     BiDeleteRegistryValue @ 0x14053CBDC (BiDeleteRegistryValue.c)
 *     BcdDeleteElement @ 0x14053D75C (BcdDeleteElement.c)
 *     BcdOpenObject @ 0x14053DA8C (BcdOpenObject.c)
 *     BiGetObjectDescription @ 0x14053DD94 (BiGetObjectDescription.c)
 *     BiGetRegistryValue @ 0x14053DE5C (BiGetRegistryValue.c)
 *     BcdSetElementDataWithFlags @ 0x14053E01C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14053E1DC (BcdGetElementDataWithFlags.c)
 *     BiSetRegistryValue @ 0x14053E75C (BiSetRegistryValue.c)
 *     BcdEnumerateObjects @ 0x1406D21C0 (BcdEnumerateObjects.c)
 *     BiCreateObject @ 0x1406D246C (BiCreateObject.c)
 *     BiIsPortableWorkspaceBoot @ 0x1406D2C70 (BiIsPortableWorkspaceBoot.c)
 *     BiBuildIdentifierList @ 0x1406D3B60 (BiBuildIdentifierList.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     BiSanitizeHandle @ 0x140125318 (BiSanitizeHandle.c)
 *     BiZwOpenKey @ 0x14012E5E0 (BiZwOpenKey.c)
 *     BiZwClose @ 0x14012E5E8 (BiZwClose.c)
 *     BiZwSetSecurityObject @ 0x14012E5F0 (BiZwSetSecurityObject.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     BiCreateKeySecurityDescriptor @ 0x14053E558 (BiCreateKeySecurityDescriptor.c)
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
