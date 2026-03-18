/*
 * XREFs of IopCancelPendingEject @ 0x1406152E8
 * Callers:
 *     PnpProcessRelation @ 0x14049EE70 (PnpProcessRelation.c)
 * Callees:
 *     IoFreeIrp @ 0x140087080 (IoFreeIrp.c)
 *     IoCancelIrp @ 0x1400C97FC (IoCancelIrp.c)
 */

void __fastcall IopCancelPendingEject(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 72) && !_InterlockedExchange((volatile __int32 *)(a1 + 80), 1) )
  {
    IoCancelIrp(*(PIRP *)(a1 + 72));
    if ( _InterlockedExchange((volatile __int32 *)(a1 + 80), 2) == 3 )
      IoFreeIrp(*(PIRP *)(a1 + 72));
  }
}
