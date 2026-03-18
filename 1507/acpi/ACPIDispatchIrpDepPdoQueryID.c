/*
 * XREFs of ACPIDispatchIrpDepPdoQueryID @ 0x1C001AA90
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C000A38C (ACPIDevicePowerFlushQueue.c)
 *     AMLIIsNamedChildPresent @ 0x1C000D680 (AMLIIsNamedChildPresent.c)
 *     AcpiEvaluateBiosMethodsOnPciRootBus @ 0x1C00195C0 (AcpiEvaluateBiosMethodsOnPciRootBus.c)
 *     ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x1C001ABBC (ACPIBuildProcessDelayedDependencyExternalTrigger.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     ACPIBuildFlushQueue @ 0x1C006A9B0 (ACPIBuildFlushQueue.c)
 *     AcpiArblibFreeArbiterInstance @ 0x1C0079070 (AcpiArblibFreeArbiterInstance.c)
 *     AcpiArblibInitializeArbiter @ 0x1C00790CC (AcpiArblibInitializeArbiter.c)
 */

__int64 __fastcall ACPIDispatchIrpDepPdoQueryID(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rdi
  KIRQL v5; // bl
  KIRQL v6; // r15
  __int64 v7; // rax
  _UNKNOWN **v8; // rcx
  char *v9; // rax
  __int64 v10; // rdx
  int v11; // r8d
  unsigned int *v13; // rsi
  __int64 v14; // rbx
  int v15; // ebp
  _QWORD *v16; // rdi
  unsigned int v17; // ebx
  char **v18; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  ACPIBuildProcessDelayedDependencyExternalTrigger(DeviceExtension);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  ACPIBuildFlushQueue(DeviceExtension);
  ACPIDevicePowerFlushQueue(DeviceExtension);
  v6 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( (*(_QWORD *)DeviceExtension & 0x2000000000LL) == 0 )
  {
LABEL_2:
    v7 = *(_QWORD *)DeviceExtension;
    v8 = &AcpiBusFilterIrpDispatch;
    if ( (*(_QWORD *)DeviceExtension & 0x40) == 0 )
      v8 = &AcpiPdoIrpDispatch;
    *(_QWORD *)(DeviceExtension + 16) = v8;
    if ( (v7 & 0x1000000000LL) != 0 )
    {
      v9 = (char *)&AcpiProcessorIrpDispatch;
    }
    else if ( (v7 & 0x8000000) != 0 )
    {
      v9 = (char *)&AcpiThermalZoneIrpDispatch;
    }
    else
    {
      if ( (v7 & 0x200000000000LL) == 0 || !*(_QWORD *)(DeviceExtension + 552) || (v17 = 0, !AcpiInternalDeviceTable) )
      {
LABEL_7:
        if ( (*(_QWORD *)DeviceExtension & 0x8000000040000LL) == 0x8000000040000LL )
          FixedButtonDeviceObject = a1;
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v6);
        AcpiEvaluateBiosMethodsOnPciRootBus(DeviceExtension, v10, v11);
        return (*(__int64 (__fastcall **)(ULONG_PTR, __int64))(*(_QWORD *)(*(_QWORD *)(DeviceExtension + 16) + 24LL)
                                                             + 152LL))(
                 a1,
                 a2);
      }
      v18 = &AcpiInternalDeviceTable;
      while ( !strstr(*(const char **)(DeviceExtension + 552), *v18) )
      {
        v18 = &(&AcpiInternalDeviceTable)[2 * ++v17];
        if ( !*v18 )
          goto LABEL_7;
      }
      v9 = (&AcpiInternalDeviceTable)[2 * v17 + 1];
    }
    *(_QWORD *)(DeviceExtension + 16) = v9;
    goto LABEL_7;
  }
  if ( !AMLIIsNamedChildPresent(*(_QWORD *)(DeviceExtension + 704), 1397900127) )
  {
    *(_BYTE *)(DeviceExtension + 176) = 0;
    goto LABEL_2;
  }
  *(_BYTE *)(DeviceExtension + 176) = 1;
  v13 = (unsigned int *)&AcpiArbiterResourceTypes;
  v14 = 0LL;
  while ( 1 )
  {
    v15 = AcpiArblibInitializeArbiter(DeviceExtension, *v13, DeviceExtension + 8 * ((unsigned int)v14 + 23LL));
    if ( v15 < 0 )
      break;
    v14 = (unsigned int)(v14 + 1);
    ++v13;
    if ( (unsigned int)v14 >= 3 )
      goto LABEL_2;
  }
  if ( (_DWORD)v14 )
  {
    v16 = (_QWORD *)(DeviceExtension + 8 * v14 + 184);
    do
    {
      AcpiArblibFreeArbiterInstance(*--v16);
      LODWORD(v14) = v14 - 1;
    }
    while ( (_DWORD)v14 );
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v6);
  return (unsigned int)v15;
}
