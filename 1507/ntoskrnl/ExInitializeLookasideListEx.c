/*
 * XREFs of ExInitializeLookasideListEx @ 0x1400D9D0C
 * Callers:
 *     <none>
 * Callees:
 *     ExInitializeLookasideListExInternal @ 0x1400D9D50 (ExInitializeLookasideListExInternal.c)
 */

NTSTATUS __stdcall ExInitializeLookasideListEx(
        PLOOKASIDE_LIST_EX Lookaside,
        PALLOCATE_FUNCTION_EX Allocate,
        PFREE_FUNCTION_EX Free,
        POOL_TYPE PoolType,
        ULONG Flags,
        SIZE_T Size,
        ULONG Tag,
        USHORT Depth)
{
  return ExInitializeLookasideListExInternal(&Lookaside->L.ListHead, Flags, Size, Tag, Depth, 0);
}
