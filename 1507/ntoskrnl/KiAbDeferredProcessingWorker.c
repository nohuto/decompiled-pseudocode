/*
 * XREFs of KiAbDeferredProcessingWorker @ 0x1400F38BC
 * Callers:
 *     <none>
 * Callees:
 *     KiDeferredReadyThread @ 0x14004CE40 (KiDeferredReadyThread.c)
 *     KiAbProcessLocksWorker @ 0x1400F3920 (KiAbProcessLocksWorker.c)
 */

void __fastcall KiAbDeferredProcessingWorker(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        _QWORD *SystemArgument1,
        PVOID SystemArgument2)
{
  _QWORD *v5; // rbx
  _BYTE *v6; // rdx
  _QWORD *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  KiAbProcessLocksWorker(SystemArgument1 + 3207, SystemArgument1 + 3206, &v7, 1LL);
  SystemArgument1[3212] = 0LL;
  v5 = v7;
  while ( v5 )
  {
    v6 = v5 - 27;
    v5 = (_QWORD *)*v5;
    KiDeferredReadyThread((__int64)SystemArgument1, v6);
  }
}
