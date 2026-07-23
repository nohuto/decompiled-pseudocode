/*
 * XREFs of PopDequeueQuerySetIrp @ 0x14012BD3C
 * Callers:
 *     PopRequestCompletion @ 0x14012BB00 (PopRequestCompletion.c)
 *     PopSystemIrpCompletion @ 0x1403D12D8 (PopSystemIrpCompletion.c)
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x140009D24 (PopDeepSleepClearDisengageReason.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     IofCallDriver @ 0x14002DBE0 (IofCallDriver.c)
 *     KeCancelTimer @ 0x1400C1310 (KeCancelTimer.c)
 *     PopEnableIrpWatchdog @ 0x14012B764 (PopEnableIrpWatchdog.c)
 *     PopDiagTraceIrpStart @ 0x14012B830 (PopDiagTraceIrpStart.c)
 *     PopDiagTraceIrpFinish @ 0x14012BE68 (PopDiagTraceIrpFinish.c)
 *     PopIrpWatchdogBugcheck @ 0x1401FF0D0 (PopIrpWatchdogBugcheck.c)
 */

void __fastcall PopDequeueQuerySetIrp(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rdi
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 *v9; // rdi
  __int64 *v10; // rdx
  __int64 *v11; // r10
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 **v15; // rax
  __int64 ***v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // r8
  _QWORD *v20; // rdx
  __int64 ***v21; // rcx
  _QWORD *v22; // rax
  __int64 *v23; // rax
  IRP *v24; // rdi
  struct _DEVICE_OBJECT *DeviceObject; // rbx
  __int64 *v26; // [rsp+20h] [rbp-40h] BYREF
  __int64 **v27; // [rsp+28h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v29; // [rsp+48h] [rbp-18h] BYREF

  PopDiagTraceIrpFinish(a1);
  v2 = *(_QWORD *)(a1 + 72LL * (*(char *)(a1 + 66) - 1) + 272);
  if ( *(_BYTE *)(v2 + 196) && !KeCancelTimer((PKTIMER)(v2 + 56)) )
  {
    KeAcquireInStackQueuedSpinLock(&PopIrpLock, &v29);
    PopIrpWatchdogBugcheck(v2);
  }
  v27 = &v26;
  v26 = (__int64 *)&v26;
  v3 = *(_QWORD *)(a1 + 72LL * (*(char *)(a1 + 66) - 1) + 272);
  v4 = *(_QWORD *)(v3 + 24);
  if ( v4 )
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = (_QWORD *)(v5 + 248);
  if ( *(_DWORD *)(v3 + 188) != 1 )
    v6 += 2;
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  v7 = PopInrushIrp;
  *v6 = 0LL;
  if ( a1 == v7 )
  {
    v10 = (__int64 *)PopInrushIrpList;
    v7 = 0LL;
    PopInrushIrp = 0LL;
    while ( v10 != &PopInrushIrpList )
    {
      v11 = v10 - 21;
      v12 = *(_QWORD *)(v10[9 * *((char *)v10 - 102) + 4] + 24);
      if ( v12 )
        v13 = *(_QWORD *)(*(_QWORD *)(v12 + 312) + 40LL);
      else
        v13 = 0LL;
      if ( !*(_QWORD *)(v13 + 248) && *(__int64 **)(v13 + 256) == v11 )
      {
        v14 = *v10;
        v15 = (__int64 **)v10[1];
        if ( *(__int64 **)(*v10 + 8) != v10 || *v15 != v10 )
          __fastfail(3u);
        *v15 = (__int64 *)v14;
        *(_QWORD *)(v14 + 8) = v15;
        v7 = (__int64)(v10 - 21);
        *(_QWORD *)(v13 + 248) = v11;
        v16 = (__int64 ***)(v11 + 15);
        *(_QWORD *)(v13 + 256) = v11[15];
        v17 = v27;
        PopInrushIrp = (__int64)(v10 - 21);
        if ( *v27 != (__int64 *)&v26 )
          __fastfail(3u);
        v11[16] = (__int64)v27;
        *v16 = &v26;
        *v17 = v16;
        v27 = (__int64 **)(v11 + 15);
        if ( *v6 )
          goto LABEL_9;
        break;
      }
      v10 = (__int64 *)*v10;
    }
  }
  v8 = (_QWORD *)v6[1];
  if ( v8 )
  {
    v18 = v8 + 21;
    if ( (_QWORD *)*v18 != v18 )
    {
      if ( v7 )
      {
        v8 = 0LL;
      }
      else
      {
        v19 = (_QWORD *)*v18;
        v20 = (_QWORD *)v8[22];
        PopInrushIrp = v6[1];
        if ( (_QWORD *)v19[1] != v18 || (_QWORD *)*v20 != v18 )
          __fastfail(3u);
        *v20 = v19;
        v19[1] = v20;
      }
    }
    if ( v8 )
    {
      *v6 = v8;
      v21 = (__int64 ***)(v8 + 15);
      v6[1] = v8[15];
      v22 = v27;
      if ( *v27 != (__int64 *)&v26 )
        __fastfail(3u);
      v21[1] = v27;
      *v21 = &v26;
      *v22 = v21;
      v27 = (__int64 **)v21;
    }
  }
LABEL_9:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  while ( 1 )
  {
    v9 = v26;
    if ( v26 == (__int64 *)&v26 )
      break;
    v23 = (__int64 *)*v26;
    if ( (__int64 **)v26[1] != &v26 || (__int64 *)v23[1] != v26 )
      __fastfail(3u);
    v26 = (__int64 *)*v26;
    v23[1] = (__int64)&v26;
    v24 = (IRP *)(v9 - 15);
    DeviceObject = v24->Tail.Overlay.CurrentStackLocation[-1].DeviceObject;
    PopDiagTraceIrpStart((__int64)&v26, (__int64)v24);
    PopEnableIrpWatchdog((__int64)v24);
    IofCallDriver(DeviceObject, v24);
  }
  if ( *(_BYTE *)(v3 + 184) == 2
    && *(_DWORD *)(v3 + 188) == 1
    && _InterlockedExchangeAdd(&PopPendingSetPowerDeviceIrps, 0xFFFFFFFF) == 1 )
  {
    PopDeepSleepClearDisengageReason(2);
  }
}
