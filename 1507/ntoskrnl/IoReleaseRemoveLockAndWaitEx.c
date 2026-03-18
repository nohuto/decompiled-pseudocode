/*
 * XREFs of IoReleaseRemoveLockAndWaitEx @ 0x1401FA0BC
 * Callers:
 *     PopFxAcpiUnregisterDevice @ 0x140243104 (PopFxAcpiUnregisterDevice.c)
 *     PopFxUnregisterDevice @ 0x1406B4870 (PopFxUnregisterDevice.c)
 *     VerifierIoReleaseRemoveLockAndWaitEx @ 0x1407434F4 (VerifierIoReleaseRemoveLockAndWaitEx.c)
 *     ViFilterDispatchPnp @ 0x1407527DC (ViFilterDispatchPnp.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     VfRemLockReportBadReleaseAndWaitTag @ 0x140743654 (VfRemLockReportBadReleaseAndWaitTag.c)
 */

void __stdcall IoReleaseRemoveLockAndWaitEx(PIO_REMOVE_LOCK RemoveLock, PVOID Tag, ULONG RemlockSize)
{
  struct _LIST_ENTRY *Blink; // r8

  RemoveLock->Common.Removed = 1;
  _InterlockedDecrement(&RemoveLock->Common.IoCount);
  if ( _InterlockedExchangeAdd(&RemoveLock->Common.IoCount, 0xFFFFFFFF) > 1 )
    KeWaitForSingleObject(&RemoveLock->Common.RemoveEvent, Executive, 0, 0, 0LL);
  if ( RemlockSize == 120
    && _InterlockedDecrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead) < 0 )
  {
    Blink = RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink->Blink;
    if ( Tag != Blink
      && ((MmVerifierData & 0x800) == 0
       || !(unsigned int)VfRemLockReportBadReleaseAndWaitTag((int)RemoveLock, (int)Tag, (ULONG_PTR)Blink)) )
    {
      _InterlockedIncrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead);
    }
    ExFreePoolWithTag(RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink, 0);
    RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)MmBadPointer;
  }
}
