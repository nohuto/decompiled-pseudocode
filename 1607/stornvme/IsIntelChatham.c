/*
 * XREFs of IsIntelChatham @ 0x1C00047C8
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C00048B0 (NVMeHwFindAdapter.c)
 *     IoSqToIoCqMapping @ 0x1C00063A0 (IoSqToIoCqMapping.c)
 *     NVMeControllerIdentify @ 0x1C000CB24 (NVMeControllerIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1C000DA70 (NVMeNameSpaceIdentify.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsIntelChatham(__int64 a1)
{
  return *(_WORD *)(a1 + 4) == 0x8086 && *(_WORD *)(a1 + 6) == 8209;
}
