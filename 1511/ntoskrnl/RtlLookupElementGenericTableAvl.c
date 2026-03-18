/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x14008FDF0
 * Callers:
 *     PiUpdateDriverDBCache @ 0x1403B6B8C (PiUpdateDriverDBCache.c)
 *     PiLookupInDDBCache @ 0x1403B90C8 (PiLookupInDDBCache.c)
 *     PiDmGetObject @ 0x14043D410 (PiDmGetObject.c)
 *     PopPowerRequestDeleteEntryById @ 0x140455D50 (PopPowerRequestDeleteEntryById.c)
 *     PopPowerRequestFindEntryById @ 0x140455DC4 (PopPowerRequestFindEntryById.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x140458C7C (PnpDeviceObjectFromDeviceInstance.c)
 *     PiPnpRtlObjectEventWorker @ 0x14045A4D8 (PiPnpRtlObjectEventWorker.c)
 *     PiDqQueryApplyObjectEvent @ 0x14045EA20 (PiDqQueryApplyObjectEvent.c)
 *     PiSwFindBusRelations @ 0x140496770 (PiSwFindBusRelations.c)
 *     PiSwFindSwDevice @ 0x1404968E4 (PiSwFindSwDevice.c)
 *     PiDcHandleDeviceEvent @ 0x140496FCC (PiDcHandleDeviceEvent.c)
 *     PiDmLookupObject @ 0x1404B084C (PiDmLookupObject.c)
 *     PopAoacExecutionRequiredPowerRequest @ 0x1404CFCC8 (PopAoacExecutionRequiredPowerRequest.c)
 *     IopCleanupFileObjectIosbRange @ 0x1405F7484 (IopCleanupFileObjectIosbRange.c)
 * Callees:
 *     <none>
 */

PVOID __stdcall RtlLookupElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  _RTL_BALANCED_LINKS *RightChild; // rbx
  _RTL_GENERIC_COMPARE_RESULTS v5; // eax

  if ( !Table->NumberGenericTableElements )
    return 0LL;
  RightChild = Table->BalancedRoot.RightChild;
  while ( 1 )
  {
    v5 = Table->CompareRoutine(Table, Buffer, &RightChild[1]);
    if ( v5 == GenericLessThan )
    {
      RightChild = RightChild->LeftChild;
      goto LABEL_6;
    }
    if ( v5 != GenericGreaterThan )
      return &RightChild[1];
    RightChild = RightChild->RightChild;
LABEL_6:
    if ( !RightChild )
      return 0LL;
  }
}
