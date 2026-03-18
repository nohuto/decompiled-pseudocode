/*
 * XREFs of MiReleasePageFileSpace @ 0x140022238
 * Callers:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14001DF00 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeleteClusterSection @ 0x140021D60 (MiDeleteClusterSection.c)
 *     MiPfnReferenceCountIsZero @ 0x14002448C (MiPfnReferenceCountIsZero.c)
 *     MiSetProtectionOnSection @ 0x140043BF0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x140044D50 (MiDecommitPages.c)
 *     MiDeleteSystemPagableVm @ 0x14004ACA0 (MiDeleteSystemPagableVm.c)
 *     MiWalkEntireImage @ 0x14004C570 (MiWalkEntireImage.c)
 *     MiWriteCompletePfn @ 0x14004E5A0 (MiWriteCompletePfn.c)
 *     MiDeletePteRun @ 0x140065140 (MiDeletePteRun.c)
 *     MiDeletePagablePteRange @ 0x1400751A0 (MiDeletePagablePteRange.c)
 *     MiDeleteMergedPte @ 0x1400B8E10 (MiDeleteMergedPte.c)
 *     MiActOnPte @ 0x1400BBC88 (MiActOnPte.c)
 *     MiFreeWsleList @ 0x1400E3AD0 (MiFreeWsleList.c)
 *     MiRemoveMappedPtes @ 0x140100320 (MiRemoveMappedPtes.c)
 *     MiDeletePteRange @ 0x1401007D0 (MiDeletePteRange.c)
 *     MiDeleteSystemPte @ 0x140122F44 (MiDeleteSystemPte.c)
 *     MiPurgeImageSection @ 0x1401EA8A8 (MiPurgeImageSection.c)
 *     MiDeletePerSessionProtos @ 0x1401F4ECC (MiDeletePerSessionProtos.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14001A280 (MiReleasePageFileInfo.c)
 *     MiCapturePageFileInfoInline @ 0x140098320 (MiCapturePageFileInfoInline.c)
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
