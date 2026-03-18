/*
 * XREFs of LdrpInitMuiCrits @ 0x1400DE030
 * Callers:
 *     LdrUnloadAlternateResourceModuleEx @ 0x1400DD174 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1400DD36C (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1400DDE90 (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14013FDE8 (LdrpSetAlternateResourceModuleHandle.c)
 * Callees:
 *     KiInitializeMutant @ 0x14007CCC0 (KiInitializeMutant.c)
 *     NtDelayExecution @ 0x1403EFB60 (NtDelayExecution.c)
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
  result = KiInitializeMutant((__int64)&MuiMutex, 0LL, a3);
  MuiLockInitCount = 2;
  return result;
}
