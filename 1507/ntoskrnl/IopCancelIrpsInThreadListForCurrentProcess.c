/*
 * XREFs of IopCancelIrpsInThreadListForCurrentProcess @ 0x14042027C
 * Callers:
 *     IopRevokeFileObjectForProcess @ 0x1401F7980 (IopRevokeFileObjectForProcess.c)
 *     NtCancelIoFileEx @ 0x1404A83A4 (NtCancelIoFileEx.c)
 * Callees:
 *     IopCancelApcRequired @ 0x14000C0EC (IopCancelApcRequired.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PsGetNextProcessThread @ 0x140420350 (PsGetNextProcessThread.c)
 *     IopCancelIrpsInThreadList @ 0x1404A8064 (IopCancelIrpsInThreadList.c)
 */

__int64 __fastcall IopCancelIrpsInThreadListForCurrentProcess(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  _KPROCESS *Process; // rsi
  __int64 i; // rdx
  __int64 NextProcessThread; // rax
  __int64 v8; // rbx
  _QWORD v10[18]; // [rsp+20h] [rbp-98h] BYREF

  v4 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  memset(v10, 0, 0x88uLL);
  v10[11] = a1;
  v10[12] = a2;
  LOBYTE(v10[16]) = 0;
  KeInitializeEvent((PRKEVENT)&v10[13], NotificationEvent, 0);
  for ( i = 0LL; ; i = v8 )
  {
    NextProcessThread = PsGetNextProcessThread(Process, i);
    v8 = NextProcessThread;
    if ( !NextProcessThread )
      break;
    if ( (unsigned int)IopCancelApcRequired(NextProcessThread, a1, a2) )
      v4 |= IopCancelIrpsInThreadList(v8, v10);
  }
  return v4;
}
