/*
 * XREFs of HUBMISC_LogDescriptorValidationWarningForHub @ 0x1C0028260
 * Callers:
 *     <none>
 * Callees:
 *     Template_ppqq @ 0x1C000F9A0 (Template_ppqq.c)
 */

NTSTATUS __fastcall HUBMISC_LogDescriptorValidationWarningForHub(__int64 a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100000) != 0 )
      return Template_ppqq(a1, &USBHUB3_ETW_EVENT_DESCRIPTOR_VALIDATION_WARNING, 0LL);
  }
  return result;
}
