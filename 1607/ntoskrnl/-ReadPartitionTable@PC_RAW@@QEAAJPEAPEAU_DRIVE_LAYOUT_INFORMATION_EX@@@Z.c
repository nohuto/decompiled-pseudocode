/*
 * XREFs of ?ReadPartitionTable@PC_RAW@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14023B8F8
 * Callers:
 *     PcReadPartitionTable @ 0x140147A5C (PcReadPartitionTable.c)
 * Callees:
 *     ?CheckSum@MBR@@QEAAKXZ @ 0x140147FA0 (-CheckSum@MBR@@QEAAKXZ.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ?AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z @ 0x140575378 (-AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z.c)
 */

__int64 __fastcall PC_RAW::ReadPartitionTable(PC_RAW *this, struct _DRIVE_LAYOUT_INFORMATION_EX **a2)
{
  unsigned int v3; // edi
  const __m128i *v5; // rsi
  struct _DRIVE_LAYOUT_INFORMATION_EX *Pool; // rax
  struct _DRIVE_LAYOUT_INFORMATION_EX *v7; // rbx
  LARGE_INTEGER v8; // rdx
  BOOLEAN v9; // r8

  v3 = 0;
  v5 = *(const __m128i **)(*(_QWORD *)this + 48LL);
  *a2 = 0LL;
  Pool = (struct _DRIVE_LAYOUT_INFORMATION_EX *)PC_ENVIRONMENT::AllocatePool(0xC0u, (unsigned __int8)a2, 0x54506350u);
  v7 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, sizeof(struct _DRIVE_LAYOUT_INFORMATION_EX));
    if ( *(_DWORD *)(*(_QWORD *)this + 16LL) == 11 || v5[31].m128i_i16[7] == -21931 )
    {
      v7->PartitionStyle = 0;
      v7->PartitionCount = 1;
      v7->Mbr.Signature = 1;
      v7->Mbr.CheckSum = MBR::CheckSum(v5);
      v7->PartitionEntry[0].PartitionStyle = PARTITION_STYLE_MBR;
      v7->PartitionEntry[0].StartingOffset.QuadPart = 0LL;
      v8.QuadPart = *(_QWORD *)(*(_QWORD *)this + 32LL) << *(_DWORD *)(*(_QWORD *)this + 40LL);
      v7->PartitionEntry[0].PartitionNumber = -1;
      v7->PartitionEntry[0].PartitionLength = v8;
      *(_WORD *)&v7->PartitionEntry[0].Mbr.PartitionType = 4;
      v7->PartitionEntry[0].Mbr.RecognizedPartition = v9;
      v7->PartitionEntry[0].Mbr.HiddenSectors = 0;
      *(_QWORD *)v7->PartitionEntry[0].Gpt.PartitionType.Data4 = v7->Mbr.Signature;
      *(_QWORD *)&v7->PartitionEntry[0].Gpt.PartitionId.Data1 = 0LL;
    }
    else
    {
      *(_QWORD *)&v7->PartitionStyle = 0LL;
      v7->Mbr.Signature = 0;
      v7->Mbr.CheckSum = MBR::CheckSum(v5);
    }
    *a2 = v7;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
