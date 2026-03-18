/*
 * XREFs of ACPIFilterIrpFilterResourceRequirements @ 0x1C0067230
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalInterruptPolarityCacheStorePolarity @ 0x1C0006A68 (ACPIInternalInterruptPolarityCacheStorePolarity.c)
 *     PnpBiosUpdateResourceListWithSidebandResources @ 0x1C0067350 (PnpBiosUpdateResourceListWithSidebandResources.c)
 */

__int64 __fastcall ACPIFilterIrpFilterResourceRequirements(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // r13
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  _IO_STACK_LOCATION *v6; // rax
  unsigned int Status; // esi
  void *Information; // rbp
  int updated; // r15d
  __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r14
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF
  PVOID P; // [rsp+88h] [rbp+10h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                         + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v6 = a2->Tail.Overlay.CurrentStackLocation;
  v6[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIRootIrpCompleteRoutine;
  v6[-1].Context = &Event;
  v6[-1].Control = -32;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 720), a2);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = a2->IoStatus.Status;
  }
  if ( (int)(Status + 0x80000000) < 0 || Status == -1073741637 )
  {
    Information = (void *)a2->IoStatus.Information;
    if ( !Information )
      Information = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
    updated = PnpBiosUpdateResourceListWithSidebandResources(a1, Information, &P, DeviceExtension + 104);
    if ( updated >= 0 )
    {
      v11 = *(_QWORD *)(DeviceExtension + 104);
      v12 = v11 + 8;
      v13 = v11 + 8 + 32LL * *(unsigned int *)(v11 + 4);
      while ( v12 < v13 )
      {
        if ( *(_BYTE *)(v12 + 1) == 2 )
        {
          updated = ACPIInternalInterruptPolarityCacheStorePolarity(
                      DeviceExtension,
                      *(_DWORD *)(v12 + 12),
                      *(_DWORD *)(v12 + 16));
          if ( updated < 0 )
          {
            ExFreePoolWithTag(P, 0);
            goto LABEL_7;
          }
        }
        v12 += 32LL;
      }
      if ( Information )
        ExFreePoolWithTag(Information, 0);
      Status = updated;
      a2->IoStatus.Information = (unsigned __int64)P;
    }
  }
LABEL_7:
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return Status;
}
