/*
 * XREFs of PcSetPartition @ 0x14023B5B0
 * Callers:
 *     IoSetPartitionInformation @ 0x140620120 (IoSetPartitionInformation.c)
 *     IoSetPartitionInformationEx @ 0x140620178 (IoSetPartitionInformationEx.c)
 * Callees:
 *     ??1PC_DISK@@QEAA@XZ @ 0x140147B14 (--1PC_DISK@@QEAA@XZ.c)
 *     ?Initialize@PC_DISK@@QEAAJPEAX@Z @ 0x140147B2C (-Initialize@PC_DISK@@QEAAJPEAX@Z.c)
 *     ?Initialize@PC_MBR@@QEAAXPEAVPC_DISK@@@Z @ 0x140147F14 (-Initialize@PC_MBR@@QEAAXPEAVPC_DISK@@@Z.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ?SetPartition@PC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x14023BB7C (-SetPartition@PC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     ?SetPartition@PC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x14023C410 (-SetPartition@PC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 */

__int64 __fastcall PcSetPartition(
        struct _DEVICE_OBJECT *a1,
        unsigned int a2,
        struct _SET_PARTITION_INFORMATION_EX *a3,
        unsigned int a4)
{
  int v6; // ebx
  int v7; // eax
  _BYTE *v9; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v10[44]; // [rsp+28h] [rbp-50h] BYREF
  int v11; // [rsp+54h] [rbp-24h]
  __int64 v12; // [rsp+58h] [rbp-20h]

  v12 = 0LL;
  v6 = PC_DISK::Initialize((PC_DISK *)v10, a1, (__int64)a3, a4);
  if ( v6 >= 0 )
  {
    if ( v11 == a3->PartitionStyle )
    {
      if ( v11 )
      {
        if ( v11 != 1 )
        {
          v6 = -1073741637;
          goto LABEL_10;
        }
        v9 = v10;
        v7 = PC_GPT::SetPartition((PC_GPT *)&v9, a2, a3);
      }
      else
      {
        PC_MBR::Initialize((PC_MBR *)&v9, (struct PC_DISK *)v10);
        v7 = PC_MBR::SetPartition((PC_MBR *)&v9, a2, a3);
      }
      v6 = v7;
      goto LABEL_10;
    }
    v6 = -1073741811;
  }
LABEL_10:
  PC_DISK::~PC_DISK((PC_DISK *)v10);
  return (unsigned int)v6;
}
