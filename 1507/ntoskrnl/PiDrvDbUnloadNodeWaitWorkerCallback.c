/*
 * XREFs of PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1401308BC
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x14017F070 (ZwWaitForSingleObject.c)
 */

void __fastcall PiDrvDbUnloadNodeWaitWorkerCallback(__int64 a1)
{
  NTSTATUS v2; // eax
  struct _KTHREAD *CurrentThread; // rdx
  NTSTATUS v4; // esi
  REGHANDLE v5; // rbx
  struct _KTHREAD *v6; // rcx
  __int16 v7; // ax
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // ax
  __int16 v10; // [rsp+38h] [rbp-39h] BYREF
  __int16 v11; // [rsp+3Ch] [rbp-35h] BYREF
  NTSTATUS v12; // [rsp+40h] [rbp-31h] BYREF
  NTSTATUS v13; // [rsp+48h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-21h] BYREF
  __int64 v15; // [rsp+60h] [rbp-11h]
  int v16; // [rsp+68h] [rbp-9h]
  int v17; // [rsp+6Ch] [rbp-5h]
  NTSTATUS *v18; // [rsp+70h] [rbp-1h]
  __int64 v19; // [rsp+78h] [rbp+7h]
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+80h] [rbp+Fh] BYREF
  __int64 v21; // [rsp+90h] [rbp+1Fh]
  int v22; // [rsp+98h] [rbp+27h]
  int v23; // [rsp+9Ch] [rbp+2Bh]
  NTSTATUS *v24; // [rsp+A0h] [rbp+2Fh]
  __int64 v25; // [rsp+A8h] [rbp+37h]

  v2 = ZwWaitForSingleObject(*(HANDLE *)(a1 + 472), 0, 0LL);
  CurrentThread = KeGetCurrentThread();
  v4 = v2;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 88), 1u);
  if ( !*(_BYTE *)(a1 + 489) )
  {
    v5 = PnpEtwHandle;
    *(_BYTE *)(a1 + 489) = 1;
    v12 = v4;
    if ( v5 && EtwEventEnabled(v5, &KMPnPEvt_DriverDatabaseUnload_Stop) )
    {
      v8 = *(_WORD *)(a1 + 16);
      v16 = v8;
      v10 = v8 >> 1;
      *(_QWORD *)&UserData.Size = 2LL;
      UserData.Ptr = (ULONGLONG)&v10;
      v15 = *(_QWORD *)(a1 + 24);
      v18 = &v12;
      v17 = 0;
      v19 = 4LL;
      EtwWrite(v5, &KMPnPEvt_DriverDatabaseUnload_Stop, 0LL, 3u, &UserData);
      v5 = PnpEtwHandle;
    }
    v13 = v4;
    if ( v5 && EtwEventEnabled(v5, &KMPnPEvt_DriverDatabaseLoaded_Stop) )
    {
      v9 = *(_WORD *)(a1 + 16);
      v22 = v9;
      v11 = v9 >> 1;
      *(_QWORD *)&v20.Size = 2LL;
      v20.Ptr = (ULONGLONG)&v11;
      v21 = *(_QWORD *)(a1 + 24);
      v24 = &v13;
      v23 = 0;
      v25 = 4LL;
      EtwWrite(v5, &KMPnPEvt_DriverDatabaseLoaded_Stop, 0LL, 3u, &v20);
    }
  }
  ExReleaseResourceLite((PERESOURCE)(a1 + 88));
  v6 = KeGetCurrentThread();
  v7 = v6->KernelApcDisable + 1;
  v6->KernelApcDisable = v7;
  if ( !v7
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v6->ApcState.ApcListHead[0].Flink != &v6->152
    && !v6->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
