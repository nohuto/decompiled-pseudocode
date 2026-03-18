/*
 * XREFs of ?IsDisplayModeEqual@@YA_NAEBU_D3DKMT_DISPLAYMODE@@0@Z @ 0x1C000B8B0
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAI@Z @ 0x1C00B74D4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8CFC (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 * Callees:
 *     <none>
 */

char __fastcall IsDisplayModeEqual(const struct _D3DKMT_DISPLAYMODE *a1, const struct _D3DKMT_DISPLAYMODE *a2)
{
  D3DDDIFORMAT Format; // eax
  D3DDDIFORMAT v3; // r8d
  char v4; // r8
  int Flags; // r10d
  int v6; // r9d
  int v7; // ecx

  if ( a1->Width != a2->Width || a1->Height != a2->Height )
    return 0;
  Format = a2->Format;
  v3 = a1->Format;
  if ( v3 != Format
    && (v3 != D3DDDIFMT_A8R8G8B8 || Format != D3DDDIFMT_X8R8G8B8)
    && (v3 != D3DDDIFMT_X8R8G8B8 || Format != D3DDDIFMT_A8R8G8B8) )
  {
    return 0;
  }
  if ( a1->RefreshRate.Numerator != a2->RefreshRate.Numerator )
    return 0;
  if ( a1->RefreshRate.Denominator != a2->RefreshRate.Denominator )
    return 0;
  if ( a1->ScanLineOrdering != a2->ScanLineOrdering )
    return 0;
  if ( a1->DisplayOrientation != a2->DisplayOrientation )
    return 0;
  if ( a1->DisplayFixedOutput != a2->DisplayFixedOutput )
    return 0;
  v4 = 1;
  Flags = (int)a1->Flags;
  if ( (((unsigned __int8)Flags ^ *(_BYTE *)&a2->Flags) & 1) != 0 )
    return 0;
  if ( (((unsigned __int8)Flags ^ (unsigned __int8)*(_DWORD *)&a2->Flags) & 2) != 0 )
    return 0;
  v6 = *((_DWORD *)&a1->Flags + 1);
  v7 = *((_DWORD *)&a2->Flags + 1);
  if ( (((unsigned __int8)v6 ^ *((_BYTE *)&a2->Flags + 4)) & 0xF) != 0
    || (((unsigned __int8)v6 ^ (unsigned __int8)v7) & 0x10) != 0
    || (((unsigned __int8)v6 ^ (unsigned __int8)v7) & 0x20) != 0 )
  {
    return 0;
  }
  return v4;
}
