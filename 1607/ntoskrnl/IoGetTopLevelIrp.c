/*
 * XREFs of IoGetTopLevelIrp @ 0x14008BC80
 * Callers:
 *     FsRtlCopyRead @ 0x14061D480 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14061D6EC (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14061DE8C (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14061E0CC (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

PIRP IoGetTopLevelIrp(void)
{
  return (PIRP)KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink;
}
