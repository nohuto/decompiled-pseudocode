/*
 * XREFs of MiReleasePageFileSpace @ 0x140021DB8
 * Callers:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14001DA80 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeleteClusterSection @ 0x1400218E0 (MiDeleteClusterSection.c)
 *     MiPfnReferenceCountIsZero @ 0x14002400C (MiPfnReferenceCountIsZero.c)
 *     MiSetProtectionOnSection @ 0x140043770 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1400448D0 (MiDecommitPages.c)
 *     MiDeleteSystemPagableVm @ 0x14004A820 (MiDeleteSystemPagableVm.c)
 *     MiWalkEntireImage @ 0x14004C0F0 (MiWalkEntireImage.c)
 *     MiWriteCompletePfn @ 0x14004E120 (MiWriteCompletePfn.c)
 *     MiDeletePteRun @ 0x140064CC0 (MiDeletePteRun.c)
 *     MiDeletePagablePteRange @ 0x140075220 (MiDeletePagablePteRange.c)
 *     MiDeleteMergedPte @ 0x1400B6CA0 (MiDeleteMergedPte.c)
 *     MiActOnPte @ 0x1400B9B18 (MiActOnPte.c)
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 *     MiRemoveMappedPtes @ 0x1400FE0A0 (MiRemoveMappedPtes.c)
 *     MiDeletePteRange @ 0x1400FE550 (MiDeletePteRange.c)
 *     MiDeleteSystemPte @ 0x1401234B4 (MiDeleteSystemPte.c)
 *     MiPurgeImageSection @ 0x1401EA6D4 (MiPurgeImageSection.c)
 *     MiDeletePerSessionProtos @ 0x1401F4CF8 (MiDeletePerSessionProtos.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiCapturePageFileInfoInline @ 0x140097B20 (MiCapturePageFileInfoInline.c)
 */

__int64 __fastcall MiReleasePageFileSpace(struct _KEVENT *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  if ( (a2 & 0x400) != 0 )
    return 0LL;
  v4 = MiCapturePageFileInfoInline(&v6, 0LL, a3);
  v6 = v4;
  if ( !v4 )
    return 0LL;
  MiReleasePageFileInfo(a1, v4, 0);
  return 1LL;
}
