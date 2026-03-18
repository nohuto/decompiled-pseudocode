/*
 * XREFs of IoRegisterBootDriverReinitialization @ 0x140543320
 * Callers:
 *     VerifierIoRegisterBootDriverReinitialization @ 0x1406C07DC (VerifierIoRegisterBootDriverReinitialization.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     IopInterlockedInsertTailList @ 0x14013FBA8 (IopInterlockedInsertTailList.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

void __stdcall IoRegisterBootDriverReinitialization(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_REINITIALIZE DriverReinitializationRoutine,
        PVOID Context)
{
  _QWORD *PoolWithTag; // rax

  if ( IopBootDriverReinitCompleted != 1 )
  {
    ObfReferenceObject(DriverObject);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x69526F49u);
    if ( PoolWithTag )
    {
      DriverObject->Flags |= 0x20u;
      PoolWithTag[2] = DriverObject;
      PoolWithTag[3] = DriverReinitializationRoutine;
      PoolWithTag[4] = Context;
      IopInterlockedInsertTailList((__int64)&IopBootDriverReinitializeQueueHead, PoolWithTag);
    }
    else
    {
      ObfDereferenceObject(DriverObject);
    }
  }
}
