/*
 * XREFs of MiFreePoolPagesLeft @ 0x140028190
 * Callers:
 *     MmResourcesAvailable @ 0x14007E280 (MmResourcesAvailable.c)
 *     MmRaisePoolQuota @ 0x1400C6B74 (MmRaisePoolQuota.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140414000 (ExpQuerySystemPerformanceInformation.c)
 *     MiInitializePagedPoolEvents @ 0x1407A51FC (MiInitializePagedPoolEvents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreePoolPagesLeft(int a1)
{
  if ( a1 == 5 )
    return MiState[0] - qword_140326458;
  else
    return qword_140327868 - qword_140327858;
}
