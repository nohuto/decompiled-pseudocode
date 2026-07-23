/*
 * XREFs of PcWritePartitionTable @ 0x14023B700
 * Callers:
 *     IoWritePartitionTable @ 0x140620188 (IoWritePartitionTable.c)
 *     IoWritePartitionTableEx @ 0x14062026C (IoWritePartitionTableEx.c)
 * Callees:
 *     ??1PC_DISK@@QEAA@XZ @ 0x140147B14 (--1PC_DISK@@QEAA@XZ.c)
 *     ?Initialize@PC_DISK@@QEAAJPEAX@Z @ 0x140147B2C (-Initialize@PC_DISK@@QEAAJPEAX@Z.c)
 *     ?Reset@PC_DISK@@QEAAJXZ @ 0x140147BE0 (-Reset@PC_DISK@@QEAAJXZ.c)
 *     ?Initialize@PC_MBR@@QEAAXPEAVPC_DISK@@@Z @ 0x140147F14 (-Initialize@PC_MBR@@QEAAXPEAVPC_DISK@@@Z.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ?PcCreatePartitionTable@@YAJPEAVPC_DISK@@PEAU_CREATE_DISK@@@Z @ 0x14023B4D4 (-PcCreatePartitionTable@@YAJPEAVPC_DISK@@PEAU_CREATE_DISK@@@Z.c)
 *     ?WritePartitionTable@PC_MBR@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14023BC60 (-WritePartitionTable@PC_MBR@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14023C778 (-WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 */

__int64 __fastcall PcWritePartitionTable(
        struct _DEVICE_OBJECT *a1,
        struct _DRIVE_LAYOUT_INFORMATION_EX *a2,
        __int64 a3,
        unsigned int a4)
{
  bool v5; // cf
  int v6; // ebx
  int v7; // ecx
  int v8; // eax
  _BYTE *v10; // [rsp+20h] [rbp-60h] BYREF
  _CREATE_DISK v11; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v12[44]; // [rsp+40h] [rbp-40h] BYREF
  int v13; // [rsp+6Ch] [rbp-14h]
  __int64 v14; // [rsp+70h] [rbp-10h]

  memset(&v11.Mbr, 0, 20);
  v14 = 0LL;
  v5 = a2->PartitionStyle < 2;
  v11.PartitionStyle = PARTITION_STYLE_RAW;
  if ( !v5 )
    goto LABEL_2;
  v6 = PC_DISK::Initialize((PC_DISK *)v12, a1, a3, a4);
  if ( v6 < 0 )
    goto LABEL_20;
  v7 = v13;
  if ( v13 != 2 )
  {
LABEL_8:
    if ( a2->PartitionStyle )
    {
      if ( a2->PartitionStyle != 1 )
        goto LABEL_20;
      if ( v7 != 1 )
        goto LABEL_2;
      a2->Gpt.MaxPartitionCount = 0;
      v10 = v12;
      v8 = PC_GPT::WritePartitionTable((PC_GPT *)&v10, a2);
    }
    else
    {
      if ( v7
        && (a2->PartitionCount != 4
         || a2->PartitionEntry[0].Mbr.PartitionType != 0xEE
         || LOBYTE(a2[1].Gpt.UsableLength.LowPart)
         || LOBYTE(a2[1].PartitionEntry[0].Gpt.Name[28])
         || LOBYTE(a2[2].PartitionEntry[0].Gpt.Name[4])) )
      {
LABEL_2:
        v6 = -1073741637;
        goto LABEL_20;
      }
      PC_MBR::Initialize((PC_MBR *)&v10, (struct PC_DISK *)v12);
      v8 = PC_MBR::WritePartitionTable((PC_MBR *)&v10, a2);
    }
    v6 = v8;
    goto LABEL_20;
  }
  v11.PartitionStyle = a2->PartitionStyle;
  v6 = PcCreatePartitionTable((struct PC_DISK *)v12, &v11);
  if ( v6 >= 0 )
  {
    v6 = PC_DISK::Reset((PC_DISK *)v12);
    if ( v6 >= 0 )
    {
      v7 = v13;
      goto LABEL_8;
    }
  }
LABEL_20:
  PC_DISK::~PC_DISK((PC_DISK *)v12);
  return (unsigned int)v6;
}
