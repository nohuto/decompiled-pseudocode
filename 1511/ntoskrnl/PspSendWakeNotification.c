/*
 * XREFs of PspSendWakeNotification @ 0x1403EC9F4
 * Callers:
 *     PspChargeJobWakeCounter @ 0x1403EB4DC (PspChargeJobWakeCounter.c)
 *     PspDispatchWakeNotification @ 0x1403ECE08 (PspDispatchWakeNotification.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     PspRequestDeferredJobNotification @ 0x1400FF078 (PspRequestDeferredJobNotification.c)
 *     EtwTraceWakeEvent @ 0x140661254 (EtwTraceWakeEvent.c)
 */

char __fastcall PspSendWakeNotification(PVOID Object, unsigned int a2, _DWORD *a3, unsigned __int64 a4, char a5)
{
  if ( (((1 << a2) & a3[1]) == 0 || a4)
    && ((*a3 & (1 << a2)) == 0 || (a5 & 2) == 0 || a4 != 1 && (a4 <= 1 || (a5 & 1) == 0)) )
  {
    return 0;
  }
  ObfReferenceObject(Object);
  if ( (xmmword_140382290 & 0x400) != 0 && (a5 & 4) != 0 && a4 == 1 )
    EtwTraceWakeEvent(Object, a2);
  if ( !PspRequestDeferredJobNotification((signed __int64)Object, 0x2000u) )
    ObfDereferenceObject(Object);
  return 1;
}
