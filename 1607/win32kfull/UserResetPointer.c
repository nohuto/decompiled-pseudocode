/*
 * XREFs of UserResetPointer @ 0x1C0094BF0
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0095924 (xxxSwitchDesktop.c)
 * Callees:
 *     SetPointer @ 0x1C0094C10 (SetPointer.c)
 */

__int64 UserResetPointer()
{
  SetPointer(0LL);
  return SetPointer(1LL);
}
