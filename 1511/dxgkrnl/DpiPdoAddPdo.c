/*
 * XREFs of DpiPdoAddPdo @ 0x1C00E2A50
 * Callers:
 *     DpiPdoHandleChildConnectionChange @ 0x1C00E2F00 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C000A310 (IsInternalVideoOutput.c)
 *     DpiSignalVideoOutputCreateCompletion @ 0x1C0027F48 (DpiSignalVideoOutputCreateCompletion.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00A9EA8 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00A9F1C (DpiAcquireCoreSyncAccessSafe.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C00CF8C0 (WdmlibIoCreateDeviceSecure.c)
 *     DpiPdoGetDeviceDescriptor @ 0x1C00E28C0 (DpiPdoGetDeviceDescriptor.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C00E38F0 (MonitorCreatePhysicalMonitor.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C00E3A40 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x1C00E3D50 (DpiPdoGetDeviceIdFromDescriptor.c)
 *     DpiPdoRemovePdo @ 0x1C01727E0 (DpiPdoRemovePdo.c)
 *     ?DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C01774C4 (-DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
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
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  NTSTATUS v36; // eax
  __int64 v37; // rcx
  PIO_WORKITEM WorkItem; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // eax
  _QWORD *v44; // rax
  unsigned __int8 v45; // al
  int PhysicalMonitor; // eax
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rax
  void *v57; // rcx
  _QWORD *v58; // rax
  void *v59; // rcx
  int v60; // eax
  __int64 v61; // rcx
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  _QWORD *v64; // rcx
  PVOID *v65; // rax
  struct _IO_WORKITEM *v66; // rcx
  void *v67; // rcx
  char v68; // [rsp+50h] [rbp-20h]
  char v69; // [rsp+51h] [rbp-1Fh]
  char v70; // [rsp+52h] [rbp-1Eh]
  char v71; // [rsp+53h] [rbp-1Dh]
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-18h] BYREF
  __int128 v73; // [rsp+60h] [rbp-10h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v75; // [rsp+C0h] [rbp+50h]

  v75 = (int)a3;
  v6 = *(_QWORD *)(a1 + 64);
  DeviceObject = 0LL;
  v68 = 0;
  v9 = a3;
  v73 = 0uLL;
  v10 = *(_QWORD ***)(v6 + 2296);
  LOBYTE(a3) = (_BYTE)Timeout;
  v12 = 0LL;
  DeviceExtension = 0LL;
  v69 = 0;
  v14 = v10;
  v15 = *v10;
  v71 = 0;
  v70 = 0;
  if ( *v10 != v10 )
  {
    v16 = *(unsigned int *)(a2 + 24);
    while ( 1 )
    {
      DeviceExtension = v14;
      if ( *((_DWORD *)v14 + 126) == (_DWORD)v16 )
        break;
      v14 = v15;
      v15 = (_QWORD *)*v15;
      if ( v15 == v10 )
        goto LABEL_5;
    }
    DeviceObject = (PDEVICE_OBJECT)v14[3];
    v68 = 1;
    if ( !(_BYTE)Timeout )
    {
      LODWORD(v22) = 0x40000000;
      v53 = WdLogNewEntry5_WdEvent(v15, v10, a3, v16);
      *(_QWORD *)(v53 + 24) = DpiPdoAddPdo;
      *(_QWORD *)(v53 + 32) = *(unsigned int *)(a2 + 24);
      WdLogEvent5_WdEvent(v53);
      goto LABEL_14;
    }
  }
LABEL_5:
  DeviceDescriptor = DpiPdoGetDeviceDescriptor(a1, (PVOID *)a2, v9, a4, (char)Timeout, a6, 1, &v73);
  v12 = (void *)*((_QWORD *)&v73 + 1);
  LODWORD(v22) = DeviceDescriptor;
  if ( DeviceDescriptor < 0 )
  {
    v54 = WdLogNewEntry5_WdEvent(v19, v18, v20, v21);
    *(_QWORD *)(v54 + 24) = DpiPdoAddPdo;
    *(_QWORD *)(v54 + 32) = *(unsigned int *)(a2 + 24);
    WdLogEvent5_WdEvent(v54);
    if ( *(_DWORD *)a2 != 1 )
      goto LABEL_36;
  }
  else if ( DeviceDescriptor == 259 )
  {
    goto LABEL_16;
  }
  if ( v68 == 1 )
  {
    v23 = (const void *)*((_QWORD *)DeviceExtension + 116);
    if ( v12 == v23
      || v12
      && v23
      && (v24 = *((_DWORD *)DeviceExtension + 231), DWORD1(v73) == v24)
      && (v25 = RtlCompareMemory(v12, v23, v24), v19 = DWORD1(v73), v25 == DWORD1(v73)) )
    {
      LODWORD(v22) = 0x40000000;
      goto LABEL_14;
    }
    *((_BYTE *)DeviceExtension + 511) = 1;
    v55 = WdLogNewEntry5_WdEvent(v19, v23, v20, v21);
    *(_QWORD *)(v55 + 24) = DpiPdoAddPdo;
    *(_QWORD *)(v55 + 32) = DeviceObject;
    WdLogEvent5_WdEvent(v55);
    DpiPdoRemovePdo(a1, a2);
  }
  DeviceClassGuid = &GUID_DEVCLASS_MONITOR;
  if ( *(_DWORD *)a2 != 1 )
    DeviceClassGuid = &GUID_SD_PDO;
  v28 = WdmlibIoCreateDeviceSecure(
          *(PDRIVER_OBJECT *)(*(_QWORD *)(v6 + 40) + 32LL),
          0x3D8u,
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
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v29);
    v57 = WdmlibIoCreateDeviceSecure;
    goto LABEL_49;
  }
  v69 = 1;
  DeviceExtension = DeviceObject->DeviceExtension;
  *((_DWORD *)DeviceExtension + 4) = 1953656900;
  *((_DWORD *)DeviceExtension + 5) = 5;
  *((_QWORD *)DeviceExtension + 3) = DeviceObject;
  *((_QWORD *)DeviceExtension + 4) = a1;
  *((_QWORD *)DeviceExtension + 5) = *(_QWORD *)(v6 + 40);
  v30 = *(_QWORD *)(v6 + 48);
  *((_DWORD *)DeviceExtension + 71) = 1;
  *((_BYTE *)DeviceExtension + 56) = 1;
  *((_DWORD *)DeviceExtension + 70) = 1;
  *((_QWORD *)DeviceExtension + 6) = v30;
  *((_DWORD *)DeviceExtension + 71) = *(_DWORD *)(a2 + 52);
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x70uLL, 0x74727044u);
  *((_QWORD *)DeviceExtension + 21) = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[26] = 1;
    v36 = ExInitializeResourceLite(*((PERESOURCE *)DeviceExtension + 21));
    v22 = v36;
    if ( v36 >= 0 )
    {
      v71 = 1;
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
        *((_DWORD *)DeviceExtension + 124) = *(_DWORD *)a2;
        *((_DWORD *)DeviceExtension + 125) = *(_DWORD *)(a2 + 20);
        v43 = *(_DWORD *)(a2 + 24);
        *((_BYTE *)DeviceExtension + 511) = 0;
        *((_DWORD *)DeviceExtension + 245) = 0;
        *((_DWORD *)DeviceExtension + 126) = v43;
        *((_WORD *)DeviceExtension + 254) = 1;
        *((_DWORD *)DeviceExtension + 244) = v75;
        KeWaitForSingleObject((PVOID)(v6 + 2080), Executive, 0, 0, 0LL);
        *(_QWORD *)(a2 + 40) = DeviceObject;
        KeReleaseMutex((PRKMUTEX)(v6 + 2080), 0);
        v44 = *(_QWORD **)(v6 + 2304);
        *(_QWORD *)DeviceExtension = v6 + 2296;
        *((_QWORD *)DeviceExtension + 1) = v44;
        if ( *v44 != v6 + 2296 )
          __fastfail(3u);
        *v44 = DeviceExtension;
        *(_QWORD *)(v6 + 2304) = DeviceExtension;
        ++*(_DWORD *)(v6 + 2312);
        v70 = 1;
        if ( *((_DWORD *)DeviceExtension + 124) != 1 )
        {
LABEL_34:
          LODWORD(v22) = DpiPdoGetDeviceIdFromDescriptor(DeviceObject, &v73);
          if ( (int)v22 >= 0 )
          {
LABEL_35:
            DpiPdoGetDeviceContainerIdFromDescriptor(DeviceObject);
            DeviceObject->Flags |= 4u;
            DeviceObject->Flags |= 0x2000u;
            DeviceObject->Flags &= ~0x4000u;
            DeviceObject->Flags &= ~0x80u;
            v52 = WdLogNewEntry5_WdEvent(v49, v48, v50, v51);
            *(_QWORD *)(v52 + 24) = DpiPdoAddPdo;
            *(_QWORD *)(v52 + 32) = DeviceObject;
            WdLogEvent5_WdEvent(v52);
            goto LABEL_36;
          }
          if ( *((_DWORD *)DeviceExtension + 124) == 1 )
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
        if ( v75 != D3DKMDT_VOT_UNINITIALIZED )
        {
          v60 = DmmSetTemporaryVideoOutputTechnology(
                  *(void *const *)(v6 + 2544),
                  *((_DWORD *)DeviceExtension + 126),
                  v75);
          v22 = v60;
          if ( v60 >= 0 )
          {
LABEL_31:
            v45 = IsInternalVideoOutput(*(_DWORD *)(a2 + 4));
            PhysicalMonitor = MonitorCreatePhysicalMonitor(
                                *(DXGADAPTER **)(v6 + 2544),
                                *((_DWORD *)DeviceExtension + 126),
                                DeviceObject,
                                v45,
                                1u);
            v22 = PhysicalMonitor;
            if ( PhysicalMonitor < 0 )
            {
              v63 = (_QWORD *)WdLogNewEntry5_WdError(v47);
              v63[4] = MonitorCreatePhysicalMonitor;
              v63[3] = DpiPdoAddPdo;
              v63[5] = v22;
              WdLogEvent5_WdError(v63);
            }
LABEL_33:
            DpiReleaseCoreSyncAccessSafe(a1, 1);
            if ( (int)v22 < 0 )
              goto LABEL_36;
            goto LABEL_34;
          }
          v62 = (_QWORD *)WdLogNewEntry5_WdError(v61);
          v62[4] = MonitorCreatePhysicalMonitor;
          v62[3] = DpiPdoAddPdo;
          v62[5] = v22;
          WdLogEvent5_WdError(v62);
        }
        if ( (int)v22 < 0 )
          goto LABEL_33;
        goto LABEL_31;
      }
      LODWORD(v22) = -1073741801;
      v58 = (_QWORD *)WdLogNewEntry5_WdLowResource(v40, v39, v41, v42);
      v59 = IoAllocateWorkItem;
      goto LABEL_47;
    }
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v37);
    v57 = ExInitializeResourceLite;
LABEL_49:
    v56[3] = DpiPdoAddPdo;
    v56[4] = v57;
    v56[5] = v22;
    WdLogEvent5_WdError(v56);
    goto LABEL_36;
  }
  LODWORD(v22) = -1073741801;
  v58 = (_QWORD *)WdLogNewEntry5_WdLowResource(v33, v32, v34, v35);
  v59 = ExAllocatePoolWithTag;
LABEL_47:
  v58[3] = DpiPdoAddPdo;
  v58[4] = v59;
  v58[5] = -1073741801LL;
  WdLogEvent5_WdLowResource(v58);
LABEL_14:
  if ( *(_BYTE *)(a2 + 28) == 1 )
  {
    KeWaitForSingleObject((PVOID)(v6 + 2080), Executive, 0, 0, 0LL);
    *(_BYTE *)(a2 + 28) = 0;
    KeReleaseMutex((PRKMUTEX)(v6 + 2080), 0);
    DpiSignalVideoOutputCreateCompletion(a1);
  }
LABEL_16:
  if ( (int)v22 < 0 && v69 == 1 )
  {
    if ( v70 == 1 )
    {
      v64 = *(_QWORD **)DeviceExtension;
      v65 = (PVOID *)*((_QWORD *)DeviceExtension + 1);
      if ( *(PVOID *)(*(_QWORD *)DeviceExtension + 8LL) != DeviceExtension || *v65 != DeviceExtension )
        __fastfail(3u);
      *v65 = v64;
      v64[1] = v65;
      --*(_DWORD *)(v6 + 2312);
    }
    KeWaitForSingleObject((PVOID)(v6 + 2080), Executive, 0, 0, 0LL);
    *(_QWORD *)(a2 + 40) = 0LL;
    KeReleaseMutex((PRKMUTEX)(v6 + 2080), 0);
    if ( *((_QWORD *)DeviceExtension + 121) )
      RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 60);
    if ( v71 == 1 )
      ExDeleteResourceLite(*((PERESOURCE *)DeviceExtension + 21));
    v66 = (struct _IO_WORKITEM *)*((_QWORD *)DeviceExtension + 119);
    if ( v66 )
      IoFreeWorkItem(v66);
    v67 = (void *)*((_QWORD *)DeviceExtension + 21);
    if ( v67 )
    {
      ExFreePoolWithTag(v67, 0);
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
