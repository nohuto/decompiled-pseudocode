/*
 * XREFs of RtlReleaseResource @ 0x18006D0A0
 * Callers:
 *     RtlConvertSharedToExclusive @ 0x18006CE50 (RtlConvertSharedToExclusive.c)
 * Callees:
 *     RtlpNonNegativeDecrement @ 0x18006D170 (RtlpNonNegativeDecrement.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     ZwReleaseSemaphore @ 0x1800A6560 (ZwReleaseSemaphore.c)
 */

void __cdecl RtlReleaseResource(PRTL_RESOURCE Resource)
{
  LONG NumberOfActive; // eax
  signed int NumberOfWaitingExclusive; // edx
  bool v4; // zf
  int v5; // eax
  int v6; // eax
  int v7; // eax
  LONG v8; // edx
  int v9; // eax
  LONG PreviousCount; // [rsp+30h] [rbp+8h] BYREF

  NumberOfActive = Resource->NumberOfActive;
  if ( NumberOfActive < 0 )
  {
    if ( NumberOfActive == -1 )
      Resource->ExclusiveOwnerThread = 0LL;
    if ( !_InterlockedIncrement(&Resource->NumberOfActive) )
    {
      if ( Resource->NumberOfWaitingShared )
      {
        v8 = _InterlockedExchange((volatile __int32 *)&Resource->NumberOfWaitingShared, 0);
        if ( v8 )
        {
          v9 = ZwReleaseSemaphore(Resource->SharedSemaphore, v8, &PreviousCount);
          if ( v9 < 0 )
            RtlRaiseStatus(v9);
        }
      }
      if ( (unsigned int)RtlpNonNegativeDecrement(&Resource->NumberOfWaitingExclusive) )
      {
        v5 = ZwReleaseSemaphore(Resource->ExclusiveSemaphore, 1, &PreviousCount);
        if ( v5 < 0 )
          RtlRaiseStatus(v5);
      }
    }
  }
  else if ( _InterlockedExchangeAdd(&Resource->NumberOfActive, 0xFFFFFFFF) == 1 )
  {
    NumberOfWaitingExclusive = Resource->NumberOfWaitingExclusive;
    v4 = NumberOfWaitingExclusive == 0;
    if ( NumberOfWaitingExclusive > 0 )
    {
      do
      {
        v6 = _InterlockedCompareExchange(
               (volatile signed __int32 *)&Resource->NumberOfWaitingExclusive,
               NumberOfWaitingExclusive - 1,
               NumberOfWaitingExclusive);
        if ( NumberOfWaitingExclusive == v6 )
          break;
        NumberOfWaitingExclusive = v6;
      }
      while ( v6 > 0 );
      v4 = NumberOfWaitingExclusive == 0;
    }
    if ( !v4 )
    {
      v7 = ZwReleaseSemaphore(Resource->ExclusiveSemaphore, 1, &PreviousCount);
      if ( v7 < 0 )
        RtlRaiseStatus(v7);
    }
  }
}
