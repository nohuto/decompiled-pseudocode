/*
 * XREFs of IoGetTopLevelIrp @ 0x1400C8680
 * Callers:
 *     FsRtlCopyRead @ 0x1405F315C (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x1405F33C8 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x1405F3A80 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x1405F3CC0 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

PIRP IoGetTopLevelIrp(void)
{
  return (PIRP)KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink;
}
