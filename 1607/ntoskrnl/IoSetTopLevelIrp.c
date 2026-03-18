/*
 * XREFs of IoSetTopLevelIrp @ 0x140024F90
 * Callers:
 *     MiCreateSection @ 0x14042CD40 (MiCreateSection.c)
 *     MiCreateNewSection @ 0x140522048 (MiCreateNewSection.c)
 *     FsRtlCopyRead @ 0x14061D3CC (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14061D638 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14061DDD8 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14061E018 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

void __stdcall IoSetTopLevelIrp(PIRP Irp)
{
  KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)Irp;
}
