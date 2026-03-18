/*
 * XREFs of ACPIDeviceCancelWaitWakeIrp @ 0x1C0037860
 * Callers:
 *     ACPIDeviceIrpWaitWakeRequestPending @ 0x1C0006B50 (ACPIDeviceIrpWaitWakeRequestPending.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0007374 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C0021140 (ACPIWakeEnableDisableAsync.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     ACPIWakeEmulationDisable @ 0x1C0042298 (ACPIWakeEmulationDisable.c)
 */

void __fastcall ACPIDeviceCancelWaitWakeIrp(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rbp
  __int64 i; // rdi
  __int64 v5; // rdx
  __int64 *v6; // rax
  void (__fastcall *v7)(__int64, __int64, __int64); // rbx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  for ( i = AcpiPowerWaitWakeList; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &AcpiPowerWaitWakeList )
    {
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
      IoReleaseCancelSpinLock(*(_BYTE *)(a2 + 69));
      return;
    }
    if ( *(_QWORD *)(i + 40) == DeviceExtension && *(_QWORD *)(i + 200) == a2 )
      break;
  }
  v5 = *(_QWORD *)i;
  v6 = *(__int64 **)(i + 8);
  if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || *v6 != i )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  ACPIWakeRemoveDevicesAndUpdate(0LL, 0LL);
  *(_DWORD *)(i + 108) |= 4u;
  v7 = *(void (__fastcall **)(__int64, __int64, __int64))(i + 192);
  *(_DWORD *)(i + 256) = -1073741536;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  IoReleaseCancelSpinLock(*(_BYTE *)(a2 + 69));
  v7(DeviceExtension, a2, 3221225760LL);
  if ( (*(_QWORD *)(DeviceExtension + 904) & 0x100000000LL) != 0 )
    ACPIWakeEmulationDisable(i);
  ACPIWakeEnableDisableAsync(
    DeviceExtension,
    0LL,
    (void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))ACPIDeviceCancelWaitWakeIrpCallBack,
    i);
}
