/*
 * XREFs of IopVerifierExAllocatePool_1 @ 0x1400C9F18
 * Callers:
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall IopVerifierExAllocatePool_1(POOL_TYPE a1, SIZE_T a2)
{
  if ( ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithTagPriority(a1, a2, 0x20206F49u, (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    return ExAllocatePoolWithTag(a1, a2, 0x20206F49u);
}
