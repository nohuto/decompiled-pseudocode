/*
 * XREFs of PcReadPartitionTable @ 0x140147A5C
 * Callers:
 *     IoReadDiskSignature @ 0x1405751DC (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x14061FFD8 (IoReadPartitionTable.c)
 *     IoReadPartitionTableEx @ 0x140620118 (IoReadPartitionTableEx.c)
 * Callees:
 *     ??1PC_DISK@@QEAA@XZ @ 0x140147B14 (--1PC_DISK@@QEAA@XZ.c)
 *     ?Initialize@PC_DISK@@QEAAJPEAX@Z @ 0x140147B2C (-Initialize@PC_DISK@@QEAAJPEAX@Z.c)
 *     ?Reset@PC_DISK@@QEAAJXZ @ 0x140147BE0 (-Reset@PC_DISK@@QEAAJXZ.c)
 *     ?ReadPartitionTable@PC_MBR@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x140147C68 (-ReadPartitionTable@PC_MBR@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?Initialize@PC_MBR@@QEAAXPEAVPC_DISK@@@Z @ 0x140147F14 (-Initialize@PC_MBR@@QEAAXPEAVPC_DISK@@@Z.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ?ReadPartitionTable@PC_RAW@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14023B8F8 (-ReadPartitionTable@PC_RAW@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?ReadPartitionTable@PC_GPT@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14023C1A4 (-ReadPartitionTable@PC_GPT@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 */

__int64 __fastcall PcReadPartitionTable(void *a1, struct _DRIVE_LAYOUT_INFORMATION_EX **a2)
{
  int v3; // ebx
  int PartitionTable; // eax
  _BYTE *v6; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v7[44]; // [rsp+28h] [rbp-48h] BYREF
  int v8; // [rsp+54h] [rbp-1Ch]
  __int64 v9; // [rsp+58h] [rbp-18h]

  *a2 = 0LL;
  v9 = 0LL;
  v3 = PC_DISK::Initialize((PC_DISK *)v7, a1);
  if ( v3 >= 0 )
  {
    if ( !v8 )
      goto LABEL_3;
    if ( v8 != 1 )
    {
      if ( v8 != 2 )
      {
        v3 = -1073741637;
        goto LABEL_5;
      }
      v6 = v7;
      PartitionTable = PC_RAW::ReadPartitionTable((PC_RAW *)&v6, a2);
      goto LABEL_4;
    }
    v6 = v7;
    v3 = PC_GPT::ReadPartitionTable((PC_GPT *)&v6, a2);
    if ( v3 < 0 )
    {
      v3 = PC_DISK::Reset((PC_DISK *)v7);
      if ( v3 >= 0 )
      {
LABEL_3:
        PC_MBR::Initialize((PC_MBR *)&v6, (struct PC_DISK *)v7);
        PartitionTable = PC_MBR::ReadPartitionTable((PC_MBR *)&v6, a2);
LABEL_4:
        v3 = PartitionTable;
      }
    }
  }
LABEL_5:
  PC_DISK::~PC_DISK((PC_DISK *)v7);
  return (unsigned int)v3;
}
