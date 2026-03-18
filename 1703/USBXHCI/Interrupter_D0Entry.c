/*
 * XREFs of Interrupter_D0Entry @ 0x1C0022B84
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005290 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     Interrupter_InterrupterRegisterIntialize @ 0x1C00057C0 (Interrupter_InterrupterRegisterIntialize.c)
 *     Controller_IsControllerAccessible @ 0x1C000642C (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0018F9C (WPP_RECORDER_SF_qL.c)
 *     Interrupter_Initialize @ 0x1C0022C08 (Interrupter_Initialize.c)
 */

__int64 __fastcall Interrupter_D0Entry(__int64 a1, int a2, char a3)
{
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qL(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      5u,
      8u,
      0x19u,
      (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids,
      a1,
      a2);
  if ( Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    if ( !a3 )
      Interrupter_Initialize(a1);
    Interrupter_InterrupterRegisterIntialize(a1);
  }
  return 0LL;
}
