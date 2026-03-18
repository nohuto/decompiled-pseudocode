/*
 * XREFs of UserResetPointer @ 0x1C003E350
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0041C84 (xxxSwitchDesktop.c)
 * Callees:
 *     SetPointer @ 0x1C003E370 (SetPointer.c)
 */

__int64 UserResetPointer()
{
  SetPointer(0LL);
  return SetPointer(1LL);
}
