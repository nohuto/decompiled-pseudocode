/*
 * XREFs of ProcessDpiAwarenessFromKernelDpiAwarenessContext @ 0x1C00E5564
 * Callers:
 *     ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C00E54AC (-TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z.c)
 *     ?TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z @ 0x1C00E55F8 (-TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall ProcessDpiAwarenessFromKernelDpiAwarenessContext(char a1)
{
  unsigned int v1; // ebx
  int v2; // ecx
  int v3; // ecx

  v1 = -1;
  v2 = a1 & 0xF;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
        return 2;
      else
        UserSetLastError(87LL);
    }
    else
    {
      return 1;
    }
  }
  else
  {
    return 0;
  }
  return v1;
}
