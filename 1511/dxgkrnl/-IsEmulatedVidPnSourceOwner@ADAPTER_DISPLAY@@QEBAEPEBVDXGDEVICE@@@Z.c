/*
 * XREFs of ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0007DCC
 * Callers:
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXXZ @ 0x1C0067A34 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXXZ.c)
 *     DxgkDestroyDevice @ 0x1C008B4D0 (DxgkDestroyDevice.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00AFD1C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C012E0EC (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@@Z @ 0x1C013A090 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0007E18 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 */

unsigned __int8 __fastcall ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(
        ADAPTER_DISPLAY *this,
        const struct DXGDEVICE *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( !*((_DWORD *)this + 26) )
    return 0;
  while ( !ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(this, a2, v2) )
  {
    if ( ++v2 >= *((_DWORD *)this + 26) )
      return 0;
  }
  return 1;
}
