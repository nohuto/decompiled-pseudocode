/*
 * XREFs of IsUserResetPointerSupported_0 @ 0x1C0001430
 * Callers:
 *     NtGdiDdDDISetDisplayMode @ 0x1C0082220 (NtGdiDdDDISetDisplayMode.c)
 *     ?DxgkEngResetPointer@@YAXXZ @ 0x1C00B5BC0 (-DxgkEngResetPointer@@YAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 IsUserResetPointerSupported_0()
{
  return IsUserResetPointerSupported();
}
