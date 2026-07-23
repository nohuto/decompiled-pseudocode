/*
 * XREFs of ?WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14023C778
 * Callers:
 *     PcWritePartitionTable @ 0x14023B700 (PcWritePartitionTable.c)
 *     ?CreatePartitionTable@PC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x14023BE94 (-CreatePartitionTable@PC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?ReadPartitionTable@PC_GPT@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14023C1A4 (-ReadPartitionTable@PC_GPT@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?SetPartition@PC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x14023C410 (-SetPartition@PC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140110510 (RtlComputeCrc32.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ?ReadHeader@PC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x14023C0EC (-ReadHeader@PC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?WriteSectors@PC_DISK@@QEAAJK_KPEAX@Z @ 0x14023CBA0 (-WriteSectors@PC_DISK@@QEAAJK_KPEAX@Z.c)
 *     PspQueueApcSpecialApc @ 0x1403E6870 (PspQueueApcSpecialApc.c)
 *     ?AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z @ 0x140575378 (-AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z.c)
 *     ?CreateGuid@PC_ENVIRONMENT@@SAJPEAU_GUID@@@Z @ 0x14061FF44 (-CreateGuid@PC_ENVIRONMENT@@SAJPEAU_GUID@@@Z.c)
 */

__int64 __fastcall PC_GPT::WritePartitionTable(PC_DISK **this, struct _DRIVE_LAYOUT_INFORMATION_EX *a2)
{
  int v4; // esi
  __int64 v5; // rbp
  int Header; // edi
  DWORD MaxPartitionCount; // edx
  DWORD v8; // edx
  int v9; // ecx
  unsigned int v10; // esi
  unsigned int v11; // edi
  char *Pool; // rax
  char *v13; // r15
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  char *v17; // rbp
  UCHAR *v18; // r12
  unsigned __int64 v19; // r13
  __int64 v20; // rcx
  UCHAR *v21; // rsi
  __int64 v22; // rdi
  UUID *v23; // r12
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r9
  __int128 v26; // xmm0
  __int64 v27; // rax
  __int64 v28; // rcx
  ULONG v29; // r8d
  UCHAR *v31; // [rsp+20h] [rbp-48h]
  int v32; // [rsp+78h] [rbp+10h]
  unsigned int v33; // [rsp+80h] [rbp+18h]
  unsigned __int64 v34; // [rsp+88h] [rbp+20h]

  if ( !a2->Gpt.MaxPartitionCount )
  {
    v4 = 0;
    v5 = *((_QWORD *)*this + 6);
    while ( 1 )
    {
      Header = PC_GPT::ReadHeader(this, v4, (struct GPT_HEADER *)v5);
      if ( Header >= 0 )
        break;
      if ( (unsigned int)++v4 >= 2 )
        return (unsigned int)Header;
    }
    a2->Gpt.MaxPartitionCount = *(_DWORD *)(v5 + 80);
  }
  MaxPartitionCount = a2->Gpt.MaxPartitionCount;
  if ( a2->PartitionCount > MaxPartitionCount || MaxPartitionCount > 0x400 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v8 = MaxPartitionCount << 7;
    v9 = *((_DWORD *)*this + 10);
    v10 = (~(*((_DWORD *)*this + 7) - 1) & (*((_DWORD *)*this + 7) + v8 - 1)) >> v9;
    v11 = (2 << v9) + (~(*((_DWORD *)*this + 7) - 1) & (*((_DWORD *)*this + 7) + v8 - 1));
    v33 = v10;
    Pool = (char *)PC_ENVIRONMENT::AllocatePool(v11, v8, 0x54506350u);
    v13 = Pool;
    if ( Pool )
    {
      memset(Pool, 0, v11);
      v14 = 0LL;
      v32 = 0;
      v15 = *(_QWORD *)NullGuid.Data4;
      v16 = 1 << *((_DWORD *)*this + 10);
      v34 = v10 + 2;
      v17 = &v13[v11 - v16];
      v18 = (UCHAR *)&v13[v16];
      v19 = *((_QWORD *)*this + 4) - v10 - 2LL;
      v20 = *(_QWORD *)&NullGuid.Data1;
      v31 = v18;
      if ( a2->PartitionCount )
      {
        v21 = v18 + 48;
        while ( 1 )
        {
          v22 = v14;
          if ( *(_QWORD *)&a2->PartitionEntry[v14].Mbr.PartitionType != v20
            || *(_QWORD *)a2->PartitionEntry[v14].Gpt.PartitionType.Data4 != v15 )
          {
            v23 = (UUID *)((char *)a2 + 144 * v14);
            if ( *(_QWORD *)&v23[6].Data1 == v20 && *(_QWORD *)v23[6].Data4 == v15 )
            {
              PC_ENVIRONMENT::CreateGuid(v23 + 6);
              LODWORD(v14) = v32;
            }
            *((_OWORD *)v21 - 3) = *(_OWORD *)&a2->PartitionEntry[v22].Mbr.PartitionType;
            *((UUID *)v21 - 2) = v23[6];
            v24 = a2->PartitionEntry[v22].StartingOffset.QuadPart >> *((_DWORD *)*this + 10);
            *((_QWORD *)v21 - 2) = v24;
            v25 = (a2->PartitionEntry[v22].PartitionLength.QuadPart + a2->PartitionEntry[v22].StartingOffset.QuadPart
                                                                    - 1) >> *((_DWORD *)*this + 10);
            *((_QWORD *)v21 - 1) = v25;
            *(_QWORD *)v21 = a2->PartitionEntry[v22].Gpt.Attributes;
            *(_OWORD *)(v21 + 8) = *(_OWORD *)a2->PartitionEntry[v22].Gpt.Name;
            *(_OWORD *)(v21 + 24) = *(_OWORD *)&a2->PartitionEntry[v22].Gpt.Name[8];
            *(_OWORD *)(v21 + 40) = *(_OWORD *)&a2->PartitionEntry[v22].Gpt.Name[16];
            *(_OWORD *)(v21 + 56) = *(_OWORD *)&a2->PartitionEntry[v22].Gpt.Name[24];
            *((_QWORD *)v21 + 9) = *(_QWORD *)&a2->PartitionEntry[v22].Gpt.Name[32];
            if ( v24 < v34 || v25 > v19 )
            {
              Header = -1073741811;
              goto LABEL_29;
            }
            v15 = *(_QWORD *)NullGuid.Data4;
            v21 += 128;
            v20 = *(_QWORD *)&NullGuid.Data1;
          }
          v14 = (unsigned int)(v14 + 1);
          v32 = v14;
          if ( (unsigned int)v14 >= a2->PartitionCount )
          {
            v10 = v33;
            v18 = v31;
            break;
          }
        }
      }
      if ( *(_QWORD *)&a2->Mbr == v20 && *(_QWORD *)a2->Gpt.DiskId.Data4 == v15 )
        PC_ENVIRONMENT::CreateGuid(&a2->Gpt.DiskId);
      *((_DWORD *)v13 + 2) = 0x10000;
      *(_QWORD *)v13 = 0x5452415020494645LL;
      *((_DWORD *)v13 + 3) = 92;
      *((_QWORD *)v13 + 3) = 1LL;
      *((_QWORD *)v13 + 4) = *((_QWORD *)*this + 4) - 1LL;
      *((_QWORD *)v13 + 5) = v34;
      *((_QWORD *)v13 + 6) = v19;
      v26 = *(_OWORD *)&a2->Mbr.Signature;
      *((_QWORD *)v13 + 9) = 2LL;
      *(_OWORD *)(v13 + 56) = v26;
      *((_DWORD *)v13 + 20) = a2->Gpt.MaxPartitionCount;
      *((_DWORD *)v13 + 21) = 128;
      *((_DWORD *)v13 + 22) = RtlComputeCrc32(0, v18, v10 << *((_DWORD *)*this + 10));
      *((_DWORD *)v13 + 4) = RtlComputeCrc32(0, (PUCHAR)v13, 0x5Cu);
      *(_OWORD *)v17 = *(_OWORD *)v13;
      *((_OWORD *)v17 + 1) = *((_OWORD *)v13 + 1);
      *((_OWORD *)v17 + 2) = *((_OWORD *)v13 + 2);
      *((_OWORD *)v17 + 3) = *((_OWORD *)v13 + 3);
      *((_OWORD *)v17 + 4) = *((_OWORD *)v13 + 4);
      *((_QWORD *)v17 + 10) = *((_QWORD *)v13 + 10);
      *((_DWORD *)v17 + 22) = *((_DWORD *)v13 + 22);
      v27 = *((_QWORD *)v17 + 3);
      v28 = *((_QWORD *)v17 + 4);
      v29 = *((_DWORD *)v17 + 3);
      *((_DWORD *)v17 + 4) = 0;
      *((_QWORD *)v17 + 3) = v28;
      *((_QWORD *)v17 + 4) = v27;
      *((_QWORD *)v17 + 9) = v28 - v10;
      *((_DWORD *)v17 + 4) = RtlComputeCrc32(0, (PUCHAR)v17, v29);
      Header = PC_DISK::WriteSectors(*this, v10 + 1, *((_QWORD *)v13 + 3), v13);
      if ( Header >= 0 )
        Header = PC_DISK::WriteSectors(*this, v10 + 1, *((_QWORD *)v17 + 9), v18);
LABEL_29:
      PspQueueApcSpecialApc(v13);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)Header;
}
