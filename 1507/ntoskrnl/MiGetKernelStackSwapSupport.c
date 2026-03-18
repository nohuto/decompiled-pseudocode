/*
 * XREFs of MiGetKernelStackSwapSupport @ 0x1400DDB48
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400DC414 (MmOutSwapWorkingSet.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiFindFreePageFileSpace @ 0x140062B48 (MiFindFreePageFileSpace.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1400DCE20 (MiAllocateWorkingSetSwapSupport.c)
 */

__int64 __fastcall MiGetKernelStackSwapSupport(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int16 *v4; // rsi
  __int64 v5; // r11
  unsigned int v6; // r9d
  unsigned int v7; // edx
  __int16 *v8; // r8
  unsigned int v9; // ebx
  _QWORD *WorkingSetSwapSupport; // rax

  v3 = -1;
  v4 = MiPartitionIdToPointer(*(_WORD *)(a2 + 1452));
  if ( v4 != MiSystemPartition )
    return 3221225799LL;
  v6 = *((_DWORD *)v4 + 1334);
  v7 = 0;
  if ( !v6 )
    return 3221225799LL;
  v8 = v4 + 2672;
  do
  {
    if ( (*(_BYTE *)(*(_QWORD *)v8 + 164LL) & 0x50) == 0
      && (v3 == -1 || *(_QWORD *)(*(_QWORD *)v8 + 56LL) > *(_QWORD *)(*(_QWORD *)&v4[4 * v3 + 2672] + 56LL)) )
    {
      v3 = v7;
    }
    ++v7;
    v8 += 4;
  }
  while ( v7 < v6 );
  if ( v3 == -1 )
    return 3221225799LL;
  v9 = *(_DWORD *)(v5 + 1168);
  if ( !v9 )
    return 3221225738LL;
  if ( v9 > 0x2AAAAAAA )
    v9 = 715827882;
  WorkingSetSwapSupport = MiAllocateWorkingSetSwapSupport(2 * v9);
  *(_QWORD *)(a1 + 56) = WorkingSetSwapSupport;
  if ( !WorkingSetSwapSupport )
    return 3221225626LL;
  *(_QWORD *)(a1 + 64) ^= (*(_DWORD *)(a1 + 64) ^ (v3 << 12)) & 0xF000;
  *(_DWORD *)(a1 + 72) = MiFindFreePageFileSpace((__int64)v4, (_QWORD *)(a1 + 64), 6 * v9, 0LL, 17);
  return 0LL;
}
