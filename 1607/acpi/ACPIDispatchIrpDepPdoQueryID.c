/*
 * XREFs of ACPIDispatchIrpDepPdoQueryID @ 0x1C000AEB0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x1C000AE60 (ACPIBuildProcessDelayedDependencyExternalTrigger.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C000E380 (ACPIDevicePowerFlushQueue.c)
 *     AMLIIsNamedChildPresent @ 0x1C0013F30 (AMLIIsNamedChildPresent.c)
 *     AcpiEvaluateBiosMethodsOnPciRootBus @ 0x1C0021740 (AcpiEvaluateBiosMethodsOnPciRootBus.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     ACPIBuildFlushQueue @ 0x1C00868A0 (ACPIBuildFlushQueue.c)
 *     AcpiArblibFreeArbiterInstance @ 0x1C009995C (AcpiArblibFreeArbiterInstance.c)
 *     AcpiArblibInitializeArbiter @ 0x1C00999B8 (AcpiArblibInitializeArbiter.c)
 */

__int64 __fastcall ACPIDispatchIrpDepPdoQueryID(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rdi
  KIRQL v5; // bl
  __int64 v6; // rdx
  KIRQL v7; // r15
  __int64 v8; // rax
  _UNKNOWN **v9; // rcx
  char *v10; // rax
  unsigned int *v12; // rsi
  __int64 v13; // rbx
  int v14; // ebp
  _QWORD *v15; // rdi
  unsigned int v16; // ebx
  char **v17; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  ACPIBuildProcessDelayedDependencyExternalTrigger(DeviceExtension);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  LOBYTE(v6) = 1;
  ACPIBuildFlushQueue(DeviceExtension, v6);
  ACPIDevicePowerFlushQueue(DeviceExtension);
  v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x2000000000LL) == 0 )
  {
LABEL_2:
    v8 = *(_QWORD *)(DeviceExtension + 8);
    v9 = &AcpiBusFilterIrpDispatch;
    if ( (v8 & 0x40) == 0 )
      v9 = &AcpiPdoIrpDispatch;
    *(_QWORD *)(DeviceExtension + 24) = v9;
    if ( (v8 & 0x1000000000LL) != 0 )
    {
      v10 = (char *)&AcpiProcessorIrpDispatch;
    }
    else if ( (v8 & 0x8000000) != 0 )
    {
      v10 = (char *)&AcpiThermalZoneIrpDispatch;
    }
    else
    {
      if ( (v8 & 0x200000000000LL) == 0 || !*(_QWORD *)(DeviceExtension + 560) || (v16 = 0, !AcpiInternalDeviceTable) )
      {
LABEL_7:
        if ( (*(_QWORD *)(DeviceExtension + 8) & 0x8000000040000LL) == 0x8000000040000LL )
          FixedButtonDeviceObject = a1;
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
        AcpiEvaluateBiosMethodsOnPciRootBus(DeviceExtension);
        return (*(__int64 (__fastcall **)(ULONG_PTR, __int64))(*(_QWORD *)(*(_QWORD *)(DeviceExtension + 24) + 24LL)
                                                             + 152LL))(
                 a1,
                 a2);
      }
      v17 = &AcpiInternalDeviceTable;
      while ( !strstr(*(const char **)(DeviceExtension + 560), *v17) )
      {
        v17 = &(&AcpiInternalDeviceTable)[2 * ++v16];
        if ( !*v17 )
          goto LABEL_7;
      }
      v10 = (&AcpiInternalDeviceTable)[2 * v16 + 1];
    }
    *(_QWORD *)(DeviceExtension + 24) = v10;
    goto LABEL_7;
  }
  if ( !(unsigned __int8)AMLIIsNamedChildPresent(*(_QWORD *)(DeviceExtension + 712), 1397900127LL) )
  {
    *(_BYTE *)(DeviceExtension + 184) = 0;
    goto LABEL_2;
  }
  *(_BYTE *)(DeviceExtension + 184) = 1;
  v12 = (unsigned int *)&AcpiArbiterResourceTypes;
  v13 = 0LL;
  while ( 1 )
  {
    v14 = AcpiArblibInitializeArbiter(DeviceExtension, *v12, DeviceExtension + 8 * ((unsigned int)v13 + 24LL));
    if ( v14 < 0 )
      break;
    v13 = (unsigned int)(v13 + 1);
    ++v12;
    if ( (unsigned int)v13 >= 3 )
      goto LABEL_2;
  }
  if ( (_DWORD)v13 )
  {
    v15 = (_QWORD *)(DeviceExtension + 8 * v13 + 192);
    do
    {
      AcpiArblibFreeArbiterInstance(*--v15);
      LODWORD(v13) = v13 - 1;
    }
    while ( (_DWORD)v13 );
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
  return (unsigned int)v14;
}
