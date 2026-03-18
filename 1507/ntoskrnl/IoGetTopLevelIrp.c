/*
 * XREFs of IoGetTopLevelIrp @ 0x140102140
 * Callers:
 *     FsRtlCopyRead @ 0x14066BE8C (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14066C1B4 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14066C8C0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14066CBCC (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

PIRP IoGetTopLevelIrp(void)
{
  return (PIRP)KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink;
}
