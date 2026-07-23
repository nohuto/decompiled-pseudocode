/*
 * XREFs of MmQuerySystemWorkingSetInformation @ 0x1400BE230
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiGetStandbyRepurposed @ 0x1400BD338 (MiGetStandbyRepurposed.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     MiGetAggregationVm @ 0x1400FCFE8 (MiGetAggregationVm.c)
 */

_UNKNOWN **__fastcall MmQuerySystemWorkingSetInformation(int a1, __int64 *a2)
{
  _UNKNOWN **result; // rax
  int v5; // ecx
  int v6; // edx
  int v7; // edx
  char *AnyMultiplexedVm; // rax
  int v9; // r8d
  __int64 v10; // r14
  __int64 v11; // rdi
  __int64 AggregationVm; // rsi
  __int64 v13; // rcx
  LONG *SharedVm; // rbp
  LONG *v15; // rax
  KIRQL v16; // dl
  int *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  *((_DWORD *)a2 + 15) = 0;
  v5 = 2;
  v6 = a1 - 2;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return result;
      v5 = 1;
    }
  }
  else
  {
    v5 = 0;
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(v5);
  v10 = (unsigned int)(v9 - 2);
  v11 = (__int64)AnyMultiplexedVm;
  AggregationVm = MiGetAggregationVm(AnyMultiplexedVm);
  SharedVm = MiGetSharedVm(v13);
  ExAcquireSpinLockShared(SharedVm);
  if ( SharedVm[1] )
    _InterlockedExchange(SharedVm + 1, 0);
  *a2 = *(_QWORD *)(v11 + 112);
  a2[1] = *(_QWORD *)(v11 + 152);
  *((_DWORD *)a2 + 4) = *(_DWORD *)(v11 + 4);
  if ( AggregationVm )
  {
    *a2 = *(_QWORD *)(AggregationVm + 16);
    a2[1] = *(_QWORD *)(AggregationVm + 24);
    *((_DWORD *)a2 + 4) = *(_DWORD *)AggregationVm;
  }
  a2[3] = *(_QWORD *)(v11 + 104);
  a2[4] = *(_QWORD *)(v11 + 144);
  if ( *(char *)(v11 + 184) < 0 )
    *((_DWORD *)a2 + 15) |= 4u;
  if ( (*(_BYTE *)(v11 + 184) & 0x40) != 0 )
    *((_DWORD *)a2 + 15) |= 1u;
  a2[6] = qword_140327388[v10];
  v15 = MiGetSharedVm(v11);
  ExReleaseSpinLockShared(v15, v16);
  v17 = MiPartitionIdToPointer(*(_WORD *)(v11 + 164));
  result = (_UNKNOWN **)MiGetStandbyRepurposed((__int64)v17, 1u);
  v18 = *a2;
  *((_DWORD *)a2 + 14) = (_DWORD)result;
  v19 = v18 + qword_140327380;
  if ( v18 + qword_140327380 > (unsigned __int64)a2[6] )
    v19 = a2[6];
  a2[1] <<= 12;
  *a2 = v18 << 12;
  a2[5] = v19;
  return result;
}
