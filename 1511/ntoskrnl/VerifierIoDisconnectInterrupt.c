/*
 * XREFs of VerifierIoDisconnectInterrupt @ 0x1406B9500
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IoDisconnectInterrupt @ 0x1404F405C (IoDisconnectInterrupt.c)
 */

void __fastcall VerifierIoDisconnectInterrupt(struct _KINTERRUPT *a1)
{
  void *ServiceContext; // rbx

  ServiceContext = 0LL;
  if ( ViCtxInitializedIsrStateBlocks )
    ServiceContext = a1->ServiceContext;
  pXdvIoDisconnectInterrupt(a1);
  if ( ServiceContext )
    ExFreePoolWithTag(ServiceContext, 0);
}
