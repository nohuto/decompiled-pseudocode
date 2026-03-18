/*
 * XREFs of MiValidCombineProtection @ 0x14022C9D8
 * Callers:
 *     MiCombineCandidate @ 0x140227894 (MiCombineCandidate.c)
 *     MiProcessCrcList @ 0x1406A8BBC (MiProcessCrcList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiValidCombineProtection(unsigned int a1)
{
  return a1 != 24 && a1 != 31 && (a1 & 0xFFFFFFF8) != 0x10 && a1 < 0x1E;
}
