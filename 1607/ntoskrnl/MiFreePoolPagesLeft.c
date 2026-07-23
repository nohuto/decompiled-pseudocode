/*
 * XREFs of MiFreePoolPagesLeft @ 0x140027D10
 * Callers:
 *     MmResourcesAvailable @ 0x14007E300 (MmResourcesAvailable.c)
 *     MmRaisePoolQuota @ 0x1400C4A14 (MmRaisePoolQuota.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140412EC0 (ExpQuerySystemPerformanceInformation.c)
 *     MiInitializePagedPoolEvents @ 0x1407A51FC (MiInitializePagedPoolEvents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreePoolPagesLeft(int a1)
{
  if ( a1 == 5 )
    return MiState[0] - qword_140326498;
  else
    return qword_1403278A8 - qword_140327898;
}
