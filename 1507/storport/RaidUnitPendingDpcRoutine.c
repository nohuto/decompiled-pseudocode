/*
 * XREFs of RaidUnitPendingDpcRoutine @ 0x1C00059D0
 * Callers:
 *     <none>
 * Callees:
 *     StorTickEventQueue @ 0x1C0005A40 (StorTickEventQueue.c)
 *     RaUnitRequestPowerUp @ 0x1C00074EC (RaUnitRequestPowerUp.c)
 *     DbgLogRequest @ 0x1C0011B14 (DbgLogRequest.c)
 *     RaidAdapterResetBus @ 0x1C00223E8 (RaidAdapterResetBus.c)
 *     WPP_SF_q @ 0x1C0025780 (WPP_SF_q.c)
 *     RaUnitRequestPowerDown @ 0x1C002A794 (RaUnitRequestPowerDown.c)
 *     RaidUnitAbortHierarchicalResetWorkItem @ 0x1C00323F8 (RaidUnitAbortHierarchicalResetWorkItem.c)
 *     RaidUnitRequestTimeout @ 0x1C0033284 (RaidUnitRequestTimeout.c)
 */

void __fastcall RaidUnitPendingDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx
  bool v5; // di
  bool v6; // si
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  v4 = DeferredContext[8];
  if ( *(int *)(v4 + 1472) > 0 )
  {
    v5 = 0;
    v6 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1488), &LockHandle);
    v7 = *(_DWORD *)(v4 + 1472);
    if ( v7 > 0 )
    {
      v8 = v7 - 1;
      *(_DWORD *)(v4 + 1472) = v8;
      v5 = v8 == 0;
    }
    v9 = *(_DWORD *)(v4 + 1476);
    if ( v9 > 0 && !v5 )
    {
      v10 = v9 - 1;
      *(_DWORD *)(v4 + 1476) = v10;
      v6 = v10 == 0;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v5 )
    {
      if ( (qword_1C0044010 & 0x400) != 0 )
        DbgLogRequest(*(_QWORD *)(v4 + 24), 10, v4, 0, 0LL, 0LL, 0LL);
      RaidUnitAbortHierarchicalResetWorkItem(v4);
    }
    else if ( v6 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 48LL, &WPP_0a9d81cc67956adf3a94d0464afc2bb3_Traceguids, v4);
      }
      LOBYTE(v11) = *(_BYTE *)(v4 + 88);
      RaidAdapterResetBus(*(_QWORD *)(v4 + 24), v11);
    }
  }
  else if ( (int)StorTickEventQueue(*(_QWORD *)(v4 + 200), DeferredContext, SystemArgument1, SystemArgument2) < 0 )
  {
    if ( (qword_1C0044010 & 0x400) != 0 )
      DbgLogRequest(*(_QWORD *)(v4 + 24), 9, v4, 0, 0LL, 0LL, 0LL);
    RaidUnitRequestTimeout(v4);
  }
  else if ( _InterlockedExchange((volatile __int32 *)(v4 + 1456), 0) )
  {
    RaUnitRequestPowerUp(v4);
  }
  else if ( _InterlockedExchange((volatile __int32 *)(v4 + 1460), 0) )
  {
    RaUnitRequestPowerDown(v4);
  }
}
