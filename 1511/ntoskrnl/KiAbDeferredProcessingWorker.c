/*
 * XREFs of KiAbDeferredProcessingWorker @ 0x140031F04
 * Callers:
 *     <none>
 * Callees:
 *     KiAbProcessLocksWorker @ 0x140031F4C (KiAbProcessLocksWorker.c)
 *     KiReadyDeferredReadyList @ 0x14007DD80 (KiReadyDeferredReadyList.c)
 */

void __fastcall KiAbDeferredProcessingWorker(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        _QWORD *SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  KiAbProcessLocksWorker(SystemArgument1 + 3207, SystemArgument1 + 3206, &v5, 1LL);
  SystemArgument1[3212] = 0LL;
  KiReadyDeferredReadyList(SystemArgument1, &v5);
}
