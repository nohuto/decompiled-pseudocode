/*
 * XREFs of LdrpInitMuiCrits @ 0x1400F8BC8
 * Callers:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1400F8308 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1400F8A28 (LdrpGetFromMUIMemCache.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140131114 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14014978C (LdrpSetAlternateResourceModuleHandle.c)
 * Callees:
 *     KiInitializeMutant @ 0x140087474 (KiInitializeMutant.c)
 *     NtDelayExecution @ 0x1404EF820 (NtDelayExecution.c)
 */

__int64 LdrpInitMuiCrits()
{
  __int64 result; // rax
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  Interval.QuadPart = -1000000LL;
  while ( _InterlockedCompareExchange(&MuiLockInitCount, 1, 0) )
  {
    result = (unsigned int)MuiLockInitCount;
    if ( MuiLockInitCount == 1 )
    {
      NtDelayExecution(0, &Interval);
      result = (unsigned int)MuiLockInitCount;
    }
    if ( (_DWORD)result == 2 )
      return result;
  }
  result = KiInitializeMutant((__int64)&MuiMutex, 0, 1);
  MuiLockInitCount = 2;
  return result;
}
