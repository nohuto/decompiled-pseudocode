/*
 * XREFs of ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x180070438
 * Callers:
 *     ?ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ @ 0x180070180 (-ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ.c)
 *     ?HasTripleBufferCriteria@CDisplay@@QEBAJPEA_N@Z @ 0x18007052C (-HasTripleBufferCriteria@CDisplay@@QEBAJPEA_N@Z.c)
 *     ?IsPrimary@CHwFullScreenRenderTarget@@UEBA_NXZ @ 0x180073FC0 (-IsPrimary@CHwFullScreenRenderTarget@@UEBA_NXZ.c)
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1800746B0 (-Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Fl.c)
 *     ?AddRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z @ 0x18007566C (-AddRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x18007CC50 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18007E1D0 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18008D918 (-GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     _lambda_9880f9f9ab8bb85f9fd947ddd866f5c6_::operator() @ 0x1800B36B4 (_lambda_9880f9f9ab8bb85f9fd947ddd866f5c6_--operator().c)
 *     ?WaitForVBlank@CHwndRenderTarget@@UEAAJPEAX@Z @ 0x1800B51E0 (-WaitForVBlank@CHwndRenderTarget@@UEAAJPEAX@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ @ 0x1800B63F0 (-ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ.c)
 *     ?PresentOutOfFrameDirectFlip@CHwndRenderTarget@@UEAAJXZ @ 0x1800B8C20 (-PresentOutOfFrameDirectFlip@CHwndRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CDisplay::IsPrimary(CDisplay *this)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( *((_BYTE *)this + 299) )
    return *((_BYTE *)this + 300) != 0;
  return result;
}
