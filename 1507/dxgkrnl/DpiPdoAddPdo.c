/*
 * XREFs of DpiPdoAddPdo @ 0x1C00C75F0
 * Callers:
 *     DpiPdoHandleChildConnectionChange @ 0x1C00C7510 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C0004FC0 (IsInternalVideoOutput.c)
 *     DpiSignalVideoOutputCreateCompletion @ 0x1C0028388 (DpiSignalVideoOutputCreateCompletion.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0061D64 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0061DDC (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoGetDeviceDescriptor @ 0x1C00C7AA0 (DpiPdoGetDeviceDescriptor.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C00D7400 (WdmlibIoCreateDeviceSecure.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C00DC890 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x1C00DD620 (DpiPdoGetDeviceIdFromDescriptor.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C00DDE60 (MonitorCreatePhysicalMonitor.c)
 *     DpiPdoRemovePdo @ 0x1C016DFB0 (DpiPdoRemovePdo.c)
 *     ?DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0172C98 (-DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 */

__int64 __fastcall DpiPdoAddPdo(__int64 a1, __int64 a2, __int64 a3, char a4, PLARGE_INTEGER Timeout, char a6)
{
  __int64 v6; // r13
  int v9; // r10d
  _QWORD **v10; // rdx
  void *v12; // r12
  PVOID DeviceExtension; // rsi
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // r9
  int DeviceDescriptor; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdi
  const void *v23; // rdx
  unsigned int v24; // eax
  SIZE_T v25; // rax
  GUID *DeviceClassGuid; // rax
  NTSTATUS v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  _DWORD *PoolWithTag; // rax
  __int64 v32; // rcx
  NTSTATUS v33; // eax
  __int64 v34; // rcx
  PIO_WORKITEM WorkItem; // rax
  __int64 v36; // rcx
  int v37; // eax
  _QWORD *v38; // rax
  unsigned __int8 v39; // al
  int PhysicalMonitor; // eax
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // rax
  void *v51; // rcx
  _QWORD *v52; // rax
  void *v53; // rcx
  int v54; // eax
  __int64 v55; // rcx
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // rcx
  PVOID *v59; // rax
  struct _IO_WORKITEM *v60; // rcx
  void *v61; // rcx
  char v62; // [rsp+50h] [rbp-20h]
  char v63; // [rsp+51h] [rbp-1Fh]
  char v64; // [rsp+52h] [rbp-1Eh]
  char v65; // [rsp+53h] [rbp-1Dh]
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-18h] BYREF
  __int64 v67; // [rsp+60h] [rbp-10h] BYREF
  void *Source1; // [rsp+68h] [rbp-8h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v70; // [rsp+C0h] [rbp+50h]

  v70 = (int)a3;
  v6 = *(_QWORD *)(a1 + 64);
  DeviceObject = 0LL;
  v62 = 0;
  v9 = a3;
  v67 = 0LL;
  v10 = *(_QWORD ***)(v6 + 2256);
  LOBYTE(a3) = (_BYTE)Timeout;
  v12 = 0LL;
  Source1 = 0LL;
  DeviceExtension = 0LL;
  v63 = 0;
  v14 = v10;
  v15 = *v10;
  v65 = 0;
  v64 = 0;
  if ( *v10 != v10 )
  {
    v16 = *(unsigned int *)(a2 + 24);
    while ( 1 )
    {
      DeviceExtension = v14;
      if ( *((_DWORD *)v14 + 118) == (_DWORD)v16 )
        break;
      v14 = v15;
      v15 = (_QWORD *)*v15;
      if ( v15 == v10 )
        goto LABEL_5;
    }
    DeviceObject = (PDEVICE_OBJECT)v14[3];
    v62 = 1;
    if ( !(_BYTE)Timeout )
    {
      LODWORD(v22) = 0x40000000;
      v47 = WdLogNewEntry5_WdEvent(v15, v10, a3, v16);
      *(_QWORD *)(v47 + 24) = DpiPdoAddPdo;
      *(_QWORD *)(v47 + 32) = *(unsigned int *)(a2 + 24);
      WdLogEvent5_WdEvent(v47);
      goto LABEL_14;
    }
  }
LABEL_5:
  DeviceDescriptor = DpiPdoGetDeviceDescriptor(a1, a2, v9, a4, (char)Timeout, a6, 1, (__int64)&v67);
  v12 = Source1;
  LODWORD(v22) = DeviceDescriptor;
  if ( DeviceDescriptor < 0 )
  {
    v48 = WdLogNewEntry5_WdEvent(v19, v18, v20, v21);
    *(_QWORD *)(v48 + 24) = DpiPdoAddPdo;
    *(_QWORD *)(v48 + 32) = *(unsigned int *)(a2 + 24);
    WdLogEvent5_WdEvent(v48);
    if ( *(_DWORD *)a2 != 1 )
      goto LABEL_36;
  }
  else if ( DeviceDescriptor == 259 )
  {
    goto LABEL_16;
  }
  if ( v62 == 1 )
  {
    v23 = (const void *)*((_QWORD *)DeviceExtension + 112);
    if ( v12 == v23
      || v12
      && v23
      && (v24 = *((_DWORD *)DeviceExtension + 223), HIDWORD(v67) == v24)
      && (v25 = RtlCompareMemory(v12, v23, v24), v19 = HIDWORD(v67), v25 == HIDWORD(v67)) )
    {
      LODWORD(v22) = 0x40000000;
      goto LABEL_14;
    }
    *((_BYTE *)DeviceExtension + 479) = 1;
    v49 = WdLogNewEntry5_WdEvent(v19, v23, v20, v21);
    *(_QWORD *)(v49 + 24) = DpiPdoAddPdo;
    *(_QWORD *)(v49 + 32) = DeviceObject;
    WdLogEvent5_WdEvent(v49);
    DpiPdoRemovePdo(a1);
  }
  DeviceClassGuid = &GUID_DEVCLASS_MONITOR;
  if ( *(_DWORD *)a2 != 1 )
    DeviceClassGuid = &GUID_SD_PDO;
  v28 = WdmlibIoCreateDeviceSecure(
          *(PDRIVER_OBJECT *)(*(_QWORD *)(v6 + 40) + 32LL),
          0x3B8u,
          0LL,
          0x1Cu,
          0x180u,
          0,
          &SDDL_DEVOBJ_SYS_ALL_ADM_ALL,
          DeviceClassGuid,
          &DeviceObject);
  v22 = v28;
  if ( v28 < 0 )
  {
    v50 = (_QWORD *)WdLogNewEntry5_WdError(v29);
    v51 = WdmlibIoCreateDeviceSecure;
    goto LABEL_49;
  }
  v63 = 1;
  DeviceExtension = DeviceObject->DeviceExtension;
  *((_DWORD *)DeviceExtension + 4) = 1953656900;
  *((_DWORD *)DeviceExtension + 5) = 5;
  *((_QWORD *)DeviceExtension + 3) = DeviceObject;
  *((_QWORD *)DeviceExtension + 4) = a1;
  *((_QWORD *)DeviceExtension + 5) = *(_QWORD *)(v6 + 40);
  v30 = *(_QWORD *)(v6 + 48);
  *((_DWORD *)DeviceExtension + 62) = 1;
  *((_BYTE *)DeviceExtension + 56) = 1;
  *((_DWORD *)DeviceExtension + 61) = 1;
  *((_QWORD *)DeviceExtension + 6) = v30;
  *((_DWORD *)DeviceExtension + 62) = *(_DWORD *)(a2 + 52);
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x70uLL, 0x74727044u);
  *((_QWORD *)DeviceExtension + 21) = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[26] = 1;
    v33 = ExInitializeResourceLite(*((PERESOURCE *)DeviceExtension + 21));
    v22 = v33;
    if ( v33 >= 0 )
    {
      v65 = 1;
      WorkItem = IoAllocateWorkItem(DeviceObject);
      *((_QWORD *)DeviceExtension + 115) = WorkItem;
      if ( WorkItem )
      {
        *((_QWORD *)DeviceExtension + 14) = DpiPdoDispatchInternalIoctl;
        *((_QWORD *)DeviceExtension + 16) = DpiPdoDispatchPnp;
        *((_QWORD *)DeviceExtension + 17) = DpiPdoDispatchPower;
        *((_QWORD *)DeviceExtension + 32) = DpiPdoHandleStartDevice;
        *((_QWORD *)DeviceExtension + 36) = DpiPdoHandleStopDevice;
        *((_QWORD *)DeviceExtension + 41) = DpiPdoHandleQueryCapabilities;
        *((_QWORD *)DeviceExtension + 51) = DpiPdoHandleQueryId;
        *((_QWORD *)DeviceExtension + 39) = DpiPdoHandleQueryDeviceRelations;
        *((_QWORD *)DeviceExtension + 44) = DpiPdoHandleQueryDeviceText;
        *((_QWORD *)DeviceExtension + 53) = DpiPdoHandleQueryBusInformation;
        *((_QWORD *)DeviceExtension + 113) = a2;
        *((_DWORD *)DeviceExtension + 116) = *(_DWORD *)a2;
        *((_DWORD *)DeviceExtension + 117) = *(_DWORD *)(a2 + 20);
        v37 = *(_DWORD *)(a2 + 24);
        *((_BYTE *)DeviceExtension + 479) = 0;
        *((_DWORD *)DeviceExtension + 237) = 0;
        *((_DWORD *)DeviceExtension + 118) = v37;
        *((_WORD *)DeviceExtension + 238) = 1;
        *((_DWORD *)DeviceExtension + 236) = v70;
        KeWaitForSingleObject((PVOID)(v6 + 2040), Executive, 0, 0, 0LL);
        *(_QWORD *)(a2 + 40) = DeviceObject;
        KeReleaseMutex((PRKMUTEX)(v6 + 2040), 0);
        v38 = *(_QWORD **)(v6 + 2264);
        *(_QWORD *)DeviceExtension = v6 + 2256;
        *((_QWORD *)DeviceExtension + 1) = v38;
        if ( *v38 != v6 + 2256 )
          __fastfail(3u);
        *v38 = DeviceExtension;
        *(_QWORD *)(v6 + 2264) = DeviceExtension;
        ++*(_DWORD *)(v6 + 2272);
        v64 = 1;
        if ( *((_DWORD *)DeviceExtension + 116) != 1 )
        {
LABEL_34:
          LODWORD(v22) = DpiPdoGetDeviceIdFromDescriptor(DeviceObject, &v67);
          if ( (int)v22 >= 0 )
          {
LABEL_35:
            DpiPdoGetDeviceContainerIdFromDescriptor(DeviceObject);
            DeviceObject->Flags |= 4u;
            DeviceObject->Flags |= 0x2000u;
            DeviceObject->Flags &= ~0x4000u;
            DeviceObject->Flags &= ~0x80u;
            v46 = WdLogNewEntry5_WdEvent(v43, v42, v44, v45);
            *(_QWORD *)(v46 + 24) = DpiPdoAddPdo;
            *(_QWORD *)(v46 + 32) = DeviceObject;
            WdLogEvent5_WdEvent(v46);
            goto LABEL_36;
          }
          if ( *((_DWORD *)DeviceExtension + 116) == 1 )
          {
            LODWORD(v22) = 0;
            goto LABEL_35;
          }
LABEL_36:
          if ( (_DWORD)v22 == 259 )
            goto LABEL_16;
          goto LABEL_14;
        }
        LODWORD(v22) = DpiAcquireCoreSyncAccessSafe(a1, 1);
        if ( (int)v22 < 0 )
          goto LABEL_36;
        if ( v70 != D3DKMDT_VOT_UNINITIALIZED )
        {
          v54 = DmmSetTemporaryVideoOutputTechnology(
                  *(void *const *)(v6 + 2504),
                  *((_DWORD *)DeviceExtension + 118),
                  v70);
          v22 = v54;
          if ( v54 >= 0 )
          {
LABEL_31:
            v39 = IsInternalVideoOutput(*(_DWORD *)(a2 + 4));
            PhysicalMonitor = MonitorCreatePhysicalMonitor(
                                *(DXGADAPTER **)(v6 + 2504),
                                *((_DWORD *)DeviceExtension + 118),
                                DeviceObject,
                                v39,
                                1u);
            v22 = PhysicalMonitor;
            if ( PhysicalMonitor < 0 )
            {
              v57 = (_QWORD *)WdLogNewEntry5_WdError(v41);
              v57[4] = MonitorCreatePhysicalMonitor;
              v57[3] = DpiPdoAddPdo;
              v57[5] = v22;
              WdLogEvent5_WdError(v57);
            }
LABEL_33:
            DpiReleaseCoreSyncAccessSafe(a1, 1);
            if ( (int)v22 < 0 )
              goto LABEL_36;
            goto LABEL_34;
          }
          v56 = (_QWORD *)WdLogNewEntry5_WdError(v55);
          v56[4] = MonitorCreatePhysicalMonitor;
          v56[3] = DpiPdoAddPdo;
          v56[5] = v22;
          WdLogEvent5_WdError(v56);
        }
        if ( (int)v22 < 0 )
          goto LABEL_33;
        goto LABEL_31;
      }
      LODWORD(v22) = -1073741801;
      v52 = (_QWORD *)WdLogNewEntry5_WdLowResource(v36);
      v53 = IoAllocateWorkItem;
      goto LABEL_47;
    }
    v50 = (_QWORD *)WdLogNewEntry5_WdError(v34);
    v51 = ExInitializeResourceLite;
LABEL_49:
    v50[3] = DpiPdoAddPdo;
    v50[4] = v51;
    v50[5] = v22;
    WdLogEvent5_WdError(v50);
    goto LABEL_36;
  }
  LODWORD(v22) = -1073741801;
  v52 = (_QWORD *)WdLogNewEntry5_WdLowResource(v32);
  v53 = ExAllocatePoolWithTag;
LABEL_47:
  v52[3] = DpiPdoAddPdo;
  v52[4] = v53;
  v52[5] = -1073741801LL;
  WdLogEvent5_WdLowResource(v52);
LABEL_14:
  if ( *(_BYTE *)(a2 + 28) == 1 )
  {
    KeWaitForSingleObject((PVOID)(v6 + 2040), Executive, 0, 0, 0LL);
    *(_BYTE *)(a2 + 28) = 0;
    KeReleaseMutex((PRKMUTEX)(v6 + 2040), 0);
    DpiSignalVideoOutputCreateCompletion(a1);
  }
LABEL_16:
  if ( (int)v22 < 0 && v63 == 1 )
  {
    if ( v64 == 1 )
    {
      v58 = *(_QWORD **)DeviceExtension;
      v59 = (PVOID *)*((_QWORD *)DeviceExtension + 1);
      if ( *(PVOID *)(*(_QWORD *)DeviceExtension + 8LL) != DeviceExtension || *v59 != DeviceExtension )
        __fastfail(3u);
      *v59 = v58;
      v58[1] = v59;
      --*(_DWORD *)(v6 + 2272);
    }
    KeWaitForSingleObject((PVOID)(v6 + 2040), Executive, 0, 0, 0LL);
    *(_QWORD *)(a2 + 40) = 0LL;
    KeReleaseMutex((PRKMUTEX)(v6 + 2040), 0);
    if ( *((_QWORD *)DeviceExtension + 117) )
      RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 58);
    if ( v65 == 1 )
      ExDeleteResourceLite(*((PERESOURCE *)DeviceExtension + 21));
    v60 = (struct _IO_WORKITEM *)*((_QWORD *)DeviceExtension + 115);
    if ( v60 )
      IoFreeWorkItem(v60);
    v61 = (void *)*((_QWORD *)DeviceExtension + 21);
    if ( v61 )
    {
      ExFreePoolWithTag(v61, 0);
      *((_QWORD *)DeviceExtension + 21) = 0LL;
    }
    if ( DeviceObject )
    {
      IoDeleteDevice(DeviceObject);
      DeviceObject = 0LL;
    }
  }
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return (unsigned int)v22;
}
