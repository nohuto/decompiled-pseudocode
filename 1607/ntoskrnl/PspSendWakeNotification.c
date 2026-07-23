/*
 * XREFs of PspSendWakeNotification @ 0x1404D524C
 * Callers:
 *     PspChargeJobWakeCounter @ 0x140467B60 (PspChargeJobWakeCounter.c)
 *     PspDispatchWakeNotification @ 0x1404D51E0 (PspDispatchWakeNotification.c)
 * Callees:
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PspRequestDeferredJobNotification @ 0x1400B50D4 (PspRequestDeferredJobNotification.c)
 *     EtwTraceWakeEvent @ 0x1406A209C (EtwTraceWakeEvent.c)
 */

char __fastcall PspSendWakeNotification(PVOID Object, unsigned int a2, _DWORD *a3, unsigned __int64 a4, char a5)
{
  if ( (((1 << a2) & a3[1]) == 0 || a4)
    && ((*a3 & (1 << a2)) == 0 || (a5 & 2) == 0 || a4 != 1 && (a4 <= 1 || (a5 & 1) == 0)) )
  {
    return 0;
  }
  ObfReferenceObject(Object);
  if ( (xmmword_1403AA2D0 & 0x400) != 0 && (a5 & 4) != 0 && a4 == 1 )
    EtwTraceWakeEvent(Object, a2);
  if ( !PspRequestDeferredJobNotification((signed __int64)Object, 0x2000u) )
    ObfDereferenceObject(Object);
  return 1;
}
