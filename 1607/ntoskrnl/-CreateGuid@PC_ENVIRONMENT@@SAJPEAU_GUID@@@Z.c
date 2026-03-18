/*
 * XREFs of ?CreateGuid@PC_ENVIRONMENT@@SAJPEAU_GUID@@@Z @ 0x14061FE90
 * Callers:
 *     ?WritePartitionTable@PC_MBR@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14023BD7C (-WritePartitionTable@PC_MBR@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14023C894 (-WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall PC_ENVIRONMENT::CreateGuid(UUID *Uuid)
{
  return ExUuidCreate(Uuid);
}
