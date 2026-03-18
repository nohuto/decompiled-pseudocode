/*
 * XREFs of PfSnQueueEnablePrefetcherTimer @ 0x14054B6B0
 * Callers:
 *     PfSnBeginBootPhase @ 0x1403A6AC8 (PfSnBeginBootPhase.c)
 * Callees:
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x1403A6BA8 (PfSnAllocateEnablePrefetcherTimer.c)
 */

__int64 __fastcall PfSnQueueEnablePrefetcherTimer(LARGE_INTEGER *a1)
{
  struct _KDPC *EnablePrefetcherTimer; // rax
  unsigned int v3; // ebx

  EnablePrefetcherTimer = PfSnAllocateEnablePrefetcherTimer(1u);
  v3 = 0;
  if ( EnablePrefetcherTimer )
    KeSetTimer((PKTIMER)EnablePrefetcherTimer, *a1, EnablePrefetcherTimer + 1);
  else
    return (unsigned int)-1073741670;
  return v3;
}
