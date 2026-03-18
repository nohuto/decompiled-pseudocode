/*
 * XREFs of VidSchiSelectContext @ 0x1C0021C64
 * Callers:
 *     VidSchiCleanupQueuedCommand @ 0x1C008CD18 (VidSchiCleanupQueuedCommand.c)
 * Callees:
 *     VidSchiUpdatePriorityTables @ 0x1C000AA90 (VidSchiUpdatePriorityTables.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000B390 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateNodeRunningTime @ 0x1C000E924 (VidSchiUpdateNodeRunningTime.c)
 *     VidSchiFindPriorityLevelToSchedule @ 0x1C001473C (VidSchiFindPriorityLevelToSchedule.c)
 *     ?VidSchiSelectReadyNode@@YAPEAU_VIDSCH_NODE@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C001F438 (-VidSchiSelectReadyNode@@YAPEAU_VIDSCH_NODE@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiSelectContextFromThisPriority @ 0x1C0021D30 (VidSchiSelectContextFromThisPriority.c)
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
    KeAcquireInStackQueuedSpinLock(a1 + 228, &LockHandle);
  if ( (unsigned int)VidSchiUpdatePriorityTables((__int64)a1, 0LL, 1, 0LL) )
  {
    v6 = VidSchiSelectReadyNode((struct _VIDSCH_GLOBAL *)a1);
    v7 = (__int64)v6;
    if ( v6 )
    {
      if ( *((_DWORD *)v6 + 413) )
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
