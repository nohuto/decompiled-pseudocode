/*
 * XREFs of DpiPdoAddPdo @ 0x1C00EF39C
 * Callers:
 *     DpiPdoHandleChildConnectionChange @ 0x1C00EF2B8 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C000B478 (IsInternalVideoOutput.c)
 *     DpiSignalVideoOutputCreateCompletion @ 0x1C002A998 (DpiSignalVideoOutputCreateCompletion.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00C1EE4 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00C1F58 (DpiAcquireCoreSyncAccessSafe.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C00ED690 (WdmlibIoCreateDeviceSecure.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C00EE608 (MonitorCreatePhysicalMonitor.c)
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x1C00EE780 (DpiPdoGetDeviceIdFromDescriptor.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C00EE86C (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     DpiPdoGetDeviceDescriptor @ 0x1C00EF834 (DpiPdoGetDeviceDescriptor.c)
 *     DpiPdoRemovePdo @ 0x1C019C49C (DpiPdoRemovePdo.c)
 *     ?DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C01A0E90 (-DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 */

__int64 __fastcall DpiPdoAddPdo(
        __int64 a1,
        __int64 a2,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a3,
        char a4,
        char a5,
        BOOLEAN a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  __int64 v7; // r15
  unsigned int *v10; // rdx
  char v11; // bl
  unsigned int *DeviceExtension; // rsi
  unsigned int *v13; // rcx
  unsigned int *v14; // rax
  int DeviceDescriptor; // eax
  __int64 v16; // rcx
  void *v17; // r12
  __int64 v18; // rdi
  GUID *DeviceClassGuid; // rax
  NTSTATUS v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  _DWORD *PoolWithTag; // rax
  __int64 v24; // rcx
  NTSTATUS v25; // eax
  PIO_WORKITEM WorkItem; // rax
  unsigned int v27; // eax
  unsigned int **v28; // rax
  __int64 v29; // r9
  int PhysicalMonitor; // eax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rcx
  PVOID *v45; // rax
  struct _IO_WORKITEM *v46; // rcx
  void *v47; // rcx
  int DeviceCharacteristics; // [rsp+20h] [rbp-50h]
  BOOLEAN Exclusive; // [rsp+28h] [rbp-48h]
  char v50; // [rsp+50h] [rbp-20h]
  char v51; // [rsp+51h] [rbp-1Fh]
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-18h] BYREF
  _QWORD v53[2]; // [rsp+60h] [rbp-10h] BYREF
  char v54; // [rsp+B0h] [rbp+40h]

  v7 = *(_QWORD *)(a1 + 64);
  DeviceObject = 0LL;
  v10 = *(unsigned int **)(v7 + 3440);
  v11 = 0;
  memset(v53, 0, sizeof(v53));
  DeviceExtension = 0LL;
  v54 = 0;
  v13 = *(unsigned int **)v10;
  v14 = v10;
  v51 = 0;
  v50 = 0;
  if ( *(unsigned int **)v10 != v10 )
  {
    while ( 1 )
    {
      DeviceExtension = v14;
      if ( v14[126] == *(_DWORD *)(a2 + 24) )
        break;
      v14 = v13;
      v13 = *(unsigned int **)v13;
      if ( v13 == v10 )
        goto LABEL_2;
    }
    v11 = 1;
    DeviceObject = (PDEVICE_OBJECT)*((_QWORD *)v14 + 3);
    if ( !a5 )
    {
      LODWORD(v18) = 0x40000000;
      v35 = WdLogNewEntry5_WdEvent(v13);
      *(_QWORD *)(v35 + 24) = *(unsigned int *)(a2 + 24);
      WdLogEvent5_WdEvent(v35);
      v17 = (void *)v53[1];
      goto LABEL_22;
    }
  }
LABEL_2:
  DeviceDescriptor = DpiPdoGetDeviceDescriptor(a1, a2, a3, a4, a5, a6);
  v17 = (void *)v53[1];
  LODWORD(v18) = DeviceDescriptor;
  if ( DeviceDescriptor < 0 )
  {
    v36 = WdLogNewEntry5_WdEvent(v16);
    *(_QWORD *)(v36 + 24) = *(unsigned int *)(a2 + 24);
    WdLogEvent5_WdEvent(v36);
    if ( *(_DWORD *)a2 != 1 )
      goto LABEL_21;
  }
  else if ( DeviceDescriptor == 259 )
  {
    goto LABEL_24;
  }
  if ( v11 == 1 )
  {
    if ( v17 == *((void **)DeviceExtension + 116) )
    {
      LODWORD(v18) = 0x40000000;
      goto LABEL_22;
    }
    *((_BYTE *)DeviceExtension + 511) = 1;
    v37 = WdLogNewEntry5_WdEvent(v16);
    *(_QWORD *)(v37 + 24) = DeviceObject;
    WdLogEvent5_WdEvent(v37);
    DpiPdoRemovePdo(a1, a2, a7);
  }
  DeviceClassGuid = &GUID_DEVCLASS_MONITOR;
  if ( *(_DWORD *)a2 != 1 )
    DeviceClassGuid = &GUID_SD_PDO;
  v20 = WdmlibIoCreateDeviceSecure(
          *(PDRIVER_OBJECT *)(*(_QWORD *)(v7 + 40) + 32LL),
          0x3D8u,
          0LL,
          0x1Cu,
          0x180u,
          Exclusive,
          &SDDL_DEVOBJ_SYS_ALL_ADM_ALL,
          DeviceClassGuid,
          &DeviceObject);
  v18 = v20;
  if ( v20 < 0 )
    goto LABEL_38;
  v54 = 1;
  DeviceExtension = (unsigned int *)DeviceObject->DeviceExtension;
  DeviceExtension[4] = 1953656900;
  DeviceExtension[5] = 5;
  *((_QWORD *)DeviceExtension + 3) = DeviceObject;
  *((_QWORD *)DeviceExtension + 4) = a1;
  *((_QWORD *)DeviceExtension + 5) = *(_QWORD *)(v7 + 40);
  v22 = *(_QWORD *)(v7 + 48);
  DeviceExtension[71] = 1;
  *((_BYTE *)DeviceExtension + 56) = 1;
  DeviceExtension[70] = 1;
  *((_QWORD *)DeviceExtension + 6) = v22;
  DeviceExtension[71] = *(_DWORD *)(a2 + 52);
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x70uLL, 0x74727044u);
  *((_QWORD *)DeviceExtension + 21) = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[26] = 1;
    v25 = ExInitializeResourceLite(*((PERESOURCE *)DeviceExtension + 21));
    v18 = v25;
    if ( v25 >= 0 )
    {
      v51 = 1;
      WorkItem = IoAllocateWorkItem(DeviceObject);
      *((_QWORD *)DeviceExtension + 119) = WorkItem;
      if ( WorkItem )
      {
        *((_QWORD *)DeviceExtension + 14) = DpiPdoDispatchInternalIoctl;
        *((_QWORD *)DeviceExtension + 16) = DpiPdoDispatchPnp;
        *((_QWORD *)DeviceExtension + 17) = DpiPdoDispatchPower;
        *((_QWORD *)DeviceExtension + 36) = DpiPdoHandleStartDevice;
        *((_QWORD *)DeviceExtension + 40) = DpiPdoHandleStopDevice;
        *((_QWORD *)DeviceExtension + 45) = DpiPdoHandleQueryCapabilities;
        *((_QWORD *)DeviceExtension + 55) = DpiPdoHandleQueryId;
        *((_QWORD *)DeviceExtension + 43) = DpiPdoHandleQueryDeviceRelations;
        *((_QWORD *)DeviceExtension + 48) = DpiPdoHandleQueryDeviceText;
        *((_QWORD *)DeviceExtension + 57) = DpiPdoHandleQueryBusInformation;
        *((_QWORD *)DeviceExtension + 117) = a2;
        DeviceExtension[124] = *(_DWORD *)a2;
        DeviceExtension[125] = *(_DWORD *)(a2 + 20);
        v27 = *(_DWORD *)(a2 + 24);
        DeviceExtension[245] = 0;
        DeviceExtension[126] = v27;
        DeviceExtension[244] = a3;
        *((_WORD *)DeviceExtension + 254) = 1;
        *((_BYTE *)DeviceExtension + 511) = 0;
        KeWaitForSingleObject((PVOID)(v7 + 3224), Executive, 0, 0, 0LL);
        *(_QWORD *)(a2 + 40) = DeviceObject;
        KeReleaseMutex((PRKMUTEX)(v7 + 3224), 0);
        v28 = *(unsigned int ***)(v7 + 3448);
        if ( *v28 != (unsigned int *)(v7 + 3440) )
          __fastfail(3u);
        *(_QWORD *)DeviceExtension = v7 + 3440;
        *((_QWORD *)DeviceExtension + 1) = v28;
        *v28 = DeviceExtension;
        *(_QWORD *)(v7 + 3448) = DeviceExtension;
        ++*(_DWORD *)(v7 + 3456);
        v50 = 1;
        if ( DeviceExtension[124] != 1 )
        {
LABEL_19:
          LODWORD(v18) = DpiPdoGetDeviceIdFromDescriptor((__int64)DeviceObject, (__int64)v53);
          if ( (int)v18 >= 0 )
          {
LABEL_20:
            DpiPdoGetDeviceContainerIdFromDescriptor((__int64)DeviceObject);
            DeviceObject->Flags |= 4u;
            DeviceObject->Flags |= 0x2000u;
            DeviceObject->Flags &= ~0x4000u;
            DeviceObject->Flags &= ~0x80u;
            v33 = WdLogNewEntry5_WdEvent(v32);
            *(_QWORD *)(v33 + 24) = DeviceObject;
            WdLogEvent5_WdEvent(v33);
            goto LABEL_21;
          }
          if ( DeviceExtension[124] == 1 )
          {
            LODWORD(v18) = 0;
            goto LABEL_20;
          }
LABEL_21:
          if ( (_DWORD)v18 == 259 )
            goto LABEL_24;
          goto LABEL_22;
        }
        LODWORD(v18) = DpiAcquireCoreSyncAccessSafe(a1, 1);
        if ( (int)v18 < 0 )
          goto LABEL_21;
        if ( a3 != D3DKMDT_VOT_UNINITIALIZED )
        {
          v40 = DmmSetTemporaryVideoOutputTechnology(*(void *const *)(v7 + 3688), DeviceExtension[126], a3);
          v18 = v40;
          if ( v40 >= 0 )
          {
LABEL_16:
            LOBYTE(v29) = IsInternalVideoOutput(*(_DWORD *)(a2 + 4));
            PhysicalMonitor = MonitorCreatePhysicalMonitor(
                                *(DXGADAPTER **)(v7 + 3688),
                                DeviceExtension[126],
                                DeviceObject,
                                v29,
                                DeviceCharacteristics,
                                a7);
            v18 = PhysicalMonitor;
            if ( PhysicalMonitor < 0 )
            {
              v43 = WdLogNewEntry5_WdError(v31);
              *(_QWORD *)(v43 + 24) = v18;
              WdLogEvent5_WdError(v43);
            }
LABEL_18:
            DpiReleaseCoreSyncAccessSafe(a1, 1);
            if ( (int)v18 < 0 )
              goto LABEL_21;
            goto LABEL_19;
          }
          v42 = WdLogNewEntry5_WdError(v41);
          *(_QWORD *)(v42 + 24) = v18;
          WdLogEvent5_WdError(v42);
        }
        if ( (int)v18 < 0 )
          goto LABEL_18;
        goto LABEL_16;
      }
      goto LABEL_39;
    }
LABEL_38:
    v38 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v38 + 24) = v18;
    WdLogEvent5_WdError(v38);
    goto LABEL_21;
  }
LABEL_39:
  LODWORD(v18) = -1073741801;
  v39 = WdLogNewEntry5_WdLowResource(v24);
  *(_QWORD *)(v39 + 24) = -1073741801LL;
  WdLogEvent5_WdLowResource(v39);
LABEL_22:
  if ( *(_BYTE *)(a2 + 28) == 1 )
  {
    KeWaitForSingleObject((PVOID)(v7 + 3224), Executive, 0, 0, 0LL);
    *(_BYTE *)(a2 + 28) = 0;
    KeReleaseMutex((PRKMUTEX)(v7 + 3224), 0);
    DpiSignalVideoOutputCreateCompletion(a1);
  }
LABEL_24:
  if ( (int)v18 < 0 && v54 == 1 )
  {
    if ( v50 == 1 )
    {
      v44 = *(_QWORD **)DeviceExtension;
      v45 = (PVOID *)*((_QWORD *)DeviceExtension + 1);
      if ( *(unsigned int **)(*(_QWORD *)DeviceExtension + 8LL) != DeviceExtension || *v45 != DeviceExtension )
        __fastfail(3u);
      *v45 = v44;
      v44[1] = v45;
      --*(_DWORD *)(v7 + 3456);
    }
    KeWaitForSingleObject((PVOID)(v7 + 3224), Executive, 0, 0, 0LL);
    *(_QWORD *)(a2 + 40) = 0LL;
    KeReleaseMutex((PRKMUTEX)(v7 + 3224), 0);
    if ( *((_QWORD *)DeviceExtension + 121) )
      RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 60);
    if ( v51 == 1 )
      ExDeleteResourceLite(*((PERESOURCE *)DeviceExtension + 21));
    v46 = (struct _IO_WORKITEM *)*((_QWORD *)DeviceExtension + 119);
    if ( v46 )
      IoFreeWorkItem(v46);
    v47 = (void *)*((_QWORD *)DeviceExtension + 21);
    if ( v47 )
    {
      ExFreePoolWithTag(v47, 0);
      *((_QWORD *)DeviceExtension + 21) = 0LL;
    }
    if ( DeviceObject )
    {
      IoDeleteDevice(DeviceObject);
      DeviceObject = 0LL;
    }
  }
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  return (unsigned int)v18;
}
