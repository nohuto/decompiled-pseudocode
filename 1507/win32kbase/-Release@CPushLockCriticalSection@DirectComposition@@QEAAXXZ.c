/*
 * XREFs of ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C006B730
 * Callers:
 *     ?FindCompositionFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCCompositionFrame@2@@Z @ 0x1C006B3A0 (-FindCompositionFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCCompositionFrame@2@@Z.c)
 *     ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C006B614 (-DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ.c)
 *     ?RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z @ 0x1C00A43C8 (-RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CPushLockCriticalSection::Release(DirectComposition::CPushLockCriticalSection *this)
{
  if ( *((_BYTE *)this + 8) )
    ExReleasePushLockExclusiveEx(this, 0LL);
  else
    ExReleasePushLockSharedEx(this, 0LL);
}
