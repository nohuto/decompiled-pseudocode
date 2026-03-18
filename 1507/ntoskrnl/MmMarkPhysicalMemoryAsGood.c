/*
 * XREFs of MmMarkPhysicalMemoryAsGood @ 0x1402134E0
 * Callers:
 *     <none>
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiMoveEccPagesToFreeList @ 0x140212D88 (MiMoveEccPagesToFreeList.c)
 */

__int64 __fastcall MmMarkPhysicalMemoryAsGood(__int64 *a1, __int64 *a2)
{
  ULONG_PTR v3; // rcx
  ULONG_PTR v4; // rdx
  __int64 v6; // rbx

  v3 = *a1 >> 12;
  v4 = v3 + (*a2 >> 12);
  if ( v3 >= v4 )
    return 3221225711LL;
  v6 = MiMoveEccPagesToFreeList(v3, v4);
  MiReturnResidentAvailable(v6);
  _InterlockedExchangeAdd64(&qword_14034F9F0, v6);
  MiReturnCommit((__int64)MiSystemPartition, v6);
  *a2 = v6 << 12;
  return 0LL;
}
