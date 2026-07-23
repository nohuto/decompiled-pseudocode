/*
 * XREFs of MiIsSessionMetadata @ 0x1400BDFE8
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x1400BDB30 (MiPrefetchVirtualMemory.c)
 *     MiCombineCandidate @ 0x1401F7CA4 (MiCombineCandidate.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsSessionMetadata(unsigned __int64 a1)
{
  return a1 >= qword_140326950
      && a1 < qword_140326950 + 0x8000000000LL
      && (a1 >= qword_140326958 && a1 < qword_140326958 + 1078231040 || a1 >= qword_140326940 && a1 < qword_140326948);
}
