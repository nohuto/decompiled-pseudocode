/*
 * XREFs of ACPIBuildPdo @ 0x1C0021478
 * Callers:
 *     ACPIDetectPdoDevices @ 0x1C000D384 (ACPIDetectPdoDevices.c)
 *     ACPIDetectDockDevices @ 0x1C001EB70 (ACPIDetectDockDevices.c)
 * Callees:
 *     AMLIIsNamedChildPresent @ 0x1C0013F30 (AMLIIsNamedChildPresent.c)
 *     ACPIAddInitializationDependencies @ 0x1C00207E0 (ACPIAddInitializationDependencies.c)
 *     AcpiEvaluateBiosMethodsOnPciRootBus @ 0x1C0021740 (AcpiEvaluateBiosMethodsOnPciRootBus.c)
 *     ACPIIsDebuggingDevice @ 0x1C0088144 (ACPIIsDebuggingDevice.c)
 *     AcpiArblibFreeArbiterInstance @ 0x1C009995C (AcpiArblibFreeArbiterInstance.c)
 *     AcpiArblibInitializeArbiter @ 0x1C00999B8 (AcpiArblibInitializeArbiter.c)
 */

NTSTATUS __fastcall ACPIBuildPdo(struct _DRIVER_OBJECT *a1, __int64 a2, struct _DEVICE_OBJECT *a3, char a4)
{
  __int64 *v4; // rsi
  PDEVICE_OBJECT AttachedDeviceReference; // r15
  NTSTATUS result; // eax
  KIRQL v10; // si
  PDEVICE_OBJECT v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // edi
  char **v14; // rax
  char *v15; // rax
  int v16; // esi
  unsigned int *v17; // r14
  __int64 v18; // rdi
  _QWORD *v19; // rbx
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp+38h] BYREF

  v4 = *(__int64 **)(a2 + 712);
  AttachedDeviceReference = 0LL;
  DeviceObject = 0LL;
  result = IoCreateDevice(a1, 0, 0LL, 0x32u, 0x180u, 0, &DeviceObject);
  if ( result < 0 )
    return result;
  if ( a4 )
  {
    if ( (*(_DWORD *)(a2 + 8) & 0x100000) != 0 )
    {
      a4 = 0;
    }
    else
    {
      AttachedDeviceReference = IoGetAttachedDeviceReference(a3);
      if ( !AttachedDeviceReference )
      {
        v16 = -1073741810;
        goto LABEL_44;
      }
    }
  }
  if ( (*(_QWORD *)(a2 + 8) & 0x2000000000LL) != 0 )
  {
    if ( !AMLIIsNamedChildPresent(v4, 1397900127) )
    {
      *(_BYTE *)(a2 + 184) = 0;
      goto LABEL_6;
    }
    *(_BYTE *)(a2 + 184) = 1;
    v17 = (unsigned int *)&AcpiArbiterResourceTypes;
    v18 = 0LL;
    while ( 1 )
    {
      v16 = AcpiArblibInitializeArbiter(a2, *v17, a2 + 8 * ((unsigned int)v18 + 24LL));
      if ( v16 < 0 )
        break;
      v18 = (unsigned int)(v18 + 1);
      ++v17;
      if ( (unsigned int)v18 >= 3 )
        goto LABEL_6;
    }
    if ( (_DWORD)v18 )
    {
      v19 = (_QWORD *)(a2 + 8 * v18 + 192);
      do
      {
        AcpiArblibFreeArbiterInstance(*--v19);
        LODWORD(v18) = v18 - 1;
      }
      while ( (_DWORD)v18 );
    }
LABEL_44:
    IoDeleteDevice(DeviceObject);
    return v16;
  }
LABEL_6:
  v10 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  DeviceObject->DeviceExtension = (void *)a2;
  v11 = DeviceObject;
  *(_QWORD *)(a2 + 720) = DeviceObject;
  *(_QWORD *)(a2 + 736) = v11;
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 684));
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 8), 0xFFFFFFFFFFFFFC00uLL);
  _InterlockedOr64((volatile signed __int64 *)(a2 + 8), 0x20uLL);
  LODWORD(v11) = *(_DWORD *)(a2 + 320);
  *(_QWORD *)(a2 + 8) |= 0x800uLL;
  *(_QWORD *)(a2 + 912) |= 0x800uLL;
  *(_DWORD *)(a2 + 320) = 0;
  *(_QWORD *)(a2 + 24) = &AcpiPdoIrpDispatch;
  *(_DWORD *)(a2 + 324) = (_DWORD)v11;
  if ( a4 )
  {
    *(_QWORD *)(a2 + 728) = AttachedDeviceReference;
    _InterlockedOr64((volatile signed __int64 *)(a2 + 8), 0x40uLL);
    *(_QWORD *)(a2 + 24) = &AcpiBusFilterIrpDispatch;
    DeviceObject->StackSize = AttachedDeviceReference->StackSize + 1;
    DeviceObject->AlignmentRequirement = AttachedDeviceReference->AlignmentRequirement;
    if ( (AttachedDeviceReference->Flags & 0x2000) != 0 )
      DeviceObject->Flags |= 0x2000u;
  }
  v12 = *(_QWORD *)(a2 + 8);
  if ( (v12 & 0x1000000000LL) != 0 )
  {
    v15 = (char *)&AcpiProcessorIrpDispatch;
  }
  else if ( (v12 & 0x8000000) != 0 )
  {
    v15 = (char *)&AcpiThermalZoneIrpDispatch;
  }
  else
  {
    if ( (v12 & 0x200000000000LL) == 0 )
      goto LABEL_18;
    if ( !*(_QWORD *)(a2 + 560) )
      goto LABEL_18;
    v13 = 0;
    if ( !AcpiInternalDeviceTable )
      goto LABEL_18;
    v14 = &AcpiInternalDeviceTable;
    while ( !strstr(*(const char **)(a2 + 560), *v14) )
    {
      v14 = &(&AcpiInternalDeviceTable)[2 * ++v13];
      if ( !*v14 )
        goto LABEL_18;
    }
    v15 = (&AcpiInternalDeviceTable)[2 * v13 + 1];
  }
  *(_QWORD *)(a2 + 24) = v15;
LABEL_18:
  if ( (*(_QWORD *)(a2 + 8) & 0x8000000040000LL) == 0x8000000040000LL )
    FixedButtonDeviceObject = (__int64)DeviceObject;
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v10);
  ACPIAddInitializationDependencies(a2);
  if ( (*(_BYTE *)(a2 + 912) & 0x40) != 0 )
    *(_QWORD *)(a2 + 24) = &AcpiDepPdoIrpDispatch;
  AcpiEvaluateBiosMethodsOnPciRootBus(a2);
  if ( (*(_QWORD *)(a2 + 8) & 0x8000000000000LL) == 0 && (int)ACPIIsDebuggingDevice(DeviceObject) >= 0 )
    DeviceObject->Flags |= 0x2000000u;
  DeviceObject->Flags &= ~0x80u;
  if ( (*(_QWORD *)(a2 + 8) & 0x10000000000000LL) != 0 )
    DeviceObject->Flags |= 8u;
  return 0;
}
