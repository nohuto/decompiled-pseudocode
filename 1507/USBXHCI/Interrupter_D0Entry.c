/*
 * XREFs of Interrupter_D0Entry @ 0x1C001CE50
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0004300 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     Interrupter_InterrupterRegisterIntialize @ 0x1C00026A0 (Interrupter_InterrupterRegisterIntialize.c)
 *     Controller_IsControllerAccessible @ 0x1C00042C8 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0013270 (WPP_RECORDER_SF_qL.c)
 *     Interrupter_Initialize @ 0x1C001CECC (Interrupter_Initialize.c)
 */

__int64 __fastcall Interrupter_D0Entry(__int64 a1, int a2, char a3)
{
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qL(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      5u,
      8u,
      0x19u,
      (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids,
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
