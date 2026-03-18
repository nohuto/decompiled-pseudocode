/*
 * XREFs of ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C000AB70
 * Callers:
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C00B3D34 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00B47FC (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@@Z @ 0x1C0135970 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 */

MANAGEDPRIMARIESTRACKER *__fastcall MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
        MANAGEDPRIMARIESTRACKER *this,
        struct ADAPTER_DISPLAY *a2,
        struct DXGPROCESS *a3)
{
  int v3; // eax
  int v5; // ecx

  *((_DWORD *)this + 4) &= 0xFFFFFFFC;
  v3 = 0;
  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = a3;
  v5 = *((_DWORD *)this + 4);
  if ( a2 )
    v3 = *((_DWORD *)a2 + 20);
  *((_DWORD *)this + 4) = (4 * v3) | v5 & 3;
  memset((char *)this + 24, 0, 0x80uLL);
  memset((char *)this + 152, 0, 0x80uLL);
  memset((char *)this + 280, 0, 0x40uLL);
  memset((char *)this + 344, 0, 0x40uLL);
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  return this;
}
