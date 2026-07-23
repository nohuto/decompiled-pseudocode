/*
 * XREFs of MiIsPoolHeader @ 0x1400A83B8
 * Callers:
 *     MiReplacePageOfProtoPool @ 0x1400A7F4C (MiReplacePageOfProtoPool.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPoolHeader(_BYTE *a1)
{
  return !*a1 && !a1[1] && a1[2];
}
