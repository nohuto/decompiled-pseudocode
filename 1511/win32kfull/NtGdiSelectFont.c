/*
 * XREFs of NtGdiSelectFont @ 0x1C0018340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall NtGdiSelectFont(__int64 a1, __int64 a2)
{
  return GreSelectFont(a1, a2);
}
