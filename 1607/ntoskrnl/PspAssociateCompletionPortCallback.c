/*
 * XREFs of PspAssociateCompletionPortCallback @ 0x1406804B8
 * Callers:
 *     <none>
 * Callees:
 *     RtlInterlockedSetClearBits @ 0x140076D48 (RtlInterlockedSetClearBits.c)
 *     PspSendJobNotification @ 0x1400AA5A8 (PspSendJobNotification.c)
 */

__int64 __fastcall PspAssociateCompletionPortCallback(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v3; // rcx
  __int64 v4; // r11

  v3 = (volatile signed __int32 *)(a1 + 768);
  if ( (*v3 & 1) == 0 )
  {
    RtlInterlockedSetClearBits(v3, 4);
    PspSendJobNotification(a2, 6LL, *(_QWORD *)(v4 + 744), 0);
  }
  return 0LL;
}
