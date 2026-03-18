/*
 * XREFs of IsDumpMode @ 0x1C00047BC
 * Callers:
 *     NVMeNameSpaceIdentify @ 0x1C000DA70 (NVMeNameSpaceIdentify.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsDumpMode(__int64 a1)
{
  return *(_BYTE *)(a1 + 16) != 0;
}
