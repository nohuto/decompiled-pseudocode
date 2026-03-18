/*
 * XREFs of IoGetTopLevelIrp @ 0x14008C520
 * Callers:
 *     FsRtlCopyRead @ 0x14061D3CC (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14061D638 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14061DDD8 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14061E018 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

PIRP IoGetTopLevelIrp(void)
{
  return (PIRP)KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink;
}
