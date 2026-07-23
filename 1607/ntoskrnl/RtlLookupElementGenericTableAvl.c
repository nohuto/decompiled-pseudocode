/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x1400C19B0
 * Callers:
 *     PiSwFindBusRelations @ 0x1403F0978 (PiSwFindBusRelations.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1403F38F8 (PnpDeviceObjectFromDeviceInstance.c)
 *     PiSwFindSwDevice @ 0x1404867FC (PiSwFindSwDevice.c)
 *     PiDqQueryApplyObjectEvent @ 0x14048C498 (PiDqQueryApplyObjectEvent.c)
 *     PiDcHandleDeviceEvent @ 0x1404C2EFC (PiDcHandleDeviceEvent.c)
 *     PiDmGetObject @ 0x1404E1F90 (PiDmGetObject.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404E769C (PiPnpRtlObjectEventWorker.c)
 *     PiDmLookupObject @ 0x1404E9190 (PiDmLookupObject.c)
 *     PopPowerRequestFindEntryById @ 0x140503708 (PopPowerRequestFindEntryById.c)
 *     PopSystemRequiredCallback @ 0x140503728 (PopSystemRequiredCallback.c)
 *     PopPowerRequestDeleteEntryById @ 0x140503854 (PopPowerRequestDeleteEntryById.c)
 *     PopExecutionRequiredPowerRequest @ 0x1405039D8 (PopExecutionRequiredPowerRequest.c)
 *     PiUpdateDriverDBCache @ 0x140515734 (PiUpdateDriverDBCache.c)
 *     PiLookupInDDBCache @ 0x140515C98 (PiLookupInDDBCache.c)
 *     IopCleanupFileObjectIosbRange @ 0x140621240 (IopCleanupFileObjectIosbRange.c)
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
