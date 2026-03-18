/*
 * XREFs of Control_EP_TransferEventHandler @ 0x1C0029800
 * Callers:
 *     TR_TransferEventHandler @ 0x1C0001974 (TR_TransferEventHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Control_EP_TransferEventHandler(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    return Control_ProcessTransferEventWithED1((__int64 *)a1, a2);
  else
    return Control_ProcessTransferEventWithED0();
}
