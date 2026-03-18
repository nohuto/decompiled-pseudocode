/*
 * XREFs of PopDequeueQuerySetIrp @ 0x140120E94
 * Callers:
 *     PopRequestCompletion @ 0x140120C64 (PopRequestCompletion.c)
 *     PopSystemIrpCompletion @ 0x14039D018 (PopSystemIrpCompletion.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeCancelTimer @ 0x140091500 (KeCancelTimer.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     PopDiagTraceIrpFinish @ 0x140121058 (PopDiagTraceIrpFinish.c)
 *     PopEnableIrpWatchdog @ 0x140122194 (PopEnableIrpWatchdog.c)
 *     PopDiagTraceIrpStart @ 0x140122254 (PopDiagTraceIrpStart.c)
 *     PopIrpWatchdogBugcheck @ 0x1401E6908 (PopIrpWatchdogBugcheck.c)
 */

__int64 **__fastcall PopDequeueQuerySetIrp(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r8
  _QWORD *v9; // rax
  __int64 *v10; // rdi
  __int64 **result; // rax
  _QWORD *v12; // rcx
  __int64 ***v13; // rcx
  __int64 ***v14; // rax
  __int64 *v15; // rax
  IRP *v16; // rdi
  struct _DEVICE_OBJECT *DeviceObject; // rbx
  __int64 *v18; // rdx
  __int64 *v19; // r9
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 **v23; // rax
  __int64 ***v24; // rax
  _QWORD *v25; // r8
  _QWORD *v26; // rdx
  __int64 *v27; // [rsp+20h] [rbp-40h] BYREF
  __int64 **v28; // [rsp+28h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v30; // [rsp+48h] [rbp-18h] BYREF

  PopDiagTraceIrpFinish(a1);
  v2 = *(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200);
  if ( *(_BYTE *)(v2 + 196) && !KeCancelTimer((PKTIMER)(v2 + 56)) )
  {
    KeAcquireInStackQueuedSpinLock(&PopIrpLock, &v30);
    PopIrpLockThread = (__int64)KeGetCurrentThread();
    PopIrpWatchdogBugcheck(v2);
  }
  v28 = &v27;
  v27 = (__int64 *)&v27;
  v3 = *(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200);
  v4 = *(_QWORD *)(v3 + 24);
  if ( v4 )
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = (_QWORD *)(v5 + 248);
  if ( *(_DWORD *)(v3 + 188) != 1 )
    v6 += 2;
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  CurrentThread = KeGetCurrentThread();
  *v6 = 0LL;
  v8 = PopInrushIrp;
  PopIrpLockThread = (__int64)CurrentThread;
  if ( a1 == PopInrushIrp )
  {
    v18 = (__int64 *)PopInrushIrpList;
    v8 = 0LL;
    PopInrushIrp = 0LL;
    while ( v18 != &PopInrushIrpList )
    {
      v19 = v18 - 21;
      v20 = *(_QWORD *)(v18[9 * *((char *)v18 - 102) + 4] + 24);
      if ( v20 )
        v21 = *(_QWORD *)(*(_QWORD *)(v20 + 312) + 40LL);
      else
        v21 = 0LL;
      if ( !*(_QWORD *)(v21 + 248) && *(__int64 **)(v21 + 256) == v19 )
      {
        v22 = *v18;
        v23 = (__int64 **)v18[1];
        if ( *(__int64 **)(*v18 + 8) != v18 || *v23 != v18 )
          __fastfail(3u);
        *v23 = (__int64 *)v22;
        *(_QWORD *)(v22 + 8) = v23;
        v8 = (__int64)(v18 - 21);
        *(_QWORD *)(v21 + 248) = v19;
        *(_QWORD *)(v21 + 256) = v19[15];
        v24 = (__int64 ***)v28;
        v19[15] = (__int64)&v27;
        v19[16] = (__int64)v24;
        PopInrushIrp = (__int64)(v18 - 21);
        if ( *v24 != &v27 )
          __fastfail(3u);
        *v24 = (__int64 **)(v19 + 15);
        v28 = (__int64 **)(v19 + 15);
        if ( *v6 )
          goto LABEL_9;
        break;
      }
      v18 = (__int64 *)*v18;
    }
  }
  v9 = (_QWORD *)v6[1];
  if ( v9 )
  {
    v12 = v9 + 21;
    if ( (_QWORD *)*v12 != v12 )
    {
      if ( v8 )
      {
        v9 = 0LL;
      }
      else
      {
        v25 = (_QWORD *)*v12;
        v26 = (_QWORD *)v9[22];
        PopInrushIrp = v6[1];
        if ( (_QWORD *)v25[1] != v12 || (_QWORD *)*v26 != v12 )
          __fastfail(3u);
        *v26 = v25;
        v25[1] = v26;
      }
    }
    if ( v9 )
    {
      *v6 = v9;
      v13 = (__int64 ***)(v9 + 15);
      v6[1] = v9[15];
      v14 = (__int64 ***)v28;
      *v13 = &v27;
      v13[1] = (__int64 **)v14;
      if ( *v14 != &v27 )
        __fastfail(3u);
      *v14 = (__int64 **)v13;
      v28 = (__int64 **)v13;
    }
  }
LABEL_9:
  PopIrpLockThread = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  while ( 1 )
  {
    v10 = v27;
    result = &v27;
    if ( v27 == (__int64 *)&v27 )
      break;
    v15 = (__int64 *)*v27;
    if ( (__int64 **)v27[1] != &v27 || (__int64 *)v15[1] != v27 )
      __fastfail(3u);
    v27 = (__int64 *)*v27;
    v15[1] = (__int64)&v27;
    v16 = (IRP *)(v10 - 15);
    DeviceObject = v16->Tail.Overlay.CurrentStackLocation[-1].DeviceObject;
    PopDiagTraceIrpStart(&v27, v16);
    PopEnableIrpWatchdog(v16);
    IofCallDriver(DeviceObject, v16);
  }
  if ( *(_BYTE *)(v3 + 184) == 2 && *(_DWORD *)(v3 + 188) == 1 )
    _InterlockedDecrement(&PopPendingSetPowerDeviceIrps);
  return result;
}
