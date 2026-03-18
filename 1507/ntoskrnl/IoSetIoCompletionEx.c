/*
 * XREFs of IoSetIoCompletionEx @ 0x14012CB98
 * Callers:
 *     ExpShutdownWorkerFactory @ 0x14002DA50 (ExpShutdownWorkerFactory.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x14009C480 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     PspSendReliableJobNotification @ 0x140553D20 (PspSendReliableJobNotification.c)
 *     PspNotificationPacketCallback @ 0x14055923C (PspNotificationPacketCallback.c)
 *     NtSetIoCompletionEx @ 0x140674B2C (NtSetIoCompletionEx.c)
 * Callees:
 *     IoSetIoCompletionEx2 @ 0x140013590 (IoSetIoCompletionEx2.c)
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
