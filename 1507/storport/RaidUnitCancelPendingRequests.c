/*
 * XREFs of RaidUnitCancelPendingRequests @ 0x1C00326C8
 * Callers:
 *     RaUnitSurpriseRemovalIrp @ 0x1C0054520 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     RaidRemoveIoQueue @ 0x1C0026BC0 (RaidRemoveIoQueue.c)
 *     RaidCancelIrp @ 0x1C002FF58 (RaidCancelIrp.c)
 */

__int64 *__fastcall RaidUnitCancelPendingRequests(__int64 a1)
{
  __int64 v2; // rdi
  __int64 *result; // rax

  v2 = a1 + 384;
  while ( 1 )
  {
    result = RaidRemoveIoQueue(v2);
    if ( !result )
      break;
    RaidCancelIrp(a1, 8, (IRP *)result);
  }
  return result;
}
