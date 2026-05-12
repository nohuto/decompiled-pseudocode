/*
 * XREFs of RaidAdapterDeferredRoutine @ 0x1C0012790
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0005768 (RaidAdapterFindUnit.c)
 *     RaidRestartIoQueue @ 0x1C0009DF8 (RaidRestartIoQueue.c)
 *     RaidSetUnitPauseTimer @ 0x1C0010A8C (RaidSetUnitPauseTimer.c)
 *     RaidAdapterRestartQueues @ 0x1C0010C48 (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C00119DC (RaidResumeAdapterQueue.c)
 *     RaidResumeUnitQueue @ 0x1C0011A64 (RaidResumeUnitQueue.c)
 *     RaidFreeDeferredItem @ 0x1C00128D0 (RaidFreeDeferredItem.c)
 *     RaidAdapterSetPauseTimer @ 0x1C0012D20 (RaidAdapterSetPauseTimer.c)
 *     RaidAdapterCancelPauseTimer @ 0x1C002110C (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterDeviceBusy @ 0x1C00212D0 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x1C0021388 (RaidAdapterDeviceReady.c)
 *     RaidAdapterLogIoError @ 0x1C0021A48 (RaidAdapterLogIoError.c)
 *     RaidAdapterRequestTimer @ 0x1C0022338 (RaidAdapterRequestTimer.c)
 *     WPP_SF_ddd @ 0x1C002572C (WPP_SF_ddd.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C0033160 (RaidUnitProcessAsyncNotification.c)
 *     StorSetIoGatewayNotBusy @ 0x1C0034C7C (StorSetIoGatewayNotBusy.c)
 */

void __fastcall RaidAdapterDeferredRoutine(__int64 a1, LARGE_INTEGER *a2)
{
  LARGE_INTEGER *v2; // rsi
  __int64 v3; // rdi
  int LowPart; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  unsigned int HighPart; // ebx
  unsigned int v11; // ebp
  __int64 Unit; // rax
  struct _KTIMER *v13; // rax
  __int64 v14; // rbp
  PDEVICE_OBJECT v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // ecx
  unsigned int v18; // eax
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v24; // [rsp+60h] [rbp+8h]

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 64);
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 4200));
  LowPart = a2[4].LowPart;
  if ( LowPart > 7 )
  {
    v19 = LowPart - 8;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            if ( v22 == 1 )
              RaidUnitProcessAsyncNotification(v3, (unsigned int)a2[4].HighPart);
          }
          else
          {
            KeSetCoalescableTimer((PKTIMER)(a2[5].QuadPart + 8), a2[6], 0, a2[7].LowPart, (PKDPC)(a2[5].QuadPart + 72));
          }
        }
        else
        {
          RaidAdapterDeviceReady(v3, (unsigned int)a2[4].HighPart);
        }
      }
      else
      {
        RaidAdapterDeviceBusy(v3, (unsigned int)a2[4].HighPart, a2[5].LowPart);
      }
      goto LABEL_10;
    }
    StorSetIoGatewayNotBusy(v3 + 768);
    goto LABEL_52;
  }
  if ( LowPart == 7 )
  {
    v17 = a2[5].LowPart;
    if ( v3 != -768 && !*(_DWORD *)(v3 + 808) )
    {
      v18 = *(_DWORD *)(v3 + 960);
      if ( v18 )
      {
        if ( v17 <= v18 )
          *(_DWORD *)(v3 + 800) = v18 - v17;
        else
          *(_DWORD *)(v3 + 800) = 0;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 768), &LockHandle);
        *(_DWORD *)(v3 + 808) = 1;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
    }
    goto LABEL_10;
  }
  v5 = LowPart - 1;
  if ( !v5 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))RaidAdapterRequestTimer)(
      v3,
      (LARGE_INTEGER)a2[5].QuadPart,
      a2[6].LowPart);
    goto LABEL_10;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    RaidAdapterLogIoError(v3, (unsigned int)a2[4].HighPart, a2[6].LowPart, (unsigned int)a2[6].HighPart);
    goto LABEL_10;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    RaidFreeDeferredItem(v3 + 1088);
    v2 = 0LL;
    if ( *(_DWORD *)(v3 + 1460) == 1 )
    {
      RaidAdapterSetPauseTimer(v3, v3 + 1856, v3 + 1728, *(unsigned int *)(v3 + 1456));
      goto LABEL_10;
    }
    if ( (unsigned int)RaidResumeAdapterQueue(v3) )
      goto LABEL_10;
LABEL_52:
    RaidAdapterRestartQueues(v3);
    goto LABEL_10;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      HighPart = a2[4].HighPart;
      v11 = a2[5].LowPart;
      v24 = HighPart;
      Unit = RaidAdapterFindUnit(v3, HighPart);
      if ( Unit )
      {
        RaidSetUnitPauseTimer(Unit, 1000 * v11);
        goto LABEL_10;
      }
      v15 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        goto LABEL_10;
      }
      v16 = 52LL;
      goto LABEL_24;
    }
    if ( v9 != 1 )
      goto LABEL_10;
    HighPart = a2[4].HighPart;
    v24 = HighPart;
    v13 = (struct _KTIMER *)RaidAdapterFindUnit(v3, HighPart);
    v14 = (__int64)v13;
    if ( !v13 )
    {
      v15 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        goto LABEL_10;
      }
      v16 = 53LL;
LABEL_24:
      WPP_SF_ddd(
        v15->AttachedDevice,
        v16,
        &WPP_a0eb401ed86ffacb5c89201c01d8a335_Traceguids,
        (unsigned __int8)HighPart,
        BYTE1(v24),
        BYTE2(v24));
      goto LABEL_10;
    }
    if ( KeCancelTimer(v13 + 12) && (unsigned int)RaidResumeUnitQueue(v14) )
      RaidRestartIoQueue(v14);
  }
  else
  {
    RaidFreeDeferredItem(v3 + 1088);
    v2 = 0LL;
    if ( !*(_DWORD *)(v3 + 1460) )
      RaidAdapterCancelPauseTimer(v3, v3 + 1856);
  }
LABEL_10:
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 4200));
  if ( v2 )
    RaidFreeDeferredItem(v3 + 1088);
}
