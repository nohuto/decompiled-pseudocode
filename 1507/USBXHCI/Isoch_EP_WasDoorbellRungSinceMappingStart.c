/*
 * XREFs of Isoch_EP_WasDoorbellRungSinceMappingStart @ 0x1C0024B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Isoch_EP_WasDoorbellRungSinceMappingStart(__int64 a1)
{
  return *(_BYTE *)(a1 + 280) & 1;
}
