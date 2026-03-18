/*
 * XREFs of IopCancelPendingEject @ 0x140694060
 * Callers:
 *     PnpProcessRelation @ 0x140535938 (PnpProcessRelation.c)
 * Callees:
 *     IoFreeIrp @ 0x14004BC70 (IoFreeIrp.c)
 *     IoCancelIrp @ 0x140073FAC (IoCancelIrp.c)
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
