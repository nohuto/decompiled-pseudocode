/*
 * XREFs of DpiMiracastStopMiracastSessionSync @ 0x1C00251B0
 * Callers:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C000A590 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C0025700 (DpiMiracastTargetDeviceChange.c)
 *     DxgkMiracastStopMiracastSession @ 0x1C0027A90 (DxgkMiracastStopMiracastSession.c)
 *     DpiFdoStopMiracastSession @ 0x1C00BC5D0 (DpiFdoStopMiracastSession.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C00BE440 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiMiracastStopMiracastSessionWork @ 0x1C016A470 (DpiMiracastStopMiracastSessionWork.c)
 *     DxgkHandleMiracastEscape @ 0x1C016A500 (DxgkHandleMiracastEscape.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0005A48 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C0008568 (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000C824 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0024FA0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0025B74 (DpiMiracastTearDownAssociation.c)
 *     Template_pxzqq @ 0x1C0027C48 (Template_pxzqq.c)
 *     Template_qqqzz @ 0x1C0027D24 (Template_qqqzz.c)
 *     DpiMiracastPerfReportGlobalConfiguration @ 0x1C0029F90 (DpiMiracastPerfReportGlobalConfiguration.c)
 *     DxgkWriteDiagEntry @ 0x1C009AC30 (DxgkWriteDiagEntry.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C0168BD0 (DpiMiracastBroadcastDeviceStateChange.c)
 *     DpiMiracastSendAsyncUserModeRequest @ 0x1C0169E20 (DpiMiracastSendAsyncUserModeRequest.c)
 */

__int64 __fastcall DpiMiracastStopMiracastSessionSync(
        char *P,
        char a2,
        union _LARGE_INTEGER *a3,
        struct _KEVENT *a4,
        unsigned int a5,
        unsigned int a6)
{
  char v6; // si
  char v8; // r12
  __int64 v10; // rax
  int v11; // edi
  __int64 v12; // rax
  __int64 v13; // rbp
  char *v14; // r14
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rax
  int v20; // eax
  int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct _KEVENT *v24; // rcx
  struct _KEVENT *v25; // rcx
  struct _KEVENT *v26; // rcx
  int v27; // edx
  int v28; // edi
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // r14
  _QWORD *v32; // rax
  NTSTATUS v33; // eax
  __int64 v34; // rdi
  __int64 v35; // rcx
  _QWORD *v36; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-E8h]
  char DeviceObject; // [rsp+50h] [rbp-B8h] BYREF
  char v40; // [rsp+51h] [rbp-B7h]
  char v41; // [rsp+52h] [rbp-B6h]
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp-B0h] BYREF
  PLARGE_INTEGER v43; // [rsp+60h] [rbp-A8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v45[16]; // [rsp+80h] [rbp-88h] BYREF

  v43 = a3;
  v6 = 0;
  DeviceObject = 0;
  v41 = a2;
  v8 = a2;
  _InterlockedIncrement((volatile signed __int32 *)P + 6);
  _InterlockedXor((volatile signed __int32 *)P + 7, (unsigned int)DpiMiracastStopSessionRequestCallback);
  if ( a2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)P + 6);
    _InterlockedXor((volatile signed __int32 *)P + 7, (unsigned int)DpiMiracastStopMiracastSessionSync);
  }
  AcquireMiniportListMutex();
  v10 = *((_QWORD *)P + 38);
  if ( !v10 )
  {
    v11 = -2147483642;
    v12 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v12 + 24) = DpiMiracastStopMiracastSessionSync;
    *(_QWORD *)(v12 + 32) = P;
    WdLogEvent5_WdEvent(v12);
LABEL_43:
    DpiMiracastReleaseMiracastDeviceContext((int *)P, (unsigned int)DpiMiracastStopSessionRequestCallback);
    goto LABEL_44;
  }
  v13 = *(_QWORD *)(v10 + 64);
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v13 + 451) )
    DpiCheckForOutstandingD3Requests(v13);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v13 + 168), 1u);
  v14 = P + 32;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(P + 32);
  v16 = *((unsigned int *)P + 72);
  *((_QWORD *)P + 11) = KeGetCurrentThread();
  if ( (unsigned int)(v16 - 1) <= 1 )
  {
    if ( P[463] )
      a5 = 8;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
      Template_pxzqq(
        v16,
        &EventMiracastStopMiracastSession,
        v15,
        *(_QWORD *)(v13 + 48),
        *((_QWORD *)P + 12),
        *((_QWORD *)P + 19),
        a5,
        a6);
    if ( a5 <= 8 && (v20 = 374, _bittest(&v20, a5)) || a5 - 133 <= 0xB && (v21 = 2065, _bittest(&v21, a5 - 133)) )
    {
      DpiMiracastPerfReportGlobalConfiguration(P);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
        Template_qqqzz(
          v22,
          &EventMiracastStopMiracastSessionAbnormal,
          v23,
          a5,
          a6,
          *((_DWORD *)P + 51),
          *((_QWORD *)P + 32),
          *((_QWORD *)P + 29));
    }
    *((_DWORD *)P + 73) = *((_DWORD *)P + 72);
    *((_DWORD *)P + 72) = 3;
    *((_DWORD *)P + 134) = a5;
    *((_DWORD *)P + 136) = a6;
    v40 = 1;
    *((_DWORD *)P + 74) = 2;
    DpiMiracastBroadcastDeviceStateChange(P);
    v24 = (struct _KEVENT *)*((_QWORD *)P + 43);
    if ( v24 )
    {
      KeSetEvent(v24, 0, 0);
      ObfDereferenceObject(*((PVOID *)P + 43));
      *((_QWORD *)P + 43) = 0LL;
    }
    v25 = (struct _KEVENT *)*((_QWORD *)P + 42);
    *((_QWORD *)P + 43) = a4;
    KeClearEvent(v25);
    if ( a4 )
      KeClearEvent(a4);
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v26 = (struct _KEVENT *)*((_QWORD *)P + 46);
    if ( v26 )
    {
      KeSetEvent(v26, 0, 0);
      *((_QWORD *)P + 46) = 0LL;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v28 = 3;
    do
    {
      if ( v28 != 3 )
      {
        Interval.QuadPart = -10000LL;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      LOBYTE(v27) = 1;
      LODWORD(Timeout) = 0;
      v29 = DpiMiracastSendAsyncUserModeRequest(
              (int)P,
              v27,
              2295816,
              0,
              (size_t)Timeout,
              0LL,
              0,
              (__int64)DpiMiracastStopSessionRequestCallback,
              (__int64)P,
              (PDEVICE_OBJECT)&DeviceObject);
      v31 = v29;
      if ( DeviceObject )
        break;
      --v28;
    }
    while ( v28 );
    if ( v29 >= 0 )
    {
      v11 = 2;
      memset(v45, 0, sizeof(v45));
      DxgkDiagInitializeCodePointPacket(v45, 71, a5, 2, a6);
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v45);
    }
    else
    {
      v11 = -2147483647;
      v32 = (_QWORD *)WdLogNewEntry5_WdError(v30);
      v32[3] = DpiMiracastStopMiracastSessionSync;
      v32[4] = DpiMiracastSendAsyncUserModeRequest;
      v32[5] = v31;
      WdLogEvent5_WdError(v32);
    }
    v8 = v41;
    v14 = P + 32;
    v6 = v40;
  }
  else if ( (_DWORD)v16 == 3 )
  {
    v11 = 2;
    v17 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v17 + 24) = DpiMiracastStopMiracastSessionSync;
    *(_QWORD *)(v17 + 32) = P;
    WdLogEvent5_WdEvent(v17);
  }
  else
  {
    v11 = -2147483641;
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v18[3] = DpiMiracastStopMiracastSessionSync;
    v18[4] = P;
    v18[5] = -2147483641LL;
    WdLogEvent5_WdError(v18);
  }
  if ( v11 < 0 && v6 )
    DpiMiracastTearDownAssociation(P, 1);
  *((_QWORD *)P + 11) = 0LL;
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v14);
  if ( *(_BYTE *)(v13 + 451) )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v13 + 24) + 64LL) + 2680LL));
  ExReleaseResourceLite(*(PERESOURCE *)(v13 + 168));
  KeLeaveCriticalRegion();
  if ( v11 < 0 && !DeviceObject )
    goto LABEL_43;
LABEL_44:
  _InterlockedExchange64(&qword_1C0046C88, 0LL);
  KeReleaseMutex((PRKMUTEX)Mutex, 0);
  if ( v8 )
  {
    if ( v11 == 2 )
    {
      v33 = KeWaitForSingleObject(*((PVOID *)P + 42), Executive, 0, 0, v43);
      v34 = v33;
      if ( v33 )
      {
        DpiMiracastTearDownAssociation(P, 0);
        v36 = (_QWORD *)WdLogNewEntry5_WdError(v35);
        v36[3] = DpiMiracastStopMiracastSessionSync;
        v36[4] = KeWaitForSingleObject;
        v36[5] = v34;
        WdLogEvent5_WdError(v36);
      }
      v11 = *((_DWORD *)P + 74);
    }
    DpiMiracastReleaseMiracastDeviceContext((int *)P, (unsigned int)DpiMiracastStopMiracastSessionSync);
  }
  if ( v11 < 0 && a4 && !v6 )
  {
    KeSetEvent(a4, 0, 0);
    ObfDereferenceObject(a4);
  }
  return (unsigned int)v11;
}
