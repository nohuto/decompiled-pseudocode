/*
 * XREFs of ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x180034D3C
 * Callers:
 *     ?ShouldTripleBuffer@CDisplay@@QEBA_NXZ @ 0x1800343C8 (-ShouldTripleBuffer@CDisplay@@QEBA_NXZ.c)
 *     ?ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ @ 0x180036330 (-ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ.c)
 *     ?GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180043E68 (-GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x180075780 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x180076D60 (-AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18007BA20 (-Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Fl.c)
 *     ?WaitForVBlank@CHwndRenderTarget@@UEAAJPEAX@Z @ 0x1800B8B90 (-WaitForVBlank@CHwndRenderTarget@@UEAAJPEAX@Z.c)
 *     ?FindPrimary@CDesktopRenderTarget@@AEAAJXZ @ 0x18011D978 (-FindPrimary@CDesktopRenderTarget@@AEAAJXZ.c)
 *     _lambda_ccb2119b1fe5e44112dd42b40f4f573e_::operator() @ 0x1801619CC (_lambda_ccb2119b1fe5e44112dd42b40f4f573e_--operator().c)
 *     ?IsPrimary@CHwFullScreenRenderTarget@@UEBA_NXZ @ 0x18017A510 (-IsPrimary@CHwFullScreenRenderTarget@@UEBA_NXZ.c)
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
