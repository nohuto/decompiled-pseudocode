/*
 * XREFs of ReportStatusToSCMgr @ 0x18003DC08
 * Callers:
 *     ServiceCtrl @ 0x18002FFD0 (ServiceCtrl.c)
 *     ServiceStart @ 0x18003DAF0 (ServiceStart.c)
 *     AudioSrvStartupThread @ 0x18003DC90 (AudioSrvStartupThread.c)
 *     ServiceMain @ 0x180045270 (ServiceMain.c)
 *     OnServiceShutdown @ 0x18009A090 (OnServiceShutdown.c)
 *     ShutdownKeepaliveThread @ 0x18009A260 (ShutdownKeepaliveThread.c)
 * Callees:
 *     Template_qqqqqqq @ 0x18009A29C (Template_qqqqqqq.c)
 */

__int64 __fastcall ReportStatusToSCMgr(DWORD a1, DWORD a2, DWORD a3)
{
  DWORD v3; // eax
  int v4; // edx
  unsigned int v5; // ebx

  v3 = 0;
  ssStatus.dwCurrentState = a1;
  ssStatus.dwWin32ExitCode = a2;
  ssStatus.dwWaitHint = a3;
  if ( a1 == 4 )
    v3 = 193;
  ssStatus.dwControlsAccepted = v3;
  if ( a1 == 4 || a1 == 1 )
    ssStatus.dwCheckPoint = 0;
  else
    ssStatus.dwCheckPoint = dword_1800E5590++;
  v5 = SetServiceStatus(sshStatusHandle, &ssStatus);
  if ( !v5 && (Microsoft_Windows_AudioEnableBits & 2) != 0 )
    Template_qqqqqqq(
      ssStatus.dwWin32ExitCode,
      v4,
      ssStatus.dwServiceType,
      ssStatus.dwCurrentState,
      ssStatus.dwControlsAccepted,
      ssStatus.dwWin32ExitCode,
      ssStatus.dwServiceSpecificExitCode,
      ssStatus.dwCheckPoint,
      ssStatus.dwWaitHint);
  return v5;
}
