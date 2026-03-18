/*
 * XREFs of PopSessionDisconnected @ 0x140534318
 * Callers:
 *     PopSessionConnectionChange @ 0x1405460E8 (PopSessionConnectionChange.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     PopDiagTraceSessionStates @ 0x1404F06D0 (PopDiagTraceSessionStates.c)
 *     PopSetSessionUserStatus @ 0x14052E674 (PopSetSessionUserStatus.c)
 *     PopSetSessionDisplayStatus @ 0x140546224 (PopSetSessionDisplayStatus.c)
 */

__int64 __fastcall PopSessionDisconnected(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISCONNECTED, a1, 0);
  if ( PopConsoleContext == a1 && a1 != -1 )
  {
    memset(&PopConsoleContext, 0, 0x28uLL);
    PopConsoleContext = -1;
    dword_1403023E0 = 3;
  }
  PopSetSessionDisplayStatus(a1, 0LL, 0LL);
  result = PopSetSessionUserStatus(a1, 2u);
  a2[1] = 0;
  *a2 = 0;
  return result;
}
