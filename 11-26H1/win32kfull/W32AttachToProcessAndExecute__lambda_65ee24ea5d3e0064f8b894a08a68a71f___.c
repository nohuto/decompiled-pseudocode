/*
 * XREFs of W32AttachToProcessAndExecute__lambda_65ee24ea5d3e0064f8b894a08a68a71f___ @ 0x1402FFBFC
 * Callers:
 *     W32AttachToSessionAndExecute__lambda_65ee24ea5d3e0064f8b894a08a68a71f___ @ 0x1402FFCB0 (W32AttachToSessionAndExecute__lambda_65ee24ea5d3e0064f8b894a08a68a71f___.c)
 * Callees:
 *     ?HapticsDeviceNotifyWorker@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAV1@@Z @ 0x1402FFFBC (-HapticsDeviceNotifyWorker@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAV1@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall W32AttachToProcessAndExecute__lambda_65ee24ea5d3e0064f8b894a08a68a71f_(
        PRKPROCESS PROCESS,
        struct _PLUGPLAY_NOTIFY_HDR **a2)
{
  int v4; // ebx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v4 = PsAcquireProcessExitSynchronization(PROCESS);
  if ( v4 >= 0 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(PROCESS, &ApcState);
    v4 = SimpleHapticsController::HapticsDeviceNotifyWorker(*a2, a2[1]);
    KeUnstackDetachProcess(&ApcState);
    PsReleaseProcessExitSynchronization(PROCESS);
  }
  return (unsigned int)v4;
}
