/*
 * XREFs of ?Activate@COutOfFrameDirectFlipInfo@@UEAAJXZ @ 0x180006A30
 * Callers:
 *     ?ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z @ 0x1800067F4 (-ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18007E1D0 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?ProcessOutOfFrameDirectFlipTokens@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z @ 0x18009E0F0 (-ProcessOutOfFrameDirectFlipTokens@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z.c)
 * Callees:
 *     ?EarlyWakeUp@COutOfFrameDirectFlipInfo@@QEBA_NXZ @ 0x180006A7C (-EarlyWakeUp@COutOfFrameDirectFlipInfo@@QEBA_NXZ.c)
 *     ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x180007060 (-Activate@CDirectFlipInfo@@UEAAJXZ.c)
 *     ?RecordOutOfFrameDirectFlipNotification@CCompositionSurfaceInfo@@QEAAJ_N0@Z @ 0x18000BD40 (-RecordOutOfFrameDirectFlipNotification@CCompositionSurfaceInfo@@QEAAJ_N0@Z.c)
 */

__int64 __fastcall COutOfFrameDirectFlipInfo::Activate(CCompositionSurfaceInfo **this)
{
  unsigned int v2; // edi
  bool v4; // al

  v2 = CDirectFlipInfo::Activate((CDirectFlipInfo *)this);
  if ( !*((_BYTE *)this + 108) )
  {
    v4 = COutOfFrameDirectFlipInfo::EarlyWakeUp((COutOfFrameDirectFlipInfo *)this);
    CCompositionSurfaceInfo::RecordOutOfFrameDirectFlipNotification(this[4], 1, v4);
    *((_BYTE *)this + 108) = 1;
  }
  return v2;
}
