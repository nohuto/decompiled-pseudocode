/*
 * XREFs of KiConvertToGuiThread @ 0x140157390
 * Callers:
 *     KiSystemCall64 @ 0x140165400 (KiSystemCall64.c)
 * Callees:
 *     PsConvertToGuiThread @ 0x140448CAC (PsConvertToGuiThread.c)
 */

__int64 KiConvertToGuiThread()
{
  return PsConvertToGuiThread();
}
