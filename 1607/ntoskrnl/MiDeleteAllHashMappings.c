/*
 * XREFs of MiDeleteAllHashMappings @ 0x140101410
 * Callers:
 *     MiDeleteFinalPageTables @ 0x140075A98 (MiDeleteFinalPageTables.c)
 *     MiUnlinkWorkingSet @ 0x140101484 (MiUnlinkWorkingSet.c)
 * Callees:
 *     MiGetSharedWorkingSetList @ 0x140047070 (MiGetSharedWorkingSetList.c)
 *     MiDeletePteRange @ 0x1401007D0 (MiDeletePteRange.c)
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
  result = qword_140326D10;
  SharedWorkingSetList[7] = qword_140326D10;
  return result;
}
