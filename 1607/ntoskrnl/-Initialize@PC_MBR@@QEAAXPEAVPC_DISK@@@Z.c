/*
 * XREFs of ?Initialize@PC_MBR@@QEAAXPEAVPC_DISK@@@Z @ 0x1401479A4
 * Callers:
 *     PcReadPartitionTable @ 0x1401474EC (PcReadPartitionTable.c)
 *     ?PcCreatePartitionTable@@YAJPEAVPC_DISK@@PEAU_CREATE_DISK@@@Z @ 0x14023B5F0 (-PcCreatePartitionTable@@YAJPEAVPC_DISK@@PEAU_CREATE_DISK@@@Z.c)
 *     PcSetPartition @ 0x14023B6CC (PcSetPartition.c)
 *     PcWritePartitionTable @ 0x14023B81C (PcWritePartitionTable.c)
 * Callees:
 *     <none>
 */

void __fastcall PC_MBR::Initialize(PC_MBR *this, struct PC_DISK *a2)
{
  __int64 v2; // rax

  *(_QWORD *)this = a2;
  v2 = *((_QWORD *)a2 + 1);
  if ( !v2 || v2 > 1024 )
    *((_QWORD *)a2 + 1) = 1024LL;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 20LL) - 1) > 0xFE )
    *(_DWORD *)(*(_QWORD *)this + 20LL) = 255;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 24LL) - 1) > 0x3E )
    *(_DWORD *)(*(_QWORD *)this + 24LL) = 63;
}
