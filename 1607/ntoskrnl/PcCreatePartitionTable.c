/*
 * XREFs of PcCreatePartitionTable @ 0x14023B544
 * Callers:
 *     IoCreateDisk @ 0x14061FFD0 (IoCreateDisk.c)
 * Callees:
 *     ??1PC_DISK@@QEAA@XZ @ 0x140147B14 (--1PC_DISK@@QEAA@XZ.c)
 *     ?Initialize@PC_DISK@@QEAAJPEAX@Z @ 0x140147B2C (-Initialize@PC_DISK@@QEAAJPEAX@Z.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ?PcCreatePartitionTable@@YAJPEAVPC_DISK@@PEAU_CREATE_DISK@@@Z @ 0x14023B4D4 (-PcCreatePartitionTable@@YAJPEAVPC_DISK@@PEAU_CREATE_DISK@@@Z.c)
 */

__int64 __fastcall PcCreatePartitionTable(
        struct _DEVICE_OBJECT *a1,
        struct _CREATE_DISK *a2,
        __int64 a3,
        unsigned int a4)
{
  int PartitionTable; // ebx
  _BYTE v7[48]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+50h] [rbp-18h]

  v8 = 0LL;
  PartitionTable = PC_DISK::Initialize((PC_DISK *)v7, a1, a3, a4);
  if ( PartitionTable >= 0 )
    PartitionTable = PcCreatePartitionTable((struct PC_DISK *)v7, a2);
  PC_DISK::~PC_DISK((PC_DISK *)v7);
  return (unsigned int)PartitionTable;
}
