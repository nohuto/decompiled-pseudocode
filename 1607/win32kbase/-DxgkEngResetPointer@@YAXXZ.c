/*
 * XREFs of ?DxgkEngResetPointer@@YAXXZ @ 0x1C00C37A0
 * Callers:
 *     <none>
 * Callees:
 *     IsUserResetPointerSupported_0 @ 0x1C0001440 (IsUserResetPointerSupported_0.c)
 *     UserResetPointer_0 @ 0x1C0001448 (UserResetPointer_0.c)
 */

void DxgkEngResetPointer(void)
{
  if ( (int)IsUserResetPointerSupported_0() >= 0 )
    UserResetPointer_0();
}
