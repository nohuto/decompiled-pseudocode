/*
 * XREFs of EtwWriteTransfer @ 0x14009250C
 * Callers:
 *     _TlgWrite @ 0x140092474 (_TlgWrite.c)
 *     IoReuseIrp @ 0x140100350 (IoReuseIrp.c)
 *     IoTransferActivityId @ 0x140105BC4 (IoTransferActivityId.c)
 *     IopInitActivityIdIrp @ 0x1401B73A0 (IopInitActivityIdIrp.c)
 *     PsDispatchIumService @ 0x1401F5B10 (PsDispatchIumService.c)
 * Callees:
 *     EtwWriteEx @ 0x14009DF00 (EtwWriteEx.c)
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
