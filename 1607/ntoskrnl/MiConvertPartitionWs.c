/*
 * XREFs of MiConvertPartitionWs @ 0x1401F116C
 * Callers:
 *     MiCreatePartition @ 0x14066028C (MiCreatePartition.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiConvertToLinkedWsles @ 0x1400A016C (MiConvertToLinkedWsles.c)
 */

__int64 MiConvertPartitionWs()
{
  unsigned int v0; // edi
  char *AnyMultiplexedVm; // rsi
  __int64 v2; // rcx
  ULONG_PTR *SharedWorkingSetList; // rbp
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  __int64 v7; // rdx
  KIRQL v8; // r14

  v0 = 0;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
  SharedWorkingSetList = MiGetSharedWorkingSetList((__int64)AnyMultiplexedVm);
  if ( *((_DWORD *)SharedWorkingSetList + 8) != 8 )
    return 0LL;
  SharedVm = MiGetSharedVm(v2);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v8 = v6;
  if ( *((_DWORD *)SharedWorkingSetList + 8) == 8 && !(unsigned int)MiConvertToLinkedWsles((ULONG_PTR)AnyMultiplexedVm) )
    v0 = -1073741670;
  LOBYTE(v7) = v8;
  MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v7);
  return v0;
}
