/*
 * XREFs of VidSchiSelectContext @ 0x1C00255D4
 * Callers:
 *     VidSchiCleanupQueuedCommand @ 0x1C00A2734 (VidSchiCleanupQueuedCommand.c)
 * Callees:
 *     VidSchiUpdatePriorityTables @ 0x1C0008AF0 (VidSchiUpdatePriorityTables.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0009E20 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateNodeRunningTime @ 0x1C00111F8 (VidSchiUpdateNodeRunningTime.c)
 *     ?VidSchiSelectReadyNode@@YAPEAU_VIDSCH_NODE@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0021DA0 (-VidSchiSelectReadyNode@@YAPEAU_VIDSCH_NODE@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiFindPriorityLevelToSchedule @ 0x1C0024274 (VidSchiFindPriorityLevelToSchedule.c)
 *     VidSchiSelectContextFromThisPriority @ 0x1C00256C0 (VidSchiSelectContextFromThisPriority.c)
 */

__int64 __fastcall VidSchiSelectContext(KSPIN_LOCK *a1, int a2)
{
  __int64 v2; // rsi
  __int64 v5; // r9
  KSPIN_LOCK v6; // rax
  struct _VIDSCH_NODE *v7; // rax
  struct _VIDSCH_NODE *v8; // rdi
  unsigned int PriorityLevelToSchedule; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  v2 = 0LL;
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock(a1 + 232, &LockHandle);
  if ( (unsigned int)VidSchiUpdatePriorityTables((__int64)a1, 0LL, 1, 0LL) )
  {
    v6 = a1[26];
    if ( v6 && (*(_DWORD *)(v6 + 176) & 1) != 0 )
    {
      v2 = a1[26];
    }
    else
    {
      v7 = VidSchiSelectReadyNode((struct _VIDSCH_GLOBAL *)a1);
      v8 = v7;
      if ( v7 )
      {
        if ( *((_DWORD *)v7 + 423) )
          VidSchiUpdateNodeRunningTime((__int64)v7, 0LL);
        PriorityLevelToSchedule = VidSchiFindPriorityLevelToSchedule(v8);
        v2 = VidSchiSelectContextFromThisPriority(v8, PriorityLevelToSchedule);
      }
    }
  }
  VidSchiProfilePerformanceTick(2LL, (__int64)a1, 0LL, v5, v2, 0LL, 0LL, 0LL);
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v2;
}
