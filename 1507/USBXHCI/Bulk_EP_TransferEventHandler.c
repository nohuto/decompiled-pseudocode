/*
 * XREFs of Bulk_EP_TransferEventHandler @ 0x1C002A0F0
 * Callers:
 *     TR_TransferEventHandler @ 0x1C0020AB0 (TR_TransferEventHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Bulk_EP_TransferEventHandler(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    return Bulk_ProcessTransferEventWithED1();
  else
    return Bulk_ProcessTransferEventWithED0();
}
