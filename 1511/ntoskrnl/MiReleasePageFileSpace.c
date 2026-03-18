/*
 * XREFs of MiReleasePageFileSpace @ 0x1400E5464
 * Callers:
 *     MiDeleteMergedPte @ 0x14000E9A8 (MiDeleteMergedPte.c)
 *     MiActOnPte @ 0x14001C9B4 (MiActOnPte.c)
 *     MiDeleteSystemPagableVm @ 0x14003C140 (MiDeleteSystemPagableVm.c)
 *     MiDeleteBatch @ 0x14003D3A0 (MiDeleteBatch.c)
 *     MiDeletePteRun @ 0x14004FE20 (MiDeletePteRun.c)
 *     MiDecommitPages @ 0x14005ADD0 (MiDecommitPages.c)
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     MiWriteCompletePfn @ 0x1400673F0 (MiWriteCompletePfn.c)
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400A0890 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeletePteRange @ 0x1400A1370 (MiDeletePteRange.c)
 *     MiRemoveMappedPtes @ 0x1400B6D00 (MiRemoveMappedPtes.c)
 *     MiDeletePagablePteRange @ 0x1400BACF0 (MiDeletePagablePteRange.c)
 *     MiDeleteSystemPte @ 0x1401141C8 (MiDeleteSystemPte.c)
 *     MiPurgeImageSection @ 0x1401D8B68 (MiPurgeImageSection.c)
 *     MiDeletePerSessionProtos @ 0x1401E2DAC (MiDeletePerSessionProtos.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiCapturePageFileInfoInline @ 0x1400E1BBC (MiCapturePageFileInfoInline.c)
 */

__int64 __fastcall MiReleasePageFileSpace(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  if ( (a2 & 0x400) != 0 )
    return 0LL;
  v4 = MiCapturePageFileInfoInline(&v6, 0, a3);
  v6 = v4;
  if ( !v4 )
    return 0LL;
  MiReleasePageFileInfo(a1, v4, 0);
  return 1LL;
}
