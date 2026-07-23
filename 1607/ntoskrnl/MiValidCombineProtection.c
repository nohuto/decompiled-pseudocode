/*
 * XREFs of MiValidCombineProtection @ 0x1401FB41C
 * Callers:
 *     MiCombineCandidate @ 0x1401F7CA4 (MiCombineCandidate.c)
 *     MiProcessCrcList @ 0x140663EAC (MiProcessCrcList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiValidCombineProtection(unsigned int a1)
{
  return a1 != 24 && a1 != 31 && (a1 & 0xFFFFFFF8) != 0x10 && a1 < 0x1E;
}
