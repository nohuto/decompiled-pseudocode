/*
 * XREFs of VerifierIoDisconnectInterrupt @ 0x140739AF0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IoDisconnectInterrupt @ 0x1405682D8 (IoDisconnectInterrupt.c)
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
