/*
 * XREFs of NtGdiSelectBrush @ 0x1C02A7C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall NtGdiSelectBrush(__int64 a1, __int64 a2)
{
  return GreSelectBrush(a1, a2);
}
