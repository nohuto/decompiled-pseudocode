/*
 * XREFs of KiGetTrapFrameMode @ 0x1400287D4
 * Callers:
 *     KiSwInterruptDispatch @ 0x14014DF2C (KiSwInterruptDispatch.c)
 * Callees:
 *     <none>
 */

char __fastcall KiGetTrapFrameMode(__int64 a1)
{
  return *(_BYTE *)(a1 + 368) & 1;
}
