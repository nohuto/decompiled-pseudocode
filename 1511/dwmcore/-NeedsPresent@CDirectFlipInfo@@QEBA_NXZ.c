/*
 * XREFs of ?NeedsPresent@CDirectFlipInfo@@QEBA_NXZ @ 0x180006B20
 * Callers:
 *     ?ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z @ 0x1800067F4 (-ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18007E1D0 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?SetDirectFlipPresentInfo@COverlayContext@@AEAAJXZ @ 0x18007EA0C (-SetDirectFlipPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?ProcessOutOfFrameDirectFlipTokens@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z @ 0x18009E0F0 (-ProcessOutOfFrameDirectFlipTokens@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z.c)
 * Callees:
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x1800072CC (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 */

bool __fastcall CDirectFlipInfo::NeedsPresent(CDirectFlipInfo *this)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  bool result; // al

  *(_BYTE *)(v1 + 76) = CDirectFlipInfo::RenderingRealizationChanged(this) && *(int *)(*(_QWORD *)(v1 + 32) + 76LL) <= 1;
  result = *(_BYTE *)(v2 + 76);
  *(_DWORD *)(v2 + 72) = *(_DWORD *)(*(_QWORD *)(v1 + 32) + 72LL);
  return result;
}
