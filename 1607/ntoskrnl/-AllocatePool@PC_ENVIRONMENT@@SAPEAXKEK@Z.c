/*
 * XREFs of ?AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z @ 0x140575378
 * Callers:
 *     ?Initialize@PC_DISK@@QEAAJPEAX@Z @ 0x140147B2C (-Initialize@PC_DISK@@QEAAJPEAX@Z.c)
 *     ?ReadPartitionTable@PC_MBR@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x140147C68 (-ReadPartitionTable@PC_MBR@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?ReadPartitionTable@PC_RAW@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14023B8F8 (-ReadPartitionTable@PC_RAW@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?ReadEntries@PC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z @ 0x14023BFD4 (-ReadEntries@PC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z.c)
 *     ?ReadPartitionTable@PC_GPT@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14023C1A4 (-ReadPartitionTable@PC_GPT@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?VerifyPartitionTable@PC_GPT@@QEAAJE@Z @ 0x14023C4F0 (-VerifyPartitionTable@PC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14023C778 (-WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     IoReadPartitionTable @ 0x14061FFD8 (IoReadPartitionTable.c)
 *     IoWritePartitionTable @ 0x140620188 (IoWritePartitionTable.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall PC_ENVIRONMENT::AllocatePool(unsigned int a1, __int64 a2, ULONG a3)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, a1, a3);
}
