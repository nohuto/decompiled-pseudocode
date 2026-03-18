/*
 * XREFs of PopSessionConnected @ 0x140582F38
 * Callers:
 *     PopSessionConnectionChange @ 0x140582E9C (PopSessionConnectionChange.c)
 * Callees:
 *     PopDiagTraceSessionStates @ 0x14055DDB8 (PopDiagTraceSessionStates.c)
 *     PopConsoleSessionActiveInput @ 0x1405644F0 (PopConsoleSessionActiveInput.c)
 *     PopRemoteSessionActiveInput @ 0x140564564 (PopRemoteSessionActiveInput.c)
 *     PopSetSessionDisplayStatus @ 0x140582FD8 (PopSetSessionDisplayStatus.c)
 */

__int64 __fastcall PopSessionConnected(unsigned int a1, unsigned __int8 a2, unsigned int *a3)
{
  __int64 v7; // rdx

  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CONNECTED, a1, a2);
  if ( a2 )
  {
    PopConsoleSession = 1;
    PopSetSessionDisplayStatus(a1, 1LL, 0LL);
    PopConsoleContext = a1;
    return PopConsoleSessionActiveInput(
             a1,
             (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
             a3);
  }
  else
  {
    PopSetSessionDisplayStatus(a1, 1LL, 0LL);
    return PopRemoteSessionActiveInput(a1, v7, a3);
  }
}
