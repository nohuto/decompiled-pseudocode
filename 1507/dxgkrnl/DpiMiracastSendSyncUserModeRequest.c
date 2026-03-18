/*
 * XREFs of DpiMiracastSendSyncUserModeRequest @ 0x1C016A120
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C0024520 (DpiMiracastInterfaceChange.c)
 * Callees:
 *     ?IsMiniportListMutexOwnedByCurrentThread@@YAEXZ @ 0x1C000AA2C (-IsMiniportListMutexOwnedByCurrentThread@@YAEXZ.c)
 *     Template_pdqqq @ 0x1C0028238 (Template_pdqqq.c)
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1C0129E94 (DxgkIsAdapterCoreSyncAcquired.c)
 */

__int64 __fastcall DpiMiracastSendSyncUserModeRequest(
        __int64 a1,
        ULONG a2,
        void *a3,
        ULONG a4,
        PVOID a5,
        ULONG a6,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdi
  struct _FILE_OBJECT *v16; // rsi
  struct _DEVICE_OBJECT *v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  PIRP v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  NTSTATUS v27; // eax
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  _QWORD *v32; // rax
  PVOID OutputBuffer; // [rsp+20h] [rbp-78h]
  __int64 OutputBufferLength; // [rsp+28h] [rbp-70h]
  __int64 InternalDeviceIoControl; // [rsp+30h] [rbp-68h]
  PKEVENT v36; // [rsp+38h] [rbp-60h]
  struct _KEVENT Event; // [rsp+50h] [rbp-48h] BYREF

  if ( IsMiniportListMutexOwnedByCurrentThread() || *(struct _KTHREAD **)(a1 + 88) == KeGetCurrentThread() )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    LODWORD(v15) = -1073741790;
    v32[3] = DpiMiracastSendSyncUserModeRequest;
    v32[4] = 0LL;
    v32[5] = -1073741790LL;
    WdLogEvent5_WdError(v32);
  }
  else
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(a1 + 32);
    *(_QWORD *)(a1 + 88) = KeGetCurrentThread();
    v11 = *(_QWORD *)(a1 + 304);
    if ( v11
      && ((v12 = *(_QWORD *)(v11 + 64), ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v12 + 168)))
       || DxgkIsAdapterCoreSyncAcquired(*(DXGADAPTER **)(v12 + 2504), 1)) )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v13);
      LODWORD(v15) = -1073741790;
      v14[3] = DpiMiracastSendSyncUserModeRequest;
      v14[4] = 0LL;
      v14[5] = -1073741790LL;
      WdLogEvent5_WdError(v14);
      *(_QWORD *)(a1 + 88) = 0LL;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(a1 + 32);
    }
    else
    {
      v16 = *(struct _FILE_OBJECT **)(a1 + 176);
      v17 = *(struct _DEVICE_OBJECT **)(a1 + 184);
      if ( v16 )
        ObfReferenceObject(*(PVOID *)(a1 + 176));
      *(_QWORD *)(a1 + 88) = 0LL;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(a1 + 32);
      if ( !v16 )
      {
        v22 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
        *(_QWORD *)(v22 + 24) = DpiMiracastSendSyncUserModeRequest;
        *(_QWORD *)(v22 + 32) = a1;
        WdLogEvent5_WdWarning(v22);
        return 3221226166LL;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
        Template_pdqqq(v19, &EventEnterMiracastSendUserModeRequest, v20, *(_QWORD *)(a1 + 96), 1, a4, a6, 0);
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v24 = IoBuildDeviceIoControlRequest(a2, v17, a3, a4, a5, a6, 0, &Event, IoStatusBlock);
      if ( v24 )
      {
        v24->Tail.Overlay.CurrentStackLocation[-1].FileObject = v16;
        v24->IoStatus.Status = -1073741637;
        LODWORD(v15) = IofCallDriver(v17, v24);
        if ( (_DWORD)v15 == 259 )
        {
          v27 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          v15 = v27;
          if ( v27 )
          {
            v29 = (_QWORD *)WdLogNewEntry5_WdError(v28);
            v29[4] = KeWaitForSingleObject;
            v29[3] = DpiMiracastSendSyncUserModeRequest;
            v29[5] = v15;
            WdLogEvent5_WdError(v29);
          }
          else
          {
            LODWORD(v15) = IoStatusBlock->Status;
          }
        }
      }
      else
      {
        LODWORD(v15) = -1073741801;
        v26 = (_QWORD *)WdLogNewEntry5_WdLowResource(v25);
        v26[4] = IoBuildDeviceIoControlRequest;
        v26[3] = DpiMiracastSendSyncUserModeRequest;
        v26[5] = -1073741801LL;
        WdLogEvent5_WdLowResource(v26);
      }
      ObfDereferenceObject(v16);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
      {
        LODWORD(v36) = v15;
        LODWORD(InternalDeviceIoControl) = IoStatusBlock->Information;
        LODWORD(OutputBufferLength) = a4;
        LODWORD(OutputBuffer) = 1;
        Template_pdqqq(
          v30,
          &EventLeaveMiracastSendUserModeRequest,
          v31,
          *(_QWORD *)(a1 + 96),
          OutputBuffer,
          OutputBufferLength,
          InternalDeviceIoControl,
          v36);
      }
    }
  }
  return (unsigned int)v15;
}
