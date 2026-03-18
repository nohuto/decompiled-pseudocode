/*
 * XREFs of ?Activate@COutOfFrameDirectFlipInfo@@UEAAJXZ @ 0x180005EC0
 * Callers:
 *     ?ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z @ 0x180005C34 (-ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z.c)
 *     ?ProcessOutOfFrameDirectFlipTokens@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z @ 0x1800E3798 (-ProcessOutOfFrameDirectFlipTokens@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z.c)
 * Callees:
 *     ?EarlyWakeUp@COutOfFrameDirectFlipInfo@@QEBA_NXZ @ 0x180005F10 (-EarlyWakeUp@COutOfFrameDirectFlipInfo@@QEBA_NXZ.c)
 *     ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x1800066B0 (-Activate@CDirectFlipInfo@@UEAAJXZ.c)
 *     ?RecordOutOfFrameDirectFlipNotification@CCompositionSurfaceInfo@@QEAAJ_N0@Z @ 0x1800076CC (-RecordOutOfFrameDirectFlipNotification@CCompositionSurfaceInfo@@QEAAJ_N0@Z.c)
 */

__int64 __fastcall COutOfFrameDirectFlipInfo::Activate(CCompositionSurfaceInfo **this)
{
  unsigned int v2; // edi
  bool v4; // al

  v2 = CDirectFlipInfo::Activate((CDirectFlipInfo *)this);
  if ( !*((_BYTE *)this + 132) )
  {
    v4 = COutOfFrameDirectFlipInfo::EarlyWakeUp((COutOfFrameDirectFlipInfo *)this);
    CCompositionSurfaceInfo::RecordOutOfFrameDirectFlipNotification(this[4], 1, v4);
    *((_BYTE *)this + 132) = 1;
  }
  return v2;
}
