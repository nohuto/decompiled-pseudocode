/*
 * XREFs of ?SetFullscreenGammaRampAdjustment@DXGDEVICE@@QEAAXIPEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C0136F0C
 * Callers:
 *     DxgkAdjustFullscreenGamma @ 0x1C01299D0 (DxgkAdjustFullscreenGamma.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

void __fastcall DXGDEVICE::SetFullscreenGammaRampAdjustment(
        DXGDEVICE *this,
        unsigned int a2,
        struct DXGK_GAMMA_ADJUSTMENT *a3)
{
  __int64 v3; // rdi
  void *v6; // rcx

  v3 = a2;
  v6 = (void *)*((_QWORD *)this + a2 + 2314);
  if ( v6 )
    operator delete(v6);
  *((_QWORD *)this + v3 + 2314) = a3;
}
