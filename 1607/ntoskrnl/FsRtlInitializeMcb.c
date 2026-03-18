/*
 * XREFs of FsRtlInitializeMcb @ 0x14061E3DC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall FsRtlInitializeMcb(PMCB Mcb, POOL_TYPE PoolType)
{
  FsRtlInitializeLargeMcb(&Mcb->DummyFieldThatSizesThisStructureCorrectly, PoolType);
}
