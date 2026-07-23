/*
 * XREFs of IoUpdateThreadIoRateThrottle @ 0x1401CC018
 * Callers:
 *     <none>
 * Callees:
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x140071D30 (KeAbProcessBaseIoPriorityChangeInternal.c)
 */

__int64 __fastcall IoUpdateThreadIoRateThrottle(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  int v3; // edx

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1792), a2);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result + a2 )
      return result;
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  return KeAbProcessBaseIoPriorityChangeInternal(a1, v3);
}
