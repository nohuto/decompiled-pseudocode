/*
 * XREFs of DxgkHandleMiracastDrtEscape @ 0x1C00260D0
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C012AD88 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0024AE0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastPerfHandleChunkInfo @ 0x1C0029720 (DpiMiracastPerfHandleChunkInfo.c)
 *     DpiMiracastPerfHandleChunkSent @ 0x1C00299A4 (DpiMiracastPerfHandleChunkSent.c)
 *     DpiMiracastPerfHandleIFrameRequest @ 0x1C0029B80 (DpiMiracastPerfHandleIFrameRequest.c)
 *     DpiMiracastPerfResetPerfTrack @ 0x1C0029CC0 (DpiMiracastPerfResetPerfTrack.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C016DC30 (DpiMiracastGetDeviceContextFromName.c)
 */

__int64 __fastcall DxgkHandleMiracastDrtEscape(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  _QWORD *v4; // rax
  __int64 DeviceContextFromName; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  if ( !g_OSTestSigningEnabled )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v4[3] = DxgkHandleMiracastDrtEscape;
    v4[4] = 0LL;
    v4[5] = -1073741637LL;
    WdLogEvent5_WdError(v4);
    return 3221225659LL;
  }
  *(_WORD *)(((unsigned int)a1 & 0xFFFFFFFE) + a2 - 2) = 0;
  DeviceContextFromName = DpiMiracastGetDeviceContextFromName((PCWSTR)(a2 + 50));
  v8 = DeviceContextFromName;
  if ( DeviceContextFromName )
  {
    if ( *(_DWORD *)(a2 + 12) == 1 )
    {
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromName + 32);
      *(_QWORD *)(v8 + 88) = KeGetCurrentThread();
      if ( *(_DWORD *)(v8 + 288) )
      {
        if ( *(_BYTE *)(v8 + 473) && *(_BYTE *)(a2 + 16) )
        {
          KeAcquireInStackQueuedSpinLock(&qword_1C0047008, &LockHandle);
          DpiMiracastPerfResetPerfTrack(v8);
          *(_QWORD *)(v8 + 952) = 0LL;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
        else
        {
          v3 = -1073741637;
          v14 = (_QWORD *)WdLogNewEntry5_WdError(v13);
          v14[3] = DxgkHandleMiracastDrtEscape;
          v14[4] = v8;
          v14[5] = -1073741637LL;
          WdLogEvent5_WdError(v14);
        }
      }
      else
      {
        *(_BYTE *)(v8 + 473) = *(_BYTE *)(a2 + 16);
      }
    }
    else
    {
      if ( *(_DWORD *)(a2 + 12) != 2 )
      {
        v3 = -1073741811;
        v10 = (_QWORD *)WdLogNewEntry5_WdError((unsigned int)(*(_DWORD *)(a2 + 12) - 1));
        v10[3] = DxgkHandleMiracastDrtEscape;
        v10[4] = *(int *)(a2 + 12);
        v10[5] = -1073741811LL;
        WdLogEvent5_WdError(v10);
LABEL_24:
        DpiMiracastReleaseMiracastDeviceContext((int *)v8, v8);
        return v3;
      }
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromName + 32);
      *(_QWORD *)(v8 + 88) = KeGetCurrentThread();
      if ( *(_BYTE *)(v8 + 473) && *(_DWORD *)(v8 + 288) == 2 )
      {
        v11 = *(_DWORD *)(a2 + 16);
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            if ( v12 == 1 )
              DpiMiracastPerfHandleIFrameRequest(v8);
          }
          else
          {
            DpiMiracastPerfHandleChunkSent(v8, a2 + 24);
          }
        }
        else
        {
          DpiMiracastPerfHandleChunkInfo(v8, 0LL, a2 + 24);
        }
      }
      else
      {
        v3 = -1073741637;
      }
    }
    *(_QWORD *)(v8 + 88) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v8 + 32);
    goto LABEL_24;
  }
  v9 = (_QWORD *)WdLogNewEntry5_WdError(v7);
  v3 = -1073741811;
  v9[3] = DxgkHandleMiracastDrtEscape;
  v9[4] = DpiMiracastGetDeviceContextFromName;
  v9[5] = -1073741811LL;
  WdLogEvent5_WdError(v9);
  return v3;
}
