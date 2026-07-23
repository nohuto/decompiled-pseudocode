/*
 * XREFs of MiDeleteAllHashMappings @ 0x1400FF190
 * Callers:
 *     MiDeleteFinalPageTables @ 0x140075B18 (MiDeleteFinalPageTables.c)
 *     MiUnlinkWorkingSet @ 0x1400FF204 (MiUnlinkWorkingSet.c)
 * Callees:
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiDeletePteRange @ 0x1400FE550 (MiDeletePteRange.c)
 */

__int64 __fastcall MiDeleteAllHashMappings(__int64 a1)
{
  ULONG_PTR *SharedWorkingSetList; // rbx
  __int64 v2; // r10
  __int64 result; // rax

  SharedWorkingSetList = MiGetSharedWorkingSetList(a1);
  MiDeletePteRange(
    v2,
    ((SharedWorkingSetList[8] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL,
    (((SharedWorkingSetList[9] - 8) >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF8LL,
    32);
  result = qword_140326D50;
  SharedWorkingSetList[7] = qword_140326D50;
  return result;
}
