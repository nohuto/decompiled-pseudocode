/*
 * XREFs of AudioSrvStartupThread @ 0x18003DC90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ServiceStart @ 0x18003DAF0 (ServiceStart.c)
 *     ReportStatusToSCMgr @ 0x18003DC08 (ReportStatusToSCMgr.c)
 */

__int64 __fastcall AudioSrvStartupThread(PVOID Parameter, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  int v6; // esi

  v5 = 0LL;
  v6 = ServiceStart(
         *(struct SERVICE_STATUS_HANDLE__ **)Parameter,
         *((_DWORD *)Parameter + 2),
         *((_QWORD **)Parameter + 2),
         a4);
  if ( v6 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_eb2fdc9f7b10d3db27f8d70b9a146365_Traceguids);
    }
    dwServiceError = v6;
    ReportStatusToSCMgr(3u, 0, 0x1388u);
    SetEvent(hEventShutdown);
  }
  if ( *((_DWORD *)Parameter + 2) )
  {
    do
    {
      HeapFree(hHeap, 0, *(LPVOID *)(*((_QWORD *)Parameter + 2) + 8 * v5));
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < *((_DWORD *)Parameter + 2) );
  }
  HeapFree(hHeap, 0, *((LPVOID *)Parameter + 2));
  HeapFree(hHeap, 0, Parameter);
  return 0LL;
}
