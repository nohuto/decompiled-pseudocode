/*
 * XREFs of IoSetTopLevelIrp @ 0x140024B10
 * Callers:
 *     MiCreateSection @ 0x14042BC10 (MiCreateSection.c)
 *     MiCreateNewSection @ 0x1405050A8 (MiCreateNewSection.c)
 *     FsRtlCopyRead @ 0x14061D480 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14061D6EC (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14061DE8C (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14061E0CC (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

void __stdcall IoSetTopLevelIrp(PIRP Irp)
{
  KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)Irp;
}
