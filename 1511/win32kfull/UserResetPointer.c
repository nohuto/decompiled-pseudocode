/*
 * XREFs of UserResetPointer @ 0x1C0096E30
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0093754 (xxxSwitchDesktop.c)
 * Callees:
 *     SetPointer @ 0x1C0096E50 (SetPointer.c)
 */

__int64 UserResetPointer()
{
  SetPointer(0LL);
  return SetPointer(1LL);
}
