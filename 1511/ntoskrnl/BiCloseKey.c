/*
 * XREFs of BiCloseKey @ 0x1404FD274
 * Callers:
 *     BiUnloadHiveByHandle @ 0x1404F4CB0 (BiUnloadHiveByHandle.c)
 *     BiDeleteKey @ 0x1404F5314 (BiDeleteKey.c)
 *     BiCloseStore @ 0x1404FADEC (BiCloseStore.c)
 *     BiAddStoreFromFile @ 0x1404FB0A0 (BiAddStoreFromFile.c)
 *     BiGetObjectDescription @ 0x1404FB254 (BiGetObjectDescription.c)
 *     BiOpenSystemStore @ 0x1404FB6E8 (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x1404FB8E4 (BiCleanupLoadedStores.c)
 *     BcdDeleteElement @ 0x1404FC728 (BcdDeleteElement.c)
 *     BcdOpenObject @ 0x1404FCC2C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1404FCD44 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x1404FD0D8 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1404FD444 (BcdGetElementDataWithFlags.c)
 *     BiSetRegistryValue @ 0x1404FD7D8 (BiSetRegistryValue.c)
 *     BcdEnumerateObjects @ 0x14068D82C (BcdEnumerateObjects.c)
 *     BiCreateObject @ 0x14068DAD4 (BiCreateObject.c)
 *     BiSetObjectDescription @ 0x14068DE24 (BiSetObjectDescription.c)
 *     BiIsPortableWorkspaceBoot @ 0x14068E354 (BiIsPortableWorkspaceBoot.c)
 *     BiBuildIdentifierList @ 0x14068F2A4 (BiBuildIdentifierList.c)
 * Callees:
 *     BiZwSetSecurityObject @ 0x14011BBC0 (BiZwSetSecurityObject.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     BiCreateKeySecurityDescriptor @ 0x1404FD2BC (BiCreateKeySecurityDescriptor.c)
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
