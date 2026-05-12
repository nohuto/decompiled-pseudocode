/*
 * XREFs of RaSqmLogStatistics @ 0x1C002844C
 * Callers:
 *     RaSqmTimerDpc @ 0x1C0028510 (RaSqmTimerDpc.c)
 * Callees:
 *     RaSqmLogAdapterStatistics @ 0x1C00280B8 (RaSqmLogAdapterStatistics.c)
 *     RaSqmLogScsiPassthroughStatistics @ 0x1C0028380 (RaSqmLogScsiPassthroughStatistics.c)
 */

void RaSqmLogStatistics()
{
  __int64 v0; // rbx

  if ( g_RaidSQMInitialized && _InterlockedExchange(&g_RaidSQMLogInProgress, 1) != 1 )
  {
    v0 = MEMORY[0xFFFFF78000000320];
    if ( (v0 - g_RaidSQMLastLogTick) * KeQueryTimeIncrement() / 600000000 >= 1 )
    {
      RaSqmLogScsiPassthroughStatistics();
      RaSqmLogAdapterStatistics();
      g_RaidSQMLastLogTick = v0;
    }
    KeSetCoalescableTimer(
      (PKTIMER)&WPP_MAIN_CB.Queue.Wcb.DeviceObject,
      (LARGE_INTEGER)-858000000000LL,
      0,
      0x493E0u,
      (PKDPC)&WPP_MAIN_CB.DeviceQueue.32);
    _InterlockedExchange(&g_RaidSQMLogInProgress, 0);
  }
}
