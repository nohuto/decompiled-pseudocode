/*
 * XREFs of UsbDevice_DeviceNotificationEventHandler @ 0x1C003014C
 * Callers:
 *     Interrupter_WdfEvtInterruptDpc @ 0x1C000A2D0 (Interrupter_WdfEvtInterruptDpc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C00333EC (WPP_RECORDER_SF_dqd.c)
 */

char __fastcall UsbDevice_DeviceNotificationEventHandler(__int64 a1, __int64 a2)
{
  char result; // al

  result = *(_DWORD *)a2 & 0xF0;
  if ( result == 16 )
  {
    WPP_RECORDER_SF_dqd(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL), a2, *(unsigned __int8 *)(a1 + 135), 64);
    return ((__int64 (__fastcall *)(void *, _QWORD, _QWORD))qword_1C0044768)(
             WPP_MAIN_CB.Dpc.SystemArgument2,
             *(_QWORD *)a1,
             *(unsigned __int8 *)(a2 + 1));
  }
  return result;
}
