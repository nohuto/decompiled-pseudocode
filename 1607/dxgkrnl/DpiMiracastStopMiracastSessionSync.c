/*
 * XREFs of DpiMiracastStopMiracastSessionSync @ 0x1C002C100
 * Callers:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C000BA90 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C002C600 (DpiMiracastTargetDeviceChange.c)
 *     DxgkMiracastStopMiracastSession @ 0x1C002E65C (DxgkMiracastStopMiracastSession.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C00C6070 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiFdoStopMiracastSession @ 0x1C00E02B0 (DpiFdoStopMiracastSession.c)
 *     DpiMiracastStopMiracastSessionWork @ 0x1C01981E0 (DpiMiracastStopMiracastSessionWork.c)
 *     DxgkHandleMiracastEscape @ 0x1C0198270 (DxgkHandleMiracastEscape.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000BB0C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000EA98 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C002BF28 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastTearDownAssociation @ 0x1C002CA34 (DpiMiracastTearDownAssociation.c)
 *     Template_pxzqq @ 0x1C002E780 (Template_pxzqq.c)
 *     Template_qqqz @ 0x1C002E85C (Template_qqqz.c)
 *     DpiMiracastPerfReportGlobalConfiguration @ 0x1C0030F78 (DpiMiracastPerfReportGlobalConfiguration.c)
 *     DxgkWriteDiagEntry @ 0x1C00C0600 (DxgkWriteDiagEntry.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C0196B28 (DpiMiracastBroadcastDeviceStateChange.c)
 *     DpiMiracastSendAsyncUserModeRequest @ 0x1C0197BB0 (DpiMiracastSendAsyncUserModeRequest.c)
 */

__int64 __fastcall DpiMiracastStopMiracastSessionSync(
        char *P,
        char a2,
        union _LARGE_INTEGER *a3,
        struct _KEVENT *a4,
        unsigned int a5,
        int a6)
{
  char v6; // si
  __int64 v9; // rax
  int v10; // edi
  __int64 v11; // rax
  __int64 v12; // r14
  char *v13; // r13
  __int64 v14; // r8
  IRP *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  int v19; // eax
  int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // r8
  struct _KEVENT *v23; // rcx
  struct _KEVENT *v24; // rcx
  struct _KEVENT *v25; // rcx
  int v26; // edx
  int v27; // edi
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r15
  __int64 v31; // rax
  NTSTATUS v32; // eax
  __int64 v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-A9h]
  char DeviceObject; // [rsp+60h] [rbp-69h] BYREF
  char v39; // [rsp+61h] [rbp-68h]
  char v40; // [rsp+62h] [rbp-67h]
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp-61h] BYREF
  PLARGE_INTEGER v42; // [rsp+70h] [rbp-59h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-51h] BYREF
  _QWORD v44[8]; // [rsp+90h] [rbp-39h] BYREF

  v42 = a3;
  v6 = 0;
  DeviceObject = 0;
  v40 = a2;
  _InterlockedIncrement((volatile signed __int32 *)P + 6);
  _InterlockedXor((volatile signed __int32 *)P + 7, (unsigned int)DpiMiracastStopSessionRequestCallback);
  if ( a2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)P + 6);
    _InterlockedXor((volatile signed __int32 *)P + 7, (unsigned int)DpiMiracastStopMiracastSessionSync);
  }
  AcquireMiniportListMutex();
  v9 = *((_QWORD *)P + 55);
  if ( !v9 )
  {
    v10 = -2147483642;
    v11 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v11 + 24) = P;
    WdLogEvent5_WdEvent(v11);
LABEL_46:
    DpiMiracastReleaseMiracastDeviceContext((int *)P, (unsigned int)DpiMiracastStopSessionRequestCallback);
    goto LABEL_47;
  }
  v12 = *(_QWORD *)(v9 + 64);
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v12 + 483) )
    DpiCheckForOutstandingD3Requests(v12);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v12 + 168), 1u);
  v13 = P + 32;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(P + 32);
  v15 = (IRP *)*((unsigned int *)P + 104);
  *((_QWORD *)P + 11) = KeGetCurrentThread();
  if ( (unsigned int)((_DWORD)v15 - 1) <= 1 )
  {
    if ( (_DWORD)v15 == 1 )
    {
      v15 = (IRP *)*((_QWORD *)P + 54);
      if ( v15 )
        IoCancelIrp(v15);
    }
    if ( P[600] )
      a5 = 8;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
      Template_pxzqq(
        v15,
        &EventMiracastStopMiracastSession,
        v14,
        *(_QWORD *)(v12 + 48),
        *((_QWORD *)P + 12),
        *((_QWORD *)P + 19),
        a5,
        a6);
    if ( a5 <= 8 && (v19 = 374, _bittest(&v19, a5)) || a5 - 133 <= 0xB && (v20 = 2065, _bittest(&v20, a5 - 133)) )
    {
      DpiMiracastPerfReportGlobalConfiguration(P);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
        Template_qqqz(
          v21,
          &EventMiracastStopMiracastSessionAbnormal,
          v22,
          a5,
          a6,
          *((_DWORD *)P + 51),
          *((_QWORD *)P + 45));
    }
    *((_DWORD *)P + 105) = *((_DWORD *)P + 104);
    *((_DWORD *)P + 104) = 3;
    *((_DWORD *)P + 168) = a5;
    *((_DWORD *)P + 170) = a6;
    v39 = 1;
    *((_DWORD *)P + 106) = 2;
    DpiMiracastBroadcastDeviceStateChange(P);
    v23 = (struct _KEVENT *)*((_QWORD *)P + 60);
    if ( v23 )
    {
      KeSetEvent(v23, 0, 0);
      ObfDereferenceObject(*((PVOID *)P + 60));
      *((_QWORD *)P + 60) = 0LL;
    }
    v24 = (struct _KEVENT *)*((_QWORD *)P + 59);
    *((_QWORD *)P + 60) = a4;
    KeClearEvent(v24);
    if ( a4 )
      KeClearEvent(a4);
    KeAcquireInStackQueuedSpinLock(&qword_1C00571C8, &LockHandle);
    v25 = (struct _KEVENT *)*((_QWORD *)P + 63);
    if ( v25 )
    {
      KeSetEvent(v25, 0, 0);
      *((_QWORD *)P + 63) = 0LL;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v27 = 3;
    do
    {
      if ( v27 != 3 )
      {
        Interval.QuadPart = -10000LL;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      LODWORD(Timeout) = 0;
      v28 = DpiMiracastSendAsyncUserModeRequest(
              (int)P,
              v26,
              2295816,
              0,
              (size_t)Timeout,
              0LL,
              0,
              (__int64)DpiMiracastStopSessionRequestCallback,
              (__int64)P,
              (PDEVICE_OBJECT)&DeviceObject,
              0LL);
      v30 = v28;
      if ( DeviceObject )
        break;
      --v27;
    }
    while ( v27 );
    if ( v28 >= 0 )
    {
      v10 = 2;
      memset(v44, 0, sizeof(v44));
      memset(&v44[1], 0, 36);
      v44[0] = 0x4000000006LL;
      LODWORD(v44[6]) = 71;
      HIDWORD(v44[6]) = a5;
      LODWORD(v44[7]) = 2;
      HIDWORD(v44[7]) = a6;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v44);
    }
    else
    {
      v10 = -2147483647;
      v31 = WdLogNewEntry5_WdError(v29);
      *(_QWORD *)(v31 + 24) = v30;
      WdLogEvent5_WdError(v31);
    }
    v6 = v39;
    v13 = P + 32;
  }
  else if ( (_DWORD)v15 == 3 )
  {
    v10 = 2;
    v16 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v16 + 24) = P;
    WdLogEvent5_WdEvent(v16);
  }
  else
  {
    v10 = -2147483641;
    v17 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v17 + 24) = P;
    *(_QWORD *)(v17 + 32) = -2147483641LL;
    WdLogEvent5_WdError(v17);
  }
  if ( v10 < 0 && v6 )
    DpiMiracastTearDownAssociation(P, 1);
  *((_QWORD *)P + 11) = 0LL;
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v13);
  if ( *(_BYTE *)(v12 + 483) )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v12 + 24) + 64LL) + 3872LL));
  ExReleaseResourceLite(*(PERESOURCE *)(v12 + 168));
  KeLeaveCriticalRegion();
  if ( v10 < 0 && !DeviceObject )
    goto LABEL_46;
LABEL_47:
  _InterlockedExchange64(&qword_1C0056EC8, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( v40 )
  {
    if ( v10 == 2 )
    {
      v32 = KeWaitForSingleObject(*((PVOID *)P + 59), Executive, 0, 0, v42);
      v33 = v32;
      if ( v32 )
      {
        DpiMiracastTearDownAssociation(P, 0);
        v35 = WdLogNewEntry5_WdError(v34);
        *(_QWORD *)(v35 + 24) = v33;
        WdLogEvent5_WdError(v35);
      }
      v10 = *((_DWORD *)P + 106);
    }
    DpiMiracastReleaseMiracastDeviceContext((int *)P, (unsigned int)DpiMiracastStopMiracastSessionSync);
  }
  if ( v10 < 0 && a4 && !v6 )
  {
    KeSetEvent(a4, 0, 0);
    ObfDereferenceObject(a4);
  }
  return (unsigned int)v10;
}
