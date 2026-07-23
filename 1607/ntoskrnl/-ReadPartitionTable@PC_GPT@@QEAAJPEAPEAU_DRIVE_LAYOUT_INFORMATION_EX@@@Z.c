/*
 * XREFs of ?ReadPartitionTable@PC_GPT@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14023C1A4
 * Callers:
 *     PcReadPartitionTable @ 0x140147A5C (PcReadPartitionTable.c)
 *     ?SetPartition@PC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x14023C410 (-SetPartition@PC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ?ReadEntries@PC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z @ 0x14023BFD4 (-ReadEntries@PC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z.c)
 *     ?ReadHeader@PC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x14023C0EC (-ReadHeader@PC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14023C778 (-WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     PspQueueApcSpecialApc @ 0x1403E6870 (PspQueueApcSpecialApc.c)
 *     ?AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z @ 0x140575378 (-AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z.c)
 */

__int64 __fastcall PC_GPT::ReadPartitionTable(PC_DISK **this, struct _DRIVE_LAYOUT_INFORMATION_EX **a2)
{
  PC_DISK *v2; // rax
  char v3; // r12
  __int64 v6; // rbx
  unsigned int i; // edi
  __int64 v8; // rdx
  int Header; // ebp
  unsigned int v10; // r8d
  unsigned int v11; // r14d
  char *Pool; // rax
  char *v13; // rdi
  char *v14; // r14
  __int64 v16; // r11
  unsigned int v17; // r10d
  char *v18; // r9
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  int v22; // ecx
  PVOID Buffer; // [rsp+50h] [rbp+8h] BYREF

  v2 = *this;
  v3 = 0;
  Buffer = 0LL;
  v6 = *((_QWORD *)v2 + 6);
  *a2 = 0LL;
  for ( i = 0; i < 2; ++i )
  {
    Header = PC_GPT::ReadHeader(this, i, (struct GPT_HEADER *)v6);
    if ( Header >= 0 )
    {
      Header = PC_GPT::ReadEntries((PC_GPT *)this, (struct GPT_HEADER *)v6, (struct _GPT_ENTRY **)&Buffer);
      if ( Header >= 0 )
        goto LABEL_6;
    }
  }
  if ( Header < 0 )
  {
LABEL_11:
    v14 = (char *)Buffer;
    goto LABEL_12;
  }
LABEL_6:
  if ( !i && *(_QWORD *)(v6 + 32) != *((_QWORD *)*this + 4) - 1LL )
  {
    v3 = 1;
    v10 = (~(*((_DWORD *)*this + 7) - 1) & (unsigned int)(*(_DWORD *)(v6 + 80) * *(_DWORD *)(v6 + 84)
                                                        + *((_DWORD *)*this + 7)
                                                        - 1)) >> *((_DWORD *)*this + 10);
    *(_QWORD *)(v6 + 40) = v10 + 2;
    v8 = *((_QWORD *)*this + 4) - v10 - 2LL;
    *(_QWORD *)(v6 + 48) = v8;
  }
  v11 = 144 * *(_DWORD *)(v6 + 80) + 48;
  Pool = (char *)PC_ENVIRONMENT::AllocatePool(v11, v8, 0x54506350u);
  v13 = Pool;
  if ( !Pool )
  {
    Header = -1073741670;
    goto LABEL_11;
  }
  memset(Pool, 0, v11);
  v14 = (char *)Buffer;
  v16 = 0LL;
  *(_DWORD *)v13 = 1;
  v17 = 0;
  *(_OWORD *)(v13 + 8) = *(_OWORD *)(v6 + 56);
  *((_QWORD *)v13 + 3) = *(_QWORD *)(v6 + 40) << *((_DWORD *)*this + 10);
  *((_QWORD *)v13 + 4) = (*(_QWORD *)(v6 + 48) - *(_QWORD *)(v6 + 40) + 1LL) << *((_DWORD *)*this + 10);
  for ( *((_DWORD *)v13 + 10) = *(_DWORD *)(v6 + 80); v17 < *(_DWORD *)(v6 + 80); ++v17 )
  {
    v18 = &v14[128 * (unsigned __int64)v17];
    v19 = *(_QWORD *)v18 - *(_QWORD *)&NullGuid.Data1;
    if ( *(_QWORD *)v18 == *(_QWORD *)&NullGuid.Data1 )
      v19 = *((_QWORD *)v18 + 1) - *(_QWORD *)NullGuid.Data4;
    if ( v19 )
    {
      v20 = 18 * v16;
      *(_DWORD *)&v13[8 * v20 + 48] = 1;
      *(_QWORD *)&v13[8 * v20 + 56] = *((_QWORD *)v18 + 4) << *((_DWORD *)*this + 10);
      v21 = *((_QWORD *)v18 + 5) - *((_QWORD *)v18 + 4) + 1LL;
      v22 = *((_DWORD *)*this + 10);
      *(_DWORD *)&v13[8 * v20 + 72] = -1;
      *(_QWORD *)&v13[8 * v20 + 64] = v21 << v22;
      v16 = (unsigned int)(v16 + 1);
      *(_OWORD *)&v13[8 * v20 + 80] = *(_OWORD *)v18;
      *(_OWORD *)&v13[8 * v20 + 96] = *((_OWORD *)v18 + 1);
      *(_QWORD *)&v13[8 * v20 + 112] = *((_QWORD *)v18 + 6);
      *(_OWORD *)&v13[8 * v20 + 120] = *(_OWORD *)(v18 + 56);
      *(_OWORD *)&v13[8 * v20 + 136] = *(_OWORD *)(v18 + 72);
      *(_OWORD *)&v13[8 * v20 + 152] = *(_OWORD *)(v18 + 88);
      *(_OWORD *)&v13[8 * v20 + 168] = *(_OWORD *)(v18 + 104);
      *(_QWORD *)&v13[8 * v20 + 184] = *((_QWORD *)v18 + 15);
    }
  }
  *((_DWORD *)v13 + 1) = v16;
  if ( v3 )
    PC_GPT::WritePartitionTable((PC_GPT *)this, (struct _DRIVE_LAYOUT_INFORMATION_EX *)v13);
  *a2 = (struct _DRIVE_LAYOUT_INFORMATION_EX *)v13;
LABEL_12:
  if ( v14 )
    PspQueueApcSpecialApc(v14);
  return (unsigned int)Header;
}
