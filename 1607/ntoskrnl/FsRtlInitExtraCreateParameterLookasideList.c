/*
 * XREFs of FsRtlInitExtraCreateParameterLookasideList @ 0x14057EA80
 * Callers:
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExInitializeNPagedLookasideList @ 0x140110BFC (ExInitializeNPagedLookasideList.c)
 *     ExInitializePagedLookasideList @ 0x1403E3794 (ExInitializePagedLookasideList.c)
 */

void __stdcall FsRtlInitExtraCreateParameterLookasideList(
        PVOID Lookaside,
        FSRTL_ECP_LOOKASIDE_FLAGS Flags,
        SIZE_T Size,
        ULONG Tag)
{
  SIZE_T v4; // rax

  v4 = Size + 72;
  if ( (Flags & 2) != 0 )
    ExInitializeNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)Lookaside, 0LL, 0LL, 0x200u, v4, Tag, 0);
  else
    ExInitializePagedLookasideList((PPAGED_LOOKASIDE_LIST)Lookaside, 0LL, 0LL, 0, v4, Tag, 0);
}
