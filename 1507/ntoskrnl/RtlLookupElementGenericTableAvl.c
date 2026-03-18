/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x140017F60
 * Callers:
 *     PiDmGetObject @ 0x140439850 (PiDmGetObject.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404DFCE4 (PiPnpRtlObjectEventWorker.c)
 *     PiDmLookupObject @ 0x1404E05E4 (PiDmLookupObject.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1404E1F9C (PnpDeviceObjectFromDeviceInstance.c)
 *     PopPowerRequestDeleteEntryById @ 0x1404E61A8 (PopPowerRequestDeleteEntryById.c)
 *     PopPowerRequestFindEntryById @ 0x1404E63F0 (PopPowerRequestFindEntryById.c)
 *     PiDcHandleDeviceEvent @ 0x140537188 (PiDcHandleDeviceEvent.c)
 *     PiSwFindSwDevice @ 0x140538814 (PiSwFindSwDevice.c)
 *     PiSwFindBusRelations @ 0x140538A4C (PiSwFindBusRelations.c)
 *     PiDqQueryApplyObjectEvent @ 0x14053CF2C (PiDqQueryApplyObjectEvent.c)
 *     PopAoacExecutionRequiredPowerRequest @ 0x1405569F0 (PopAoacExecutionRequiredPowerRequest.c)
 *     PiLookupInDDBCache @ 0x140572BDC (PiLookupInDDBCache.c)
 *     PiUpdateDriverDBCache @ 0x1405AA750 (PiUpdateDriverDBCache.c)
 *     IopCleanupFileObjectIosbRange @ 0x14067127C (IopCleanupFileObjectIosbRange.c)
 * Callees:
 *     <none>
 */

PVOID __stdcall RtlLookupElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  _RTL_BALANCED_LINKS *RightChild; // rbx
  _RTL_GENERIC_COMPARE_RESULTS v6; // eax

  if ( !Table->NumberGenericTableElements )
    return 0LL;
  RightChild = Table->BalancedRoot.RightChild;
  while ( 1 )
  {
    v6 = Table->CompareRoutine(Table, Buffer, &RightChild[1]);
    if ( v6 == GenericLessThan )
    {
      RightChild = RightChild->LeftChild;
      goto LABEL_7;
    }
    if ( v6 != GenericGreaterThan )
      return &RightChild[1];
    RightChild = RightChild->RightChild;
LABEL_7:
    if ( !RightChild )
      return 0LL;
  }
}
