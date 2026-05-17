/*
 * XREFs of LdrUnlockLoaderLock @ 0x180029EC0
 * Callers:
 *     TppWorkpExecuteCallback @ 0x180020650 (TppWorkpExecuteCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x18003AFD0 (TppWorkCallbackPrologRelease.c)
 *     TppIopExecuteCallback @ 0x18003B1A0 (TppIopExecuteCallback.c)
 * Callees:
 *     LdrpReleaseLoaderLock @ 0x18002D55C (LdrpReleaseLoaderLock.c)
 *     LdrpLogError @ 0x180086114 (LdrpLogError.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     LdrpGenericExceptionFilter @ 0x1800D2D24 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrUnlockLoaderLock(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx

  if ( (a1 & 0xFFFFFFFE) == 0 )
  {
    v2 = 0;
    if ( !a2 )
      return v2;
    if ( (a2 & 0xF000000000000000uLL) != 0 )
    {
      if ( (a1 & 1) != 0 )
        RtlRaiseStatus(3221225712LL);
    }
    else
    {
      if ( ((LODWORD(NtCurrentTeb()->ClientId.UniqueThread) ^ HIWORD(a2)) & 0xFFF) == 0 )
      {
        if ( (a1 & 1) != 0 )
          LdrpReleaseLoaderLock(a1, 13LL);
        else
          LdrpReleaseLoaderLock(a1, 14LL);
        return v2;
      }
      if ( (a1 & 1) != 0 )
        RtlRaiseStatus(3221225712LL);
    }
    return (unsigned int)-1073741584;
  }
  if ( (a1 & 1) != 0 )
    RtlRaiseStatus(3221225711LL);
  return (unsigned int)-1073741585;
}
