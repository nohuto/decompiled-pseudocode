/*
 * XREFs of W32AttachToProcessAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___ @ 0x140266B68
 * Callers:
 *     W32AttachToSessionAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___ @ 0x1402A8C38 (W32AttachToSessionAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___.c)
 * Callees:
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x1400F77EC (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall W32AttachToProcessAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881_(PRKPROCESS PROCESS)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v2 = PsAcquireProcessExitSynchronization(PROCESS);
  if ( v2 >= 0 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(PROCESS, &ApcState);
    InputCoreProviderCallbackWorker(v4, v3);
    v2 = 0;
    KeUnstackDetachProcess(&ApcState);
    PsReleaseProcessExitSynchronization(PROCESS);
  }
  return (unsigned int)v2;
}
