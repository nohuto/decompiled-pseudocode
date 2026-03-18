/*
 * XREFs of ExpUpdateTimerResolution @ 0x1400D3B10
 * Callers:
 *     ExSetTimerResolution @ 0x1400D398C (ExSetTimerResolution.c)
 *     NtSetTimerResolution @ 0x1404F4E2C (NtSetTimerResolution.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x1400D3C7C (PoTraceSystemTimerResolutionUpdate.c)
 *     ExpUpdateTimerConfiguration @ 0x1400D3CD8 (ExpUpdateTimerConfiguration.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall ExpUpdateTimerResolution(char a1, unsigned int a2, unsigned __int8 *a3, __int64 *a4)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v6; // rcx
  int v7; // edi
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  ULONG v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  if ( a3 )
  {
    CurrentIrql = *a3;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&ExpKernelResolutionLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpKernelResolutionLock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&ExpKernelResolutionLock);
    }
    a2 = v10;
  }
  if ( a1 )
  {
    if ( a2 >= ExpLastRequestedTime || KeMaximumIncrement <= a2 )
    {
LABEL_23:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(&ExpKernelResolutionLock, retaddr);
      else
        _InterlockedAnd64(&ExpKernelResolutionLock, 0LL);
      __writecr8(CurrentIrql);
      return (unsigned int)KeTimeIncrement;
    }
  }
  else
  {
    a2 = KeMaximumIncrement;
    v10 = KeMaximumIncrement;
    if ( ExpKernelResolutionCount )
    {
      if ( ExpKernelRequestedTimerResolution < KeMaximumIncrement )
        a2 = ExpKernelRequestedTimerResolution;
      v10 = a2;
    }
    v6 = ExpTimerResolutionListHead;
    a4 = &ExpTimerResolutionListHead;
    while ( (__int64 *)v6 != &ExpTimerResolutionListHead )
    {
      if ( (*(_DWORD *)(v6 - 852) & 0x1000) != 0 )
      {
        if ( *(_DWORD *)(v6 + 24) < a2 )
          a2 = *(_DWORD *)(v6 + 24);
        v10 = a2;
      }
      v6 = *(_QWORD *)v6;
    }
  }
  if ( a2 < KeMinimumIncrement )
    a2 = KeMinimumIncrement;
  v10 = a2;
  if ( a2 == ExpLastRequestedTime )
    goto LABEL_23;
  v7 = KeTimeIncrement;
  ExpLastRequestedTime = a2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&ExpKernelResolutionLock, retaddr);
  else
    _InterlockedAnd64(&ExpKernelResolutionLock, 0LL);
  __writecr8(CurrentIrql);
  ExpUpdateTimerConfiguration(&v10, 0LL, 0LL, a4);
  result = v10;
  if ( v7 != v10 )
  {
    PoTraceSystemTimerResolutionUpdate();
    return v10;
  }
  return result;
}
