/*
 * XREFs of Endpoint_HaltedCompletionCode @ 0x1C000188C
 * Callers:
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000ABB0 (Bulk_ProcessTransferEventWithED1.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C000D930 (Control_ProcessTransferEventWithED1.c)
 *     Endpoint_TransferEventHandler @ 0x1C000EED0 (Endpoint_TransferEventHandler.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C0029B08 (Control_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C002E6F4 (Bulk_ProcessTransferEventWithED0.c)
 * Callees:
 *     <none>
 */

bool __fastcall Endpoint_HaltedCompletionCode(unsigned int a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx
  bool result; // al

  result = 0;
  if ( a1 <= 0x24 )
  {
    v1 = a1;
    v2 = 0x150000045CLL;
    if ( _bittest64(&v2, v1) )
      return 1;
  }
  return result;
}
