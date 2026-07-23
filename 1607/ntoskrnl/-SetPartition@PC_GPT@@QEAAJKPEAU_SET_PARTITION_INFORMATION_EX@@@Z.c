/*
 * XREFs of ?SetPartition@PC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x14023C410
 * Callers:
 *     PcSetPartition @ 0x14023B5B0 (PcSetPartition.c)
 * Callees:
 *     ?ReadPartitionTable@PC_GPT@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14023C1A4 (-ReadPartitionTable@PC_GPT@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14023C778 (-WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     PspQueueApcSpecialApc @ 0x1403E6870 (PspQueueApcSpecialApc.c)
 */

__int64 __fastcall PC_GPT::SetPartition(PC_DISK **this, int a2, struct _SET_PARTITION_INFORMATION_EX *a3)
{
  unsigned int v6; // ebx
  int PartitionTable; // eax
  struct _DRIVE_LAYOUT_INFORMATION_EX *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdx
  PVOID Buffer; // [rsp+58h] [rbp+20h] BYREF

  Buffer = 0LL;
  if ( a2 )
  {
    PartitionTable = PC_GPT::ReadPartitionTable(this, (struct _DRIVE_LAYOUT_INFORMATION_EX **)&Buffer);
    v8 = (struct _DRIVE_LAYOUT_INFORMATION_EX *)Buffer;
    v6 = PartitionTable;
    if ( PartitionTable >= 0 )
    {
      v9 = (unsigned int)(a2 - 1);
      if ( (unsigned int)v9 < *((_DWORD *)Buffer + 1) )
      {
        v10 = 18 * v9;
        *(_OWORD *)((char *)Buffer + 8 * v10 + 80) = *(_OWORD *)&a3->Mbr.PartitionType;
        v8->PartitionEntry[(unsigned __int64)v10 / 0x12].Gpt.PartitionId = a3->Gpt.PartitionId;
        v8->PartitionEntry[(unsigned __int64)v10 / 0x12].Gpt.Attributes = a3->Gpt.Attributes;
        *(_OWORD *)v8->PartitionEntry[(unsigned __int64)v10 / 0x12].Gpt.Name = *(_OWORD *)a3->Gpt.Name;
        *(_OWORD *)&v8->PartitionEntry[(unsigned __int64)v10 / 0x12].Gpt.Name[8] = *(_OWORD *)&a3->Gpt.Name[8];
        *(_OWORD *)&v8->PartitionEntry[(unsigned __int64)v10 / 0x12].Gpt.Name[16] = *(_OWORD *)&a3->Gpt.Name[16];
        *(_OWORD *)&v8->PartitionEntry[(unsigned __int64)v10 / 0x12].Gpt.Name[24] = *(_OWORD *)&a3->Gpt.Name[24];
        *(_QWORD *)&v8->PartitionEntry[(unsigned __int64)v10 / 0x12].Gpt.Name[32] = *(_QWORD *)&a3->Gpt.Name[32];
        v6 = PC_GPT::WritePartitionTable((PC_GPT *)this, v8);
      }
      else
      {
        v6 = -1073741811;
      }
    }
    if ( v8 )
      PspQueueApcSpecialApc(v8);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
