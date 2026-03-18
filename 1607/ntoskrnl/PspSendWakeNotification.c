/*
 * XREFs of PspSendWakeNotification @ 0x14048A1BC
 * Callers:
 *     PspChargeJobWakeCounter @ 0x140468C90 (PspChargeJobWakeCounter.c)
 *     PspDispatchWakeNotification @ 0x14048A150 (PspDispatchWakeNotification.c)
 * Callees:
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     PspRequestDeferredJobNotification @ 0x140085174 (PspRequestDeferredJobNotification.c)
 *     EtwTraceWakeEvent @ 0x1406A1F64 (EtwTraceWakeEvent.c)
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
