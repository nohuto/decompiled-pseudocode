/*
 * XREFs of ?SetBitmap@CMILBrushBitmap@@QEAAJPEAVIBitmapSource@@@Z @ 0x1800896F0
 * Callers:
 *     ?FreeRealizationResources@CImageLegacyMilBrush@@UEAAXXZ @ 0x18005A2B0 (-FreeRealizationResources@CImageLegacyMilBrush@@UEAAXXZ.c)
 *     ?GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18005CEA0 (-GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBru.c)
 *     ?FreeRealizationResources@CTileLegacyMilBrush@@UEAAXXZ @ 0x1800F8A40 (-FreeRealizationResources@CTileLegacyMilBrush@@UEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CMILBrushBitmap::SetBitmap(CMILBrushBitmap *this, struct IBitmapSource *a2)
{
  __int64 v2; // r14
  int v5; // eax

  v2 = *((_QWORD *)this + 24);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 24));
  *((_QWORD *)this + 24) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 8LL))(a2);
  v5 = ++*((_DWORD *)this + 30);
  if ( !v5 )
    v5 = 1;
  *((_DWORD *)this + 30) = v5;
  return 0LL;
}
