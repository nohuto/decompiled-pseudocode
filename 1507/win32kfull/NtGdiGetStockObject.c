/*
 * XREFs of NtGdiGetStockObject @ 0x1C00F6490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall NtGdiGetStockObject(__int64 a1)
{
  return GreGetStockObject(a1);
}
