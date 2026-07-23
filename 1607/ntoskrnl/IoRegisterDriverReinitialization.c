/*
 * XREFs of IoRegisterDriverReinitialization @ 0x140576D04
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IopInterlockedInsertTailList @ 0x140149068 (IopInterlockedInsertTailList.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
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
