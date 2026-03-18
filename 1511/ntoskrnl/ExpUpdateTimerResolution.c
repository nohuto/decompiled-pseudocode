/*
 * XREFs of ExpUpdateTimerResolution @ 0x1400EB314
 * Callers:
 *     ExSetTimerResolution @ 0x140212F08 (ExSetTimerResolution.c)
 *     NtSetTimerResolution @ 0x1404B4EBC (NtSetTimerResolution.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpUpdateTimerConfiguration @ 0x1400EB410 (ExpUpdateTimerConfiguration.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x1400EB4C0 (PoTraceSystemTimerResolutionUpdate.c)
 */

__int64 __fastcall ExpUpdateTimerResolution(char a1, unsigned int a2, KIRQL *a3)
{
  KIRQL v4; // al
  KIRQL v5; // r8
  __int64 i; // rcx
  int v7; // ebx
  __int64 result; // rax
  ULONG v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  if ( a3 )
  {
    v5 = *a3;
  }
  else
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
    a2 = v9;
    v5 = v4;
  }
  if ( a1 )
  {
    if ( a2 >= ExpLastRequestedTime || KeMaximumIncrement <= a2 )
    {
LABEL_17:
      KeReleaseSpinLock(&ExpKernelResolutionLock, v5);
      return (unsigned int)KeTimeIncrement;
    }
  }
  else
  {
    a2 = KeMaximumIncrement;
    v9 = KeMaximumIncrement;
    if ( ExpKernelResolutionCount )
    {
      if ( ExpKernelRequestedTimerResolution < KeMaximumIncrement )
        a2 = ExpKernelRequestedTimerResolution;
      v9 = a2;
    }
    for ( i = ExpTimerResolutionListHead; (__int64 *)i != &ExpTimerResolutionListHead; i = *(_QWORD *)i )
    {
      if ( (*(_DWORD *)(i - 860) & 0x1000) != 0 )
      {
        if ( *(_DWORD *)(i + 24) < a2 )
          a2 = *(_DWORD *)(i + 24);
        v9 = a2;
      }
    }
  }
  if ( a2 < KeMinimumIncrement )
    a2 = KeMinimumIncrement;
  v9 = a2;
  if ( a2 == ExpLastRequestedTime )
    goto LABEL_17;
  v7 = KeTimeIncrement;
  ExpLastRequestedTime = a2;
  KeReleaseSpinLock(&ExpKernelResolutionLock, v5);
  ExpUpdateTimerConfiguration(&v9, 0LL, 0LL);
  result = v9;
  if ( v7 != v9 )
  {
    PoTraceSystemTimerResolutionUpdate();
    return v9;
  }
  return result;
}
