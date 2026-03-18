/*
 * XREFs of EtwWriteTransfer @ 0x1400EFF50
 * Callers:
 *     _TlgWrite @ 0x1400EFEB0 (_TlgWrite.c)
 *     IoReuseIrp @ 0x14010B380 (IoReuseIrp.c)
 *     IoTransferActivityId @ 0x140133EEC (IoTransferActivityId.c)
 *     IopInitActivityIdIrp @ 0x1401F2680 (IopInitActivityIdIrp.c)
 *     PsDispatchIumService @ 0x140244710 (PsDispatchIumService.c)
 * Callees:
 *     EtwWriteEx @ 0x140014D70 (EtwWriteEx.c)
 */

NTSTATUS __stdcall EtwWriteTransfer(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        LPCGUID ActivityId,
        LPCGUID RelatedActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  return EtwWriteEx(RegHandle, EventDescriptor, 0LL, 0, ActivityId, RelatedActivityId, UserDataCount, UserData);
}
