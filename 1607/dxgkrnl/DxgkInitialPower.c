/*
 * XREFs of DxgkInitialPower @ 0x1C00F9CE0
 * Callers:
 *     DriverEntry @ 0x1C01B7018 (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 DxgkInitialPower()
{
  NTSTATUS v0; // eax
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  char OutputBuffer; // [rsp+40h] [rbp+8h] BYREF

  OutputBuffer = 0;
  v0 = ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer, 1u);
  v2 = v0;
  if ( v0 < 0 )
    goto LABEL_4;
  byte_1C0056E99 = OutputBuffer;
  if ( !OutputBuffer )
    return (unsigned int)v2;
  v5 = WdLogNewEntry5_WdEvent(v1);
  *(_QWORD *)(v5 + 24) = 0LL;
  WdLogEvent5_WdEvent(v5);
  v6 = PoRegisterPowerSettingCallback(
         (PDEVICE_OBJECT)g_pDeviceObject,
         &GUID_MONITOR_POWER_ON,
         DpiMiracastHandlePowerCallback,
         0LL,
         &Handle);
  v2 = v6;
  if ( v6 < 0
    || (v7 = PoRegisterPowerSettingCallback(
               (PDEVICE_OBJECT)g_pDeviceObject,
               &GUID_LOW_POWER_EPOCH,
               DpiMiracastHandlePowerCallback,
               0LL,
               &qword_1C0057218),
        v2 = v7,
        v7 < 0) )
  {
LABEL_4:
    v4 = WdLogNewEntry5_WdError(v1);
    *(_QWORD *)(v4 + 24) = v2;
    WdLogEvent5_WdError(v4);
    return (unsigned int)v2;
  }
  dword_1C0057220 = 0;
  byte_1C0056E9A = 0;
  qword_1C00572A8 = (__int64)IoAllocateWorkItem((PDEVICE_OBJECT)g_pDeviceObject);
  if ( qword_1C00572A8 )
  {
    KeInitializeTimerEx(&Timer, SynchronizationTimer);
    KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)DpiMiracastConnectedStandbyDelayTimerDpc, 0LL);
  }
  else
  {
    v9 = WdLogNewEntry5_WdLowResource(v8);
    LODWORD(v2) = -1073741801;
    *(_QWORD *)(v9 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v9);
  }
  return (unsigned int)v2;
}
