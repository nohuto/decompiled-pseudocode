/*
 * XREFs of IoSetIoCompletion @ 0x1404DBF04
 * Callers:
 *     PspSendJobNotification @ 0x1400AC040 (PspSendJobNotification.c)
 *     NtLockFile @ 0x14046AE5C (NtLockFile.c)
 * Callees:
 *     IoSetIoCompletionEx2 @ 0x14007DEC0 (IoSetIoCompletionEx2.c)
 */

__int64 __fastcall IoSetIoCompletion(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, unsigned __int8 a6)
{
  return IoSetIoCompletionEx2(a1, a2, a3, a4, a5, a6, 0LL, 0);
}
