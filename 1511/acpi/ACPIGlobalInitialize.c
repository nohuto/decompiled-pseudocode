/*
 * XREFs of ACPIGlobalInitialize @ 0x1C00849A8
 * Callers:
 *     DriverEntry @ 0x1C0084228 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     ACPIGetUsedDebuggingDevices @ 0x1C0065E20 (ACPIGetUsedDebuggingDevices.c)
 */

void *ACPIGlobalInitialize()
{
  __int64 v0; // rcx

  AcpiHalDispatchTable = 1094930505;
  qword_1C005A3A8 = (__int64)ACPIGpeHalEnableDisableEvents;
  dword_1C005A3A4 = 2;
  qword_1C005A3B0 = (__int64)ACPIEnableInitializeACPI;
  qword_1C005A3B8 = (__int64)ACPIWakeEnableWakeEvents;
  qword_1C005A3C0 = (__int64)ACPIWakeMarkHiberPhase;
  ((void (__fastcall *)(int *, __int64 *))HalDispatchTable->HalInitPowerManagement)(
    &AcpiHalDispatchTable,
    &PmHalDispatchTable);
  v0 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(PmHalDispatchTable + 88))(1413763922LL, 0LL, 0LL);
  if ( !v0 )
  {
    v0 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(PmHalDispatchTable + 88))(1413763928LL, 0LL, 0LL);
    if ( !v0 )
      KeBugCheckEx(0xA5u, 0x11uLL, 1uLL, 0LL, 0LL);
  }
  *((_BYTE *)AcpiInformation + 84) = 1;
  *(_QWORD *)AcpiInformation = v0;
  ACPIGetUsedDebuggingDevices();
  return AcpiInformation;
}
