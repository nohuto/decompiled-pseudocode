/*
 * XREFs of MiReleasePageFileSpace @ 0x1400E31B4
 * Callers:
 *     MiDeleteMergedPte @ 0x140005510 (MiDeleteMergedPte.c)
 *     MiDeletePagablePteRange @ 0x140008890 (MiDeletePagablePteRange.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140036ED0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeletePteRange @ 0x140038650 (MiDeletePteRange.c)
 *     MiRemoveMappedPtes @ 0x140039410 (MiRemoveMappedPtes.c)
 *     MiActOnPte @ 0x14007FD30 (MiActOnPte.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1400922F0 (MiDecommitPages.c)
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     MiDeleteSystemPagableVm @ 0x1400AFDF0 (MiDeleteSystemPagableVm.c)
 *     MiWriteCompletePfn @ 0x1400B51B0 (MiWriteCompletePfn.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MiDeletePteRun @ 0x1400C3A20 (MiDeletePteRun.c)
 *     MiPfnReferenceCountIsZero @ 0x1400E3118 (MiPfnReferenceCountIsZero.c)
 *     MiDereferenceTebVad @ 0x1401273DC (MiDereferenceTebVad.c)
 *     MiDeleteSystemPte @ 0x1401498C4 (MiDeleteSystemPte.c)
 *     MiDeletePerSessionProtos @ 0x14021BD68 (MiDeletePerSessionProtos.c)
 *     MiPurgeImageSection @ 0x14021C698 (MiPurgeImageSection.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiReleasePageFileSpace(struct _KEVENT *a1, unsigned __int64 a2, int a3)
{
  int v3; // r9d
  unsigned __int64 v4; // rax
  struct _KEVENT *v5; // r10
  unsigned __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( (a2 & 0x400) != 0 )
    return 0LL;
  if ( (a2 & 4) != 0 )
  {
    if ( (unsigned __int64)&STACK[0x90482413038] <= 0x7F8 )
      v4 = MiReadPteShadow(&v7, a2);
    if ( !v3 )
      v4 &= ~2uLL;
  }
  else if ( a3 && (a2 & 2) != 0 )
  {
    if ( (unsigned __int64)&STACK[0x90482413038] <= 0x7F8 )
      v4 = MiReadPteShadow(&v7, a2);
  }
  else
  {
    v4 = 0LL;
  }
  v7 = v4;
  if ( !v4 )
    return 0LL;
  MiReleasePageFileInfo(v5, v4, 0);
  return 1LL;
}
