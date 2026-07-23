/*
 * XREFs of ?Reset@PC_DISK@@QEAAJXZ @ 0x140147BE0
 * Callers:
 *     PcReadPartitionTable @ 0x140147A5C (PcReadPartitionTable.c)
 *     ?Initialize@PC_DISK@@QEAAJPEAX@Z @ 0x140147B2C (-Initialize@PC_DISK@@QEAAJPEAX@Z.c)
 *     PcWritePartitionTable @ 0x14023B700 (PcWritePartitionTable.c)
 *     ?SetPartition@PC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x14023BB7C (-SetPartition@PC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     ?ReadSectors@PC_DISK@@QEAAJK_KPEAX@Z @ 0x140147AEC (-ReadSectors@PC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?IsVbr@PC_DISK@@QEAAEXZ @ 0x14023CB00 (-IsVbr@PC_DISK@@QEAAEXZ.c)
 */

__int64 __fastcall PC_DISK::Reset(PC_DISK *this)
{
  int Sectors; // edi
  __int64 v3; // rdx

  Sectors = PC_DISK::ReadSectors(this, 1, 0LL, 0LL);
  if ( Sectors >= 0 )
  {
    v3 = *((_QWORD *)this + 6);
    if ( *(_WORD *)(v3 + 510) == 0xAA55 )
    {
      if ( *(_BYTE *)(v3 + 450) != 0xEE || *(_BYTE *)(v3 + 466) || *(_BYTE *)(v3 + 482) || *(_BYTE *)(v3 + 498) )
        *((_DWORD *)this + 11) = PC_DISK::IsVbr(this) != 0 ? 2 : 0;
      else
        *((_DWORD *)this + 11) = 1;
    }
    else
    {
      *((_DWORD *)this + 11) = 2;
    }
  }
  return (unsigned int)Sectors;
}
