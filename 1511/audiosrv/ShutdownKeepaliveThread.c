/*
 * XREFs of ShutdownKeepaliveThread @ 0x18009A260
 * Callers:
 *     <none>
 * Callees:
 *     ReportStatusToSCMgr @ 0x18003DC08 (ReportStatusToSCMgr.c)
 */

__int64 __fastcall ShutdownKeepaliveThread(PVOID Parameter)
{
  DWORD v1; // eax

  do
  {
    ReportStatusToSCMgr(3u, 0, 0x1388u);
    v1 = WaitForSingleObject(hEventShutdownComplete, 0x1388u);
  }
  while ( v1 && v1 != -1 );
  return 0LL;
}
