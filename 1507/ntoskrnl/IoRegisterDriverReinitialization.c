/*
 * XREFs of IoRegisterDriverReinitialization @ 0x1405B93CC
 * Callers:
 *     VerifierIoRegisterDriverReinitialization @ 0x140741FE0 (VerifierIoRegisterDriverReinitialization.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     IopInterlockedInsertTailList @ 0x14016D390 (IopInterlockedInsertTailList.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

void __stdcall IoRegisterDriverReinitialization(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_REINITIALIZE DriverReinitializationRoutine,
        PVOID Context)
{
  _QWORD *PoolWithTag; // rax

  ObfReferenceObject(DriverObject);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x69526F49u);
  if ( PoolWithTag )
  {
    DriverObject->Flags |= 8u;
    PoolWithTag[2] = DriverObject;
    PoolWithTag[3] = DriverReinitializationRoutine;
    PoolWithTag[4] = Context;
    IopInterlockedInsertTailList((__int64)&IopDriverReinitializeQueueHead, PoolWithTag);
  }
  else
  {
    ObfDereferenceObject(DriverObject);
  }
}
