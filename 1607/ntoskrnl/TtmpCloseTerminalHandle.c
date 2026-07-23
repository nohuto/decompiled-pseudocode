/*
 * XREFs of TtmpCloseTerminalHandle @ 0x140678014
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     PsGetProcessId @ 0x140086D74 (PsGetProcessId.c)
 *     TtmpSetTerminalPendingCleanup @ 0x140678268 (TtmpSetTerminalPendingCleanup.c)
 *     TtmpAcquireSessionLock @ 0x140678F44 (TtmpAcquireSessionLock.c)
 */

__int64 __fastcall TtmpCloseTerminalHandle(PEPROCESS Process, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r14d
  unsigned int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  HANDLE ProcessId; // rax

  v5 = *(_DWORD *)(a2 + 28);
  v8 = **(_DWORD **)(a2 + 16);
  if ( a4 == 1 )
  {
    TtmpAcquireSessionLock();
    TtmpSetTerminalPendingCleanup(*(_QWORD *)(a2 + 16), a2);
    ExReleaseResourceLite(&TtmpSessionLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v9, v10, v11);
  }
  ProcessId = PsGetProcessId(Process);
  return TtmiLogTerminalHandleClosed(v8, v5, ProcessId, a4);
}
