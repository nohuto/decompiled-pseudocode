/*
 * XREFs of Isoch_EP_IsMappingStoppedOrPaused @ 0x1C0027AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall Isoch_EP_IsMappingStoppedOrPaused(__int64 a1)
{
  return (*(_DWORD *)(a1 + 100) & 0xFFFFFFFD) == 0;
}
