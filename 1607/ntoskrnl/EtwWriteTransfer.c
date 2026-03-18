/*
 * XREFs of EtwWriteTransfer @ 0x14000A630
 * Callers:
 *     _TlgWrite @ 0x14000A598 (_TlgWrite.c)
 *     _TlgWriteAgg @ 0x14009EE88 (_TlgWriteAgg.c)
 *     FlushEventEntryList @ 0x1400AF188 (FlushEventEntryList.c)
 *     IoReuseIrp @ 0x1400D11E0 (IoReuseIrp.c)
 *     IoTransferActivityId @ 0x140111DD8 (IoTransferActivityId.c)
 *     IopInitActivityIdIrp @ 0x1401C4FA8 (IopInitActivityIdIrp.c)
 *     PsDispatchIumService @ 0x14020FC24 (PsDispatchIumService.c)
 * Callees:
 *     EtwWriteEx @ 0x140013360 (EtwWriteEx.c)
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
