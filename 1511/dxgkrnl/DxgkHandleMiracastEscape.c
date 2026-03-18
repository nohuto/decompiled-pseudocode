/*
 * XREFs of DxgkHandleMiracastEscape @ 0x1C016ED10
 * Callers:
 *     DxgkEscape @ 0x1C007AB10 (DxgkEscape.c)
 * Callees:
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C000A24C (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B77C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C000B7B0 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000DC2C (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DpiMiracastGetDeviceContextFromLuid @ 0x1C0023F00 (DpiMiracastGetDeviceContextFromLuid.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0024AE0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0024CF0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastPerfHandleChunkInfo @ 0x1C0029720 (DpiMiracastPerfHandleChunkInfo.c)
 *     DpiMiracastPerfHandleChunkSent @ 0x1C00299A4 (DpiMiracastPerfHandleChunkSent.c)
 *     DpiMiracastPerfHandleIFrameRequest @ 0x1C0029B80 (DpiMiracastPerfHandleIFrameRequest.c)
 *     DxgkWriteDiagEntry @ 0x1C00A68F0 (DxgkWriteDiagEntry.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00A9EA8 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00A9F1C (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiMiracastDdiMiracastIoControl @ 0x1C016D830 (DpiMiracastDdiMiracastIoControl.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C016DE70 (DpiMiracastHandleStartSessionDone.c)
 *     DpiMiracastHandleStopSessionDone @ 0x1C016E4B0 (DpiMiracastHandleStopSessionDone.c)
 */

__int64 __fastcall DxgkHandleMiracastEscape(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // rdi
  _DWORD *PoolWithQuotaTag; // r12
  PVOID v6; // r13
  _QWORD *v7; // rax
  __int64 v9; // rcx
  __int64 *DeviceContextFromLuid; // r14
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r9
  _QWORD *v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // r13
  int v25; // eax
  int v26; // eax
  struct _KEVENT *v27; // r9
  void *v28; // rcx
  NTSTATUS v29; // eax
  __int64 v30; // rcx
  __int64 v31; // r13
  _QWORD *v32; // rax
  unsigned int v33; // eax
  _QWORD *v34; // rax
  void *v35; // rdi
  __int64 v36; // rdx
  char v37; // [rsp+40h] [rbp-D8h]
  char v38; // [rsp+41h] [rbp-D7h]
  char v39; // [rsp+42h] [rbp-D6h]
  char v40; // [rsp+43h] [rbp-D5h]
  void *Src; // [rsp+48h] [rbp-D0h]
  __int64 v42; // [rsp+60h] [rbp-B8h]
  PVOID Object; // [rsp+78h] [rbp-A0h] BYREF
  _OWORD v44[2]; // [rsp+80h] [rbp-98h] BYREF
  _DWORD v45[16]; // [rsp+A0h] [rbp-78h] BYREF

  LODWORD(v3) = 0;
  v4 = 0LL;
  v42 = 0LL;
  PoolWithQuotaTag = 0LL;
  v6 = 0LL;
  Src = 0LL;
  v38 = 0;
  v37 = 0;
  v39 = 0;
  v40 = 0;
  if ( (unsigned int)a1 < 0x38 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v7[3] = DxgkHandleMiracastEscape;
    v7[4] = 0LL;
    v7[5] = -1073741789LL;
    WdLogEvent5_WdError(v7);
    return 3221225507LL;
  }
  *(_DWORD *)(a2 + 48) = 0;
  DeviceContextFromLuid = DpiMiracastGetDeviceContextFromLuid(*(_QWORD *)a2, 0);
  if ( !DeviceContextFromLuid )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v11[3] = DxgkHandleMiracastEscape;
    v11[4] = DpiMiracastGetDeviceContextFromLuid;
    v11[5] = -1073741811LL;
    WdLogEvent5_WdError(v11);
    return 3221225485LL;
  }
  if ( PsGetCurrentProcess(v9) != DeviceContextFromLuid[13] )
  {
    v3 = -1073741790LL;
LABEL_7:
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v14[3] = DxgkHandleMiracastEscape;
    v14[4] = 0LL;
    v14[5] = v3;
LABEL_8:
    WdLogEvent5_WdError(v14);
    goto LABEL_70;
  }
  v15 = *(_DWORD *)(a2 + 16);
  if ( v15 && (PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v15, 0x74727044u)) == 0LL
    || (v19 = *(_DWORD *)(a2 + 32)) != 0
    && (v6 = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v19, 0x74727044u), (Src = v6) == 0LL) )
  {
    LODWORD(v3) = -1073741801;
    v18 = (_QWORD *)WdLogNewEntry5_WdLowResource(v12, v16, v13, v17);
    v18[3] = DxgkHandleMiracastEscape;
    v18[4] = ExAllocatePoolWithQuotaTag;
    v18[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v18);
    goto LABEL_70;
  }
  v20 = *(unsigned int *)(a2 + 16);
  if ( (_DWORD)v20 )
  {
    v21 = *(_QWORD *)(a2 + 24);
    if ( v21 + v20 > MmUserProbeAddress || v21 + v20 < v21 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(PoolWithQuotaTag, *(const void **)(a2 + 24), *(unsigned int *)(a2 + 16));
  }
  v22 = *(_DWORD *)(a2 + 32);
  if ( v22 )
    ProbeForWrite(*(volatile void **)(a2 + 40), v22, 1u);
  if ( (*(_DWORD *)(a2 + 8) & 6) != 0 )
  {
    AcquireMiniportListMutex();
    v38 = 1;
    v23 = DeviceContextFromLuid[39];
    if ( !v23 )
    {
      v24 = -1073741275LL;
LABEL_24:
      LODWORD(v3) = v24;
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v14[3] = DxgkHandleMiracastEscape;
      v14[4] = 0LL;
      v14[5] = v24;
      goto LABEL_8;
    }
    v4 = *(_QWORD *)(v23 + 64);
    v42 = v4;
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v4 + 483) )
      DpiCheckForOutstandingD3Requests(v4);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
    v37 = 1;
    v12 = *(unsigned int *)(v4 + 236);
    if ( (_DWORD)v12 != 2 && (*(_DWORD *)(v4 + 240) != 2 || (((_DWORD)v12 - 3) & 0xFFFFFFFC) != 0 || (_DWORD)v12 == 4) )
    {
      v24 = -1073741130LL;
      goto LABEL_24;
    }
    if ( (*(_DWORD *)(a2 + 8) & 4) != 0 )
    {
      v25 = DpiAcquireCoreSyncAccessSafe(DeviceContextFromLuid[39], *(_BYTE *)(a2 + 12));
      v3 = v25;
      if ( v25 < 0 )
        goto LABEL_7;
      v39 = 1;
    }
  }
  if ( (*(_DWORD *)(a2 + 8) & 1) != 0 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromLuid + 4);
    DeviceContextFromLuid[11] = (__int64)KeGetCurrentThread();
    v40 = 1;
  }
  v26 = *(_DWORD *)(a2 + 8);
  switch ( v26 )
  {
    case 4:
      LODWORD(v3) = DpiMiracastDdiMiracastIoControl(
                      v4,
                      DeviceContextFromLuid[41],
                      *(unsigned int *)(a2 + 16),
                      (__int64)PoolWithQuotaTag,
                      *(_DWORD *)(a2 + 32),
                      (__int64)v6,
                      (_DWORD *)(a2 + 48));
      goto LABEL_70;
    case 8:
      if ( *(_DWORD *)(a2 + 16) < 0x5A0u )
      {
        LODWORD(v3) = -1073741811;
        v14 = (_QWORD *)WdLogNewEntry5_WdError(v12);
        v14[4] = 8LL;
        goto LABEL_67;
      }
      DpiMiracastHandleStartSessionDone((char *)DeviceContextFromLuid, (__int64)PoolWithQuotaTag, v13);
      goto LABEL_70;
    case 16:
      if ( *(_DWORD *)(a2 + 16) < 0x5A0u )
      {
        LODWORD(v3) = -1073741811;
        v14 = (_QWORD *)WdLogNewEntry5_WdError(v12);
        v14[4] = 16LL;
        goto LABEL_67;
      }
      DpiMiracastHandleStopSessionDone((char *)DeviceContextFromLuid, (__int64)PoolWithQuotaTag, v13);
      goto LABEL_70;
    case 24:
      v27 = 0LL;
      if ( *(_DWORD *)(a2 + 16) >= 0x18u )
      {
        v28 = (void *)*((_QWORD *)PoolWithQuotaTag + 1);
        if ( v28 )
        {
          v29 = ObReferenceObjectByHandle(v28, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
          v31 = v29;
          v27 = (struct _KEVENT *)Object;
          LODWORD(v3) = v29;
          if ( v29 < 0 )
          {
            v32 = (_QWORD *)WdLogNewEntry5_WdError(v30);
            v32[3] = DxgkHandleMiracastEscape;
            v32[4] = ObReferenceObjectByHandle;
            v32[5] = v31;
            WdLogEvent5_WdError(v32);
            v27 = 0LL;
          }
        }
        DpiMiracastStopMiracastSessionSync(
          (char *)DeviceContextFromLuid,
          0,
          0LL,
          v27,
          PoolWithQuotaTag[4],
          *PoolWithQuotaTag);
        goto LABEL_70;
      }
LABEL_45:
      LODWORD(v3) = -1073741811;
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v14[4] = 0LL;
LABEL_67:
      v14[3] = DxgkHandleMiracastEscape;
      v14[5] = -1073741811LL;
      goto LABEL_8;
    case 32:
      memset(v45, 0, sizeof(v45));
      *((_BYTE *)DeviceContextFromLuid + 472) = 1;
      if ( *(_DWORD *)(a2 + 16) >= 0x404u )
      {
        *((_BYTE *)PoolWithQuotaTag + 1023) = 0;
        LOBYTE(v12) = 1;
        if ( (unsigned __int8)WdIsDebuggerPresent(v12) )
        {
          DbgPrintEx(0x65u, 0, (PCSTR)PoolWithQuotaTag);
          __debugbreak();
        }
        DxgkDiagInitializeCodePointPacket(v45, 74, PoolWithQuotaTag[256], 0, 0);
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v45);
        goto LABEL_70;
      }
      goto LABEL_45;
  }
  if ( v26 != 40 )
  {
    v24 = -1073741637LL;
    goto LABEL_24;
  }
  if ( *(_DWORD *)(a2 + 16) < 0x20u )
    goto LABEL_45;
  v44[0] = *(_OWORD *)PoolWithQuotaTag;
  v44[1] = *((_OWORD *)PoolWithQuotaTag + 1);
  if ( !*((_BYTE *)DeviceContextFromLuid + 473) )
  {
    if ( LODWORD(v44[0]) )
    {
      v12 = (unsigned int)(LODWORD(v44[0]) - 1);
      if ( LODWORD(v44[0]) == 1 )
      {
        DpiMiracastPerfHandleChunkSent((__int64)DeviceContextFromLuid, (_QWORD *)v44 + 1);
      }
      else if ( LODWORD(v44[0]) == 2 )
      {
        DpiMiracastPerfHandleIFrameRequest((__int64)DeviceContextFromLuid);
      }
    }
    else
    {
      DpiMiracastPerfHandleChunkInfo((__int64)DeviceContextFromLuid, 0, (__int64)v44 + 8);
    }
  }
LABEL_70:
  if ( (int)v3 < 0 )
  {
LABEL_75:
    v35 = Src;
    goto LABEL_76;
  }
  v33 = *(_DWORD *)(a2 + 48);
  if ( *(_DWORD *)(a2 + 32) < v33 )
  {
    LODWORD(v3) = -1073741811;
    v34 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v34[3] = DxgkHandleMiracastEscape;
    v34[4] = 0LL;
    v34[5] = -1073741811LL;
    WdLogEvent5_WdError(v34);
    goto LABEL_75;
  }
  if ( !v33 )
    goto LABEL_75;
  v35 = Src;
  memmove(*(void **)(a2 + 40), Src, *(unsigned int *)(a2 + 48));
LABEL_76:
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  if ( v35 )
    ExFreePoolWithTag(v35, 0);
  if ( v40 )
  {
    DeviceContextFromLuid[11] = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(DeviceContextFromLuid + 4);
  }
  if ( v39 )
    DpiReleaseCoreSyncAccessSafe(DeviceContextFromLuid[39], *(_BYTE *)(a2 + 12));
  if ( v37 )
  {
    v36 = v42;
    if ( *(_BYTE *)(v42 + 483) )
      DpiEnableD3Requests(*(_QWORD *)(v42 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v36 + 168));
    KeLeaveCriticalRegion();
  }
  if ( v38 )
  {
    _InterlockedExchange64(&qword_1C0046D08, 0LL);
    KeReleaseMutex(Mutex, 0);
  }
  DpiMiracastReleaseMiracastDeviceContext((int *)DeviceContextFromLuid, (unsigned int)DeviceContextFromLuid);
  return (unsigned int)v3;
}
