/*
 * XREFs of EtwWriteTransfer @ 0x14000A1B0
 * Callers:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     _TlgWriteAgg @ 0x14008517C (_TlgWriteAgg.c)
 *     FlushEventEntryList @ 0x1400AD6F0 (FlushEventEntryList.c)
 *     IoReuseIrp @ 0x1400CF080 (IoReuseIrp.c)
 *     IoTransferActivityId @ 0x14011233C (IoTransferActivityId.c)
 *     IopInitActivityIdIrp @ 0x1401C4E8C (IopInitActivityIdIrp.c)
 *     PsDispatchIumService @ 0x14020FA50 (PsDispatchIumService.c)
 * Callees:
 *     EtwWriteEx @ 0x140012EE0 (EtwWriteEx.c)
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
