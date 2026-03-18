/*
 * XREFs of Control_EP_TransferEventHandler @ 0x1C0021330
 * Callers:
 *     TR_TransferEventHandler @ 0x1C0020AB0 (TR_TransferEventHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Control_EP_TransferEventHandler(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    return Control_ProcessTransferEventWithED1();
  else
    return Control_ProcessTransferEventWithED0();
}
