/*
 * XREFs of PiDrvDbLoadNode @ 0x1404DE2D8
 * Callers:
 *     PiDrvDbNodeActionCallback @ 0x1404DE27C (PiDrvDbNodeActionCallback.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeCancelTimer @ 0x140066860 (KeCancelTimer.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x14017F070 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x140435B90 (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall PiDrvDbLoadNode(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // ebx
  _QWORD *v6; // r14
  struct _KTHREAD *v7; // rcx
  __int16 v8; // ax
  NTSTATUS v10; // eax
  NTSTATUS v11; // edi
  REGHANDLE v12; // rbx
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // ax
  __int16 v15; // [rsp+30h] [rbp-69h] BYREF
  __int16 v16; // [rsp+34h] [rbp-65h] BYREF
  NTSTATUS v17; // [rsp+38h] [rbp-61h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-59h] BYREF
  NTSTATUS v19; // [rsp+48h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-49h] BYREF
  __int64 v21; // [rsp+60h] [rbp-39h]
  int v22; // [rsp+68h] [rbp-31h]
  int v23; // [rsp+6Ch] [rbp-2Dh]
  NTSTATUS *v24; // [rsp+70h] [rbp-29h]
  __int64 v25; // [rsp+78h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+80h] [rbp-19h] BYREF
  __int64 v27; // [rsp+90h] [rbp-9h]
  int v28; // [rsp+98h] [rbp-1h]
  int v29; // [rsp+9Ch] [rbp+3h]
  NTSTATUS *v30; // [rsp+A0h] [rbp+7h]
  __int64 v31; // [rsp+A8h] [rbp+Fh]

  Handle = 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 88), 1u);
  if ( *(_BYTE *)(a1 + 80) )
  {
    v5 = -1073741637;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 488) )
    {
      KeCancelTimer((PKTIMER)(a1 + 264));
      *(_BYTE *)(a1 + 488) = 0;
    }
    v6 = (_QWORD *)(a1 + 72);
    if ( !*(_QWORD *)(a1 + 72) )
    {
      if ( (int)SysCtxRegOpenKey(0LL, 0LL, *(const WCHAR **)(a1 + 40), 0, 0x2000000u, &Handle) < 0
        || (v5 = SysCtxRegOpenKey(0LL, (char *)Handle, L"DriverDatabase", 0, 0x2000000u, (HANDLE *)(a1 + 72)),
            ZwClose(Handle),
            v5 < 0) )
      {
        if ( PnpShutdownEvent.Header.SignalState )
        {
          v5 = -1073741077;
          goto LABEL_6;
        }
        v10 = ZwWaitForSingleObject(*(HANDLE *)(a1 + 472), 0, 0LL);
        v11 = v10;
        if ( !*(_BYTE *)(a1 + 489) )
        {
          v12 = PnpEtwHandle;
          *(_BYTE *)(a1 + 489) = 1;
          v19 = v10;
          if ( v12 && EtwEventEnabled(v12, &KMPnPEvt_DriverDatabaseUnload_Stop) )
          {
            v13 = *(_WORD *)(a1 + 16);
            v22 = v13;
            v15 = v13 >> 1;
            *(_QWORD *)&UserData.Size = 2LL;
            UserData.Ptr = (ULONGLONG)&v15;
            v21 = *(_QWORD *)(a1 + 24);
            v24 = &v19;
            v23 = 0;
            v25 = 4LL;
            EtwWrite(v12, &KMPnPEvt_DriverDatabaseUnload_Stop, 0LL, 3u, &UserData);
            v12 = PnpEtwHandle;
          }
          v17 = v11;
          if ( v12 && EtwEventEnabled(v12, &KMPnPEvt_DriverDatabaseLoaded_Stop) )
          {
            v14 = *(_WORD *)(a1 + 16);
            v28 = v14;
            v16 = v14 >> 1;
            *(_QWORD *)&v26.Size = 2LL;
            v26.Ptr = (ULONGLONG)&v16;
            v27 = *(_QWORD *)(a1 + 24);
            v30 = &v17;
            v29 = 0;
            v31 = 4LL;
            EtwWrite(v12, &KMPnPEvt_DriverDatabaseLoaded_Stop, 0LL, 3u, &v26);
          }
        }
        *(_QWORD *)(a1 + 248) = a1;
        *(_QWORD *)(a1 + 240) = PiDrvDbLoadNodeWorkerCallback;
        *(_QWORD *)(a1 + 224) = 0LL;
        KeInitializeEvent((PRKEVENT)(a1 + 200), SynchronizationEvent, 0);
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 224), CriticalWorkQueue);
        KeWaitForSingleObject((PVOID)(a1 + 200), Executive, 0, 0, 0LL);
        if ( *v6 )
        {
          v5 = 0;
        }
        else
        {
          v5 = -1073741823;
          if ( *(int *)(a1 + 256) < 0 )
            v5 = *(_DWORD *)(a1 + 256);
        }
      }
    }
    *a2 = *v6;
  }
LABEL_6:
  ExReleaseResourceLite((PERESOURCE)(a1 + 88));
  v7 = KeGetCurrentThread();
  v8 = v7->KernelApcDisable + 1;
  v7->KernelApcDisable = v8;
  if ( !v8
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v7->ApcState.ApcListHead[0].Flink != &v7->152
    && !v7->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v5;
}
