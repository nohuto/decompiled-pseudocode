/*
 * XREFs of LdrpInitMuiCrits @ 0x1400FAE3C
 * Callers:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1400FA57C (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1400FAC9C (LdrpGetFromMUIMemCache.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140130BA4 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14014921C (LdrpSetAlternateResourceModuleHandle.c)
 * Callees:
 *     KiInitializeMutant @ 0x140085B84 (KiInitializeMutant.c)
 *     NtDelayExecution @ 0x14050C890 (NtDelayExecution.c)
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
