/*
 * XREFs of KiConvertToGuiThread @ 0x140162150
 * Callers:
 *     KiSystemCall64 @ 0x14016F500 (KiSystemCall64.c)
 * Callees:
 *     PsConvertToGuiThread @ 0x14045BF90 (PsConvertToGuiThread.c)
 */

__int64 KiConvertToGuiThread()
{
  return PsConvertToGuiThread();
}
