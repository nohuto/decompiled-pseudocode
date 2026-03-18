/*
 * XREFs of ?SetBitmap@CMILBrushBitmap@@QEAAJPEAVIBitmapSource@@@Z @ 0x180080E24
 * Callers:
 *     ?FreeRealizationResources@CImageBrush@@UEAAXXZ @ 0x180085970 (-FreeRealizationResources@CImageBrush@@UEAAXXZ.c)
 *     ?GetBrushRealizationInternal@CTileBrush@@MEAAJPEBUBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x180085EA0 (-GetBrushRealizationInternal@CTileBrush@@MEAAJPEBUBrushContext@@PEAPEAVCMILBrush@@@Z.c)
 *     ?FreeRealizationResources@CTileBrush@@UEAAXXZ @ 0x1800DC6D0 (-FreeRealizationResources@CTileBrush@@UEAAXXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
