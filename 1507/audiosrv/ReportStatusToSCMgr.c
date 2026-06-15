/*
 * XREFs of ReportStatusToSCMgr @ 0x1800396A0
 * Callers:
 *     ServiceCtrl @ 0x18002CEA0 (ServiceCtrl.c)
 *     ServiceMain @ 0x180038CA0 (ServiceMain.c)
 *     AudioSrvStartupThread @ 0x180039610 (AudioSrvStartupThread.c)
 *     ServiceStart @ 0x180039720 (ServiceStart.c)
 *     OnServiceShutdown @ 0x18009D220 (OnServiceShutdown.c)
 *     ShutdownKeepaliveThread @ 0x18009D3F0 (ShutdownKeepaliveThread.c)
 * Callees:
 *     Template_qqqqqqq @ 0x18009D42C (Template_qqqqqqq.c)
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
    ssStatus.dwCheckPoint = dword_1800E7588++;
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
