/*
 * XREFs of DxgkInitialPower @ 0x1C00D66C0
 * Callers:
 *     DriverEntry @ 0x1C0188018 (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 DxgkInitialPower()
{
  NTSTATUS v0; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  _QWORD *v7; // rax
  void *v8; // rcx
  __int64 v9; // rax
  NTSTATUS v10; // eax
  __int64 v11; // rcx
  NTSTATUS v12; // eax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  char v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = 0;
  v0 = ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &v15, 1u);
  v5 = v0;
  if ( v0 < 0 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError(v2);
    v8 = ZwPowerInformation;
LABEL_6:
    v7[3] = DxgkInitialPower;
    v7[4] = v8;
    v7[5] = v5;
    WdLogEvent5_WdError(v7);
    return (unsigned int)v5;
  }
  byte_1C0046C58 = v15;
  if ( !v15 )
    return (unsigned int)v5;
  v9 = WdLogNewEntry5_WdEvent(v2, v1, v3, v4);
  *(_QWORD *)(v9 + 32) = 0LL;
  *(_QWORD *)(v9 + 24) = DxgkInitialPower;
  WdLogEvent5_WdEvent(v9);
  v10 = PoRegisterPowerSettingCallback(
          g_pDeviceObject,
          &GUID_MONITOR_POWER_ON,
          DpiMiracastHandlePowerCallback,
          0LL,
          &Handle);
  v5 = v10;
  if ( v10 < 0
    || (v12 = PoRegisterPowerSettingCallback(
                g_pDeviceObject,
                &GUID_LOW_POWER_EPOCH,
                DpiMiracastHandlePowerCallback,
                0LL,
                &qword_1C0046FD8),
        v5 = v12,
        v12 < 0) )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v8 = PoRegisterPowerSettingCallback;
    goto LABEL_6;
  }
  dword_1C0046FE0 = 0;
  byte_1C0046C59 = 0;
  qword_1C0047068 = (__int64)IoAllocateWorkItem(g_pDeviceObject);
  if ( qword_1C0047068 )
  {
    KeInitializeTimerEx(&Timer, SynchronizationTimer);
    KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)DpiMiracastConnectedStandbyDelayTimerDpc, 0LL);
  }
  else
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdLowResource(v13);
    LODWORD(v5) = -1073741801;
    v14[4] = IoAllocateWorkItem;
    v14[3] = DxgkInitialPower;
    v14[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v14);
  }
  return (unsigned int)v5;
}
