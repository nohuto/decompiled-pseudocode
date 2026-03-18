/*
 * XREFs of ?SetBitmap@CMILBrushBitmap@@QEAAJPEAVIBitmapSource@@@Z @ 0x180084628
 * Callers:
 *     ?GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x180024750 (-GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBru.c)
 *     ?FreeRealizationResources@CImageLegacyMilBrush@@UEAAXXZ @ 0x1800327A0 (-FreeRealizationResources@CImageLegacyMilBrush@@UEAAXXZ.c)
 *     ?FreeRealizationResources@CTileLegacyMilBrush@@UEAAXXZ @ 0x18010D9C0 (-FreeRealizationResources@CTileLegacyMilBrush@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILBrushBitmap::SetBitmap(CMILBrushBitmap *this, struct IBitmapSource *a2)
{
  __int64 v4; // rcx
  bool v5; // zf
  int v6; // eax

  v4 = *((_QWORD *)this + 25);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 25) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 8LL))(a2);
  v5 = (*((_DWORD *)this + 30))++ == -1;
  v6 = *((_DWORD *)this + 30);
  if ( v5 )
    v6 = 1;
  *((_DWORD *)this + 30) = v6;
  return 0LL;
}
