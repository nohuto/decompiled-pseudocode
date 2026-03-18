/*
 * XREFs of IoSetIoCompletionEx @ 0x1400C6954
 * Callers:
 *     ExpShutdownWorkerFactory @ 0x1400C5128 (ExpShutdownWorkerFactory.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1400C5340 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     NtSetIoCompletionEx @ 0x1403B4BD4 (NtSetIoCompletionEx.c)
 *     PspSendReliableJobNotification @ 0x140487C50 (PspSendReliableJobNotification.c)
 *     PspNotificationPacketCallback @ 0x1404C2BD8 (PspNotificationPacketCallback.c)
 * Callees:
 *     IoSetIoCompletionEx2 @ 0x140093370 (IoSetIoCompletionEx2.c)
 */

__int64 __fastcall IoSetIoCompletionEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7)
{
  return IoSetIoCompletionEx2(a1, a2, a3, a4, a5, a6, a7, 0);
}
