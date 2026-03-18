/*
 * XREFs of HUBMISC_LogDescriptorValidationErrorForHub @ 0x1C00281B0
 * Callers:
 *     <none>
 * Callees:
 *     Template_ppqq @ 0x1C000F8F0 (Template_ppqq.c)
 */

NTSTATUS __fastcall HUBMISC_LogDescriptorValidationErrorForHub(__int64 a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    result = (NTSTATUS)WPP_MAIN_CB.Queue.Wcb.CurrentIrp;
    if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) < 0 )
      return Template_ppqq(a1, &USBHUB3_ETW_EVENT_DESCRIPTOR_VALIDATION_FAILURE, 0LL);
  }
  return result;
}
