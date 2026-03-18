/*
 * XREFs of _lambda_a817e3c7b16d652902ae8ccf3226f9ac_::operator() @ 0x1402A8C98
 * Callers:
 *     W32AttachToEverySessionAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___ @ 0x140279674 (W32AttachToEverySessionAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___.c)
 * Callees:
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x1400F77EC (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     W32AttachToSessionAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___ @ 0x1402A8C38 (W32AttachToSessionAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___.c)
 */

__int64 __fastcall lambda_a817e3c7b16d652902ae8ccf3226f9ac_::operator()(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // edi
  unsigned int MaxSessionCount; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // ecx

  if ( a2 != a3 )
    return W32AttachToSessionAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881_(a2);
  v5 = 0;
  if ( PsGetCurrentProcessWin32Process(a1)
    || (MaxSessionCount = W32GetMaxSessionCount(), (unsigned int)W32GetCurrentWin32kSessionId(v7) < MaxSessionCount)
    && W32GetSessionState(v9, v8) )
  {
    InputCoreProviderCallbackWorker(v4, v3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
