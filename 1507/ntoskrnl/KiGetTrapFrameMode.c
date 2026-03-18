/*
 * XREFs of KiGetTrapFrameMode @ 0x14001F5E0
 * Callers:
 *     KiSwInterruptDispatch @ 0x14017C0E8 (KiSwInterruptDispatch.c)
 * Callees:
 *     <none>
 */

char __fastcall KiGetTrapFrameMode(__int64 a1)
{
  return *(_BYTE *)(a1 + 368) & 1;
}
