/*
 * XREFs of IoSetTopLevelIrp @ 0x140089060
 * Callers:
 *     MiCreateNewSection @ 0x1404702B8 (MiCreateNewSection.c)
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 *     FsRtlCopyRead @ 0x14066BE8C (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14066C1B4 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14066C8C0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14066CBCC (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

void __stdcall IoSetTopLevelIrp(PIRP Irp)
{
  KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)Irp;
}
