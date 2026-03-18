/*
 * XREFs of MiIsSessionMetadata @ 0x1400C0158
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x1400BFCA0 (MiPrefetchVirtualMemory.c)
 *     MiCombineCandidate @ 0x1401F7E78 (MiCombineCandidate.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsSessionMetadata(unsigned __int64 a1)
{
  return a1 >= qword_140326910
      && a1 < qword_140326910 + 0x8000000000LL
      && (a1 >= qword_140326918 && a1 < qword_140326918 + 1078231040 || a1 >= qword_140326900 && a1 < qword_140326908);
}
