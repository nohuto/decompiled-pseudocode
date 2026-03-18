/*
 * XREFs of ?IsTraceLoggingApproved@@YAHXZ @ 0x1C021DDBC
 * Callers:
 *     ?TraceLoggingStubInvalidParamEvent@@YAXIKQEAD@Z @ 0x1C021F198 (-TraceLoggingStubInvalidParamEvent@@YAXIKQEAD@Z.c)
 *     TraceLoggingDesktopAllocFailureEvent @ 0x1C021F4A0 (TraceLoggingDesktopAllocFailureEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsTraceLoggingApproved(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 CurrentProcessWin32Process; // r8
  unsigned __int128 v5; // rax
  __int64 v6; // rcx

  v2 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  if ( !CurrentProcessWin32Process )
    return 1LL;
  v5 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
  v6 = *(_QWORD *)(CurrentProcessWin32Process + 992);
  if ( !v6 || (unsigned __int64)(*((_QWORD *)&v5 + 1) - v6) > 0xEA60 )
  {
    *(_QWORD *)(CurrentProcessWin32Process + 992) = *((_QWORD *)&v5 + 1);
    return 1;
  }
  return v2;
}
