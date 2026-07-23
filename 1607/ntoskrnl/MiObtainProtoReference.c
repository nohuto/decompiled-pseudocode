/*
 * XREFs of MiObtainProtoReference @ 0x1400231D8
 * Callers:
 *     MiFinishMdlForMappedFileFault @ 0x140022E20 (MiFinishMdlForMappedFileFault.c)
 *     MiCopyDataPageToImagePage @ 0x1400235C0 (MiCopyDataPageToImagePage.c)
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 *     MiResolveTransitionFault @ 0x140035B10 (MiResolveTransitionFault.c)
 *     MiWalkEntireImage @ 0x14004C0F0 (MiWalkEntireImage.c)
 *     MiPfPutPagesInTransition @ 0x1400E2FA0 (MiPfPutPagesInTransition.c)
 *     MiResolvePageFileFault @ 0x1401218D0 (MiResolvePageFileFault.c)
 *     MiTranslatePageForCopy @ 0x1401E4A80 (MiTranslatePageForCopy.c)
 *     MiIdealClusterPage @ 0x1401F6574 (MiIdealClusterPage.c)
 *     MiMakeImagePageOk @ 0x1401F6D64 (MiMakeImagePageOk.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiAreChargesNeededToLockPage @ 0x14004E880 (MiAreChargesNeededToLockPage.c)
 *     MiLockNestedPageAtDpcInline @ 0x14009DAE0 (MiLockNestedPageAtDpcInline.c)
 *     MiChargeForLockedPage @ 0x140101100 (MiChargeForLockedPage.c)
 */

__int64 __fastcall MiObtainProtoReference(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 result; // rax
  int v7; // [rsp+38h] [rbp+10h] BYREF

  if ( (a2 & 1) != 0 )
  {
    MiLockNestedPageAtDpcInline(a1);
  }
  else
  {
    v7 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v7);
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(a1, a2, a3, a4) || (unsigned int)MiChargeForLockedPage(v5, 1LL) )
    ++*(_WORD *)(a1 + 32);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
