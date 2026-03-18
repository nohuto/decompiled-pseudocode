/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x1400C3B20
 * Callers:
 *     PiSwFindBusRelations @ 0x1403F1AB4 (PiSwFindBusRelations.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1403F4A34 (PnpDeviceObjectFromDeviceInstance.c)
 *     PiDqQueryApplyObjectEvent @ 0x14048BF34 (PiDqQueryApplyObjectEvent.c)
 *     PiUpdateDriverDBCache @ 0x14049D278 (PiUpdateDriverDBCache.c)
 *     PiLookupInDDBCache @ 0x14049D88C (PiLookupInDDBCache.c)
 *     PiSwFindSwDevice @ 0x1404C63C0 (PiSwFindSwDevice.c)
 *     PiDcHandleDeviceEvent @ 0x1404DF8F8 (PiDcHandleDeviceEvent.c)
 *     PiDmGetObject @ 0x1404FF000 (PiDmGetObject.c)
 *     PiPnpRtlObjectEventWorker @ 0x14050470C (PiPnpRtlObjectEventWorker.c)
 *     PiDmLookupObject @ 0x140506200 (PiDmLookupObject.c)
 *     PopPowerRequestFindEntryById @ 0x1405206A0 (PopPowerRequestFindEntryById.c)
 *     PopSystemRequiredCallback @ 0x1405206C0 (PopSystemRequiredCallback.c)
 *     PopPowerRequestDeleteEntryById @ 0x1405207EC (PopPowerRequestDeleteEntryById.c)
 *     PopExecutionRequiredPowerRequest @ 0x140520970 (PopExecutionRequiredPowerRequest.c)
 *     IopCleanupFileObjectIosbRange @ 0x14062118C (IopCleanupFileObjectIosbRange.c)
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
