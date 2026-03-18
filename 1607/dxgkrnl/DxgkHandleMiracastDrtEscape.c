/*
 * XREFs of DxgkHandleMiracastDrtEscape @ 0x1C002D184
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0164658 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C002BF28 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastPerfHandleChunkInfo @ 0x1C0030AA4 (DpiMiracastPerfHandleChunkInfo.c)
 *     DpiMiracastPerfHandleChunkSent @ 0x1C0030D34 (DpiMiracastPerfHandleChunkSent.c)
 *     DpiMiracastPerfHandleIFrameRequest @ 0x1C0030F00 (DpiMiracastPerfHandleIFrameRequest.c)
 *     DpiMiracastPerfResetPerfTrack @ 0x1C0031038 (DpiMiracastPerfResetPerfTrack.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C01973F8 (DpiMiracastGetDeviceContextFromName.c)
 */

__int64 __fastcall DxgkHandleMiracastDrtEscape(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 v4; // rax
  __int64 DeviceContextFromName; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  if ( !g_OSTestSigningEnabled )
  {
    v4 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v4 + 24) = -1073741637LL;
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
      if ( *(_DWORD *)(v8 + 416) )
      {
        if ( *(_BYTE *)(v8 + 601) && *(_BYTE *)(a2 + 16) )
        {
          KeAcquireInStackQueuedSpinLock(&qword_1C00571C8, &LockHandle);
          DpiMiracastPerfResetPerfTrack(v8);
          *(_QWORD *)(v8 + 1040) = 0LL;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
        else
        {
          v3 = -1073741637;
          v14 = WdLogNewEntry5_WdError(v13);
          *(_QWORD *)(v14 + 24) = v8;
          *(_QWORD *)(v14 + 32) = -1073741637LL;
          WdLogEvent5_WdError(v14);
        }
      }
      else
      {
        *(_BYTE *)(v8 + 601) = *(_BYTE *)(a2 + 16);
      }
    }
    else
    {
      if ( *(_DWORD *)(a2 + 12) != 2 )
      {
        v3 = -1073741811;
        v10 = WdLogNewEntry5_WdError((unsigned int)(*(_DWORD *)(a2 + 12) - 1));
        *(_QWORD *)(v10 + 24) = *(int *)(a2 + 12);
        *(_QWORD *)(v10 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v10);
LABEL_24:
        DpiMiracastReleaseMiracastDeviceContext((int *)v8, v8);
        return v3;
      }
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromName + 32);
      *(_QWORD *)(v8 + 88) = KeGetCurrentThread();
      if ( *(_BYTE *)(v8 + 601) && *(_DWORD *)(v8 + 416) == 2 )
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
  v9 = WdLogNewEntry5_WdError(v7);
  v3 = -1073741811;
  *(_QWORD *)(v9 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v9);
  return v3;
}
