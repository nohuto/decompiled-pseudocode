/*
 * XREFs of ?ReadPartitionTable@PC_MBR@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x140147C68
 * Callers:
 *     PcReadPartitionTable @ 0x140147A5C (PcReadPartitionTable.c)
 *     ?SetPartition@PC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x14023BB7C (-SetPartition@PC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     ?ReadSectors@PC_DISK@@QEAAJK_KPEAX@Z @ 0x140147AEC (-ReadSectors@PC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?Validate@MBR_ENTRY@@QEAAEK_K@Z @ 0x140147F60 (-Validate@MBR_ENTRY@@QEAAEK_K@Z.c)
 *     ?CheckSum@MBR@@QEAAKXZ @ 0x140147FA0 (-CheckSum@MBR@@QEAAKXZ.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ?IsRecognized@MBR_ENTRY@@QEAAEXZ @ 0x14023BB60 (-IsRecognized@MBR_ENTRY@@QEAAEXZ.c)
 *     PspQueueApcSpecialApc @ 0x1403E6870 (PspQueueApcSpecialApc.c)
 *     ?AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z @ 0x140575378 (-AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z.c)
 */

__int64 __fastcall PC_MBR::ReadPartitionTable(PC_DISK **this, struct _DRIVE_LAYOUT_INFORMATION_EX **a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  unsigned int v4; // ebp
  unsigned int v5; // r14d
  unsigned int v6; // edi
  struct _DRIVE_LAYOUT_INFORMATION_EX *Pool; // rax
  struct _DRIVE_LAYOUT_INFORMATION_EX *v8; // rbx
  unsigned __int8 v9; // dl
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r13
  __int64 v13; // r15
  unsigned int v14; // eax
  char v15; // r15
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // r8d
  unsigned int v19; // eax
  unsigned int v20; // r15d
  struct _DRIVE_LAYOUT_INFORMATION_EX *v21; // rsi
  unsigned int v23; // [rsp+20h] [rbp-58h]
  int Sectors; // [rsp+24h] [rbp-54h]
  __int64 v25; // [rsp+28h] [rbp-50h]
  char v28; // [rsp+90h] [rbp+18h]
  unsigned int v29; // [rsp+98h] [rbp+20h]

  v2 = 0LL;
  v28 = 0;
  Sectors = 0;
  v23 = 0;
  v3 = *((_QWORD *)*this + 6);
  v4 = 0;
  v25 = v3;
  v5 = 0;
  v6 = 0;
  *a2 = 0LL;
  Pool = (struct _DRIVE_LAYOUT_INFORMATION_EX *)PC_ENVIRONMENT::AllocatePool(0x270u, (unsigned __int8)a2, 0x54506350u);
  v8 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  memset(Pool, 0, 0x270uLL);
  v8->PartitionStyle = 0;
  v8->Mbr.Signature = *(_DWORD *)(v3 + 440);
  v8->Mbr.CheckSum = MBR::CheckSum((MBR *)v3);
  if ( *(_WORD *)(v3 + 510) != 0xAA55 )
    goto LABEL_22;
  v10 = v3 + 450;
  while ( 2 )
  {
    v11 = v10;
    v12 = 4LL;
    do
    {
      v13 = v5;
      if ( *(_BYTE *)v11 == 5 || *(_BYTE *)v11 == 15 )
      {
        if ( v2 )
          goto LABEL_10;
        v2 = v11 - 4;
        v14 = v4;
      }
      else
      {
        v14 = v23;
      }
      v29 = v14;
      if ( !MBR_ENTRY::Validate((MBR_ENTRY *)(v11 - 4), v14, *((_QWORD *)*this + 4)) )
      {
LABEL_10:
        v15 = 1;
        v28 = 1;
        goto LABEL_14;
      }
      v8->PartitionEntry[v13].PartitionStyle = PARTITION_STYLE_MBR;
      v8->PartitionEntry[v13].StartingOffset.QuadPart = (v29 + (unsigned __int64)*(unsigned int *)(v11 + 4)) << *((_DWORD *)*this + 10);
      v16 = *(unsigned int *)(v11 + 8);
      v17 = *((_DWORD *)*this + 10);
      v8->PartitionEntry[v13].PartitionNumber = -1;
      v8->PartitionEntry[v13].PartitionLength.QuadPart = v16 << v17;
      v8->PartitionEntry[v13].Mbr.PartitionType = *(_BYTE *)v11;
      v8->PartitionEntry[v13].Mbr.BootIndicator = *(_BYTE *)(v11 - 4) == 0x80;
      v8->PartitionEntry[v13].Mbr.RecognizedPartition = MBR_ENTRY::IsRecognized((MBR_ENTRY *)(v11 - 4));
      ++v5;
      v8->PartitionEntry[v13].Mbr.HiddenSectors = *(_DWORD *)(v11 + 4);
      v8->PartitionEntry[v13].Mbr.PartitionId.Data1 = v8->Mbr.Signature;
      *(_QWORD *)&v8->PartitionEntry[v13].Gpt.PartitionId.Data1 = v8->PartitionEntry[v13].StartingOffset.QuadPart;
      *(_DWORD *)&v8->PartitionEntry[v13].Gpt.PartitionType.Data4[4] = v18;
      v15 = v28;
LABEL_14:
      v11 += 16LL;
      --v12;
    }
    while ( v12 );
    v6 = Sectors;
    if ( v15 || !v2 )
    {
LABEL_22:
      v8->PartitionCount = (v5 + 3) & 0xFFFFFFFC;
      *a2 = v8;
    }
    else
    {
      v19 = *(_DWORD *)(v2 + 8);
      v2 = 0LL;
      v20 = v19 + v4;
      if ( !v4 )
        v4 = v19;
      v23 = v20;
      v21 = (struct _DRIVE_LAYOUT_INFORMATION_EX *)PC_ENVIRONMENT::AllocatePool(144 * v5 + 624, v9, 0x54506350u);
      if ( v21 )
      {
        memmove(v21, v8, (int)(144 * v5 + 48));
        memset(&v21->PartitionEntry[v5], 0, 0x240uLL);
        PspQueueApcSpecialApc(v8);
        v8 = v21;
        Sectors = PC_DISK::ReadSectors(*this, 1, v20, 0LL);
        v6 = Sectors;
        if ( Sectors >= 0 )
        {
          v10 = v25 + 450;
          if ( *(_WORD *)(v25 + 510) != 0xAA55 )
            goto LABEL_22;
          continue;
        }
      }
      else
      {
        v6 = -1073741670;
      }
      if ( v8 )
        PspQueueApcSpecialApc(v8);
    }
    return v6;
  }
}
