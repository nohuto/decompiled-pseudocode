/*
 * XREFs of MiIsPoolHeader @ 0x14012E1D8
 * Callers:
 *     MiReplacePageOfProtoPool @ 0x140037690 (MiReplacePageOfProtoPool.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPoolHeader(_BYTE *a1)
{
  return !*a1 && !a1[1] && a1[2];
}
