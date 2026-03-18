/*
 * XREFs of MiIsPoolHeader @ 0x1400F08BC
 * Callers:
 *     MiReplacePageOfProtoPool @ 0x1400A1EB0 (MiReplacePageOfProtoPool.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPoolHeader(_BYTE *a1)
{
  return !*a1 && !a1[1] && a1[2];
}
