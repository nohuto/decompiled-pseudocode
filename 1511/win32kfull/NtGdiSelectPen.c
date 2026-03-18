/*
 * XREFs of NtGdiSelectPen @ 0x1C02A7C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall NtGdiSelectPen(__int64 a1, __int64 a2)
{
  return GreSelectPen(a1, a2);
}
