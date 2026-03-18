/*
 * XREFs of DpiGdoDispatchInternalIoctl @ 0x1C00613E0
 * Callers:
 *     <none>
 * Callees:
 *     IsInternalVideoOutput @ 0x1C0004FC0 (IsInternalVideoOutput.c)
 *     DpiEnableD3Requests @ 0x1C0005A7C (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000C824 (DpiCheckForOutstandingD3Requests.c)
 *     DpiPdoToggleDevicePowerEvents @ 0x1C000C9E0 (DpiPdoToggleDevicePowerEvents.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DmmGetCurrentIntegerVSyncFromClientVidPnSource @ 0x1C005EC90 (DmmGetCurrentIntegerVSyncFromClientVidPnSource.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C005F3B0 (DxgkUseAdapterViewInCurrentSession.c)
 *     DmmCanAddPresentPathToClientVidPn @ 0x1C0061084 (DmmCanAddPresentPathToClientVidPn.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C0061BF0 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0061D64 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0061DDC (DpiAcquireCoreSyncAccessSafe.c)
 *     DmmIsPresentPathInClientVidPnTopology @ 0x1C0061F38 (DmmIsPresentPathInClientVidPnTopology.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00627F0 (DmmGetVideoOutputTechnology.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C008C260 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C008C4A4 (DxgkReleaseSessionModeChangeLock.c)
 *     DpiPdoSetDevicePower @ 0x1C00BC0D8 (DpiPdoSetDevicePower.c)
 *     MonitorEnableDisableMonitor @ 0x1C00BE2F8 (MonitorEnableDisableMonitor.c)
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
  char v20; // r13
  unsigned int v21; // esi
  char *PoolWithTag; // rax
  __int64 v23; // rcx
  unsigned int v24; // r13d
  __int64 v25; // rax
  __int64 *v26; // r13
  char *v27; // rsi
  char v28; // r12
  int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int v32; // edx
  DXGADAPTER *v33; // rcx
  PIRP v34; // rcx
  int v36; // ecx
  __int64 v37; // rcx
  int v38; // ecx
  int v39; // ecx
  int CurrentIntegerVSyncFromClientVidPnSource; // eax
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  bool v46; // zf
  __int64 v47; // rdx
  __int64 v48; // rcx
  int CurrentProcessSessionId; // esi
  __int64 v50; // r8
  __int64 v51; // r9
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // r14
  int v58; // eax
  int NamedPipeType; // ebx
  struct _ERESOURCE *v60; // r13
  int v61; // edx
  __int64 v62; // r15
  unsigned int v63; // r14d
  struct _DEVICE_OBJECT *v64; // rcx
  __int64 v65; // rdx
  int v66; // eax
  unsigned int v67; // r15d
  __int64 v68; // rcx
  union _LARGE_INTEGER Pointer; // rax
  ULONG v70; // r13d
  __int64 v71; // rax
  NTSTATUS v72; // eax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rsi
  int v78; // eax
  __int64 v79; // rbx
  __int64 v80; // rdx
  __int64 v81; // rcx
  PIRP v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rax
  _QWORD *v87; // rax
  _QWORD *v88; // rax
  _QWORD *v89; // rax
  __int64 v90; // r13
  _QWORD *v91; // rax
  _QWORD *v92; // rax
  __int64 v93; // rax
  _QWORD *v94; // rax
  _QWORD *v95; // rax
  __int64 v96; // rax
  unsigned int v97; // [rsp+50h] [rbp-29h]
  unsigned int v98; // [rsp+50h] [rbp-29h]
  int v99; // [rsp+50h] [rbp-29h]
  int v100; // [rsp+54h] [rbp-25h] BYREF
  size_t Size; // [rsp+58h] [rbp-21h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-19h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+70h] [rbp-9h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp-1h] BYREF
  __int64 v105; // [rsp+E0h] [rbp+67h] BYREF
  PIRP Irp; // [rsp+E8h] [rbp+6Fh]
  unsigned int InputBuffer; // [rsp+F0h] [rbp+77h] BYREF
  PVOID Object; // [rsp+F8h] [rbp+7Fh] BYREF

  Irp = a2;
  v105 = a1;
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
        MonitorEnableDisableMonitor(*(DXGADAPTER **)(v12.QuadPart + 2504), 1LL);
        LOBYTE(v85) = 1;
        DpiReleaseCoreSyncAccessSafe(a1, v85);
      }
    }
    KeEnterCriticalRegion();
    v60 = (struct _ERESOURCE *)(v12.QuadPart + 1936);
    ExAcquireResourceSharedLite((PERESOURCE)(v12.QuadPart + 1936), 1u);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)(v12.QuadPart + 2400), 1u);
    v61 = *(_DWORD *)(v12.QuadPart + 236);
    if ( v61 != 2 && (*(_DWORD *)(v12.QuadPart + 240) != 2 || ((v61 - 3) & 0xFFFFFFFC) != 0 || v61 == 4) )
    {
      ExReleaseResourceLite((PERESOURCE)(v12.QuadPart + 2400));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite((PERESOURCE)(v12.QuadPart + 1936));
      KeLeaveCriticalRegion();
      goto LABEL_48;
    }
    ExReleaseResourceLite((PERESOURCE)(v12.QuadPart + 2400));
    KeLeaveCriticalRegion();
    v62 = *(_QWORD *)(v12.QuadPart + 1928);
    if ( v62 )
    {
      v63 = 0;
      do
      {
        if ( !*(_DWORD *)v62 )
          break;
        if ( *(_DWORD *)v62 == 1 )
        {
          v64 = *(struct _DEVICE_OBJECT **)(v62 + 40);
          if ( !v64 )
            goto LABEL_65;
          Object = IoGetAttachedDeviceReference(v64);
          v7 = (struct _DEVICE_OBJECT *)Object;
          if ( Object )
          {
            KeInitializeEvent(&Event, NotificationEvent, 0);
            InputBuffer = NamedPipeType;
            v82 = IoBuildDeviceIoControlRequest(0x23242Fu, v7, &InputBuffer, 4u, 0LL, 0, 1u, &Event, &IoStatusBlock);
            if ( v82 )
            {
              v82->IoStatus.Status = -1073741637;
              LODWORD(v7) = IofCallDriver(v7, v82);
              if ( (_DWORD)v7 == 259 )
              {
                KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                LODWORD(v7) = IoStatusBlock.Status;
              }
              if ( (int)v7 < 0 )
              {
                v90 = *(_QWORD *)(*(_QWORD *)(v62 + 40) + 64LL);
                KeEnterCriticalRegion();
                if ( *(_BYTE *)(v90 + 451) )
                  DpiCheckForOutstandingD3Requests(v90);
                ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v90 + 168), 1u);
                LODWORD(v7) = DpiPdoSetDevicePower(*(_QWORD *)(v62 + 40), (unsigned int)NamedPipeType, 0LL);
                if ( *(_BYTE *)(v90 + 451) )
                  DpiEnableD3Requests(*(_QWORD *)(v90 + 24));
                ExReleaseResourceLite(*(PERESOURCE *)(v90 + 168));
                KeLeaveCriticalRegion();
              }
            }
            else
            {
              LODWORD(v7) = -1073741670;
              v91 = (_QWORD *)WdLogNewEntry5_WdLowResource(v83);
              v91[4] = IoBuildDeviceIoControlRequest;
              v91[3] = DpiGdoDispatchInternalIoctl;
              v91[5] = -1073741670LL;
              WdLogEvent5_WdLowResource(v91);
            }
            ObfDereferenceObject(Object);
          }
          else
          {
            LODWORD(v7) = -1073741823;
            v92 = (_QWORD *)WdLogNewEntry5_WdError(v81);
            v92[4] = IoGetAttachedDeviceReference;
            v92[3] = DpiGdoDispatchInternalIoctl;
            v92[5] = -1073741823LL;
            WdLogEvent5_WdError(v92);
          }
          if ( (int)v7 >= 0 )
            ++v63;
          else
LABEL_65:
            DpiPdoToggleDevicePowerEvents(v62, NamedPipeType);
          *(_DWORD *)(v62 + 52) = NamedPipeType;
        }
        v62 += 120LL;
      }
      while ( v62 );
      InputBuffer = v63;
      v12 = Timeout;
      v60 = (struct _ERESOURCE *)(Timeout.QuadPart + 1936);
    }
    ExReleaseResourceLite(v60);
    KeLeaveCriticalRegion();
    v65 = InputBuffer;
    if ( !InputBuffer )
      goto LABEL_82;
    v66 = 10;
LABEL_71:
    v67 = *(_DWORD *)(v12.QuadPart + 2096);
    --v66;
    v68 = 0LL;
    v99 = 0;
    LODWORD(Object) = v66;
    if ( !v67 )
      goto LABEL_81;
    Pointer.QuadPart = -1000000LL * (unsigned int)v65;
    IoStatusBlock.Pointer = (PVOID)Pointer.QuadPart;
    while ( 1 )
    {
      Timeout = Pointer;
      v70 = v67;
      if ( v67 > 0x40 )
        v70 = 64;
      if ( NamedPipeType == 1 )
        v71 = *(_QWORD *)(v12.QuadPart + 2112);
      else
        v71 = *(_QWORD *)(v12.QuadPart + 2104);
      v72 = KeWaitForMultipleObjects(
              v70,
              (PVOID *)(v71 + 8 * v68),
              WaitAll,
              Executive,
              0,
              0,
              &Timeout,
              *(PKWAIT_BLOCK *)(v12.QuadPart + 2120));
      v7 = (struct _DEVICE_OBJECT *)v72;
      if ( v72 == 258 )
      {
        if ( (_DWORD)Object )
        {
          v93 = WdLogNewEntry5_WdWarning(v74, v73, v75, v76);
          *(_QWORD *)(v93 + 24) = DpiGdoDispatchInternalIoctl;
          *(_QWORD *)(v93 + 32) = 258LL;
          WdLogEvent5_WdWarning(v93);
        }
        else
        {
          v94 = (_QWORD *)WdLogNewEntry5_WdError(v74);
          v94[4] = KeWaitForMultipleObjects;
          v94[3] = DpiGdoDispatchInternalIoctl;
          v94[5] = 258LL;
          WdLogEvent5_WdError(v94);
        }
      }
      else if ( v72 )
      {
        v95 = (_QWORD *)WdLogNewEntry5_WdError(v74);
        v95[4] = KeWaitForMultipleObjects;
        v95[3] = DpiGdoDispatchInternalIoctl;
        v95[5] = v7;
        WdLogEvent5_WdError(v95);
LABEL_80:
        v65 = InputBuffer;
        v66 = (int)Object;
LABEL_81:
        if ( (_DWORD)v7 != 258 || !v66 )
        {
LABEL_82:
          if ( NamedPipeType == 1 )
          {
            v77 = v105;
            LOBYTE(v65) = 1;
            v78 = DpiAcquireCoreSyncAccessSafe(v105, v65);
            v79 = v78;
            if ( v78 < 0 )
            {
              v96 = WdLogNewEntry5_WdEvent();
              *(_QWORD *)(v96 + 24) = DpiGdoDispatchInternalIoctl;
              *(_QWORD *)(v96 + 32) = v79;
              WdLogEvent5_WdEvent(v96);
            }
            else
            {
              MonitorEnableDisableMonitor(*(DXGADAPTER **)(v12.QuadPart + 2504), 0LL);
              LOBYTE(v80) = 1;
              DpiReleaseCoreSyncAccessSafe(v77, v80);
            }
          }
          goto LABEL_48;
        }
        goto LABEL_71;
      }
      Pointer = (union _LARGE_INTEGER)IoStatusBlock.Pointer;
      v68 = v70 + v99;
      v99 += v70;
      v67 -= v70;
      if ( !v67 )
        goto LABEL_80;
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
    v36 = v15 - 4;
    if ( !v36 )
    {
      *(_QWORD *)(v4 + 192) = *(_QWORD *)&Parameters->NamedPipeType;
      Parameters->InboundQuota = *(unsigned __int8 *)(v12.QuadPart + 1060);
      Parameters->DefaultTimeout.QuadPart = *(_QWORD *)(v12.QuadPart + 152);
      v58 = *(_DWORD *)(v4 + 160);
      *(_DWORD *)&Parameters->TimeoutSpecified = v58;
      if ( !*(_DWORD *)(v4 + 156) && *(_BYTE *)(v12.QuadPart + 1056) == 1 )
        *(_DWORD *)&Parameters->TimeoutSpecified = v58 | 0x20000000;
      LODWORD(v7) = 0;
      v5 = 40LL;
      goto LABEL_28;
    }
    v37 = (unsigned int)(v36 - 12);
    if ( (_DWORD)v37 )
    {
      v38 = v37 - 8;
      if ( !v38 )
      {
        if ( (unsigned int)Length >= 0x18 && UserBuffer )
        {
          LODWORD(v7) = 0;
          v5 = 24LL;
          *UserBuffer = *(_DWORD *)(*(_QWORD *)(v4 + 40) + 24LL);
          UserBuffer[1] = *(_DWORD *)(v4 + 156);
          *((_QWORD *)UserBuffer + 1) = *(_QWORD *)(v12.QuadPart + 2504);
          *((_QWORD *)UserBuffer + 2) = *(_QWORD *)(*(_QWORD *)(v12.QuadPart + 2504) + 252LL);
          goto LABEL_28;
        }
        goto LABEL_102;
      }
      v39 = v38 - 4;
      if ( v39 )
      {
        if ( v39 != 12 )
          goto LABEL_28;
        if ( (unsigned int)Length >= 8 && UserBuffer )
        {
          LOBYTE(a2) = 1;
          LODWORD(v7) = DpiAcquireCoreSyncAccessSafe(a1, a2);
          if ( (int)v7 >= 0 )
          {
            CurrentIntegerVSyncFromClientVidPnSource = DmmGetCurrentIntegerVSyncFromClientVidPnSource(
                                                         *(DXGADAPTER **)(v12.QuadPart + 2504),
                                                         *(_DWORD *)(v4 + 156),
                                                         (unsigned int *)&v105,
                                                         (int *)&InputBuffer);
            LOBYTE(v41) = 1;
            LODWORD(v7) = CurrentIntegerVSyncFromClientVidPnSource;
            DpiReleaseCoreSyncAccessSafe(a1, v41);
            if ( (int)v7 < 0 )
            {
              v84 = WdLogNewEntry5_WdWarning(v43, v42, v44, v45);
              *(_QWORD *)(v84 + 24) = DpiGdoDispatchInternalIoctl;
              *(_QWORD *)(v84 + 32) = *(unsigned int *)(v4 + 156);
              WdLogEvent5_WdWarning(v84);
            }
            else
            {
              v46 = InputBuffer == 1;
              *UserBuffer = v105;
              *((_BYTE *)UserBuffer + 4) = v46;
            }
          }
          goto LABEL_28;
        }
LABEL_102:
        LODWORD(v7) = -1073741789;
        goto LABEL_28;
      }
      goto LABEL_48;
    }
    if ( Options < 8 || !Parameters )
      goto LABEL_102;
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v37, a2, CurrentStackLocation, Length);
    if ( Parameters->NamedPipeType == 1 )
    {
      v52 = *(_DWORD *)(v4 + 200);
      if ( v52 != -1 && v52 != CurrentProcessSessionId )
      {
        v86 = WdLogNewEntry5_WdWarning(v48, v47, v50, v51);
        *(_QWORD *)(v86 + 32) = -1073741637LL;
LABEL_100:
        *(_QWORD *)(v86 + 24) = DpiGdoDispatchInternalIoctl;
        WdLogEvent5_WdWarning(v86);
        goto LABEL_101;
      }
      if ( (int)DxgkUseAdapterViewInCurrentSession((struct _LUID *)(v12.QuadPart + 1416), *(_DWORD *)(v4 + 156), 1) < 0 )
      {
LABEL_101:
        Parameters->ReadMode = 0;
        goto LABEL_48;
      }
      *(_DWORD *)(v4 + 200) = CurrentProcessSessionId;
    }
    else
    {
      v57 = (int)DxgkUseAdapterViewInCurrentSession((struct _LUID *)(v12.QuadPart + 1416), *(_DWORD *)(v4 + 156), 0);
      if ( *(_DWORD *)(v4 + 200) != CurrentProcessSessionId )
      {
        v86 = WdLogNewEntry5_WdWarning(v54, v53, v55, v56);
        *(_QWORD *)(v86 + 32) = v57;
        goto LABEL_100;
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
    v87 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v87[4] = DxgkAcquireSessionModeChangeLock;
    v87[3] = DpiGdoDispatchInternalIoctl;
    v87[5] = v7;
    WdLogEvent5_WdError(v87);
    goto LABEL_28;
  }
  AllMonitorDevicesFromSessionView = DxgkGetAllMonitorDevicesFromSessionView(
                                       (struct _LUID *)(v12.QuadPart + 1416),
                                       *(_DWORD *)(v4 + 156),
                                       0LL);
  v7 = (struct _DEVICE_OBJECT *)AllMonitorDevicesFromSessionView;
  if ( (int)(AllMonitorDevicesFromSessionView + 0x80000000) >= 0 && AllMonitorDevicesFromSessionView != -2147483643 )
  {
    v88 = (_QWORD *)WdLogNewEntry5_WdError(0x80000000LL);
    v88[4] = DxgkGetAllMonitorDevicesFromSessionView;
    v88[3] = DpiGdoDispatchInternalIoctl;
    v88[5] = v7;
    WdLogEvent5_WdError(v88);
LABEL_106:
    DxgkReleaseSessionModeChangeLock();
    goto LABEL_28;
  }
  v20 = InputBuffer;
  v21 = *(_DWORD *)(v12.QuadPart + 2272) + ((_BYTE)InputBuffer != 0 ? (unsigned int)Object : 0);
  if ( !v21 )
    goto LABEL_27;
  Size = 20 * (v21 + 1);
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, Size, 0x74727044u);
  Timeout.QuadPart = (LONGLONG)PoolWithTag;
  QuadPart = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v7) = -1073741801;
    v89 = (_QWORD *)WdLogNewEntry5_WdLowResource(v23);
    v89[4] = ExAllocatePoolWithTag;
    v89[3] = DpiGdoDispatchInternalIoctl;
    v89[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v89);
    goto LABEL_106;
  }
  memset(PoolWithTag, 0, Size);
  if ( v20 )
  {
    v97 = v21;
    LODWORD(v7) = DxgkGetAllMonitorDevicesFromSessionView(
                    (struct _LUID *)(v12.QuadPart + 1416),
                    *(_DWORD *)(v4 + 156),
                    (__int64)QuadPart);
    if ( (int)v7 < 0 )
    {
LABEL_105:
      ExFreePoolWithTag(QuadPart, 0);
      goto LABEL_106;
    }
    v24 = v97;
  }
  else
  {
    v24 = 0;
  }
  KeEnterCriticalRegion();
  Size = v12.QuadPart + 1936;
  ExAcquireResourceSharedLite((PERESOURCE)(v12.QuadPart + 1936), 1u);
  LODWORD(v7) = DpiAcquireCoreSyncAccessSafe(v105, 0LL);
  if ( (int)v7 < 0 )
  {
    ExReleaseResourceLite((PERESOURCE)Size);
    KeLeaveCriticalRegion();
    goto LABEL_105;
  }
  v25 = v24;
  v26 = *(__int64 **)(v12.QuadPart + 2256);
  v27 = &QuadPart[20 * v25];
  if ( !*(_DWORD *)(v12.QuadPart + 2272) )
    goto LABEL_26;
  v28 = InputBuffer;
  v29 = 0;
  while ( *v26 != *(_QWORD *)(v12.QuadPart + 2256) )
  {
    if ( *((_DWORD *)v26 + 116) != 1 || *((_BYTE *)v26 + 478) != 1 )
      goto LABEL_24;
    v98 = *((_DWORD *)v26 + 118);
    DmmGetVideoOutputTechnology(*(_QWORD *)(v12.QuadPart + 2504), v98, &v100, 0LL);
    v27[16] = IsInternalVideoOutput(v100);
    v30 = *(unsigned int *)(v4 + 156);
    v31 = *(_QWORD *)(v12.QuadPart + 2504);
    LOBYTE(Object) = 0;
    DmmIsPresentPathInClientVidPnTopology(v31, v30, v98, &Object);
    if ( !(_BYTE)Object )
    {
      if ( !*((_BYTE *)v26 + 912) )
        goto LABEL_24;
      v32 = *(_DWORD *)(v4 + 156);
      v33 = *(DXGADAPTER **)(v12.QuadPart + 2504);
      LOBYTE(InputBuffer) = 0;
      DmmCanAddPresentPathToClientVidPn(v33, v32, v98, (char *)&InputBuffer);
      if ( !(_BYTE)InputBuffer )
        goto LABEL_24;
      *(_DWORD *)v27 = 0;
      goto LABEL_23;
    }
    if ( v28 )
    {
      *(_DWORD *)v27 = 1;
LABEL_23:
      *(_DWORD *)v27 |= 0x20000000u;
      *((_DWORD *)v27 + 1) = v98;
      *((_QWORD *)v27 + 1) = *(_QWORD *)(v12.QuadPart + 1416);
      v27 += 20;
    }
LABEL_24:
    v26 = (__int64 *)*v26;
    if ( (unsigned int)++v29 >= *(_DWORD *)(v12.QuadPart + 2272) )
      break;
  }
  UserBuffer = IoStatusBlock.Pointer;
  QuadPart = (char *)Timeout.QuadPart;
LABEL_26:
  DpiReleaseCoreSyncAccessSafe(v105, 0LL);
  ExReleaseResourceLite((PERESOURCE)Size);
  KeLeaveCriticalRegion();
LABEL_27:
  DxgkReleaseSessionModeChangeLock();
  LODWORD(v7) = 0;
  *(_QWORD *)UserBuffer = QuadPart;
  v5 = 8LL;
LABEL_28:
  v34 = Irp;
  Irp->IoStatus.Status = (int)v7;
  v34->IoStatus.Information = v5;
  IofCompleteRequest(v34, 1);
  return (unsigned int)v7;
}
