/*
 * XREFs of RIMDeliverEndStatesForAllActiveContacts @ 0x1C00C4BC8
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C00108E0 (RIMDoOnPnpNotification.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C00C2978 (RIMIDERemoveInjectionDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     RIMEndAllActiveContacts @ 0x1C00C4C1C (RIMEndAllActiveContacts.c)
 *     RIMAssessPointerContactState @ 0x1C00CAF80 (RIMAssessPointerContactState.c)
 */

__int64 __fastcall RIMDeliverEndStatesForAllActiveContacts(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = RIMEndAllActiveContacts(a1, *(_QWORD *)(a2 + 416));
  if ( *(_BYTE *)(a1 + 681) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      5u,
      0x32u,
      (__int64)&WPP_e51efb334d0b6f72df968c61ccca95a5_Traceguids);
    return RIMAssessPointerContactState(a1);
  }
  return result;
}
