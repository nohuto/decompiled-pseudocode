/*
 * XREFs of MiIsPfnCommitNotCharged @ 0x14004F140
 * Callers:
 *     MiMigratePfn @ 0x140036E10 (MiMigratePfn.c)
 *     MiWalkEntireImage @ 0x14004C570 (MiWalkEntireImage.c)
 *     MiFinishHardFault @ 0x14004D6A0 (MiFinishHardFault.c)
 *     MiWriteCompletePfn @ 0x14004E5A0 (MiWriteCompletePfn.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E740 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiCheckProtoPtePageState @ 0x14004E9B0 (MiCheckProtoPtePageState.c)
 *     MiLockProtoPoolPage @ 0x14004ED80 (MiLockProtoPoolPage.c)
 *     MiChargeForLockedPage @ 0x140103380 (MiChargeForLockedPage.c)
 *     MiCombineCandidate @ 0x1401F7E78 (MiCombineCandidate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnCommitNotCharged(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  if ( v1 > 0xFFFFF6BFFFFFFF78uLL || v1 < 0xFFFFF68000000000uLL )
    return 0LL;
  else
    return (*(unsigned __int8 *)(a1 + 35) >> 5) & 1;
}
