/*
 * XREFs of Bulk_EP_WasDoorbellRungSinceMappingStart @ 0x1C002DCF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Bulk_EP_WasDoorbellRungSinceMappingStart(__int64 a1)
{
  return *(_BYTE *)(a1 + 276) & 1;
}
