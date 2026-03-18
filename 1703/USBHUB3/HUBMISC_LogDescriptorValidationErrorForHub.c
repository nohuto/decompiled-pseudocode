/*
 * XREFs of HUBMISC_LogDescriptorValidationErrorForHub @ 0x1C002AAD0
 * Callers:
 *     <none>
 * Callees:
 *     Template_ppqq @ 0x1C0010724 (Template_ppqq.c)
 */

NTSTATUS __fastcall HUBMISC_LogDescriptorValidationErrorForHub(__int64 a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
      return Template_ppqq(a1, &USBHUB3_ETW_EVENT_DESCRIPTOR_VALIDATION_FAILURE, 0LL);
  }
  return result;
}
