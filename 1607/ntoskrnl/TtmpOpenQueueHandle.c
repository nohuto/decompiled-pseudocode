/*
 * XREFs of TtmpOpenQueueHandle @ 0x14067A460
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x140086D74 (PsGetProcessId.c)
 *     TtmiLogQueueHandleOpened @ 0x14067B718 (TtmiLogQueueHandleOpened.c)
 */

__int64 __fastcall TtmpOpenQueueHandle(unsigned int a1, char a2, struct _KPROCESS *a3, __int64 a4)
{
  HANDLE ProcessId; // r10

  ProcessId = 0LL;
  if ( !a2 )
    a3 = PsInitialSystemProcess;
  if ( a3 )
    ProcessId = PsGetProcessId(a3);
  TtmiLogQueueHandleOpened(a4, ProcessId, a1);
  return 0LL;
}
