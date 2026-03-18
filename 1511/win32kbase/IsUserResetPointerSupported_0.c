/*
 * XREFs of IsUserResetPointerSupported_0 @ 0x1C00013D0
 * Callers:
 *     NtGdiDdDDISetDisplayMode @ 0x1C005FF70 (NtGdiDdDDISetDisplayMode.c)
 *     ?DxgkEngResetPointer@@YAXXZ @ 0x1C00B8290 (-DxgkEngResetPointer@@YAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 IsUserResetPointerSupported_0()
{
  return IsUserResetPointerSupported();
}
