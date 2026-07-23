/*
 * XREFs of BiCloseKey @ 0x14053E50C
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x1401263AC (BiSetFirmwareModifiedFromObject.c)
 *     BiOpenStoreKeyFromObject @ 0x1401263F0 (BiOpenStoreKeyFromObject.c)
 *     BiDeleteKey @ 0x140532F8C (BiDeleteKey.c)
 *     BiUnloadHiveByHandle @ 0x140534168 (BiUnloadHiveByHandle.c)
 *     BiCloseStore @ 0x14053BC34 (BiCloseStore.c)
 *     BiAddStoreFromFile @ 0x14053BF10 (BiAddStoreFromFile.c)
 *     BiOpenSystemStore @ 0x14053C49C (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x14053C6A0 (BiCleanupLoadedStores.c)
 *     BcdDeleteElement @ 0x14053D75C (BcdDeleteElement.c)
 *     BcdOpenObject @ 0x14053DA8C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14053DBA4 (BcdCloseObject.c)
 *     BiGetObjectDescription @ 0x14053DD94 (BiGetObjectDescription.c)
 *     BcdSetElementDataWithFlags @ 0x14053E01C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14053E1DC (BcdGetElementDataWithFlags.c)
 *     BiSetRegistryValue @ 0x14053E75C (BiSetRegistryValue.c)
 *     BcdEnumerateObjects @ 0x1406D21C0 (BcdEnumerateObjects.c)
 *     BiCreateObject @ 0x1406D246C (BiCreateObject.c)
 *     BiSetObjectDescription @ 0x1406D27BC (BiSetObjectDescription.c)
 *     BiIsPortableWorkspaceBoot @ 0x1406D2C70 (BiIsPortableWorkspaceBoot.c)
 *     BiBuildIdentifierList @ 0x1406D3B60 (BiBuildIdentifierList.c)
 * Callees:
 *     BiZwSetSecurityObject @ 0x14012E5F0 (BiZwSetSecurityObject.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     BiCreateKeySecurityDescriptor @ 0x14053E558 (BiCreateKeySecurityDescriptor.c)
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
