/*
 * XREFs of RaidAdapterDeferredRoutine @ 0x1C0018290
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0002BC8 (RaidAdapterFindUnit.c)
 *     RaidRestartIoQueue @ 0x1C0003964 (RaidRestartIoQueue.c)
 *     RaidAdapterRequestTimer @ 0x1C000B8E4 (RaidAdapterRequestTimer.c)
 *     RaidResumeAdapterQueue @ 0x1C000BD8C (RaidResumeAdapterQueue.c)
 *     RaidSetUnitPauseTimer @ 0x1C000C0F8 (RaidSetUnitPauseTimer.c)
 *     RaidResumeUnitQueue @ 0x1C000C19C (RaidResumeUnitQueue.c)
 *     RaidFreeDeferredItem @ 0x1C00183DC (RaidFreeDeferredItem.c)
 *     RaidAdapterRestartQueues @ 0x1C0018684 (RaidAdapterRestartQueues.c)
 *     RaidAdapterCancelPauseTimer @ 0x1C0026878 (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterDeviceBusy @ 0x1C0026D78 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x1C0026E30 (RaidAdapterDeviceReady.c)
 *     RaidAdapterLogIoError @ 0x1C0027474 (RaidAdapterLogIoError.c)
 *     RaidAdapterSetPauseTimer @ 0x1C0029318 (RaidAdapterSetPauseTimer.c)
 *     WPP_SF_ddd @ 0x1C002AED4 (WPP_SF_ddd.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C0037CE0 (RaidUnitProcessAsyncNotification.c)
 *     StorSetIoGatewayNotBusy @ 0x1C0039B84 (StorSetIoGatewayNotBusy.c)
 */

void __fastcall RaidAdapterDeferredRoutine(__int64 a1, LARGE_INTEGER *a2, __int64 a3, __int64 a4)
{
  LARGE_INTEGER *v4; // rsi
  __int64 v5; // rdi
  int LowPart; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  unsigned int HighPart; // ebx
  unsigned int v13; // ebp
  __int64 Unit; // rax
  __int64 v15; // rax
  __int64 v16; // rbp
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  PDEVICE_OBJECT v21; // rcx
  __int64 v22; // rdx
  unsigned int v23; // ecx
  unsigned int v24; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v26; // [rsp+60h] [rbp+8h]

  v4 = a2;
  v5 = *(_QWORD *)(a1 + 64);
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 4200));
  LowPart = a2[4].LowPart;
  if ( LowPart > 7 )
  {
    v17 = LowPart - 8;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            if ( v20 == 1 )
              RaidUnitProcessAsyncNotification(v5, (unsigned int)a2[4].HighPart);
          }
          else
          {
            KeSetCoalescableTimer((PKTIMER)(a2[5].QuadPart + 8), a2[6], 0, a2[7].LowPart, (PKDPC)(a2[5].QuadPart + 72));
          }
        }
        else
        {
          RaidAdapterDeviceReady(v5, (unsigned int)a2[4].HighPart);
        }
      }
      else
      {
        RaidAdapterDeviceBusy(v5, (unsigned int)a2[4].HighPart, a2[5].LowPart);
      }
      goto LABEL_10;
    }
    StorSetIoGatewayNotBusy(v5 + 768);
    goto LABEL_52;
  }
  if ( LowPart == 7 )
  {
    v23 = a2[5].LowPart;
    if ( v5 != -768 && !*(_DWORD *)(v5 + 808) )
    {
      v24 = *(_DWORD *)(v5 + 960);
      if ( v24 )
      {
        if ( v23 <= v24 )
          *(_DWORD *)(v5 + 800) = v24 - v23;
        else
          *(_DWORD *)(v5 + 800) = 0;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 768), &LockHandle);
        *(_DWORD *)(v5 + 808) = 1;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
    }
    goto LABEL_10;
  }
  v7 = LowPart - 1;
  if ( !v7 )
  {
    RaidAdapterRequestTimer(v5, a2[5].QuadPart, a2[6].LowPart);
    goto LABEL_10;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    RaidAdapterLogIoError(v5, (unsigned int)a2[4].HighPart, a2[6].LowPart, (unsigned int)a2[6].HighPart);
    goto LABEL_10;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( !v11 )
      {
        HighPart = a2[4].HighPart;
        v13 = a2[5].LowPart;
        v26 = HighPart;
        Unit = RaidAdapterFindUnit(v5, HighPart, a3, a4);
        if ( Unit )
        {
          RaidSetUnitPauseTimer(Unit, 1000 * v13);
          goto LABEL_10;
        }
        v21 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
        {
          goto LABEL_10;
        }
        v22 = 52LL;
        goto LABEL_27;
      }
      if ( v11 != 1 )
        goto LABEL_10;
      HighPart = a2[4].HighPart;
      v26 = HighPart;
      v15 = RaidAdapterFindUnit(v5, HighPart, a3, a4);
      v16 = v15;
      if ( !v15 )
      {
        v21 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
        {
          goto LABEL_10;
        }
        v22 = 53LL;
LABEL_27:
        WPP_SF_ddd(
          v21->AttachedDevice,
          v22,
          &WPP_222db84838ff3f85fffe5432ece91366_Traceguids,
          (unsigned __int8)HighPart,
          BYTE1(v26),
          BYTE2(v26));
        goto LABEL_10;
      }
      if ( KeCancelTimer((PKTIMER)(v15 + 792)) && (unsigned int)RaidResumeUnitQueue(v16) )
        RaidRestartIoQueue(v16);
    }
    else
    {
      RaidFreeDeferredItem(v5 + 1088);
      v4 = 0LL;
      if ( !*(_DWORD *)(v5 + 1460) )
        RaidAdapterCancelPauseTimer(v5, v5 + 1856);
    }
    goto LABEL_10;
  }
  RaidFreeDeferredItem(v5 + 1088);
  v4 = 0LL;
  if ( *(_DWORD *)(v5 + 1460) == 1 )
  {
    RaidAdapterSetPauseTimer(v5, v5 + 1856, v5 + 1728, *(unsigned int *)(v5 + 1456));
    goto LABEL_10;
  }
  if ( !(unsigned int)RaidResumeAdapterQueue(v5) )
LABEL_52:
    RaidAdapterRestartQueues(v5);
LABEL_10:
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 4200));
  if ( v4 )
    RaidFreeDeferredItem(v5 + 1088);
}
