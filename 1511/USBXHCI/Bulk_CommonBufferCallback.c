/*
 * XREFs of Bulk_CommonBufferCallback @ 0x1C002D3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Bulk_CommonBufferCallback(__int64 a1)
{
  ++*(_DWORD *)(a1 + 284);
  return Bulk_MapTransfers(a1);
}
