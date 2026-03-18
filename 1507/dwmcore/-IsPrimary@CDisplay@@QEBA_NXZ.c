/*
 * XREFs of ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x1800583AC
 * Callers:
 *     ?IsPrimary@CHwFullScreenRenderTarget@@UEBA_NXZ @ 0x1800431F0 (-IsPrimary@CHwFullScreenRenderTarget@@UEBA_NXZ.c)
 *     ?AddRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z @ 0x1800496E0 (-AddRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x18004B580 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18004CCC0 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180065230 (-GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?WaitForVBlank@CHwndRenderTarget@@UEAAJPEAX@Z @ 0x18008CB70 (-WaitForVBlank@CHwndRenderTarget@@UEAAJPEAX@Z.c)
 *     _lambda_9880f9f9ab8bb85f9fd947ddd866f5c6_::operator() @ 0x18008D804 (_lambda_9880f9f9ab8bb85f9fd947ddd866f5c6_--operator().c)
 *     ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ @ 0x18008DBD0 (-ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ.c)
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18008E790 (-Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Fl.c)
 *     ?HasTripleBufferCriteria@CDisplay@@QEBAJPEA_N@Z @ 0x1800909B0 (-HasTripleBufferCriteria@CDisplay@@QEBAJPEA_N@Z.c)
 *     ?PresentOutOfFrameDirectFlip@CHwndRenderTarget@@UEAAJXZ @ 0x1800EA4A0 (-PresentOutOfFrameDirectFlip@CHwndRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CDisplay::IsPrimary(CDisplay *this)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( *((_BYTE *)this + 144) )
    return *((_BYTE *)this + 145) != 0;
  return result;
}
