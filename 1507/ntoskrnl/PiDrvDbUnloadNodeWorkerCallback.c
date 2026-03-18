/*
 * XREFs of PiDrvDbUnloadNodeWorkerCallback @ 0x140559C84
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PiDrvDbUnloadNodeReset @ 0x140130318 (PiDrvDbUnloadNodeReset.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 */

void __fastcall PiDrvDbUnloadNodeWorkerCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  REGHANDLE v3; // rdi
  void *v4; // rcx
  struct _KTHREAD *v5; // rcx
  __int16 v6; // ax
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // ax
  __int16 v9; // [rsp+30h] [rbp-50h] BYREF
  __int16 v10; // [rsp+34h] [rbp-4Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-48h] BYREF
  __int64 v12; // [rsp+48h] [rbp-38h]
  int v13; // [rsp+50h] [rbp-30h]
  int v14; // [rsp+54h] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+58h] [rbp-28h] BYREF
  __int64 v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+70h] [rbp-10h]
  int v18; // [rsp+74h] [rbp-Ch]

  PiDrvDbUnloadNodeReset(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 88), 1u);
  if ( *(_BYTE *)(a1 + 488) )
  {
    v3 = PnpEtwHandle;
    if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_DriverDatabaseUnload_Start) )
    {
      v7 = *(_WORD *)(a1 + 16);
      v13 = v7;
      v10 = v7 >> 1;
      *(_QWORD *)&UserData.Size = 2LL;
      UserData.Ptr = (ULONGLONG)&v10;
      v12 = *(_QWORD *)(a1 + 24);
      v14 = 0;
      EtwWrite(v3, &KMPnPEvt_DriverDatabaseUnload_Start, 0LL, 2u, &UserData);
      v3 = PnpEtwHandle;
    }
    v4 = *(void **)(a1 + 72);
    if ( v4 )
    {
      ZwClose(v4);
      v3 = PnpEtwHandle;
      *(_QWORD *)(a1 + 72) = 0LL;
    }
    *(_WORD *)(a1 + 488) = 0;
    if ( v3 && EtwEventEnabled(v3, &KMPnPEvt_DriverDatabaseUnload_Pend) )
    {
      v8 = *(_WORD *)(a1 + 16);
      v17 = v8;
      v9 = v8 >> 1;
      *(_QWORD *)&v15.Size = 2LL;
      v15.Ptr = (ULONGLONG)&v9;
      v16 = *(_QWORD *)(a1 + 24);
      v18 = 0;
      EtwWrite(v3, &KMPnPEvt_DriverDatabaseUnload_Pend, 0LL, 2u, &v15);
    }
    *(_QWORD *)(a1 + 464) = a1;
    *(_QWORD *)(a1 + 456) = PiDrvDbUnloadNodeWaitWorkerCallback;
    *(_QWORD *)(a1 + 440) = 0LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 440), DelayedWorkQueue);
  }
  ExReleaseResourceLite((PERESOURCE)(a1 + 88));
  v5 = KeGetCurrentThread();
  v6 = v5->KernelApcDisable + 1;
  v5->KernelApcDisable = v6;
  if ( !v6
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v5->ApcState.ApcListHead[0].Flink != &v5->152
    && !v5->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
