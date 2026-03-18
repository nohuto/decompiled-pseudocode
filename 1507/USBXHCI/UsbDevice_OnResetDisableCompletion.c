/*
 * XREFs of UsbDevice_OnResetDisableCompletion @ 0x1C002FC40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UsbDevice_OnResetDisableCompletion(__int64 a1, int a2)
{
  UsbDevice_DisableCompletion(a1, a2, 2);
}
