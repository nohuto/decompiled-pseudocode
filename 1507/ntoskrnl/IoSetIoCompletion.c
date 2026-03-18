/*
 * XREFs of IoSetIoCompletion @ 0x14042D0C8
 * Callers:
 *     PspSendJobNotification @ 0x14013A2C4 (PspSendJobNotification.c)
 *     NtSetIoCompletion @ 0x14042D030 (NtSetIoCompletion.c)
 *     NtLockFile @ 0x1404A4FE4 (NtLockFile.c)
 * Callees:
 *     IoSetIoCompletionEx2 @ 0x140013590 (IoSetIoCompletionEx2.c)
 */

__int64 __fastcall IoSetIoCompletion(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, unsigned __int8 a6)
{
  return IoSetIoCompletionEx2(a1, a2, a3, a4, a5, a6, 0LL, 0);
}
