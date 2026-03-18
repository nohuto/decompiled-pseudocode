/*
 * XREFs of ACPIProcessorStartDevice @ 0x1C001A890
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C000CB88 (ACPIThermalAcquireCoolingInterfaces.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C001A9B8 (ACPIInternalSetDeviceInterface.c)
 *     ACPIInternalEvaluateOST @ 0x1C003C84C (ACPIInternalEvaluateOST.c)
 *     ACPICheckModuleStarted @ 0x1C003DD58 (ACPICheckModuleStarted.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C006F778 (ACPIProcessorGetInitialApicId.c)
 *     ACPIProcessorBuildBootApicIds @ 0x1C006FC24 (ACPIProcessorBuildBootApicIds.c)
 */

__int64 __fastcall ACPIProcessorStartDevice(PDEVICE_OBJECT Pdo, PIRP Irp)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // rdi
  NTSTATUS InitialApicId; // ebx
  __int64 v7; // rdx
  unsigned int v8; // ecx
  _QWORD *v9; // rcx
  USHORT v11; // ax
  int started; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  USHORT NodeNumber; // [rsp+78h] [rbp+38h] BYREF
  unsigned int Data; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v17; // [rsp+88h] [rbp+48h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)Pdo);
  v5 = DeviceExtension;
  if ( *((_QWORD *)AcpiInformation + 4) )
  {
    InitialApicId = ACPIProcessorGetInitialApicId(DeviceExtension, &Data);
    if ( InitialApicId < 0 )
      goto LABEL_14;
    v7 = AcpiBootProcessorApicIds;
    *(_DWORD *)(v5 + 184) = Data;
    if ( !v7 )
    {
      InitialApicId = ACPIProcessorBuildBootApicIds();
      if ( InitialApicId < 0 )
        goto LABEL_14;
      v7 = AcpiBootProcessorApicIds;
    }
    v8 = 0;
    v17 = 0;
    if ( AcpiBootProcessorCount )
    {
      while ( *(_DWORD *)(v7 + 4LL * v8) != Data )
      {
        v17 = ++v8;
        if ( v8 >= AcpiBootProcessorCount )
          goto LABEL_18;
      }
    }
    else
    {
LABEL_18:
      if ( (*(_DWORD *)v5 & 0x4000LL) == 0 )
      {
        if ( IoGetDeviceNumaNode(Pdo, &NodeNumber) )
        {
          v11 = -1;
          NodeNumber = -1;
        }
        else
        {
          v11 = NodeNumber;
        }
        started = KeStartDynamicProcessor(*(unsigned int *)(v5 + 188), Data, v11, &v17);
        v14 = 163LL;
        if ( started >= 0 )
          v14 = 0LL;
        ACPIInternalEvaluateOST(v5, v13, v14);
      }
    }
  }
  else
  {
    Data = -1;
  }
  ACPIThermalAcquireCoolingInterfaces(v5);
  if ( (*(_DWORD *)v5 & 0x4000LL) != 0 )
  {
    InitialApicId = IoSetDevicePropertyData(Pdo, &DEVPKEY_Spare_Processor_Apic_Id, 0, 0, 7u, 4u, &Data);
  }
  else
  {
    InitialApicId = ACPIInternalSetDeviceInterface(Pdo, &GUID_DEVICE_PROCESSOR);
    if ( InitialApicId < 0 )
      goto LABEL_14;
  }
  if ( InitialApicId >= 0 )
    *(_DWORD *)(v5 + 312) = 2;
  v9 = *(_QWORD **)(v5 + 736);
  if ( (*v9 & 0x2000000000LL) != 0 )
    ACPICheckModuleStarted(v9, (unsigned int)InitialApicId);
LABEL_14:
  Irp->IoStatus.Status = InitialApicId;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)InitialApicId;
}
