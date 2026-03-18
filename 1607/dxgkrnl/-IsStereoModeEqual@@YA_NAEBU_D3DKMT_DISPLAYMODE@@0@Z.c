/*
 * XREFs of ?IsStereoModeEqual@@YA_NAEBU_D3DKMT_DISPLAYMODE@@0@Z @ 0x1C000D7B8
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0094560 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsStereoModeEqual(const struct _D3DKMT_DISPLAYMODE *a1, const struct _D3DKMT_DISPLAYMODE *a2)
{
  int v2; // r8d

  v2 = *((_DWORD *)&a1->Flags + 1);
  return (((unsigned __int8)v2 ^ *((_BYTE *)&a2->Flags + 4)) & 0x10) == 0
      && (((unsigned __int8)v2 ^ (unsigned __int8)*((_DWORD *)&a2->Flags + 1)) & 0x20) == 0;
}
