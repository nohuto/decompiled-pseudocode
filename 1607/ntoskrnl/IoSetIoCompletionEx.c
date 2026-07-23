/*
 * XREFs of IoSetIoCompletionEx @ 0x14007E644
 * Callers:
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1400F6740 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     ExpShutdownWorkerFactory @ 0x1400F74C8 (ExpShutdownWorkerFactory.c)
 *     NtSetIoCompletionEx @ 0x1403E20B0 (NtSetIoCompletionEx.c)
 *     PspSendReliableJobNotification @ 0x140471FDC (PspSendReliableJobNotification.c)
 *     PspNotificationPacketCallback @ 0x1404FF07C (PspNotificationPacketCallback.c)
 * Callees:
 *     IoSetIoCompletionEx2 @ 0x14007DF40 (IoSetIoCompletionEx2.c)
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
