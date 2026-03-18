/*
 * XREFs of VidSchiSelectContext @ 0x1C001A140
 * Callers:
 *     VidSchiCleanupQueuedCommand @ 0x1C007AA48 (VidSchiCleanupQueuedCommand.c)
 * Callees:
 *     VidSchiUpdatePriorityTables @ 0x1C0002C9C (VidSchiUpdatePriorityTables.c)
 *     ?VidSchiSelectReadyNode@@YAPEAU_VIDSCH_NODE@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C00047B0 (-VidSchiSelectReadyNode@@YAPEAU_VIDSCH_NODE@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiFindPriorityLevelToSchedule @ 0x1C0004900 (VidSchiFindPriorityLevelToSchedule.c)
 *     VidSchiUpdateNodeRunningTime @ 0x1C0004950 (VidSchiUpdateNodeRunningTime.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0004F20 (VidSchiProfilePerformanceTick.c)
 *     VidSchiSelectContextFromThisPriority @ 0x1C001A20C (VidSchiSelectContextFromThisPriority.c)
 */

__int64 __fastcall VidSchiSelectContext(KSPIN_LOCK *a1, int a2)
{
  __int64 v2; // rsi
  __int64 v5; // r9
  struct _VIDSCH_NODE *v6; // rax
  __int64 v7; // rbx
  unsigned int PriorityLevelToSchedule; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  v2 = 0LL;
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock(a1 + 234, &LockHandle);
  if ( VidSchiUpdatePriorityTables((__int64)a1, 0LL, 1, 0LL) )
  {
    v6 = VidSchiSelectReadyNode((struct _VIDSCH_GLOBAL *)a1);
    v7 = (__int64)v6;
    if ( v6 )
    {
      if ( *((_DWORD *)v6 + 405) )
        VidSchiUpdateNodeRunningTime((__int64)v6, 0LL);
      PriorityLevelToSchedule = VidSchiFindPriorityLevelToSchedule(v7);
      v2 = VidSchiSelectContextFromThisPriority(v7, PriorityLevelToSchedule);
    }
  }
  VidSchiProfilePerformanceTick(2LL, (__int64)a1, 0LL, v5, v2, 0LL, 0LL, 0LL);
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v2;
}
