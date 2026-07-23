/*
 * XREFs of PspWaitOnAllProcessesJobCallback @ 0x1406810C4
 * Callers:
 *     <none>
 * Callees:
 *     PspGetNextJobProcess @ 0x14045703C (PspGetNextJobProcess.c)
 *     PspWaitForUsermodeExit @ 0x14067FEE0 (PspWaitForUsermodeExit.c)
 */

__int64 __fastcall PspWaitOnAllProcessesJobCallback(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rsi
  _KPROCESS *v5; // r9
  _KPROCESS *NextJobProcess; // rax
  _KPROCESS *v7; // rbx
  __int64 v9[5]; // [rsp+20h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  v5 = 0LL;
  while ( 1 )
  {
    NextJobProcess = (_KPROCESS *)PspGetNextJobProcess(a1, (__int64)CurrentThread, v9, v5);
    v7 = NextJobProcess;
    if ( !NextJobProcess )
      break;
    if ( (NextJobProcess[2].ActiveProcessors.Bitmap[0] & 0x10000000000LL) == 0
      && NextJobProcess != KeGetCurrentThread()->ApcState.Process )
    {
      *(_BYTE *)(a2 + 4) |= 2u;
      PspWaitForUsermodeExit((__int64)NextJobProcess);
    }
    v5 = v7;
    a1 = v4;
  }
  return 0LL;
}
