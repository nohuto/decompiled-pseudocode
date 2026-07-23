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

NTSTATUS __cdecl LdrUnlockLoaderLock(ULONG Flags, PVOID Cookie)
{
  NTSTATUS v2; // ebx

  if ( (Flags & 0xFFFFFFFE) == 0 )
  {
    v2 = 0;
    if ( !Cookie )
      return v2;
    if ( ((unsigned __int64)Cookie & 0xF000000000000000uLL) != 0 )
    {
      if ( (Flags & 1) != 0 )
        RtlRaiseStatus(-1073741584);
    }
    else
    {
      if ( ((LODWORD(NtCurrentTeb()->ClientId.UniqueThread) ^ ((unsigned __int64)Cookie >> 48)) & 0xFFF) == 0 )
      {
        if ( (Flags & 1) != 0 )
          LdrpReleaseLoaderLock(Flags, 13LL);
        else
          LdrpReleaseLoaderLock(Flags, 14LL);
        return v2;
      }
      if ( (Flags & 1) != 0 )
        RtlRaiseStatus(-1073741584);
    }
    return -1073741584;
  }
  if ( (Flags & 1) != 0 )
    RtlRaiseStatus(-1073741585);
  return -1073741585;
}
