/*
 * XREFs of MiIsPoolHeader @ 0x1400A9E38
 * Callers:
 *     MiReplacePageOfProtoPool @ 0x1400A99CC (MiReplacePageOfProtoPool.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPoolHeader(_BYTE *a1)
{
  return !*a1 && !a1[1] && a1[2];
}
