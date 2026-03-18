/*
 * XREFs of IoSetTopLevelIrp @ 0x14003AD60
 * Callers:
 *     MiCreateNewSection @ 0x1403C8128 (MiCreateNewSection.c)
 *     MiCreateSection @ 0x1403F80B0 (MiCreateSection.c)
 *     FsRtlCopyRead @ 0x1405F315C (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x1405F33C8 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x1405F3A80 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x1405F3CC0 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

void __stdcall IoSetTopLevelIrp(PIRP Irp)
{
  KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)Irp;
}
