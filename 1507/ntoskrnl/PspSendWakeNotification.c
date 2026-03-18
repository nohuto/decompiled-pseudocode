/*
 * XREFs of PspSendWakeNotification @ 0x140417AA0
 * Callers:
 *     PspAllocateAndQueryNotificationChannel @ 0x1404156FC (PspAllocateAndQueryNotificationChannel.c)
 *     PspFreezeJobTree @ 0x140417490 (PspFreezeJobTree.c)
 *     PspChargeJobWakeCounter @ 0x140417810 (PspChargeJobWakeCounter.c)
 * Callees:
 *     PspRequestDeferredJobNotification @ 0x1400086CC (PspRequestDeferredJobNotification.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     EtwTraceWakeEvent @ 0x1406E428C (EtwTraceWakeEvent.c)
 */

char __fastcall PspSendWakeNotification(PVOID Object, unsigned int a2, _DWORD *a3, unsigned __int64 a4, char a5)
{
  if ( (((1 << a2) & a3[1]) == 0 || a4)
    && ((*a3 & (1 << a2)) == 0 || (a5 & 2) == 0 || a4 != 1 && (a4 <= 1 || (a5 & 1) == 0)) )
  {
    return 0;
  }
  ObfReferenceObject(Object);
  if ( (xmmword_1403D1290 & 0x400) != 0 && (a5 & 4) != 0 && a4 == 1 )
    EtwTraceWakeEvent(Object, a2);
  if ( !PspRequestDeferredJobNotification((signed __int64)Object, 0x2000u) )
    ObfDereferenceObject(Object);
  return 1;
}
