/*
 * XREFs of ACPIDispatchIrpDepPdoQueryID @ 0x1C0007880
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x1C0007828 (ACPIBuildProcessDelayedDependencyExternalTrigger.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C000A32C (ACPIDevicePowerFlushQueue.c)
 *     AMLIIsNamedChildPresent @ 0x1C000DC00 (AMLIIsNamedChildPresent.c)
 *     AcpiEvaluateBiosMethodsOnPciRootBus @ 0x1C001954C (AcpiEvaluateBiosMethodsOnPciRootBus.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     ACPIBuildFlushQueue @ 0x1C006725C (ACPIBuildFlushQueue.c)
 *     AcpiArblibFreeArbiterInstance @ 0x1C00791D0 (AcpiArblibFreeArbiterInstance.c)
 *     AcpiArblibInitializeArbiter @ 0x1C007922C (AcpiArblibInitializeArbiter.c)
 */

__int64 __fastcall ACPIDispatchIrpDepPdoQueryID(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rdi
  KIRQL v5; // bl
  KIRQL v6; // r15
  __int64 v7; // rax
  _UNKNOWN **v8; // rcx
  char *v9; // rax
  unsigned int *v11; // rsi
  __int64 v12; // rbx
  int v13; // ebp
  _QWORD *v14; // rdi
  unsigned int v15; // ebx
  char **v16; // rax

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
      if ( (v7 & 0x200000000000LL) == 0 || !*(_QWORD *)(DeviceExtension + 552) || (v15 = 0, !AcpiInternalDeviceTable) )
      {
LABEL_7:
        if ( (*(_QWORD *)DeviceExtension & 0x8000000040000LL) == 0x8000000040000LL )
          FixedButtonDeviceObject = a1;
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v6);
        AcpiEvaluateBiosMethodsOnPciRootBus(DeviceExtension);
        return (*(__int64 (__fastcall **)(ULONG_PTR, __int64))(*(_QWORD *)(*(_QWORD *)(DeviceExtension + 16) + 24LL)
                                                             + 152LL))(
                 a1,
                 a2);
      }
      v16 = &AcpiInternalDeviceTable;
      while ( !strstr(*(const char **)(DeviceExtension + 552), *v16) )
      {
        v16 = &(&AcpiInternalDeviceTable)[2 * ++v15];
        if ( !*v16 )
          goto LABEL_7;
      }
      v9 = (&AcpiInternalDeviceTable)[2 * v15 + 1];
    }
    *(_QWORD *)(DeviceExtension + 16) = v9;
    goto LABEL_7;
  }
  if ( !(unsigned __int8)AMLIIsNamedChildPresent(*(_QWORD *)(DeviceExtension + 704), 1397900127LL) )
  {
    *(_BYTE *)(DeviceExtension + 176) = 0;
    goto LABEL_2;
  }
  *(_BYTE *)(DeviceExtension + 176) = 1;
  v11 = (unsigned int *)&AcpiArbiterResourceTypes;
  v12 = 0LL;
  while ( 1 )
  {
    v13 = AcpiArblibInitializeArbiter(DeviceExtension, *v11, DeviceExtension + 8 * ((unsigned int)v12 + 23LL));
    if ( v13 < 0 )
      break;
    v12 = (unsigned int)(v12 + 1);
    ++v11;
    if ( (unsigned int)v12 >= 3 )
      goto LABEL_2;
  }
  if ( (_DWORD)v12 )
  {
    v14 = (_QWORD *)(DeviceExtension + 8 * v12 + 184);
    do
    {
      AcpiArblibFreeArbiterInstance(*--v14);
      LODWORD(v12) = v12 - 1;
    }
    while ( (_DWORD)v12 );
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v6);
  return (unsigned int)v13;
}
