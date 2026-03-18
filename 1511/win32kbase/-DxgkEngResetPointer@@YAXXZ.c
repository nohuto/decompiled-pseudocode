/*
 * XREFs of ?DxgkEngResetPointer@@YAXXZ @ 0x1C00B8290
 * Callers:
 *     <none>
 * Callees:
 *     IsUserResetPointerSupported_0 @ 0x1C00013D0 (IsUserResetPointerSupported_0.c)
 *     UserResetPointer_0 @ 0x1C00013D8 (UserResetPointer_0.c)
 */

void DxgkEngResetPointer(void)
{
  if ( (int)IsUserResetPointerSupported_0() >= 0 )
    UserResetPointer_0();
}
