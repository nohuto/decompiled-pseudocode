/*
 * XREFs of KeAbProcessBaseIoPriorityChange @ 0x140071D04
 * Callers:
 *     PsSetIoPriorityThread @ 0x140071C90 (PsSetIoPriorityThread.c)
 *     PspNotifyProcessBackgroundTransition @ 0x1400953BC (PspNotifyProcessBackgroundTransition.c)
 * Callees:
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x140071D30 (KeAbProcessBaseIoPriorityChangeInternal.c)
 */

__int64 __fastcall KeAbProcessBaseIoPriorityChange(__int64 a1, unsigned int a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rdx

  result = a2;
  v4 = 0LL;
  if ( a3 < 2 )
  {
    if ( (int)result < 2 )
      return result;
    return KeAbProcessBaseIoPriorityChangeInternal(a1, v4);
  }
  if ( (int)result < 2 )
  {
    v4 = 1LL;
    return KeAbProcessBaseIoPriorityChangeInternal(a1, v4);
  }
  return result;
}
