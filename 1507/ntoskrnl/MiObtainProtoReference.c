/*
 * XREFs of MiObtainProtoReference @ 0x140036AF4
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1400356F0 (MiPfPutPagesInTransition.c)
 *     MiFinishMdlForMappedFileFault @ 0x140036BC0 (MiFinishMdlForMappedFileFault.c)
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MiResolveTransitionFault @ 0x1400B8D10 (MiResolveTransitionFault.c)
 *     MiCopyDataPageToImagePage @ 0x1400E1430 (MiCopyDataPageToImagePage.c)
 *     MiResolvePageFileFault @ 0x140145F70 (MiResolvePageFileFault.c)
 *     MiTranslatePageForCopy @ 0x14021586C (MiTranslatePageForCopy.c)
 *     MiMakeImagePageOk @ 0x14021712C (MiMakeImagePageOk.c)
 * Callees:
 *     MiAddLockedPageCharge @ 0x1400B50C0 (MiAddLockedPageCharge.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MiObtainProtoReference(__int64 a1, char a2)
{
  unsigned int v2; // edi
  __int64 result; // rax

  v2 = 0;
  if ( (a2 & 1) != 0 )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v2 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v2);
      }
      while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
    }
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v2 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v2);
    }
    while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
  }
  MiAddLockedPageCharge(a1, 1LL);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
