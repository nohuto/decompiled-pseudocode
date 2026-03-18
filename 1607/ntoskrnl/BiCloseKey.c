/*
 * XREFs of BiCloseKey @ 0x14053DFCC
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x140125E3C (BiSetFirmwareModifiedFromObject.c)
 *     BiOpenStoreKeyFromObject @ 0x140125E80 (BiOpenStoreKeyFromObject.c)
 *     BiDeleteKey @ 0x140532A4C (BiDeleteKey.c)
 *     BiUnloadHiveByHandle @ 0x140533C28 (BiUnloadHiveByHandle.c)
 *     BiCloseStore @ 0x14053B6F4 (BiCloseStore.c)
 *     BiAddStoreFromFile @ 0x14053B9D0 (BiAddStoreFromFile.c)
 *     BiOpenSystemStore @ 0x14053BF5C (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x14053C160 (BiCleanupLoadedStores.c)
 *     BcdDeleteElement @ 0x14053D21C (BcdDeleteElement.c)
 *     BcdOpenObject @ 0x14053D54C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14053D664 (BcdCloseObject.c)
 *     BiGetObjectDescription @ 0x14053D854 (BiGetObjectDescription.c)
 *     BcdSetElementDataWithFlags @ 0x14053DADC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14053DC9C (BcdGetElementDataWithFlags.c)
 *     BiSetRegistryValue @ 0x14053E21C (BiSetRegistryValue.c)
 *     BcdEnumerateObjects @ 0x1406D2088 (BcdEnumerateObjects.c)
 *     BiCreateObject @ 0x1406D2334 (BiCreateObject.c)
 *     BiSetObjectDescription @ 0x1406D2684 (BiSetObjectDescription.c)
 *     BiIsPortableWorkspaceBoot @ 0x1406D2B38 (BiIsPortableWorkspaceBoot.c)
 *     BiBuildIdentifierList @ 0x1406D3A28 (BiBuildIdentifierList.c)
 * Callees:
 *     BiZwSetSecurityObject @ 0x14012E080 (BiZwSetSecurityObject.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     BiCreateKeySecurityDescriptor @ 0x14053E018 (BiCreateKeySecurityDescriptor.c)
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
    ExFreePoolWithTag(v4, 0x4B444342u);
  }
  return BiZwClose(Handle);
}
