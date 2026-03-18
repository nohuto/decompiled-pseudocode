/*
 * XREFs of NtGdiDeleteColorTransform @ 0x1C02B0320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall NtGdiDeleteColorTransform(HDC a1, void *a2)
{
  return GreDeleteColorTransform(a1, a2);
}
