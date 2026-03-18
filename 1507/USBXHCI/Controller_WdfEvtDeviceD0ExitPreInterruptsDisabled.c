/*
 * XREFs of Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C0002100
 * Callers:
 *     <none>
 * Callees:
 *     Interrupter_D0ExitPreInterruptsDisabled @ 0x1C00021DC (Interrupter_D0ExitPreInterruptsDisabled.c)
 *     ControllerPreInterruptsDisableAcpiCallout @ 0x1C0002280 (ControllerPreInterruptsDisableAcpiCallout.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0004E50 (WPP_RECORDER_SF_qLL.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     Template_pqqh @ 0x1C00168D4 (Template_pqqh.c)
 *     Template_pqqq @ 0x1C0016960 (Template_pqqq.c)
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

  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                     a1,
                     off_1C0040270)
                 + 8);
  v5 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64))(WdfFunctions_01015 + 3104))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         a1);
  v8 = v5;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 8) != 0 )
    Template_pqqh(
      *(unsigned __int8 *)(v4 + 348),
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_EXIT_PRE_INTERRUPTS_START,
      v7,
      *(_QWORD *)(v4 + 8),
      a2,
      v5,
      *(_BYTE *)(v4 + 348));
  LOBYTE(v6) = 4;
  WPP_RECORDER_SF_qLL(
    *(_QWORD *)(v4 + 64),
    v6,
    3,
    82,
    (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids,
    a1,
    a2,
    *(_DWORD *)(v4 + 300));
  ControllerPreInterruptsDisableAcpiCallout(a1);
  Interrupter_D0ExitPreInterruptsDisabled(*(_QWORD *)(v4 + 96));
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 8) != 0 )
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
