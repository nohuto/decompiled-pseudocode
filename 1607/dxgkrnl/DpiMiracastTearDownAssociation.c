/*
 * XREFs of DpiMiracastTearDownAssociation @ 0x1C002CA34
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x1C002C100 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C002C600 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C019766C (DpiMiracastHandleStartSessionDone.c)
 *     DpiMiracastHandleStopSessionDone @ 0x1C0197ACC (DpiMiracastHandleStopSessionDone.c)
 *     DpiMiracastStartSessionRequestCallback @ 0x1C0198120 (DpiMiracastStartSessionRequestCallback.c)
 *     DpiMiracastStopSessionRequestCallback @ 0x1C0198230 (DpiMiracastStopSessionRequestCallback.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000BB0C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000EA98 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DpIndicateChildStatus @ 0x1C0029560 (DpIndicateChildStatus.c)
 *     ??_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z @ 0x1C002AC18 (--_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z.c)
 *     DpiMiracastEtwLogStopMiracastSessionStage @ 0x1C002B38C (DpiMiracastEtwLogStopMiracastSessionStage.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C002BF28 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     Template_qqz @ 0x1C002E91C (Template_qqz.c)
 *     TraceLoggingWriteMiracastSessionStop @ 0x1C0031804 (TraceLoggingWriteMiracastSessionStop.c)
 *     DxgkWriteDiagEntry @ 0x1C00C0600 (DxgkWriteDiagEntry.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C0196B28 (DpiMiracastBroadcastDeviceStateChange.c)
 *     DpiMiracastDdiMiracastDestroyContext @ 0x1C0196F7C (DpiMiracastDdiMiracastDestroyContext.c)
 *     DpiMiracastPerfCleanupPerfTrack @ 0x1C019EC5C (DpiMiracastPerfCleanupPerfTrack.c)
 */

void __fastcall DpiMiracastTearDownAssociation(char *P, int a2, int a3, unsigned int a4, char a5)
{
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  struct _DEVICE_OBJECT *v15; // rcx
  MIRACAST_CHUNK_LIST *v16; // rcx
  MIRACAST_CHUNK_LIST *v17; // rcx
  MIRACAST_CHUNK_LIST *v18; // rcx
  MIRACAST_CHUNK_LIST *v19; // rcx
  MIRACAST_CHUNK_LIST *v20; // rcx
  MIRACAST_CHUNK_LIST *v21; // rcx
  struct _KEVENT *v22; // rcx
  struct _KEVENT *v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // r13d
  __int64 v26; // [rsp+30h] [rbp-51h] BYREF
  __int64 v27; // [rsp+38h] [rbp-49h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-41h] BYREF
  _QWORD v29[8]; // [rsp+60h] [rbp-21h] BYREF

  if ( !a5 )
    AcquireMiniportListMutex();
  if ( *((_DWORD *)P + 112) != a2 && a2 != -2 )
    goto LABEL_43;
  v9 = *((_QWORD *)P + 55);
  if ( v9 )
  {
    v11 = *(_QWORD *)(v9 + 64);
    v26 = 0LL;
    v27 = 0LL;
    if ( !a5 )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v11 + 483) )
        DpiCheckForOutstandingD3Requests(v11);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v11 + 168), 1u);
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(P + 32);
      *((_QWORD *)P + 11) = KeGetCurrentThread();
    }
    *((_DWORD *)P + 106) = a3;
    if ( a4 <= 0x7F )
    {
      *((_DWORD *)P + 105) = *((_DWORD *)P + 104);
      *((_DWORD *)P + 104) = 0;
      DpiMiracastBroadcastDeviceStateChange(P);
    }
    DpiMiracastDdiMiracastDestroyContext(v11, *((_QWORD *)P + 57));
    DpiMiracastEtwLogStopMiracastSessionStage((__int64)P, 1, v12);
    if ( !P[599] && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      Template_qqz(
        v13,
        &EventMiracastPerfTrackStartMiracastSessionNoSend,
        v14,
        *((unsigned int *)P + 112),
        *((_DWORD *)P + 51),
        *((_QWORD *)P + 45),
        v26,
        v27);
    v15 = *(struct _DEVICE_OBJECT **)(v11 + 24);
    HIDWORD(v26) = *((_DWORD *)P + 116);
    LODWORD(v26) = 3;
    LOBYTE(v27) = 0;
    DpIndicateChildStatus(v15, (int *)&v26);
    *((_QWORD *)P + 57) = 0LL;
    *((_DWORD *)P + 116) = -1;
    KeAcquireInStackQueuedSpinLock(&qword_1C00571C8, &LockHandle);
    *((_QWORD *)P + 55) = 0LL;
    *(_QWORD *)(v11 + 3040) = 0LL;
    *(_QWORD *)(v11 + 3048) = 0LL;
    *((_QWORD *)P + 48) = 0LL;
    *((_QWORD *)P + 49) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    KeFlushQueuedDpcs();
    v16 = (MIRACAST_CHUNK_LIST *)*((_QWORD *)P + 62);
    if ( v16 )
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v16);
    *((_QWORD *)P + 62) = 0LL;
    v17 = *(MIRACAST_CHUNK_LIST **)(v11 + 3064);
    if ( v17 )
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v17);
    v18 = *(MIRACAST_CHUNK_LIST **)(v11 + 3072);
    *(_QWORD *)(v11 + 3064) = 0LL;
    if ( v18 )
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v18);
    v19 = *(MIRACAST_CHUNK_LIST **)(v11 + 3080);
    *(_QWORD *)(v11 + 3072) = 0LL;
    if ( v19 )
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v19);
    *(_QWORD *)(v11 + 3080) = 0LL;
    v20 = (MIRACAST_CHUNK_LIST *)*((_QWORD *)P + 64);
    if ( v20 )
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v20);
    v21 = (MIRACAST_CHUNK_LIST *)*((_QWORD *)P + 65);
    *((_QWORD *)P + 64) = 0LL;
    if ( v21 )
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v21);
    *((_QWORD *)P + 65) = 0LL;
    DpiMiracastPerfCleanupPerfTrack(P);
    v22 = (struct _KEVENT *)*((_QWORD *)P + 60);
    P[601] = 0;
    if ( v22 )
    {
      KeSetEvent(v22, 0, 0);
      ObfDereferenceObject(*((PVOID *)P + 60));
      *((_QWORD *)P + 60) = 0LL;
    }
    v23 = (struct _KEVENT *)*((_QWORD *)P + 61);
    if ( v23 )
      KeSetEvent(v23, 0, 0);
    KeSetEvent(*((PRKEVENT *)P + 59), 0, 0);
    --dword_1C00571F0;
    DpiMiracastReleaseMiracastDeviceContext((int *)P, (unsigned int)P);
    v24 = MEMORY[0xFFFFF78000000014];
    *((_QWORD *)P + 82) = MEMORY[0xFFFFF78000000014];
    TraceLoggingWriteMiracastSessionStop(P, a4, (v24 - *((_QWORD *)P + 81)) / 10000000);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v11 + 64), P, 0x20u);
    v25 = *((_DWORD *)P + 173);
    memset(P + 616, 0, 0x20uLL);
    if ( !a5 )
    {
      *((_QWORD *)P + 11) = 0LL;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(P + 32);
      if ( *(_BYTE *)(v11 + 483) )
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) + 64LL) + 3872LL));
      ExReleaseResourceLite(*(PERESOURCE *)(v11 + 168));
      KeLeaveCriticalRegion();
    }
    memset(v29, 0, sizeof(v29));
    v29[0] = 0x4000000006LL;
    memset(&v29[1], 0, 36);
    LODWORD(v29[6]) = 72;
    HIDWORD(v29[6]) = a3;
    v29[7] = __PAIR64__(a4, v25);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v29);
    goto LABEL_43;
  }
  if ( a4 > 0x7F )
  {
LABEL_43:
    if ( !a5 )
    {
      _InterlockedExchange64(&qword_1C0056EC8, 0LL);
      KeReleaseMutex(Mutex, 0);
    }
    return;
  }
  if ( !a5 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(P + 32);
    *((_QWORD *)P + 11) = KeGetCurrentThread();
  }
  v10 = *((_DWORD *)P + 104);
  if ( v10 )
  {
    *((_DWORD *)P + 105) = v10;
    *((_DWORD *)P + 104) = 0;
    *((_DWORD *)P + 106) = a3;
    DpiMiracastBroadcastDeviceStateChange(P);
  }
  if ( !a5 )
  {
    *((_QWORD *)P + 11) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(P + 32);
    goto LABEL_43;
  }
}
