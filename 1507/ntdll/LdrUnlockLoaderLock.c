/*
 * XREFs of LdrUnlockLoaderLock @ 0x180070A40
 * Callers:
 *     TppWorkpExecuteCallback @ 0x18003AE20 (TppWorkpExecuteCallback.c)
 *     TppIopExecuteCallback @ 0x18003C020 (TppIopExecuteCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x18003C414 (TppWorkCallbackPrologRelease.c)
 * Callees:
 *     LdrpReleaseLoaderLock @ 0x180038398 (LdrpReleaseLoaderLock.c)
 *     LdrpLogError @ 0x180075B80 (LdrpLogError.c)
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
 *     LdrpGenericExceptionFilter @ 0x1800C0F28 (LdrpGenericExceptionFilter.c)
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
          LdrpReleaseLoaderLock(a1, 13, 0);
        else
          LdrpReleaseLoaderLock(a1, 14, 0);
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
