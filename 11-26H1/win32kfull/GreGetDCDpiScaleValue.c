/*
 * XREFs of GreGetDCDpiScaleValue @ 0x1401C0220
 * Callers:
 *     NtGdiCreateDIBSection @ 0x14007BFA0 (NtGdiCreateDIBSection.c)
 *     BitBltSysBmp @ 0x140124BEC (BitBltSysBmp.c)
 *     NtGdiGetDCDpiScaleValue @ 0x1401BFFC0 (NtGdiGetDCDpiScaleValue.c)
 *     NtUserBitBltSysBmp @ 0x1401BFFE0 (NtUserBitBltSysBmp.c)
 *     ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x1401C0154 (-PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z.c)
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x1400C5FFC (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 *     ?GetCachedDpiScaleValue@DC@@QEBAJXZ @ 0x1401C0280 (-GetCachedDpiScaleValue@DC@@QEBAJXZ.c)
 */

__int64 __fastcall GreGetDCDpiScaleValue(HDC a1)
{
  int CachedDpiScaleValue; // eax
  unsigned int v2; // ebx
  DC *v4[15]; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v5; // [rsp+A8h] [rbp+10h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v4, a1);
  if ( v4[0] )
  {
    CachedDpiScaleValue = DC::GetCachedDpiScaleValue(v4[0]);
    ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v5, CachedDpiScaleValue);
    v2 = v5;
  }
  else
  {
    v2 = 1;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v4);
  return v2;
}
