/*
 * XREFs of ?CreatePartitionTable@PC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x14023BE94
 * Callers:
 *     ?PcCreatePartitionTable@@YAJPEAVPC_DISK@@PEAU_CREATE_DISK@@@Z @ 0x14023B4D4 (-PcCreatePartitionTable@@YAJPEAVPC_DISK@@PEAU_CREATE_DISK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ?ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z @ 0x14023B9F0 (-ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z.c)
 *     ?WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14023C778 (-WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?WriteSectors@PC_DISK@@QEAAJK_KPEAX@Z @ 0x14023CBA0 (-WriteSectors@PC_DISK@@QEAAJK_KPEAX@Z.c)
 */

int __fastcall PC_GPT::CreatePartitionTable(PC_DISK **this, struct _CREATE_DISK *a2)
{
  int v4; // esi
  __int64 v5; // rbx
  int result; // eax
  DWORD MaxPartitionCount; // ecx
  PC_DISK *v8; // rax
  __int128 v9; // xmm0
  int v10; // edx
  struct _DRIVE_LAYOUT_INFORMATION_EX v11; // [rsp+20h] [rbp-E8h] BYREF

  v4 = 0;
  memset(&v11, 0, sizeof(v11));
  v5 = *((_QWORD *)*this + 6);
  if ( *(_WORD *)(v5 + 510) == 0xAA55 )
    v4 = *(_DWORD *)(v5 + 440);
  memset(*((void **)*this + 6), 0, 0x200uLL);
  *(_DWORD *)(v5 + 440) = v4;
  *(_DWORD *)(v5 + 458) = -1;
  *(_BYTE *)(v5 + 446) = 0;
  *(_DWORD *)(v5 + 454) = 1;
  *(_BYTE *)(v5 + 450) = -18;
  MBR_ENTRY::ComputeChs((MBR_ENTRY *)(v5 + 446), (struct _DISK_GEOMETRY *)((char *)*this + 8));
  *(_WORD *)(v5 + 510) = -21931;
  result = PC_DISK::WriteSectors(*this, 1u, 0LL, 0LL);
  if ( result >= 0 )
  {
    MaxPartitionCount = 128;
    if ( a2->Gpt.MaxPartitionCount > 0x80 )
      MaxPartitionCount = a2->Gpt.MaxPartitionCount;
    if ( MaxPartitionCount <= 0x400 )
    {
      v8 = *this;
      v11.PartitionCount = 0;
      v9 = *(_OWORD *)&a2->Mbr.Signature;
      v10 = *((_DWORD *)v8 + 7);
      v11.PartitionStyle = 1;
      *(_OWORD *)&v11.Mbr.Signature = v9;
      v11.Gpt.MaxPartitionCount = ((unsigned int)~(v10 - 1) >> 7) & (((MaxPartitionCount << 7) + v10 - 1) >> 7);
      return PC_GPT::WritePartitionTable((PC_GPT *)this, &v11);
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}
