/*
 * XREFs of MiDeleteAllHashMappings @ 0x140124F08
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1400EEEC4 (MiDeleteFinalPageTables.c)
 *     MiUnlinkWorkingSet @ 0x140124DCC (MiUnlinkWorkingSet.c)
 * Callees:
 *     MiDeletePteRange @ 0x140038650 (MiDeletePteRange.c)
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
  result = qword_14034EE60;
  v1[11] = qword_14034EE60;
  return result;
}
