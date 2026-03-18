/*
 * XREFs of ?Reset@COutOfFrameDirectFlipStats@@QEAAXXZ @ 0x1800691FC
 * Callers:
 *     ?ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z @ 0x1800067F4 (-ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z.c)
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x180069158 (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     ?ProcessOutOfFrameDirectFlip@CPartitionVerticalBlankScheduler@@IEAAJPEAVCFrameInfo@@PEA_N@Z @ 0x18008E4D4 (-ProcessOutOfFrameDirectFlip@CPartitionVerticalBlankScheduler@@IEAAJPEAVCFrameInfo@@PEA_N@Z.c)
 *     ?ProcessOutOfFrameDirectFlipTokens@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z @ 0x18009E0F0 (-ProcessOutOfFrameDirectFlipTokens@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z.c)
 *     ??1CFrameInfo@@QEAA@XZ @ 0x1800FFCA0 (--1CFrameInfo@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

void __fastcall COutOfFrameDirectFlipStats::Reset(CMILCOMBase **this)
{
  CMILCOMBase *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    CMILCOMBase::InternalRelease(v2);
    *this = 0LL;
  }
  this[1] = 0LL;
  *((_DWORD *)this + 4) = 0;
}
