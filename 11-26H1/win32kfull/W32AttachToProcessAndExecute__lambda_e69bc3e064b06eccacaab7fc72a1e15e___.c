/*
 * XREFs of W32AttachToProcessAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e___ @ 0x1402A66F0
 * Callers:
 *     W32AttachToSessionAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e___ @ 0x1402A67A0 (W32AttachToSessionAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e___.c)
 * Callees:
 *     _lambda_e69bc3e064b06eccacaab7fc72a1e15e_::operator() @ 0x1402A6864 (_lambda_e69bc3e064b06eccacaab7fc72a1e15e_--operator().c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall W32AttachToProcessAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e_(
        PRKPROCESS PROCESS,
        __int64 a2)
{
  int v4; // ebx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v4 = PsAcquireProcessExitSynchronization(PROCESS);
  if ( v4 >= 0 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(PROCESS, &ApcState);
    v4 = lambda_e69bc3e064b06eccacaab7fc72a1e15e_::operator()(a2);
    KeUnstackDetachProcess(&ApcState);
    PsReleaseProcessExitSynchronization(PROCESS);
  }
  return (unsigned int)v4;
}
