/*
 * XREFs of ?WritePartitionTable@PC_MBR@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14023BC60
 * Callers:
 *     PcWritePartitionTable @ 0x14023B700 (PcWritePartitionTable.c)
 *     ?CreatePartitionTable@PC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x14023BAB8 (-CreatePartitionTable@PC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?SetPartition@PC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x14023BB7C (-SetPartition@PC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     ?ReadSectors@PC_DISK@@QEAAJK_KPEAX@Z @ 0x140147AEC (-ReadSectors@PC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?CheckSum@MBR@@QEAAKXZ @ 0x140147FA0 (-CheckSum@MBR@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ?ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z @ 0x14023B9F0 (-ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z.c)
 *     ?WriteSectors@PC_DISK@@QEAAJK_KPEAX@Z @ 0x14023CBA0 (-WriteSectors@PC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?CreateGuid@PC_ENVIRONMENT@@SAJPEAU_GUID@@@Z @ 0x14061FF44 (-CreateGuid@PC_ENVIRONMENT@@SAJPEAU_GUID@@@Z.c)
 */

__int64 __fastcall PC_MBR::WritePartitionTable(PC_DISK **this, struct _DRIVE_LAYOUT_INFORMATION_EX *a2)
{
  PC_DISK *v2; // rax
  __int8 *v3; // r11
  DWORD v5; // edx
  PC_DISK **v6; // r9
  const __m128i *v7; // rbp
  unsigned int v8; // r15d
  int v9; // esi
  char v10; // r14
  DWORD Signature; // eax
  __int8 *v12; // r13
  __int8 *v13; // rdi
  unsigned int v14; // r12d
  BYTE PartitionType; // cl
  unsigned int v16; // r10d
  DWORD v17; // eax
  unsigned int v18; // ecx
  int Sectors; // eax
  DWORD v21; // [rsp+20h] [rbp-68h]
  unsigned int v22; // [rsp+24h] [rbp-64h]
  UUID Uuid; // [rsp+30h] [rbp-58h] BYREF

  v2 = *this;
  v3 = 0LL;
  v5 = 0;
  Uuid.Data1 = 0;
  v6 = this;
  v21 = 0;
  v7 = (const __m128i *)*((_QWORD *)v2 + 6);
  v8 = 0;
  v22 = 0;
  v9 = 0;
  *(_QWORD *)&Uuid.Data2 = 0LL;
  v10 = 0;
  *(_DWORD *)&Uuid.Data4[4] = 0;
  if ( !a2->Mbr.Signature )
  {
    PC_ENVIRONMENT::CreateGuid(&Uuid);
    v5 = 0;
    v6 = this;
    v3 = 0LL;
    a2->Mbr.Signature = Uuid.Data1 ^ *(_DWORD *)&Uuid.Data4[4] ^ *(_DWORD *)Uuid.Data4 ^ *(_DWORD *)&Uuid.Data2;
  }
  Signature = a2->Mbr.Signature;
  if ( v7[27].m128i_i32[2] != Signature )
  {
    v7[27].m128i_i32[2] = Signature;
    v10 = 1;
    a2->Mbr.CheckSum = MBR::CheckSum(v7);
  }
  while ( 2 )
  {
    v12 = v3;
    v13 = &v7[27].m128i_i8[14];
    v14 = (unsigned int)v3;
    do
    {
      if ( v5 >= a2->PartitionCount )
        break;
      PartitionType = a2->PartitionEntry[v5].Mbr.PartitionType;
      if ( PartitionType == 5 || PartitionType == 15 )
      {
        if ( v12 )
          return (unsigned int)-1073741823;
        v12 = v13;
        v16 = v8;
      }
      else
      {
        v16 = v22;
      }
      v17 = a2->Mbr.Signature;
      *(_DWORD *)&a2->PartitionEntry[v5].Gpt.PartitionType.Data4[4] = 0;
      a2->PartitionEntry[v5].Mbr.PartitionId.Data1 = v17;
      *(_QWORD *)&a2->PartitionEntry[v5].Gpt.PartitionId.Data1 = a2->PartitionEntry[v5].StartingOffset.QuadPart;
      if ( a2->PartitionEntry[v5].RewritePartition != (_BYTE)v3 )
      {
        if ( PartitionType )
        {
          *v13 = a2->PartitionEntry[v5].Mbr.BootIndicator != 0 ? 0x80 : 0;
          v13[4] = a2->PartitionEntry[v5].Mbr.PartitionType;
          *((_DWORD *)v13 + 2) = (a2->PartitionEntry[v5].StartingOffset.QuadPart >> *((_DWORD *)*v6 + 10)) - v16;
          *((_DWORD *)v13 + 3) = a2->PartitionEntry[v5].PartitionLength.QuadPart >> *((_DWORD *)*v6 + 10);
          MBR_ENTRY::ComputeChs((MBR_ENTRY *)v13, (struct _DISK_GEOMETRY *)((char *)*v6 + 8));
          v5 = v21;
          LOBYTE(v3) = 0;
        }
        else
        {
          *(_QWORD *)v13 = 0LL;
          *((_QWORD *)v13 + 1) = 0LL;
        }
        v10 = 1;
      }
      v6 = this;
      ++v5;
      ++v14;
      v21 = v5;
      v13 += 16;
    }
    while ( v14 < 4 );
    if ( v10 )
    {
      v9 = PC_DISK::WriteSectors(*this, 1u, v22, 0LL);
      if ( v9 < 0 )
        return (unsigned int)v9;
      v10 = 0;
    }
    if ( v12 )
    {
      v18 = *((_DWORD *)v12 + 2) + v8;
      if ( !v8 )
        v8 = *((_DWORD *)v12 + 2);
      v22 = v18;
      Sectors = PC_DISK::ReadSectors(*this, 1, v18, 0LL);
      v3 = 0LL;
      v9 = Sectors;
      if ( Sectors >= 0 )
      {
        v5 = v21;
        v6 = this;
        v7[31].m128i_i16[7] = -21931;
        continue;
      }
    }
    break;
  }
  return (unsigned int)v9;
}
