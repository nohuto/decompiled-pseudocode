/*
 * XREFs of DpiGdoDispatchInternalIoctl @ 0x1C00A9560
 * Callers:
 *     <none>
 * Callees:
 *     IsInternalVideoOutput @ 0x1C000A310 (IsInternalVideoOutput.c)
 *     DpiEnableD3Requests @ 0x1C000B7B0 (DpiEnableD3Requests.c)
 *     DpiPdoToggleDevicePowerEvents @ 0x1C000D490 (DpiPdoToggleDevicePowerEvents.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000DC2C (DpiCheckForOutstandingD3Requests.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00979E0 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C0097B30 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00A9D40 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00A9EA8 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00A9F1C (DpiAcquireCoreSyncAccessSafe.c)
 *     DmmIsPresentPathInClientVidPnTopology @ 0x1C00AA078 (DmmIsPresentPathInClientVidPnTopology.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00AA170 (DmmGetVideoOutputTechnology.c)
 *     DmmCanAddPresentPathToClientVidPn @ 0x1C00AB59C (DmmCanAddPresentPathToClientVidPn.c)
 *     DmmGetCurrentIntegerVSyncFromClientVidPnSource @ 0x1C00C4540 (DmmGetCurrentIntegerVSyncFromClientVidPnSource.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C00C5018 (DxgkUseAdapterViewInCurrentSession.c)
 *     DpiPdoSetDevicePower @ 0x1C00CA378 (DpiPdoSetDevicePower.c)
 *     MonitorEnableDisableMonitor @ 0x1C00CCA9C (MonitorEnableDisableMonitor.c)
 */

__int64 __fastcall DpiGdoDispatchInternalIoctl(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 v4; // r15
  __int64 v5; // rdi
  _DWORD *UserBuffer; // r12
  struct _DEVICE_OBJECT *v7; // rsi
  DWORD LowPart; // ecx
  __int64 Length; // r9
  unsigned int Options; // r10d
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // rbx
  union _LARGE_INTEGER v12; // r14
  DWORD v13; // ecx
  DWORD v14; // ecx
  __int64 v15; // rcx
  char *QuadPart; // rbx
  int v17; // eax
  __int64 v18; // rcx
  int AllMonitorDevicesFromSessionView; // eax
  __int64 v20; // rcx
  char v21; // r13
  unsigned int v22; // esi
  char *PoolWithTag; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // r13d
  __int64 v29; // rax
  __int64 *v30; // r13
  char *v31; // rsi
  char v32; // r12
  int v33; // ebx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  PIRP v38; // rcx
  int v40; // ecx
  __int64 v41; // rcx
  int v42; // ecx
  int v43; // ecx
  int CurrentIntegerVSyncFromClientVidPnSource; // eax
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  bool v50; // zf
  __int64 v51; // rdx
  __int64 v52; // rcx
  int CurrentProcessSessionId; // esi
  __int64 v54; // r8
  __int64 v55; // r9
  int v56; // eax
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // r14
  __int64 v63; // rax
  int NamedPipeType; // ebx
  struct _ERESOURCE *v65; // r13
  int v66; // edx
  __int64 v67; // r15
  unsigned int v68; // r14d
  struct _DEVICE_OBJECT *v69; // rcx
  __int64 v70; // rdx
  int v71; // eax
  unsigned int v72; // r15d
  __int64 v73; // rcx
  union _LARGE_INTEGER Pointer; // rax
  ULONG v75; // r13d
  __int64 v76; // rax
  NTSTATUS v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rsi
  int v83; // eax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rbx
  __int64 v89; // rdx
  __int64 v90; // rcx
  PIRP v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rdx
  __int64 v97; // rax
  _QWORD *v98; // rax
  _QWORD *v99; // rax
  __int64 v100; // rcx
  _QWORD *v101; // rax
  __int64 v102; // r13
  _QWORD *v103; // rax
  _QWORD *v104; // rax
  __int64 v105; // rax
  _QWORD *v106; // rax
  _QWORD *v107; // rax
  __int64 v108; // rax
  unsigned int v109; // [rsp+50h] [rbp-29h]
  unsigned int v110; // [rsp+50h] [rbp-29h]
  int v111; // [rsp+50h] [rbp-29h]
  int v112; // [rsp+54h] [rbp-25h] BYREF
  size_t Size; // [rsp+58h] [rbp-21h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-19h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+70h] [rbp-9h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp-1h] BYREF
  __int64 v117; // [rsp+E0h] [rbp+67h] BYREF
  PIRP Irp; // [rsp+E8h] [rbp+6Fh]
  unsigned int InputBuffer; // [rsp+F0h] [rbp+77h] BYREF
  PVOID Object; // [rsp+F8h] [rbp+7Fh] BYREF

  Irp = a2;
  v117 = a1;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  UserBuffer = a2->UserBuffer;
  LODWORD(v7) = -1073741637;
  IoStatusBlock.Pointer = UserBuffer;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v12 = *(union _LARGE_INTEGER *)(*(_QWORD *)(v4 + 32) + 64LL);
  Timeout = v12;
  v13 = LowPart - 2301967;
  if ( !v13 )
  {
    NamedPipeType = Parameters->NamedPipeType;
    InputBuffer = 0;
    if ( NamedPipeType > 1 )
    {
      LOBYTE(a2) = 1;
      LODWORD(v7) = DpiAcquireCoreSyncAccessSafe(a1, a2);
      if ( (int)v7 >= 0 )
      {
        MonitorEnableDisableMonitor(*(DXGADAPTER **)(v12.QuadPart + 2544), 1LL);
        LOBYTE(v96) = 1;
        DpiReleaseCoreSyncAccessSafe(a1, v96);
      }
    }
    KeEnterCriticalRegion();
    v65 = (struct _ERESOURCE *)(v12.QuadPart + 1976);
    ExAcquireResourceSharedLite((PERESOURCE)(v12.QuadPart + 1976), 1u);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)(v12.QuadPart + 2440), 1u);
    v66 = *(_DWORD *)(v12.QuadPart + 236);
    if ( v66 != 2 && (*(_DWORD *)(v12.QuadPart + 240) != 2 || ((v66 - 3) & 0xFFFFFFFC) != 0 || v66 == 4) )
    {
      ExReleaseResourceLite((PERESOURCE)(v12.QuadPart + 2440));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite((PERESOURCE)(v12.QuadPart + 1976));
      KeLeaveCriticalRegion();
      goto LABEL_48;
    }
    ExReleaseResourceLite((PERESOURCE)(v12.QuadPart + 2440));
    KeLeaveCriticalRegion();
    v67 = *(_QWORD *)(v12.QuadPart + 1968);
    if ( v67 )
    {
      v68 = 0;
      do
      {
        if ( !*(_DWORD *)v67 )
          break;
        if ( *(_DWORD *)v67 == 1 )
        {
          v69 = *(struct _DEVICE_OBJECT **)(v67 + 40);
          if ( !v69 )
            goto LABEL_66;
          Object = IoGetAttachedDeviceReference(v69);
          v7 = (struct _DEVICE_OBJECT *)Object;
          if ( Object )
          {
            KeInitializeEvent(&Event, NotificationEvent, 0);
            InputBuffer = NamedPipeType;
            v91 = IoBuildDeviceIoControlRequest(0x23242Fu, v7, &InputBuffer, 4u, 0LL, 0, 1u, &Event, &IoStatusBlock);
            if ( v91 )
            {
              v91->IoStatus.Status = -1073741637;
              LODWORD(v7) = IofCallDriver(v7, v91);
              if ( (_DWORD)v7 == 259 )
              {
                KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                LODWORD(v7) = IoStatusBlock.Status;
              }
              if ( (int)v7 < 0 )
              {
                v102 = *(_QWORD *)(*(_QWORD *)(v67 + 40) + 64LL);
                KeEnterCriticalRegion();
                if ( *(_BYTE *)(v102 + 483) )
                  DpiCheckForOutstandingD3Requests(v102);
                ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v102 + 168), 1u);
                LODWORD(v7) = DpiPdoSetDevicePower(*(_QWORD *)(v67 + 40), (unsigned int)NamedPipeType, 0LL);
                if ( *(_BYTE *)(v102 + 483) )
                  DpiEnableD3Requests(*(_QWORD *)(v102 + 24));
                ExReleaseResourceLite(*(PERESOURCE *)(v102 + 168));
                KeLeaveCriticalRegion();
              }
            }
            else
            {
              LODWORD(v7) = -1073741670;
              v103 = (_QWORD *)WdLogNewEntry5_WdLowResource(v93, v92, v94, v95);
              v103[4] = IoBuildDeviceIoControlRequest;
              v103[3] = DpiGdoDispatchInternalIoctl;
              v103[5] = -1073741670LL;
              WdLogEvent5_WdLowResource(v103);
            }
            ObfDereferenceObject(Object);
          }
          else
          {
            LODWORD(v7) = -1073741823;
            v104 = (_QWORD *)WdLogNewEntry5_WdError(v90);
            v104[4] = IoGetAttachedDeviceReference;
            v104[3] = DpiGdoDispatchInternalIoctl;
            v104[5] = -1073741823LL;
            WdLogEvent5_WdError(v104);
          }
          if ( (int)v7 >= 0 )
            ++v68;
          else
LABEL_66:
            DpiPdoToggleDevicePowerEvents(v67, NamedPipeType);
          *(_DWORD *)(v67 + 52) = NamedPipeType;
        }
        v67 += 120LL;
      }
      while ( v67 );
      InputBuffer = v68;
      v12 = Timeout;
      v65 = (struct _ERESOURCE *)(Timeout.QuadPart + 1976);
    }
    ExReleaseResourceLite(v65);
    KeLeaveCriticalRegion();
    v70 = InputBuffer;
    if ( !InputBuffer )
      goto LABEL_83;
    v71 = 10;
LABEL_72:
    v72 = *(_DWORD *)(v12.QuadPart + 2136);
    --v71;
    v73 = 0LL;
    v111 = 0;
    LODWORD(Object) = v71;
    if ( !v72 )
      goto LABEL_82;
    Pointer.QuadPart = -1000000LL * (unsigned int)v70;
    IoStatusBlock.Pointer = (PVOID)Pointer.QuadPart;
    while ( 1 )
    {
      Timeout = Pointer;
      v75 = v72;
      if ( v72 > 0x40 )
        v75 = 64;
      if ( NamedPipeType == 1 )
        v76 = *(_QWORD *)(v12.QuadPart + 2152);
      else
        v76 = *(_QWORD *)(v12.QuadPart + 2144);
      v77 = KeWaitForMultipleObjects(
              v75,
              (PVOID *)(v76 + 8 * v73),
              WaitAll,
              Executive,
              0,
              0,
              &Timeout,
              *(PKWAIT_BLOCK *)(v12.QuadPart + 2160));
      v7 = (struct _DEVICE_OBJECT *)v77;
      if ( v77 == 258 )
      {
        if ( (_DWORD)Object )
        {
          v105 = WdLogNewEntry5_WdWarning(v79, v78, v80, v81);
          *(_QWORD *)(v105 + 24) = DpiGdoDispatchInternalIoctl;
          *(_QWORD *)(v105 + 32) = 258LL;
          WdLogEvent5_WdWarning(v105);
        }
        else
        {
          v106 = (_QWORD *)WdLogNewEntry5_WdError(v79);
          v106[4] = KeWaitForMultipleObjects;
          v106[3] = DpiGdoDispatchInternalIoctl;
          v106[5] = 258LL;
          WdLogEvent5_WdError(v106);
        }
      }
      else if ( v77 )
      {
        v107 = (_QWORD *)WdLogNewEntry5_WdError(v79);
        v107[4] = KeWaitForMultipleObjects;
        v107[3] = DpiGdoDispatchInternalIoctl;
        v107[5] = v7;
        WdLogEvent5_WdError(v107);
LABEL_81:
        v70 = InputBuffer;
        v71 = (int)Object;
LABEL_82:
        if ( (_DWORD)v7 != 258 || !v71 )
        {
LABEL_83:
          if ( NamedPipeType == 1 )
          {
            v82 = v117;
            LOBYTE(v70) = 1;
            v83 = DpiAcquireCoreSyncAccessSafe(v117, v70);
            v88 = v83;
            if ( v83 < 0 )
            {
              v108 = WdLogNewEntry5_WdEvent(v85, v84, v86, v87);
              *(_QWORD *)(v108 + 24) = DpiGdoDispatchInternalIoctl;
              *(_QWORD *)(v108 + 32) = v88;
              WdLogEvent5_WdEvent(v108);
            }
            else
            {
              MonitorEnableDisableMonitor(*(DXGADAPTER **)(v12.QuadPart + 2544), 0LL);
              LOBYTE(v89) = 1;
              DpiReleaseCoreSyncAccessSafe(v82, v89);
            }
          }
          goto LABEL_48;
        }
        goto LABEL_72;
      }
      Pointer = (union _LARGE_INTEGER)IoStatusBlock.Pointer;
      v73 = v75 + v111;
      v111 += v75;
      v72 -= v75;
      if ( !v72 )
        goto LABEL_81;
    }
  }
  v14 = v13 - 4;
  if ( !v14 )
  {
LABEL_48:
    LODWORD(v7) = 0;
    goto LABEL_28;
  }
  v15 = v14 - 8;
  if ( (_DWORD)v15 )
  {
    v40 = v15 - 4;
    if ( !v40 )
    {
      *(_QWORD *)(v4 + 192) = *(_QWORD *)&Parameters->NamedPipeType;
      Parameters->InboundQuota = *(unsigned __int8 *)(v12.QuadPart + 1093);
      Parameters->DefaultTimeout.QuadPart = *(_QWORD *)(v12.QuadPart + 152);
      v57 = *(_DWORD *)(v4 + 160);
      *(_DWORD *)&Parameters->TimeoutSpecified = v57;
      if ( !*(_DWORD *)(v4 + 156) && *(_BYTE *)(v12.QuadPart + 1088) == 1 )
        *(_DWORD *)&Parameters->TimeoutSpecified = v57 | 0x20000000;
      LODWORD(v7) = 0;
      v5 = 40LL;
      goto LABEL_28;
    }
    v41 = (unsigned int)(v40 - 12);
    if ( (_DWORD)v41 )
    {
      v42 = v41 - 8;
      if ( !v42 )
      {
        if ( (unsigned int)Length >= 0x18 && UserBuffer )
        {
          LODWORD(v7) = 0;
          v5 = 24LL;
          *UserBuffer = *(_DWORD *)(*(_QWORD *)(v4 + 40) + 24LL);
          UserBuffer[1] = *(_DWORD *)(v4 + 156);
          *((_QWORD *)UserBuffer + 1) = *(_QWORD *)(v12.QuadPart + 2544);
          *((_QWORD *)UserBuffer + 2) = *(_QWORD *)(*(_QWORD *)(v12.QuadPart + 2544) + 252LL);
          goto LABEL_28;
        }
        goto LABEL_97;
      }
      v43 = v42 - 4;
      if ( v43 )
      {
        if ( v43 != 12 )
          goto LABEL_28;
        if ( (unsigned int)Length >= 8 && UserBuffer )
        {
          LOBYTE(a2) = 1;
          LODWORD(v7) = DpiAcquireCoreSyncAccessSafe(a1, a2);
          if ( (int)v7 >= 0 )
          {
            CurrentIntegerVSyncFromClientVidPnSource = DmmGetCurrentIntegerVSyncFromClientVidPnSource(
                                                         *(_QWORD *)(v12.QuadPart + 2544),
                                                         *(unsigned int *)(v4 + 156),
                                                         &v117,
                                                         &InputBuffer);
            LOBYTE(v45) = 1;
            LODWORD(v7) = CurrentIntegerVSyncFromClientVidPnSource;
            DpiReleaseCoreSyncAccessSafe(a1, v45);
            if ( (int)v7 < 0 )
            {
              v63 = WdLogNewEntry5_WdWarning(v47, v46, v48, v49);
              *(_QWORD *)(v63 + 24) = DpiGdoDispatchInternalIoctl;
              *(_QWORD *)(v63 + 32) = *(unsigned int *)(v4 + 156);
              WdLogEvent5_WdWarning(v63);
            }
            else
            {
              v50 = InputBuffer == 1;
              *UserBuffer = v117;
              *((_BYTE *)UserBuffer + 4) = v50;
            }
          }
          goto LABEL_28;
        }
LABEL_97:
        LODWORD(v7) = -1073741789;
        goto LABEL_28;
      }
      goto LABEL_48;
    }
    if ( Options < 8 || !Parameters )
      goto LABEL_97;
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v41, a2, CurrentStackLocation, Length);
    if ( Parameters->NamedPipeType == 1 )
    {
      v56 = *(_DWORD *)(v4 + 200);
      if ( v56 != -1 && v56 != CurrentProcessSessionId )
      {
        v97 = WdLogNewEntry5_WdWarning(v52, v51, v54, v55);
        *(_QWORD *)(v97 + 32) = -1073741637LL;
LABEL_101:
        *(_QWORD *)(v97 + 24) = DpiGdoDispatchInternalIoctl;
        WdLogEvent5_WdWarning(v97);
        goto LABEL_102;
      }
      if ( (int)DxgkUseAdapterViewInCurrentSession((struct _LUID *)(v12.QuadPart + 1456)) < 0 )
      {
LABEL_102:
        Parameters->ReadMode = 0;
        goto LABEL_48;
      }
      *(_DWORD *)(v4 + 200) = CurrentProcessSessionId;
    }
    else
    {
      v62 = (int)DxgkUseAdapterViewInCurrentSession((struct _LUID *)(v12.QuadPart + 1456));
      if ( *(_DWORD *)(v4 + 200) != CurrentProcessSessionId )
      {
        v97 = WdLogNewEntry5_WdWarning(v59, v58, v60, v61);
        *(_QWORD *)(v97 + 32) = v62;
        goto LABEL_101;
      }
      *(_DWORD *)(v4 + 200) = -1;
    }
    Parameters->ReadMode = 1;
    goto LABEL_48;
  }
  LODWORD(Object) = 0;
  QuadPart = 0LL;
  LOBYTE(InputBuffer) = 0;
  v17 = DxgkAcquireSessionModeChangeLock(v15);
  v7 = (struct _DEVICE_OBJECT *)v17;
  if ( v17 < 0 )
  {
    v98 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v98[4] = DxgkAcquireSessionModeChangeLock;
    v98[3] = DpiGdoDispatchInternalIoctl;
    v98[5] = v7;
    WdLogEvent5_WdError(v98);
    goto LABEL_28;
  }
  AllMonitorDevicesFromSessionView = DxgkGetAllMonitorDevicesFromSessionView(
                                       (struct _LUID *)(v12.QuadPart + 1456),
                                       *(_DWORD *)(v4 + 156),
                                       0LL);
  v20 = 0x80000000LL;
  v7 = (struct _DEVICE_OBJECT *)AllMonitorDevicesFromSessionView;
  if ( (int)(AllMonitorDevicesFromSessionView + 0x80000000) >= 0 && AllMonitorDevicesFromSessionView != -2147483643 )
  {
    v99 = (_QWORD *)WdLogNewEntry5_WdError(0x80000000LL);
    v99[4] = DxgkGetAllMonitorDevicesFromSessionView;
    v99[3] = DpiGdoDispatchInternalIoctl;
    v99[5] = v7;
    WdLogEvent5_WdError(v99);
LABEL_106:
    DxgkReleaseSessionModeChangeLock(v100);
    goto LABEL_28;
  }
  v21 = InputBuffer;
  v22 = *(_DWORD *)(v12.QuadPart + 2312) + ((_BYTE)InputBuffer != 0 ? (unsigned int)Object : 0);
  if ( !v22 )
    goto LABEL_27;
  Size = 20 * (v22 + 1);
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, Size, 0x74727044u);
  Timeout.QuadPart = (LONGLONG)PoolWithTag;
  QuadPart = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v7) = -1073741801;
    v101 = (_QWORD *)WdLogNewEntry5_WdLowResource(v25, v24, v26, v27);
    v101[4] = ExAllocatePoolWithTag;
    v101[3] = DpiGdoDispatchInternalIoctl;
    v101[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v101);
    goto LABEL_106;
  }
  memset(PoolWithTag, 0, Size);
  if ( v21 )
  {
    v109 = v22;
    LODWORD(v7) = DxgkGetAllMonitorDevicesFromSessionView(
                    (struct _LUID *)(v12.QuadPart + 1456),
                    *(_DWORD *)(v4 + 156),
                    (__int64)QuadPart);
    if ( (int)v7 < 0 )
    {
LABEL_105:
      ExFreePoolWithTag(QuadPart, 0);
      goto LABEL_106;
    }
    v28 = v109;
  }
  else
  {
    v28 = 0;
  }
  KeEnterCriticalRegion();
  Size = v12.QuadPart + 1976;
  ExAcquireResourceSharedLite((PERESOURCE)(v12.QuadPart + 1976), 1u);
  LODWORD(v7) = DpiAcquireCoreSyncAccessSafe(v117, 0LL);
  if ( (int)v7 < 0 )
  {
    ExReleaseResourceLite((PERESOURCE)Size);
    KeLeaveCriticalRegion();
    goto LABEL_105;
  }
  v29 = v28;
  v30 = *(__int64 **)(v12.QuadPart + 2296);
  v31 = &QuadPart[20 * v29];
  if ( !*(_DWORD *)(v12.QuadPart + 2312) )
    goto LABEL_26;
  v32 = InputBuffer;
  v33 = 0;
  while ( *v30 != *(_QWORD *)(v12.QuadPart + 2296) )
  {
    if ( *((_DWORD *)v30 + 124) != 1 || *((_BYTE *)v30 + 510) != 1 )
      goto LABEL_24;
    v110 = *((_DWORD *)v30 + 126);
    DmmGetVideoOutputTechnology(*(_QWORD *)(v12.QuadPart + 2544), v110, &v112, 0LL);
    v31[16] = IsInternalVideoOutput(v112);
    v34 = *(unsigned int *)(v4 + 156);
    v35 = *(_QWORD *)(v12.QuadPart + 2544);
    LOBYTE(Object) = 0;
    DmmIsPresentPathInClientVidPnTopology(v35, v34, v110, &Object);
    if ( !(_BYTE)Object )
    {
      if ( !*((_BYTE *)v30 + 944) )
        goto LABEL_24;
      v36 = *(unsigned int *)(v4 + 156);
      v37 = *(_QWORD *)(v12.QuadPart + 2544);
      LOBYTE(InputBuffer) = 0;
      DmmCanAddPresentPathToClientVidPn(v37, v36, v110, &InputBuffer);
      if ( !(_BYTE)InputBuffer )
        goto LABEL_24;
      *(_DWORD *)v31 = 0;
      goto LABEL_23;
    }
    if ( v32 )
    {
      *(_DWORD *)v31 = 1;
LABEL_23:
      *(_DWORD *)v31 |= 0x20000000u;
      *((_DWORD *)v31 + 1) = v110;
      *((_QWORD *)v31 + 1) = *(_QWORD *)(v12.QuadPart + 1456);
      v31 += 20;
    }
LABEL_24:
    v30 = (__int64 *)*v30;
    if ( (unsigned int)++v33 >= *(_DWORD *)(v12.QuadPart + 2312) )
      break;
  }
  UserBuffer = IoStatusBlock.Pointer;
  QuadPart = (char *)Timeout.QuadPart;
LABEL_26:
  DpiReleaseCoreSyncAccessSafe(v117, 0LL);
  ExReleaseResourceLite((PERESOURCE)Size);
  KeLeaveCriticalRegion();
LABEL_27:
  DxgkReleaseSessionModeChangeLock(v20);
  LODWORD(v7) = 0;
  *(_QWORD *)UserBuffer = QuadPart;
  v5 = 8LL;
LABEL_28:
  v38 = Irp;
  Irp->IoStatus.Status = (int)v7;
  v38->IoStatus.Information = v5;
  IofCompleteRequest(v38, 1);
  return (unsigned int)v7;
}
