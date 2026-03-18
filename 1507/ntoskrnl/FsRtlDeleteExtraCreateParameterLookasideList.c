/*
 * XREFs of FsRtlDeleteExtraCreateParameterLookasideList @ 0x14066BE74
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall FsRtlDeleteExtraCreateParameterLookasideList(PVOID Lookaside, FSRTL_ECP_LOOKASIDE_FLAGS Flags)
{
  if ( (Flags & 2) != 0 )
    ExDeleteNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)Lookaside);
  else
    ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)Lookaside);
}
