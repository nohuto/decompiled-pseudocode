/*
 * XREFs of QueuePowerRequest @ 0x1C0007A70
 * Callers:
 *     W32CalloutDispatch @ 0x1C00045B0 (W32CalloutDispatch.c)
 *     UserPowerInfoCallout @ 0x1C000517C (UserPowerInfoCallout.c)
 *     UserPowerStateCallout @ 0x1C0007814 (UserPowerStateCallout.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00A4AD8 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0024780 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

__int64 __fastcall QueuePowerRequest(__int128 *a1, char a2)
{
  NTSTATUS v4; // edi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int128 v8; // xmm0
  _OWORD *v9; // rax
  struct _FAST_MUTEX *v10; // rcx
  struct _LIST_ENTRY *Flink; // rax

  v4 = 0;
  v5 = Win32AllocPoolNonPaged(80LL, 1869640533LL);
  v6 = v5;
  if ( !v5 )
    return 3221225495LL;
  if ( a1 )
  {
    v8 = *a1;
    v9 = (_OWORD *)(v5 + 40);
    *(_QWORD *)(v6 + 64) = v9;
    *v9 = v8;
  }
  else
  {
    *(_QWORD *)(v5 + 64) = 0LL;
  }
  if ( a2 )
    KeInitializeEvent((PRKEVENT)(v6 + 16), SynchronizationEvent, 0);
  v10 = gpPowerRequestMutex;
  *(_BYTE *)(v6 + 72) = a2;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(v10);
  if ( gbPowerCalloutsReady )
  {
    Flink = gPowerRequestList.Flink;
    *(_QWORD *)v6 = gPowerRequestList.Flink;
    *(_QWORD *)(v6 + 8) = &gPowerRequestList;
    if ( Flink->Blink != &gPowerRequestList )
      __fastfail(3u);
    Flink->Blink = (struct _LIST_ENTRY *)v6;
    gPowerRequestList.Flink = (struct _LIST_ENTRY *)v6;
  }
  else
  {
    v4 = -1073741823;
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
  if ( v4 >= 0 )
  {
    KeSetEvent(gpEventPowerRequest, 1, 0);
    if ( !a2 )
      return 0LL;
    v4 = KeWaitForSingleObject((PVOID)(v6 + 16), WrUserRequest, 0, 0, 0LL);
    if ( v4 >= 0 )
      v4 = *(_DWORD *)(v6 + 56);
  }
  Win32FreePool(v6);
  return (unsigned int)v4;
}
