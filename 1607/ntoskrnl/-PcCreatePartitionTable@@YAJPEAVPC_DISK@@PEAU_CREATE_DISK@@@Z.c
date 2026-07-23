/*
 * XREFs of ?PcCreatePartitionTable@@YAJPEAVPC_DISK@@PEAU_CREATE_DISK@@@Z @ 0x14023B4D4
 * Callers:
 *     PcCreatePartitionTable @ 0x14023B544 (PcCreatePartitionTable.c)
 *     PcWritePartitionTable @ 0x14023B700 (PcWritePartitionTable.c)
 * Callees:
 *     ?Initialize@PC_MBR@@QEAAXPEAVPC_DISK@@@Z @ 0x140147F14 (-Initialize@PC_MBR@@QEAAXPEAVPC_DISK@@@Z.c)
 *     ?CreatePartitionTable@PC_RAW@@QEAAJXZ @ 0x14023B850 (-CreatePartitionTable@PC_RAW@@QEAAJXZ.c)
 *     ?CreatePartitionTable@PC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x14023BAB8 (-CreatePartitionTable@PC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?CreatePartitionTable@PC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x14023BE94 (-CreatePartitionTable@PC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 */

__int64 __fastcall PcCreatePartitionTable(struct PC_DISK *a1, struct _CREATE_DISK *a2)
{
  PARTITION_STYLE PartitionStyle; // r8d
  __int32 v3; // r8d
  struct _CREATE_DISK *v5; // r9
  struct PC_DISK *v6; // [rsp+38h] [rbp+10h] BYREF

  PartitionStyle = PARTITION_STYLE_RAW;
  if ( a2 )
    PartitionStyle = a2->PartitionStyle;
  if ( PartitionStyle )
  {
    v3 = PartitionStyle - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        v6 = a1;
        return PC_RAW::CreatePartitionTable((PC_RAW *)&v6);
      }
      else
      {
        return 3221225659LL;
      }
    }
    else
    {
      v6 = a1;
      return PC_GPT::CreatePartitionTable((PC_GPT *)&v6, a2);
    }
  }
  else
  {
    PC_MBR::Initialize((PC_MBR *)&v6, a1);
    return PC_MBR::CreatePartitionTable((PC_MBR *)&v6, v5);
  }
}
