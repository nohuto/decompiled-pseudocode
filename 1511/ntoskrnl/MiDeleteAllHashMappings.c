/*
 * XREFs of MiDeleteAllHashMappings @ 0x14001C23C
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1400055B8 (MiDeleteFinalPageTables.c)
 *     MiUnlinkWorkingSet @ 0x14001C13C (MiUnlinkWorkingSet.c)
 * Callees:
 *     MiDeletePteRange @ 0x1400A1370 (MiDeletePteRange.c)
 */

__int64 __fastcall MiDeleteAllHashMappings(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 184);
  MiDeletePteRange(
    a1,
    ((v1[12] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL,
    (((unsigned __int64)(v1[13] - 8LL) >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF8LL,
    32LL);
  result = qword_1402FE9A0;
  v1[11] = qword_1402FE9A0;
  return result;
}
