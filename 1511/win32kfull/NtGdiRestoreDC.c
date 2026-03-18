/*
 * XREFs of NtGdiRestoreDC @ 0x1C00EE860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall NtGdiRestoreDC(__int64 a1, __int64 a2)
{
  return GreRestoreDC(a1, a2);
}
