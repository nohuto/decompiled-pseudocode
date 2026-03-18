/*
 * XREFs of PspQueueApcSpecialApc @ 0x1403E5244
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400039C4 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ??1PC_DISK@@QEAA@XZ @ 0x1401475A4 (--1PC_DISK@@QEAA@XZ.c)
 *     ?ReadPartitionTable@PC_MBR@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x1401476F8 (-ReadPartitionTable@PC_MBR@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     IoRegisterPriorityCallback @ 0x14014C010 (IoRegisterPriorityCallback.c)
 *     IoUnregisterPriorityCallback @ 0x1401C9328 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1401D2770 (KeDeregisterBoundCallback.c)
 *     KeRegisterBoundCallback @ 0x1401D2A80 (KeRegisterBoundCallback.c)
 *     SmPerformStoreSwapOperation @ 0x14022211C (SmPerformStoreSwapOperation.c)
 *     ?SetPartition@PC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x14023BC98 (-SetPartition@PC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     ?ReadEntries@PC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z @ 0x14023C0F0 (-ReadEntries@PC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z.c)
 *     ?ReadPartitionTable@PC_GPT@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14023C2C0 (-ReadPartitionTable@PC_GPT@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?SetPartition@PC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x14023C52C (-SetPartition@PC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     ?VerifyPartitionTable@PC_GPT@@QEAAJE@Z @ 0x14023C60C (-VerifyPartitionTable@PC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14023C894 (-WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PspQueueApcSpecialApc(PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0);
}
