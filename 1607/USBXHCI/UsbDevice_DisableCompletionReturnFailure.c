/*
 * XREFs of UsbDevice_DisableCompletionReturnFailure @ 0x1C0030610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UsbDevice_DisableCompletionReturnFailure(__int64 a1, int a2)
{
  UsbDevice_DisableCompletion(a1, a2, 1);
}
