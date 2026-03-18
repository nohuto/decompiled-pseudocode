/*
 * XREFs of Endpoint_HaltedCompletionCode @ 0x1C00186B4
 * Callers:
 *     Endpoint_TransferEventHandler @ 0x1C001A8E4 (Endpoint_TransferEventHandler.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C0021760 (Control_ProcessTransferEventWithED0.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C0021A38 (Control_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C002ABC0 (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C002AE7C (Bulk_ProcessTransferEventWithED1.c)
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
