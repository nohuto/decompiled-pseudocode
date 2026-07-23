/*
 * XREFs of TtmpOpenTerminalHandle @ 0x140678150
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x140086D74 (PsGetProcessId.c)
 *     TtmiLogTerminalHandleOpened @ 0x14067C710 (TtmiLogTerminalHandleOpened.c)
 */

__int64 __fastcall TtmpOpenTerminalHandle(unsigned int a1, char a2, struct _KPROCESS *a3, __int64 a4)
{
  HANDLE ProcessId; // r8

  ProcessId = 0LL;
  if ( !a2 )
    a3 = PsInitialSystemProcess;
  if ( a3 )
    ProcessId = PsGetProcessId(a3);
  TtmiLogTerminalHandleOpened(**(unsigned int **)(a4 + 16), *(unsigned int *)(a4 + 28), ProcessId, a1);
  return 0LL;
}
