/*
 * XREFs of ACPIProcessorStartDevice @ 0x1C000A650
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C0005F04 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C000A770 (ACPIInternalSetDeviceInterface.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C00135A4 (ACPIThermalAcquireCoolingInterfaces.c)
 *     ACPIInternalEvaluateOST @ 0x1C004FE38 (ACPIInternalEvaluateOST.c)
 *     ACPICheckModuleStarted @ 0x1C0051108 (ACPICheckModuleStarted.c)
 *     WPP_RECORDER_SF_ddqss @ 0x1C00552D8 (WPP_RECORDER_SF_ddqss.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C0082CB4 (ACPIProcessorGetInitialApicId.c)
 *     ACPIProcessorBuildBootApicIds @ 0x1C00831E8 (ACPIProcessorBuildBootApicIds.c)
 */

__int64 __fastcall ACPIProcessorStartDevice(PDEVICE_OBJECT PhysicalDeviceObject, PIRP Irp)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // rbx
  NTSTATUS InitialApicId; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // rax
  const char *v12; // rdi
  __int64 *v13; // rdx
  USHORT v14; // ax
  int started; // eax
  __int64 v16; // rdx
  __int64 v17; // rdx
  const char *v18; // rcx
  __int64 v19; // r8
  USHORT NodeNumber; // [rsp+98h] [rbp+48h] BYREF
  unsigned int Data; // [rsp+A0h] [rbp+50h] BYREF
  int v22; // [rsp+A8h] [rbp+58h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)PhysicalDeviceObject);
  v5 = DeviceExtension;
  if ( *((_QWORD *)AcpiInformation + 4) )
  {
    InitialApicId = ACPIProcessorGetInitialApicId(DeviceExtension, &Data);
    if ( InitialApicId < 0 )
      goto LABEL_14;
    v7 = AcpiBootProcessorApicIds;
    *(_DWORD *)(v5 + 192) = Data;
    if ( !v7 )
    {
      InitialApicId = ACPIProcessorBuildBootApicIds();
      if ( InitialApicId < 0 )
        goto LABEL_14;
      v7 = AcpiBootProcessorApicIds;
    }
    v8 = 0LL;
    v22 = 0;
    if ( AcpiBootProcessorCount )
    {
      while ( *(_DWORD *)(v7 + 4 * v8) != Data )
      {
        v8 = (unsigned int)(v8 + 1);
        v22 = v8;
        if ( (unsigned int)v8 >= AcpiBootProcessorCount )
          goto LABEL_18;
      }
    }
    else
    {
LABEL_18:
      v11 = *(_QWORD *)(v5 + 8);
      if ( (v11 & 0x4000) == 0 )
      {
        v12 = (const char *)qword_1C002C340;
        v13 = qword_1C002C340;
        if ( (v11 & 0x200000000000LL) != 0 )
          v13 = *(__int64 **)(v5 + 560);
        WPP_RECORDER_SF_ddqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v13, AcpiBootProcessorCount, Data);
        if ( IoGetDeviceNumaNode(PhysicalDeviceObject, &NodeNumber) )
        {
          v14 = -1;
          NodeNumber = -1;
        }
        else
        {
          v14 = NodeNumber;
        }
        started = KeStartDynamicProcessor(*(unsigned int *)(v5 + 196), Data, v14, &v22);
        if ( started >= 0 )
        {
          v19 = 0LL;
        }
        else
        {
          v17 = *(_QWORD *)(v5 + 8);
          v18 = (const char *)qword_1C002C340;
          if ( (v17 & 0x200000000000LL) != 0 )
          {
            v12 = *(const char **)(v5 + 560);
            if ( (v17 & 0x400000000000LL) != 0 )
              v18 = *(const char **)(v5 + 568);
          }
          WPP_RECORDER_SF_Dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0xDu,
            (__int64)&WPP_2a74c23e51f033d915f3b15bc307c942_Traceguids,
            started,
            v5,
            v12,
            v18);
          v19 = 163LL;
        }
        ACPIInternalEvaluateOST(v5, v16, v19);
      }
    }
  }
  else
  {
    Data = -1;
  }
  ACPIThermalAcquireCoolingInterfaces(v5);
  if ( (*(_DWORD *)(v5 + 8) & 0x4000LL) != 0 )
  {
    InitialApicId = IoSetDevicePropertyData(PhysicalDeviceObject, &DEVPKEY_Spare_Processor_Apic_Id, 0, 0, 7u, 4u, &Data);
  }
  else
  {
    InitialApicId = ACPIInternalSetDeviceInterface(PhysicalDeviceObject, &GUID_DEVICE_PROCESSOR);
    if ( InitialApicId < 0 )
      goto LABEL_14;
  }
  if ( InitialApicId >= 0 )
    *(_DWORD *)(v5 + 320) = 2;
  v9 = *(_QWORD *)(v5 + 744);
  if ( (*(_QWORD *)(v9 + 8) & 0x2000000000LL) != 0 )
    ACPICheckModuleStarted(v9, (unsigned int)InitialApicId);
LABEL_14:
  Irp->IoStatus.Status = InitialApicId;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)InitialApicId;
}
