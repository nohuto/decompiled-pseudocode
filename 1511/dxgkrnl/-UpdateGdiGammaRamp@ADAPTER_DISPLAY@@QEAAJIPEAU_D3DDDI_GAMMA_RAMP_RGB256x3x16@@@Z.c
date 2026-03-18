/*
 * XREFs of ?UpdateGdiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C0099098
 * Callers:
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BD4C4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00C2AC0 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::UpdateGdiGammaRamp(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *a3)
{
  __int64 v4; // rdi
  void *v6; // rcx

  v4 = 1016LL * a2;
  v6 = *(void **)(*((_QWORD *)this + 17) + v4 + 792);
  if ( v6 )
    operator delete(v6);
  *(_QWORD *)(*((_QWORD *)this + 17) + v4 + 792) = a3;
  return 0LL;
}
