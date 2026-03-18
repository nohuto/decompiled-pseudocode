/*
 * XREFs of DxgkHandleMiracastEscape @ 0x1C016A500
 * Callers:
 *     DxgkEscape @ 0x1C009FD70 (DxgkEscape.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0005A48 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C0005A7C (DpiEnableD3Requests.c)
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C0008568 (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000C824 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DpiMiracastGetDeviceContextFromLuid @ 0x1C00243D0 (DpiMiracastGetDeviceContextFromLuid.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0024FA0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C00251B0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastPerfHandleChunkInfo @ 0x1C0029AAC (DpiMiracastPerfHandleChunkInfo.c)
 *     DpiMiracastPerfHandleChunkSent @ 0x1C0029D3C (DpiMiracastPerfHandleChunkSent.c)
 *     DpiMiracastPerfHandleIFrameRequest @ 0x1C0029F18 (DpiMiracastPerfHandleIFrameRequest.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0061D64 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0061DDC (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkWriteDiagEntry @ 0x1C009AC30 (DxgkWriteDiagEntry.c)
 *     DpiMiracastDdiMiracastIoControl @ 0x1C01690B0 (DpiMiracastDdiMiracastIoControl.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C01696F0 (DpiMiracastHandleStartSessionDone.c)
 *     DpiMiracastHandleStopSessionDone @ 0x1C0169D30 (DpiMiracastHandleStopSessionDone.c)
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
  _QWORD *v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rdi
  __int64 v22; // r13
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  struct _KEVENT *v28; // r9
  void *v29; // rcx
  NTSTATUS v30; // eax
  __int64 v31; // rcx
  __int64 v32; // r13
  _QWORD *v33; // rax
  unsigned int v34; // eax
  _QWORD *v35; // rax
  void *v36; // rdi
  __int64 v37; // rdx
  char v38; // [rsp+40h] [rbp-D8h]
  char v39; // [rsp+41h] [rbp-D7h]
  char v40; // [rsp+42h] [rbp-D6h]
  char v41; // [rsp+43h] [rbp-D5h]
  void *Src; // [rsp+48h] [rbp-D0h]
  __int64 v43; // [rsp+60h] [rbp-B8h]
  PVOID Object; // [rsp+78h] [rbp-A0h] BYREF
  _OWORD v45[2]; // [rsp+80h] [rbp-98h] BYREF
  _DWORD v46[16]; // [rsp+A0h] [rbp-78h] BYREF

  LODWORD(v3) = 0;
  v4 = 0LL;
  v43 = 0LL;
  PoolWithQuotaTag = 0LL;
  v6 = 0LL;
  Src = 0LL;
  v39 = 0;
  v38 = 0;
  v40 = 0;
  v41 = 0;
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
    || (v17 = *(_DWORD *)(a2 + 32)) != 0
    && (v6 = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v17, 0x74727044u), (Src = v6) == 0LL) )
  {
    LODWORD(v3) = -1073741801;
    v16 = (_QWORD *)WdLogNewEntry5_WdLowResource(v12);
    v16[3] = DxgkHandleMiracastEscape;
    v16[4] = ExAllocatePoolWithQuotaTag;
    v16[5] = -1073741801LL;
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
    v39 = 1;
    v21 = DeviceContextFromLuid[38];
    if ( !v21 )
    {
      v22 = -1073741275LL;
LABEL_24:
      LODWORD(v3) = v22;
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v14[3] = DxgkHandleMiracastEscape;
      v14[4] = 0LL;
      v14[5] = v22;
      goto LABEL_8;
    }
    v4 = *(_QWORD *)(v21 + 64);
    v43 = v4;
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v4 + 451) )
      DpiCheckForOutstandingD3Requests(v4);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
    v38 = 1;
    v12 = *(unsigned int *)(v4 + 236);
    if ( (_DWORD)v12 != 2 && (*(_DWORD *)(v4 + 240) != 2 || (((_DWORD)v12 - 3) & 0xFFFFFFFC) != 0 || (_DWORD)v12 == 4) )
    {
      v22 = -1073741130LL;
      goto LABEL_24;
    }
    if ( (*(_DWORD *)(a2 + 8) & 4) != 0 )
    {
      v23 = DpiAcquireCoreSyncAccessSafe(DeviceContextFromLuid[38], *(_BYTE *)(a2 + 12));
      v3 = v23;
      if ( v23 < 0 )
        goto LABEL_7;
      v40 = 1;
    }
  }
  if ( (*(_DWORD *)(a2 + 8) & 1) != 0 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromLuid + 4);
    DeviceContextFromLuid[11] = (__int64)KeGetCurrentThread();
    v41 = 1;
  }
  v24 = *(_DWORD *)(a2 + 8);
  switch ( v24 )
  {
    case 4:
      LODWORD(v3) = DpiMiracastDdiMiracastIoControl(
                      v4,
                      DeviceContextFromLuid[40],
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
      v28 = 0LL;
      if ( *(_DWORD *)(a2 + 16) >= 0x18u )
      {
        v29 = (void *)*((_QWORD *)PoolWithQuotaTag + 1);
        if ( v29 )
        {
          v30 = ObReferenceObjectByHandle(v29, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
          v32 = v30;
          v28 = (struct _KEVENT *)Object;
          LODWORD(v3) = v30;
          if ( v30 < 0 )
          {
            v33 = (_QWORD *)WdLogNewEntry5_WdError(v31);
            v33[3] = DxgkHandleMiracastEscape;
            v33[4] = ObReferenceObjectByHandle;
            v33[5] = v32;
            WdLogEvent5_WdError(v33);
            v28 = 0LL;
          }
        }
        DpiMiracastStopMiracastSessionSync(
          (char *)DeviceContextFromLuid,
          0,
          0LL,
          v28,
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
      memset(v46, 0, sizeof(v46));
      *((_BYTE *)DeviceContextFromLuid + 463) = 1;
      if ( *(_DWORD *)(a2 + 16) >= 0x404u )
      {
        *((_BYTE *)PoolWithQuotaTag + 1023) = 0;
        LOBYTE(v12) = 1;
        if ( (unsigned __int8)WdIsDebuggerPresent(v12) )
        {
          DbgPrintEx(0x65u, 0, (PCSTR)PoolWithQuotaTag);
          __debugbreak();
        }
        DxgkDiagInitializeCodePointPacket(v46, 74, PoolWithQuotaTag[256], 0, 0);
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v46, v25, v26, v27);
        goto LABEL_70;
      }
      goto LABEL_45;
  }
  if ( v24 != 40 )
  {
    v22 = -1073741637LL;
    goto LABEL_24;
  }
  if ( *(_DWORD *)(a2 + 16) < 0x20u )
    goto LABEL_45;
  v45[0] = *(_OWORD *)PoolWithQuotaTag;
  v45[1] = *((_OWORD *)PoolWithQuotaTag + 1);
  if ( !*((_BYTE *)DeviceContextFromLuid + 464) )
  {
    if ( LODWORD(v45[0]) )
    {
      v12 = (unsigned int)(LODWORD(v45[0]) - 1);
      if ( LODWORD(v45[0]) == 1 )
      {
        DpiMiracastPerfHandleChunkSent((__int64)DeviceContextFromLuid, (_QWORD *)v45 + 1);
      }
      else if ( LODWORD(v45[0]) == 2 )
      {
        DpiMiracastPerfHandleIFrameRequest((__int64)DeviceContextFromLuid);
      }
    }
    else
    {
      DpiMiracastPerfHandleChunkInfo((__int64)DeviceContextFromLuid, 0, (__int64)v45 + 8);
    }
  }
LABEL_70:
  if ( (int)v3 < 0 )
  {
LABEL_75:
    v36 = Src;
    goto LABEL_76;
  }
  v34 = *(_DWORD *)(a2 + 48);
  if ( *(_DWORD *)(a2 + 32) < v34 )
  {
    LODWORD(v3) = -1073741811;
    v35 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v35[3] = DxgkHandleMiracastEscape;
    v35[4] = 0LL;
    v35[5] = -1073741811LL;
    WdLogEvent5_WdError(v35);
    goto LABEL_75;
  }
  if ( !v34 )
    goto LABEL_75;
  v36 = Src;
  memmove(*(void **)(a2 + 40), Src, *(unsigned int *)(a2 + 48));
LABEL_76:
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  if ( v36 )
    ExFreePoolWithTag(v36, 0);
  if ( v41 )
  {
    DeviceContextFromLuid[11] = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(DeviceContextFromLuid + 4);
  }
  if ( v40 )
    DpiReleaseCoreSyncAccessSafe(DeviceContextFromLuid[38], *(_BYTE *)(a2 + 12));
  if ( v38 )
  {
    v37 = v43;
    if ( *(_BYTE *)(v43 + 451) )
      DpiEnableD3Requests(*(_QWORD *)(v43 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v37 + 168));
    KeLeaveCriticalRegion();
  }
  if ( v39 )
  {
    _InterlockedExchange64(&qword_1C0046C88, 0LL);
    KeReleaseMutex((PRKMUTEX)Mutex, 0);
  }
  DpiMiracastReleaseMiracastDeviceContext((int *)DeviceContextFromLuid, (unsigned int)DeviceContextFromLuid);
  return (unsigned int)v3;
}
