/*
 * XREFs of LdrUnlockLoaderLock @ 0x180006690
 * Callers:
 *     TppIopExecuteCallback @ 0x180009AF0 (TppIopExecuteCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x180009D94 (TppWorkCallbackPrologRelease.c)
 *     TppWorkpExecuteCallback @ 0x18002D420 (TppWorkpExecuteCallback.c)
 * Callees:
 *     LdrpLogError @ 0x180003CE8 (LdrpLogError.c)
 *     LdrpReleaseLoaderLock @ 0x18000A454 (LdrpReleaseLoaderLock.c)
 *     RtlRaiseStatus @ 0x1800A4A80 (RtlRaiseStatus.c)
 *     LdrpGenericExceptionFilter @ 0x1800CB5E8 (LdrpGenericExceptionFilter.c)
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
