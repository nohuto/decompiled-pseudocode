/*
 * XREFs of AudioSrvStartupThread @ 0x180039610
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ReportStatusToSCMgr @ 0x1800396A0 (ReportStatusToSCMgr.c)
 *     ServiceStart @ 0x180039720 (ServiceStart.c)
 */

__int64 __fastcall AudioSrvStartupThread(PVOID Parameter)
{
  __int64 v2; // rdi
  int v3; // esi
  __int64 v4; // r9

  v2 = 0LL;
  v3 = ServiceStart(*(struct SERVICE_STATUS_HANDLE__ **)Parameter);
  if ( v3 )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0xAu,
        (__int64)&WPP_eb2fdc9f7b10d3db27f8d70b9a146365_Traceguids);
    }
    dwServiceError = v3;
    ReportStatusToSCMgr(3LL, 0LL, 5000LL, v4);
    SetEvent(hEventShutdown);
  }
  if ( *((_DWORD *)Parameter + 2) )
  {
    do
    {
      HeapFree(hHeap, 0, *(LPVOID *)(*((_QWORD *)Parameter + 2) + 8 * v2));
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *((_DWORD *)Parameter + 2) );
  }
  HeapFree(hHeap, 0, *((LPVOID *)Parameter + 2));
  HeapFree(hHeap, 0, Parameter);
  return 0LL;
}
