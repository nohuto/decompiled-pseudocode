/*
 * XREFs of ?ndisIsValidNblTrackerHistoryBufferSize@@YA_N_KK@Z @ 0x1C010672C
 * Callers:
 *     ?ndisCalculateIdealNblTrackerHistoryBufferSize@@YAXXZ @ 0x1C00D6DF0 (-ndisCalculateIdealNblTrackerHistoryBufferSize@@YAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsValidNblTrackerHistoryBufferSize(unsigned __int64 a1)
{
  return ((ndisNblTrackerHistorySize - 1) & ndisNblTrackerHistorySize) == 0 && ndisNblTrackerHistorySize <= a1;
}
