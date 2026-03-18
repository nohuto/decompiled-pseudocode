/*
 * XREFs of LdrpInitMuiCrits @ 0x14002A838
 * Callers:
 *     LdrUnloadAlternateResourceModuleEx @ 0x140025AE4 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x140029F54 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x14002A698 (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14016D60C (LdrpSetAlternateResourceModuleHandle.c)
 * Callees:
 *     KiInitializeMutant @ 0x1400756B8 (KiInitializeMutant.c)
 *     NtDelayExecution @ 0x1404FD770 (NtDelayExecution.c)
 */

__int64 __fastcall LdrpInitMuiCrits(__int64 a1, __int64 a2, __int64 a3)
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
  LOBYTE(a3) = 1;
  result = KiInitializeMutant(&MuiMutex, 0LL, a3);
  MuiLockInitCount = 2;
  return result;
}
