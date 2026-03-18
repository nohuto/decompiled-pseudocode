/*
 * XREFs of MiValidCombineProtection @ 0x140128744
 * Callers:
 *     MiProcessCrcList @ 0x14050E300 (MiProcessCrcList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiValidCombineProtection(unsigned int a1)
{
  return a1 != 24 && a1 != 31 && (a1 & 0xFFFFFFF8) != 0x10 && a1 < 0x1E;
}
