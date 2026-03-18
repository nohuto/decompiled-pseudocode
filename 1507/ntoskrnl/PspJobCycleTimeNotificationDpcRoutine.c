/*
 * XREFs of PspJobCycleTimeNotificationDpcRoutine @ 0x14024457C
 * Callers:
 *     <none>
 * Callees:
 *     PspRequestDeferredJobNotification @ 0x1400086CC (PspRequestDeferredJobNotification.c)
 *     ObReferenceObjectSafeWithTag @ 0x14004FCE0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 */

void __fastcall PspJobCycleTimeNotificationDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( ObReferenceObjectSafeWithTag((__int64)DeferredContext) )
  {
    if ( !PspRequestDeferredJobNotification((signed __int64)DeferredContext, 0x20000u) )
      ObfDereferenceObjectWithTag(DeferredContext, 0x746C6644u);
  }
}
