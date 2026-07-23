/*
 * XREFs of ?WriteSectors@PC_DISK@@QEAAJK_KPEAX@Z @ 0x14023CBA0
 * Callers:
 *     ?CreatePartitionTable@PC_RAW@@QEAAJXZ @ 0x14023B850 (-CreatePartitionTable@PC_RAW@@QEAAJXZ.c)
 *     ?WritePartitionTable@PC_MBR@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14023BC60 (-WritePartitionTable@PC_MBR@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?CreatePartitionTable@PC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x14023BE94 (-CreatePartitionTable@PC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?VerifyPartitionTable@PC_GPT@@QEAAJE@Z @ 0x14023C4F0 (-VerifyPartitionTable@PC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14023C778 (-WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PC_DISK::WriteSectors(PC_DISK *this, int a2, __int64 a3, void *a4)
{
  void *v4; // rax

  v4 = a4;
  if ( !a4 )
    v4 = (void *)*((_QWORD *)this + 6);
  return PC_ENVIRONMENT::Write(*(PDEVICE_OBJECT *)this, v4, a2 << *((_DWORD *)this + 10), a3 << *((_DWORD *)this + 10));
}
