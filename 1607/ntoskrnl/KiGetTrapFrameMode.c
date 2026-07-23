/*
 * XREFs of KiGetTrapFrameMode @ 0x1400AC280
 * Callers:
 *     KiSwInterruptDispatch @ 0x1401578BC (KiSwInterruptDispatch.c)
 * Callees:
 *     <none>
 */

char __fastcall KiGetTrapFrameMode(__int64 a1)
{
  return *(_BYTE *)(a1 + 368) & 1;
}
