/*
 * XREFs of ACPIGlobalInitialize @ 0x1C00A6F5C
 * Callers:
 *     DriverEntry @ 0x1C00A8520 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000E748 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C0014508 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     ACPIGetUsedDebuggingDevices @ 0x1C0082FE0 (ACPIGetUsedDebuggingDevices.c)
 */

void *ACPIGlobalInitialize()
{
  int v0; // edx
  __int64 v1; // rbx

  AcpiHalDispatchTable = 1094930505;
  qword_1C0074848 = (__int64)ACPIGpeHalEnableDisableEvents;
  dword_1C0074844 = 2;
  qword_1C0074850 = (__int64)ACPIEnableInitializeACPI;
  qword_1C0074858 = (__int64)ACPIWakeEnableWakeEvents;
  qword_1C0074860 = (__int64)ACPIWakeMarkHiberPhase;
  ((void (__fastcall *)(int *, __int64 *))HalDispatchTable->HalInitPowerManagement)(
    &AcpiHalDispatchTable,
    &PmHalDispatchTable);
  v1 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(PmHalDispatchTable + 88))(1413763922LL, 0LL, 0LL);
  if ( !v1 )
  {
    v1 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(PmHalDispatchTable + 88))(1413763928LL, 0LL, 0LL);
    if ( !v1 )
    {
      LOBYTE(v0) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v0,
        6,
        10,
        (__int64)&WPP_71c9c355fd613e34483cf3f827b845ba_Traceguids);
      KeBugCheckEx(0xA5u, 0x11uLL, 1uLL, 0LL, 0LL);
    }
  }
  LOBYTE(v0) = 4;
  WPP_RECORDER_SF_q(
    WPP_GLOBAL_Control->DeviceExtension,
    v0,
    6,
    30,
    (__int64)&WPP_37e0335c93fc3714a3de242c1cbb5d62_Traceguids,
    v1);
  *((_BYTE *)AcpiInformation + 84) = 1;
  *(_QWORD *)AcpiInformation = v1;
  ACPIGetUsedDebuggingDevices();
  return AcpiInformation;
}
