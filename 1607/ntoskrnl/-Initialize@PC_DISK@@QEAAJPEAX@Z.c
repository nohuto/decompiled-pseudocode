/*
 * XREFs of ?Initialize@PC_DISK@@QEAAJPEAX@Z @ 0x140147B2C
 * Callers:
 *     PcReadPartitionTable @ 0x140147A5C (PcReadPartitionTable.c)
 *     PcCreatePartitionTable @ 0x14023B544 (PcCreatePartitionTable.c)
 *     PcSetPartition @ 0x14023B5B0 (PcSetPartition.c)
 *     PcVerifyPartitionTable @ 0x14023B670 (PcVerifyPartitionTable.c)
 *     PcWritePartitionTable @ 0x14023B700 (PcWritePartitionTable.c)
 * Callees:
 *     ?Reset@PC_DISK@@QEAAJXZ @ 0x140147BE0 (-Reset@PC_DISK@@QEAAJXZ.c)
 *     ?Control@PC_ENVIRONMENT@@SAJPEAXK0K0K@Z @ 0x1405752C4 (-Control@PC_ENVIRONMENT@@SAJPEAXK0K0K@Z.c)
 *     ?AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z @ 0x140575378 (-AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z.c)
 */

__int64 __fastcall PC_DISK::Initialize(PC_DISK *this, struct _DEVICE_OBJECT *a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  void *v6; // r8
  unsigned int v7; // r9d
  unsigned int v8; // eax
  _QWORD *v9; // rdi
  unsigned __int8 v10; // dl
  int v11; // ecx
  void *Pool; // rax

  *(_QWORD *)this = a2;
  result = PC_ENVIRONMENT::Control(a2, 0x70000u, a2, a4, (char *)this + 8, 0x18u);
  if ( (int)result >= 0 )
  {
    v8 = *((_DWORD *)this + 7);
    if ( !v8 )
      return 3221225635LL;
    _BitScanReverse(&v8, v8);
    v9 = (_QWORD *)((char *)this + 32);
    *((_DWORD *)this + 10) = v8;
    result = PC_ENVIRONMENT::Control(*(PDEVICE_OBJECT *)this, 0x7405Cu, v6, v7, (char *)this + 32, 8u);
    if ( (int)result < 0 )
      return result;
    if ( !*v9 )
      return 3221225635LL;
    v11 = *((_DWORD *)this + 10);
    *v9 >>= v11;
    Pool = PC_ENVIRONMENT::AllocatePool(1 << v11, v10, 0x54506350u);
    *((_QWORD *)this + 6) = Pool;
    if ( Pool )
      return PC_DISK::Reset(this);
    else
      return 3221225626LL;
  }
  return result;
}
