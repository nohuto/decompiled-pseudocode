/*
 * XREFs of Isoch_EP_TransferEventHandler @ 0x1C000ABA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Isoch_EP_TransferEventHandler(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    return Isoch_ProcessTransferEventWithED1();
  else
    return Isoch_ProcessTransferEventWithED0();
}
