/*
 * XREFs of ?SetPartition@PC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x14023BB7C
 * Callers:
 *     PcSetPartition @ 0x14023B5B0 (PcSetPartition.c)
 * Callees:
 *     ?Reset@PC_DISK@@QEAAJXZ @ 0x140147BE0 (-Reset@PC_DISK@@QEAAJXZ.c)
 *     ?ReadPartitionTable@PC_MBR@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x140147C68 (-ReadPartitionTable@PC_MBR@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?WritePartitionTable@PC_MBR@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14023BC60 (-WritePartitionTable@PC_MBR@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     PspQueueApcSpecialApc @ 0x1403E6870 (PspQueueApcSpecialApc.c)
 */

__int64 __fastcall PC_MBR::SetPartition(PC_DISK **this, int a2, struct _SET_PARTITION_INFORMATION_EX *a3)
{
  int v3; // r14d
  _BYTE *v4; // rbp
  int v8; // ebx
  int PartitionTable; // eax
  struct _DRIVE_LAYOUT_INFORMATION_EX *v10; // rdi
  unsigned int v11; // r8d
  unsigned int v12; // ecx
  _BYTE *v13; // rdx
  int v14; // r9d
  PVOID Buffer; // [rsp+68h] [rbp+20h] BYREF

  Buffer = 0LL;
  v3 = 0;
  v4 = 0LL;
  if ( a2 )
  {
    PartitionTable = PC_MBR::ReadPartitionTable(this, (struct _DRIVE_LAYOUT_INFORMATION_EX **)&Buffer);
    v10 = (struct _DRIVE_LAYOUT_INFORMATION_EX *)Buffer;
    v8 = PartitionTable;
    if ( PartitionTable >= 0 )
    {
      v11 = *((_DWORD *)Buffer + 1);
      v12 = 0;
      if ( v11 )
      {
        v13 = (char *)Buffer + 80;
        do
        {
          v4 = v13 - 32;
          if ( *v13 > 0xFu || (v14 = 32801, !_bittest(&v14, (unsigned __int8)*v13)) )
          {
            if ( ++v3 == a2 )
              break;
          }
          ++v12;
          v13 += 144;
        }
        while ( v12 < v11 );
      }
      if ( v12 < v11 )
      {
        v4[32] = a3->Mbr.PartitionType;
        v4[28] = 1;
        v8 = PC_DISK::Reset(*this);
        if ( v8 >= 0 )
          v8 = PC_MBR::WritePartitionTable((PC_MBR *)this, v10);
      }
      else
      {
        v8 = -1073741811;
      }
    }
    if ( v10 )
      PspQueueApcSpecialApc(v10);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v8;
}
