/*
 * XREFs of MiReturnPfnReferenceCount @ 0x1400E0858
 * Callers:
 *     MiMakeImagePageOk @ 0x14021712C (MiMakeImagePageOk.c)
 *     MiFillPerSessionProtos @ 0x14021C1E0 (MiFillPerSessionProtos.c)
 *     MiCreateNewSection @ 0x1404702B8 (MiCreateNewSection.c)
 *     MiCreateImageFileMap @ 0x1404FCC48 (MiCreateImageFileMap.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14050550C (MiReleaseProcessReferenceToSessionDataPage.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400E2D48 (MiRemoveLockedPageChargeAndDecRef.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MiReturnPfnReferenceCount(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  unsigned int v3; // edi
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v3 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v3);
    }
    while ( *(__int64 *)(a1 + 24) < 0 || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
  }
  result = MiRemoveLockedPageChargeAndDecRef(a1);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
  return result;
}
