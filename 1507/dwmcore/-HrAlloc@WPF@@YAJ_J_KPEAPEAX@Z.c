/*
 * XREFs of ?HrAlloc@WPF@@YAJ_J_KPEAPEAX@Z @ 0x18005CB2C
 * Callers:
 *     ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x180051818 (-Grow@-$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AllocateNotification@CTransportCmdPacker@@SAJW4Enum@MilRdpControl@@W42MilMessageClass@@IPEAPEAUUCE_RDP_HEADER@@PEAPEAUMIL_MESSAGE@@PEAPEAX@Z @ 0x180063410 (-AllocateNotification@CTransportCmdPacker@@SAJW4Enum@MilRdpControl@@W42MilMessageClass@@IPEAPEAU.c)
 *     ?ProcessUpdate@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSMESH@@PEBXI@Z @ 0x18006F70C (-ProcessUpdate@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSMESH@@PEBXI@Z.c)
 *     ?ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z @ 0x18006F900 (-ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z.c)
 *     ?AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1800EFCD4 (-AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?ProcessUpdate@CLinearGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENTBRUSH@@PEBXI@Z @ 0x180118358 (-ProcessUpdate@CLinearGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENTBRUSH@@PE.c)
 *     ?ProcessUpdate@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D@@PEBXI@Z @ 0x1801186C8 (-ProcessUpdate@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D@@PEBXI@Z.c)
 *     ?PrepareSysMemBufferAsSourcePixels@CBitmapOfDeviceBitmaps@@AEAAJXZ @ 0x1801383B0 (-PrepareSysMemBufferAsSourcePixels@CBitmapOfDeviceBitmaps@@AEAAJXZ.c)
 * Callees:
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180031390 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall WPF::HrAlloc(WPF *this, SIZE_T a2, _QWORD *a3, void **a4)
{
  unsigned int v4; // ebx
  LPVOID (__fastcall *v6)(WPF::ProcessHeapImpl *, SIZE_T); // rbp
  LPVOID v7; // rax

  v4 = 0;
  if ( a3 && a2 )
  {
    v6 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v6 == WPF::ProcessHeapImpl::Alloc )
      v7 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, a2);
    else
      v7 = (LPVOID)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T, _QWORD *, void **))v6)(
                     WPF::g_pProcessHeap,
                     a2,
                     a3,
                     a4);
    *a3 = v7;
    if ( !v7 )
      return (unsigned int)-2147024882;
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v4;
}
