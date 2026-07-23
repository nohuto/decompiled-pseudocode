/*
 * XREFs of PopSessionDisconnected @ 0x140534858
 * Callers:
 *     PopSessionConnectionChange @ 0x140546628 (PopSessionConnectionChange.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     PopDiagTraceSessionStates @ 0x1404D27C4 (PopDiagTraceSessionStates.c)
 *     PopSetSessionUserStatus @ 0x14052EBB4 (PopSetSessionUserStatus.c)
 *     PopSetSessionDisplayStatus @ 0x140546764 (PopSetSessionDisplayStatus.c)
 */

__int64 __fastcall PopSessionDisconnected(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISCONNECTED, a1, 0);
  if ( PopConsoleContext == a1 && a1 != -1 )
  {
    memset(&PopConsoleContext, 0, 0x28uLL);
    PopConsoleContext = -1;
    dword_140302400 = 3;
  }
  PopSetSessionDisplayStatus(a1, 0LL, 0LL);
  result = PopSetSessionUserStatus(a1, 2u);
  a2[1] = 0;
  *a2 = 0;
  return result;
}
