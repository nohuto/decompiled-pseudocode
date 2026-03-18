/*
 * XREFs of ?DxgkEngResetPointer@@YAXXZ @ 0x1C00B5BC0
 * Callers:
 *     <none>
 * Callees:
 *     IsUserResetPointerSupported_0 @ 0x1C0001430 (IsUserResetPointerSupported_0.c)
 *     UserResetPointer_0 @ 0x1C0001438 (UserResetPointer_0.c)
 */

void DxgkEngResetPointer(void)
{
  if ( (int)IsUserResetPointerSupported_0() >= 0 )
    UserResetPointer_0();
}
