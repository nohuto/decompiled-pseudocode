/*
 * XREFs of WPP_RECORDER_SF_qd @ 0x1C0004990
 * Callers:
 *     DeviceSlot_D0EntryCleanupState @ 0x1C0001460 (DeviceSlot_D0EntryCleanupState.c)
 *     ControllerPreInterruptsDisableAcpiCallout @ 0x1C0002280 (ControllerPreInterruptsDisableAcpiCallout.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0003DA0 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0004300 (Controller_WdfEvtDeviceD0Entry.c)
 *     CommonBuffer_AllocateBuffers @ 0x1C0005B40 (CommonBuffer_AllocateBuffers.c)
 *     DeviceSlot_ClearDeviceContext @ 0x1C0016E60 (DeviceSlot_ClearDeviceContext.c)
 *     Interrupter_WdfEvtInterruptDpc @ 0x1C001D0A0 (Interrupter_WdfEvtInterruptDpc.c)
 *     Interrupter_CreateInterrupter @ 0x1C0047A80 (Interrupter_CreateInterrupter.c)
 *     Register_PrepareHardware @ 0x1C0049B90 (Register_PrepareHardware.c)
 *     Controller_ExecuteDSM @ 0x1C004E268 (Controller_ExecuteDSM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qd(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v9; // rdi
  unsigned __int16 v10; // r8
  int v11; // eax
  char *v13; // rcx
  int v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v15 = va_arg(va1, _QWORD);
  v9 = (unsigned __int64)a3 >> 16;
  v10 = a3 - 1;
  v11 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v9 + (v10 >> 5) + 1);
  if ( _bittest(&v11, v10 & 0x1F) )
  {
    v13 = (char *)WPP_GLOBAL_Control + 80 * v9;
    if ( (unsigned __int8)v13[41] >= a2 )
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))&WPP_MAIN_CB.Dpc.TargetInfoAsUlong)(
        *((_QWORD *)v13 + 3),
        43LL,
        a5,
        a4,
        (__int64 *)va,
        8LL,
        va1,
        4LL,
        0LL);
  }
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v14, (__int64 *)va);
}
