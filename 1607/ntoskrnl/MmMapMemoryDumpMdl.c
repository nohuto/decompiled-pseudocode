/*
 * XREFs of MmMapMemoryDumpMdl @ 0x1401133F8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MmMapMemoryDumpMdl(__int64 a1, __int64 a2)
{
  return MmMapMemoryDumpMdlEx(qword_140327088 << 25 >> 16, a2, a1, 0LL);
}
