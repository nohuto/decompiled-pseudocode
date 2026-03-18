/*
 * XREFs of KiConvertToGuiThread @ 0x140186980
 * Callers:
 *     KiSystemCall64 @ 0x140193800 (KiSystemCall64.c)
 * Callees:
 *     PsConvertToGuiThread @ 0x1405091AC (PsConvertToGuiThread.c)
 */

__int64 KiConvertToGuiThread()
{
  return PsConvertToGuiThread();
}
