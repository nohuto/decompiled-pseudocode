/*
 * XREFs of PopSessionConnected @ 0x1405466C4
 * Callers:
 *     PopSessionConnectionChange @ 0x140546628 (PopSessionConnectionChange.c)
 * Callees:
 *     PopDiagTraceSessionStates @ 0x1404D27C4 (PopDiagTraceSessionStates.c)
 *     PopConsoleSessionActiveInput @ 0x14052E87C (PopConsoleSessionActiveInput.c)
 *     PopRemoteSessionActiveInput @ 0x14052EB54 (PopRemoteSessionActiveInput.c)
 *     PopSetSessionDisplayStatus @ 0x140546764 (PopSetSessionDisplayStatus.c)
 */

__int64 __fastcall PopSessionConnected(unsigned int a1, unsigned __int8 a2, int *a3)
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
