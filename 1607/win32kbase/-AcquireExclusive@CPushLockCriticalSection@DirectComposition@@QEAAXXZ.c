/*
 * XREFs of ?AcquireExclusive@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C00B14B8
 * Callers:
 *     ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C00192AC (-DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CPushLockCriticalSection::AcquireExclusive(
        DirectComposition::CPushLockCriticalSection *this)
{
  ExAcquirePushLockExclusiveEx(this, 0LL);
  *((_BYTE *)this + 8) = 1;
}
