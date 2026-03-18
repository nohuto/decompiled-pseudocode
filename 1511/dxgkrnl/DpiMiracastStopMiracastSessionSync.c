/*
 * XREFs of DpiMiracastStopMiracastSessionSync @ 0x1C0024CF0
 * Callers:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C000B700 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C0025250 (DpiMiracastTargetDeviceChange.c)
 *     DxgkMiracastStopMiracastSession @ 0x1C0027700 (DxgkMiracastStopMiracastSession.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C00B8F70 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiFdoStopMiracastSession @ 0x1C00CA870 (DpiFdoStopMiracastSession.c)
 *     DpiMiracastStopMiracastSessionWork @ 0x1C016EC80 (DpiMiracastStopMiracastSessionWork.c)
 *     DxgkHandleMiracastEscape @ 0x1C016ED10 (DxgkHandleMiracastEscape.c)
 * Callees:
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C000A24C (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B77C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000DC2C (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0024AE0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastTearDownAssociation @ 0x1C00256C4 (DpiMiracastTearDownAssociation.c)
 *     Template_pxzqq @ 0x1C002783C (Template_pxzqq.c)
 *     Template_qqqzz @ 0x1C0027918 (Template_qqqzz.c)
 *     DpiMiracastPerfReportGlobalConfiguration @ 0x1C0029BF8 (DpiMiracastPerfReportGlobalConfiguration.c)
 *     DxgkWriteDiagEntry @ 0x1C00A68F0 (DxgkWriteDiagEntry.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C016D340 (DpiMiracastBroadcastDeviceStateChange.c)
 *     DpiMiracastSendAsyncUserModeRequest @ 0x1C016E5A0 (DpiMiracastSendAsyncUserModeRequest.c)
 */

__int64 __fastcall DpiMiracastStopMiracastSessionSync(
        char *P,
        char a2,
        union _LARGE_INTEGER *a3,
        struct _KEVENT *a4,
        unsigned int a5,
        unsigned int a6)
{
  char v6; // r13
  char v8; // r12
  __int64 v10; // rax
  int v11; // edi
  __int64 v12; // rax
  __int64 v13; // rbp
  char *v14; // r14
  __int64 v15; // r8
  IRP *v16; // rcx
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
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-F8h]
  char DeviceObject; // [rsp+60h] [rbp-B8h] BYREF
  char v40; // [rsp+61h] [rbp-B7h]
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp-B0h] BYREF
  PLARGE_INTEGER v42; // [rsp+70h] [rbp-A8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-A0h] BYREF
  _DWORD v44[16]; // [rsp+90h] [rbp-88h] BYREF

  v42 = a3;
  v6 = 0;
  DeviceObject = 0;
  v40 = a2;
  v8 = a2;
  _InterlockedIncrement((volatile signed __int32 *)P + 6);
  _InterlockedXor((volatile signed __int32 *)P + 7, (unsigned int)DpiMiracastStopSessionRequestCallback);
  if ( a2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)P + 6);
    _InterlockedXor((volatile signed __int32 *)P + 7, (unsigned int)DpiMiracastStopMiracastSessionSync);
  }
  AcquireMiniportListMutex();
  v10 = *((_QWORD *)P + 39);
  if ( !v10 )
  {
    v11 = -2147483642;
    v12 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v12 + 24) = DpiMiracastStopMiracastSessionSync;
    *(_QWORD *)(v12 + 32) = P;
    WdLogEvent5_WdEvent(v12);
LABEL_46:
    DpiMiracastReleaseMiracastDeviceContext((int *)P, (unsigned int)DpiMiracastStopSessionRequestCallback);
    goto LABEL_47;
  }
  v13 = *(_QWORD *)(v10 + 64);
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v13 + 483) )
    DpiCheckForOutstandingD3Requests(v13);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v13 + 168), 1u);
  v14 = P + 32;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(P + 32);
  v16 = (IRP *)*((unsigned int *)P + 72);
  *((_QWORD *)P + 11) = KeGetCurrentThread();
  if ( (unsigned int)((_DWORD)v16 - 1) <= 1 )
  {
    if ( (_DWORD)v16 == 1 )
    {
      v16 = (IRP *)*((_QWORD *)P + 38);
      if ( v16 )
        IoCancelIrp(v16);
    }
    if ( P[472] )
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
    v6 = 1;
    *((_DWORD *)P + 72) = 3;
    *((_DWORD *)P + 136) = a5;
    *((_DWORD *)P + 138) = a6;
    *((_DWORD *)P + 74) = 2;
    DpiMiracastBroadcastDeviceStateChange(P);
    v24 = (struct _KEVENT *)*((_QWORD *)P + 44);
    if ( v24 )
    {
      KeSetEvent(v24, 0, 0);
      ObfDereferenceObject(*((PVOID *)P + 44));
      *((_QWORD *)P + 44) = 0LL;
    }
    v25 = (struct _KEVENT *)*((_QWORD *)P + 43);
    *((_QWORD *)P + 44) = a4;
    KeClearEvent(v25);
    if ( a4 )
      KeClearEvent(a4);
    KeAcquireInStackQueuedSpinLock(&qword_1C0047008, &LockHandle);
    v26 = (struct _KEVENT *)*((_QWORD *)P + 47);
    if ( v26 )
    {
      KeSetEvent(v26, 0, 0);
      *((_QWORD *)P + 47) = 0LL;
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
              (PDEVICE_OBJECT)&DeviceObject,
              0LL);
      v31 = v29;
      if ( DeviceObject )
        break;
      --v28;
    }
    while ( v28 );
    if ( v29 >= 0 )
    {
      v11 = 2;
      memset(v44, 0, sizeof(v44));
      DxgkDiagInitializeCodePointPacket(v44, 71, a5, 2, a6);
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v44);
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
    v8 = v40;
    v14 = P + 32;
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
  if ( *(_BYTE *)(v13 + 483) )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v13 + 24) + 64LL) + 2720LL));
  ExReleaseResourceLite(*(PERESOURCE *)(v13 + 168));
  KeLeaveCriticalRegion();
  if ( v11 < 0 && !DeviceObject )
    goto LABEL_46;
LABEL_47:
  _InterlockedExchange64(&qword_1C0046D08, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( v8 )
  {
    if ( v11 == 2 )
    {
      v33 = KeWaitForSingleObject(*((PVOID *)P + 43), Executive, 0, 0, v42);
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
