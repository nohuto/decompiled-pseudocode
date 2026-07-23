/*
 * XREFs of TpAllocPool @ 0x180072E20
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x18003EF8C (TppPoolpReferenceGlobalPool.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpAllocPool(PTP_POOL *PoolReturn, PVOID Reserved)
{
  if ( PoolReturn && !Reserved && !NtCurrentPeb()->Ldr->ShutdownInProgress )
    return TpAllocPoolInternal(PoolReturn, 0LL);
  TppRaiseInvalidParameter(PoolReturn);
  return -1073741811;
}
