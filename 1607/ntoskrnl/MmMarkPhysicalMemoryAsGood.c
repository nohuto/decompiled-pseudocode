/*
 * XREFs of MmMarkPhysicalMemoryAsGood @ 0x1401E2588
 * Callers:
 *     <none>
 * Callees:
 *     MiMoveEccPagesToFreeList @ 0x1401E1E5C (MiMoveEccPagesToFreeList.c)
 */

__int64 __fastcall MmMarkPhysicalMemoryAsGood(_QWORD *a1, _QWORD *a2)
{
  ULONG_PTR v3; // rcx
  ULONG_PTR v4; // rdx

  v3 = *a1 >> 12;
  v4 = v3 + (*a2 >> 12);
  if ( v3 >= v4 )
    return 3221225711LL;
  *a2 = MiMoveEccPagesToFreeList(v3, v4) << 12;
  return 0LL;
}
