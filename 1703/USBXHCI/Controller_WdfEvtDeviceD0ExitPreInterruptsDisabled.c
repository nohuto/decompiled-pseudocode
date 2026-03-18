/*
 * XREFs of Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C0004430
 * Callers:
 *     <none>
 * Callees:
 *     Interrupter_D0ExitPreInterruptsDisabled @ 0x1C0004514 (Interrupter_D0ExitPreInterruptsDisabled.c)
 *     ControllerPreInterruptsDisableAcpiCallout @ 0x1C00045C0 (ControllerPreInterruptsDisableAcpiCallout.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0005110 (WPP_RECORDER_SF_qLL.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     Template_pqqh @ 0x1C001C894 (Template_pqqh.c)
 *     Template_pqqq @ 0x1C001C928 (Template_pqqq.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled(__int64 a1, char a2)
{
  __int64 v4; // rbx
  char v5; // al
  int v6; // edx
  int v7; // r8d
  char v8; // si
  int v9; // ecx
  int v10; // r8d

  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C0045318)
                 + 8);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  v8 = v5;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    Template_pqqh(
      *(unsigned __int8 *)(v4 + 356),
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_EXIT_PRE_INTERRUPTS_START,
      v7,
      *(_QWORD *)(v4 + 8),
      a2,
      v5,
      *(_BYTE *)(v4 + 356));
  LOBYTE(v6) = 4;
  WPP_RECORDER_SF_qLL(
    *(_QWORD *)(v4 + 64),
    v6,
    3,
    84,
    (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids,
    a1,
    a2,
    *(_DWORD *)(v4 + 308));
  ControllerPreInterruptsDisableAcpiCallout(a1);
  Interrupter_D0ExitPreInterruptsDisabled(*(_QWORD *)(v4 + 96));
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    Template_pqqq(
      v9,
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_EXIT_PRE_INTERRUPTS_COMPLETE,
      v10,
      *(_QWORD *)(v4 + 8),
      a2,
      v8,
      0);
  return 0LL;
}
