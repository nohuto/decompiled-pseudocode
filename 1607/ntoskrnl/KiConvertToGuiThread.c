/*
 * XREFs of KiConvertToGuiThread @ 0x140161BE0
 * Callers:
 *     KiSystemCall64 @ 0x14016F000 (KiSystemCall64.c)
 * Callees:
 *     PsConvertToGuiThread @ 0x14045D0C0 (PsConvertToGuiThread.c)
 */

__int64 KiConvertToGuiThread()
{
  return PsConvertToGuiThread();
}
