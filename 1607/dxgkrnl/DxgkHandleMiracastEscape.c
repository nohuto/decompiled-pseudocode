/*
 * XREFs of DxgkHandleMiracastEscape @ 0x1C0198270
 * Callers:
 *     DxgkEscape @ 0x1C00B5410 (DxgkEscape.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000BB0C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C000C484 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000EA98 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DpiMiracastGetDeviceContextFromLuid @ 0x1C002B3B8 (DpiMiracastGetDeviceContextFromLuid.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C002BF28 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C002C100 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastPerfHandleChunkInfo @ 0x1C0030AA4 (DpiMiracastPerfHandleChunkInfo.c)
 *     DpiMiracastPerfHandleChunkSent @ 0x1C0030D34 (DpiMiracastPerfHandleChunkSent.c)
 *     DpiMiracastPerfHandleIFrameRequest @ 0x1C0030F00 (DpiMiracastPerfHandleIFrameRequest.c)
 *     DxgkWriteDiagEntry @ 0x1C00C0600 (DxgkWriteDiagEntry.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00C1EE4 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00C1F58 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiMiracastDdiMiracastIoControl @ 0x1C0196FF0 (DpiMiracastDdiMiracastIoControl.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C019766C (DpiMiracastHandleStartSessionDone.c)
 *     DpiMiracastHandleStopSessionDone @ 0x1C0197ACC (DpiMiracastHandleStopSessionDone.c)
 */

__int64 __fastcall DxgkHandleMiracastEscape(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // r13
  _DWORD *PoolWithQuotaTag; // r15
  PVOID v6; // r12
  __int64 v7; // rax
  __int64 v9; // rcx
  __int64 *DeviceContextFromLuid; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rax
  __int64 v22; // r12
  int v23; // eax
  int v24; // eax
  int v25; // eax
  struct _KEVENT *v26; // r9
  void *v27; // rcx
  NTSTATUS v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r12
  __int64 v31; // rax
  unsigned int v32; // eax
  __int64 v33; // rax
  void *v34; // r12
  char v35; // [rsp+40h] [rbp-D8h]
  char v36; // [rsp+41h] [rbp-D7h]
  char v37; // [rsp+42h] [rbp-D6h]
  char v38; // [rsp+43h] [rbp-D5h]
  void *Src; // [rsp+48h] [rbp-D0h]
  PVOID Object; // [rsp+78h] [rbp-A0h] BYREF
  _OWORD v41[2]; // [rsp+80h] [rbp-98h] BYREF
  _QWORD v42[8]; // [rsp+A0h] [rbp-78h] BYREF

  LODWORD(v3) = 0;
  v4 = 0LL;
  PoolWithQuotaTag = 0LL;
  v6 = 0LL;
  Src = 0LL;
  v38 = 0;
  v37 = 0;
  v36 = 0;
  v35 = 0;
  if ( (unsigned int)a1 < 0x38 )
  {
    v7 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v7 + 24) = -1073741789LL;
    WdLogEvent5_WdError(v7);
    return 3221225507LL;
  }
  *(_DWORD *)(a2 + 48) = 0;
  DeviceContextFromLuid = DpiMiracastGetDeviceContextFromLuid(*(_QWORD *)a2, 0);
  if ( !DeviceContextFromLuid )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    return 3221225485LL;
  }
  if ( PsGetCurrentProcess(v9) != DeviceContextFromLuid[13] )
  {
    v3 = -1073741790LL;
LABEL_7:
    v14 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v14 + 24) = v3;
LABEL_8:
    WdLogEvent5_WdError(v14);
    goto LABEL_70;
  }
  v15 = *(_DWORD *)(a2 + 16);
  if ( v15 && (PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v15, 0x74727044u)) == 0LL
    || (v17 = *(_DWORD *)(a2 + 32)) != 0
    && (v6 = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v17, 0x74727044u), (Src = v6) == 0LL) )
  {
    LODWORD(v3) = -1073741801;
    v16 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v16 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v16);
    goto LABEL_70;
  }
  v18 = *(unsigned int *)(a2 + 16);
  if ( (_DWORD)v18 )
  {
    v19 = *(_QWORD *)(a2 + 24);
    if ( v19 + v18 > MmUserProbeAddress || v19 + v18 < v19 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(PoolWithQuotaTag, *(const void **)(a2 + 24), *(unsigned int *)(a2 + 16));
  }
  v20 = *(_DWORD *)(a2 + 32);
  if ( v20 )
    ProbeForWrite(*(volatile void **)(a2 + 40), v20, 1u);
  if ( (*(_DWORD *)(a2 + 8) & 6) != 0 )
  {
    AcquireMiniportListMutex();
    v38 = 1;
    v21 = DeviceContextFromLuid[55];
    if ( !v21 )
    {
      v22 = -1073741275LL;
LABEL_24:
      LODWORD(v3) = v22;
      v14 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v14 + 24) = v22;
      goto LABEL_8;
    }
    v4 = *(_QWORD *)(v21 + 64);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v4 + 483) )
      DpiCheckForOutstandingD3Requests(v4);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
    v37 = 1;
    v12 = *(unsigned int *)(v4 + 236);
    if ( (_DWORD)v12 != 2 && (*(_DWORD *)(v4 + 240) != 2 || (((_DWORD)v12 - 3) & 0xFFFFFFFC) != 0 || (_DWORD)v12 == 4) )
    {
      v22 = -1073741130LL;
      goto LABEL_24;
    }
    if ( (*(_DWORD *)(a2 + 8) & 4) != 0 )
    {
      v23 = DpiAcquireCoreSyncAccessSafe(DeviceContextFromLuid[55], *(_BYTE *)(a2 + 12));
      v3 = v23;
      if ( v23 < 0 )
        goto LABEL_7;
      v36 = 1;
    }
  }
  if ( (*(_DWORD *)(a2 + 8) & 1) != 0 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromLuid + 4);
    DeviceContextFromLuid[11] = (__int64)KeGetCurrentThread();
    v35 = 1;
  }
  v24 = *(_DWORD *)(a2 + 8);
  switch ( v24 )
  {
    case 4:
      LODWORD(v3) = DpiMiracastDdiMiracastIoControl(
                      v4,
                      DeviceContextFromLuid[57],
                      *(unsigned int *)(a2 + 16),
                      (__int64)PoolWithQuotaTag,
                      *(_DWORD *)(a2 + 32),
                      (__int64)v6,
                      (_DWORD *)(a2 + 48));
      break;
    case 8:
      if ( *(_DWORD *)(a2 + 16) >= 0x350u )
      {
        DpiMiracastHandleStartSessionDone((char *)DeviceContextFromLuid, (__int64)PoolWithQuotaTag, v13);
        break;
      }
      LODWORD(v3) = -1073741811;
      v14 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v14 + 24) = 8LL;
LABEL_67:
      *(_QWORD *)(v14 + 32) = -1073741811LL;
      goto LABEL_8;
    case 16:
      if ( *(_DWORD *)(a2 + 16) >= 0x350u )
      {
        DpiMiracastHandleStopSessionDone((char *)DeviceContextFromLuid, (__int64)PoolWithQuotaTag, v13);
        break;
      }
      LODWORD(v3) = -1073741811;
      v14 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v14 + 24) = 16LL;
      goto LABEL_67;
    case 24:
      v26 = 0LL;
      if ( *(_DWORD *)(a2 + 16) < 0x18u )
        goto LABEL_57;
      v27 = (void *)*((_QWORD *)PoolWithQuotaTag + 1);
      if ( v27 )
      {
        v28 = ObReferenceObjectByHandle(v27, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
        v30 = v28;
        v26 = (struct _KEVENT *)Object;
        LODWORD(v3) = v28;
        if ( v28 < 0 )
        {
          v31 = WdLogNewEntry5_WdError(v29);
          *(_QWORD *)(v31 + 24) = v30;
          WdLogEvent5_WdError(v31);
          v26 = 0LL;
        }
      }
      DpiMiracastStopMiracastSessionSync(
        (char *)DeviceContextFromLuid,
        0,
        0LL,
        v26,
        PoolWithQuotaTag[4],
        *PoolWithQuotaTag);
      break;
    case 32:
      memset(v42, 0, sizeof(v42));
      *((_BYTE *)DeviceContextFromLuid + 600) = 1;
      if ( *(_DWORD *)(a2 + 16) < 0x404u )
        goto LABEL_57;
      *((_BYTE *)PoolWithQuotaTag + 1023) = 0;
      LOBYTE(v12) = 1;
      if ( (unsigned __int8)WdIsDebuggerPresent(v12) )
      {
        DbgPrintEx(0x65u, 0, (PCSTR)PoolWithQuotaTag);
        __debugbreak();
      }
      v25 = PoolWithQuotaTag[256];
      v42[0] = 0x4000000006LL;
      memset(&v42[1], 0, 36);
      LODWORD(v42[6]) = 74;
      HIDWORD(v42[6]) = v25;
      v42[7] = 0LL;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v42);
      break;
    case 40:
      if ( *(_DWORD *)(a2 + 16) >= 0x20u )
      {
        v41[0] = *(_OWORD *)PoolWithQuotaTag;
        v41[1] = *((_OWORD *)PoolWithQuotaTag + 1);
        if ( !*((_BYTE *)DeviceContextFromLuid + 601) )
        {
          if ( LODWORD(v41[0]) )
          {
            v12 = (unsigned int)(LODWORD(v41[0]) - 1);
            if ( LODWORD(v41[0]) == 1 )
            {
              DpiMiracastPerfHandleChunkSent((__int64)DeviceContextFromLuid, (_QWORD *)v41 + 1);
            }
            else if ( LODWORD(v41[0]) == 2 )
            {
              DpiMiracastPerfHandleIFrameRequest((__int64)DeviceContextFromLuid);
            }
          }
          else
          {
            DpiMiracastPerfHandleChunkInfo((__int64)DeviceContextFromLuid, 0, (__int64)v41 + 8);
          }
        }
        break;
      }
LABEL_57:
      LODWORD(v3) = -1073741811;
      v14 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v14 + 24) = -1073741811LL;
      goto LABEL_8;
    default:
      v22 = -1073741637LL;
      goto LABEL_24;
  }
LABEL_70:
  if ( (int)v3 < 0 )
  {
LABEL_75:
    v34 = Src;
    goto LABEL_76;
  }
  v32 = *(_DWORD *)(a2 + 48);
  if ( *(_DWORD *)(a2 + 32) < v32 )
  {
    LODWORD(v3) = -1073741811;
    v33 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v33 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v33);
    goto LABEL_75;
  }
  if ( !v32 )
    goto LABEL_75;
  v34 = Src;
  memmove(*(void **)(a2 + 40), Src, *(unsigned int *)(a2 + 48));
LABEL_76:
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  if ( v34 )
    ExFreePoolWithTag(v34, 0);
  if ( v35 )
  {
    DeviceContextFromLuid[11] = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(DeviceContextFromLuid + 4);
  }
  if ( v36 )
    DpiReleaseCoreSyncAccessSafe(DeviceContextFromLuid[55], *(_BYTE *)(a2 + 12));
  if ( v37 )
  {
    if ( *(_BYTE *)(v4 + 483) )
      DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
    KeLeaveCriticalRegion();
  }
  if ( v38 )
  {
    _InterlockedExchange64(&qword_1C0056EC8, 0LL);
    KeReleaseMutex(Mutex, 0);
  }
  DpiMiracastReleaseMiracastDeviceContext((int *)DeviceContextFromLuid, (unsigned int)DeviceContextFromLuid);
  return (unsigned int)v3;
}
