/*
 * XREFs of IopCancelIrpsInThreadListForCurrentProcess @ 0x1405134CC
 * Callers:
 *     IopRevokeFileObjectForProcess @ 0x1401CA16C (IopRevokeFileObjectForProcess.c)
 *     NtCancelIoFileEx @ 0x1404CC738 (NtCancelIoFileEx.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DEA0 (KeInitializeEvent.c)
 *     IopCancelApcRequired @ 0x1400F0044 (IopCancelApcRequired.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     IopCancelIrpsInThreadList @ 0x1404CC8BC (IopCancelIrpsInThreadList.c)
 *     PsGetNextProcessThread @ 0x140510350 (PsGetNextProcessThread.c)
 */

__int64 __fastcall IopCancelIrpsInThreadListForCurrentProcess(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  _KPROCESS *Process; // rsi
  _QWORD *i; // rdx
  _QWORD *NextProcessThread; // rax
  __int64 v8; // rbx
  _QWORD v10[18]; // [rsp+20h] [rbp-98h] BYREF

  v4 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  memset(v10, 0, 0x88uLL);
  v10[11] = a1;
  v10[12] = a2;
  LOBYTE(v10[16]) = 0;
  KeInitializeEvent((PRKEVENT)&v10[13], NotificationEvent, 0);
  for ( i = 0LL; ; i = (_QWORD *)v8 )
  {
    NextProcessThread = PsGetNextProcessThread((__int64)Process, i);
    v8 = (__int64)NextProcessThread;
    if ( !NextProcessThread )
      break;
    if ( (unsigned int)IopCancelApcRequired((__int64)NextProcessThread, a1, a2) )
      v4 |= IopCancelIrpsInThreadList(v8, (__int64)v10);
  }
  return v4;
}
