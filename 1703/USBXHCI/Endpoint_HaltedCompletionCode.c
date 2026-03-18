/*
 * XREFs of Endpoint_HaltedCompletionCode @ 0x1C0001908
 * Callers:
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000BA50 (Bulk_ProcessTransferEventWithED1.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C000E6A0 (Control_ProcessTransferEventWithED1.c)
 *     Endpoint_TransferEventHandler @ 0x1C000FB10 (Endpoint_TransferEventHandler.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C00260EC (Control_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C002B258 (Bulk_ProcessTransferEventWithED0.c)
 * Callees:
 *     <none>
 */

bool __fastcall Endpoint_HaltedCompletionCode(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = 1;
  if ( (*(_QWORD *)(*(_QWORD *)a1 + 232LL) & 0x4000000000000000LL) == 0 || a2 != 199 )
  {
    if ( a2 > 0x24 )
      return 0;
    v2 = 0x150000045CLL;
    if ( !_bittest64(&v2, a2) )
      return 0;
  }
  return result;
}
