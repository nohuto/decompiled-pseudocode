/*
 * XREFs of BiCloseKey @ 0x14056FD14
 * Callers:
 *     BiUnloadHiveByHandle @ 0x1405690B8 (BiUnloadHiveByHandle.c)
 *     BiDeleteKey @ 0x140569810 (BiDeleteKey.c)
 *     BiCloseStore @ 0x14056D384 (BiCloseStore.c)
 *     BiAddStoreFromFile @ 0x14056D638 (BiAddStoreFromFile.c)
 *     BiGetObjectDescription @ 0x14056D7EC (BiGetObjectDescription.c)
 *     BiOpenSystemStore @ 0x14056DC80 (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x14056DE7C (BiCleanupLoadedStores.c)
 *     BcdDeleteElement @ 0x14056F1C8 (BcdDeleteElement.c)
 *     BcdOpenObject @ 0x14056F6CC (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14056F7E4 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x14056FB78 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14056FEE4 (BcdGetElementDataWithFlags.c)
 *     BiSetRegistryValue @ 0x140570278 (BiSetRegistryValue.c)
 *     BcdEnumerateObjects @ 0x14070D344 (BcdEnumerateObjects.c)
 *     BiCreateObject @ 0x14070D5EC (BiCreateObject.c)
 *     BiSetObjectDescription @ 0x14070D93C (BiSetObjectDescription.c)
 *     BiIsPortableWorkspaceBoot @ 0x14070DE6C (BiIsPortableWorkspaceBoot.c)
 *     BiBuildIdentifierList @ 0x14070EDBC (BiBuildIdentifierList.c)
 * Callees:
 *     BiZwSetSecurityObject @ 0x14014FE4C (BiZwSetSecurityObject.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     BiCreateKeySecurityDescriptor @ 0x14056FD5C (BiCreateKeySecurityDescriptor.c)
 */

NTSTATUS __fastcall BiCloseKey(HANDLE Handle)
{
  void *KeySecurityDescriptor; // rax
  __int64 v3; // rdx
  void *v4; // rbx

  KeySecurityDescriptor = (void *)BiCreateKeySecurityDescriptor(393241);
  v4 = KeySecurityDescriptor;
  if ( KeySecurityDescriptor )
  {
    BiZwSetSecurityObject(Handle, v3, KeySecurityDescriptor);
    ExFreePoolWithTag(v4, 0);
  }
  return BiZwClose(Handle);
}
