/*
 * XREFs of ?VidSchiBlockInterruptCallbackAtISR@@YAEPEAX@Z @ 0x1C0022D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VidSchiBlockInterruptCallbackAtISR(_QWORD *a1)
{
  DpiSetSchedulerCallbackState(*(_QWORD *)(a1[2] + 176LL), 1LL);
  return 1;
}
