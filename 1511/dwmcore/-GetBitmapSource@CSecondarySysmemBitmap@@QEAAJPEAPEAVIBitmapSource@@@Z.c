/*
 * XREFs of ?GetBitmapSource@CSecondarySysmemBitmap@@QEAAJPEAPEAVIBitmapSource@@@Z @ 0x1801600F4
 * Callers:
 *     ?GetLegacyBitmapSource@CD2DBitmapCache@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18015F570 (-GetLegacyBitmapSource@CD2DBitmapCache@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800A342C (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::GetBitmapSource(struct IUnknown *this, struct IBitmapSource **a2)
{
  bool v2; // zf
  int v3; // eax
  unsigned int v4; // r9d
  unsigned int v5; // edx
  int BitmapFromMemory; // eax
  unsigned int v7; // ebx
  int lpVtbl_high; // [rsp+40h] [rbp-28h] BYREF
  int lpVtbl; // [rsp+44h] [rbp-24h]
  int v12; // [rsp+48h] [rbp-20h]
  __int64 v13; // [rsp+50h] [rbp-18h]

  v2 = BYTE4(this[18].lpVtbl) == 0;
  lpVtbl_high = HIDWORD(this[15].lpVtbl);
  if ( v2 )
    lpVtbl = (int)this[16].lpVtbl;
  else
    lpVtbl = 3;
  v3 = HIDWORD(this[16].lpVtbl);
  v4 = (unsigned int)this[15].lpVtbl;
  v13 = 0LL;
  v5 = HIDWORD(this[14].lpVtbl);
  v12 = v3;
  BitmapFromMemory = HrCreateBitmapFromMemoryEx(
                       (unsigned int)this[14].lpVtbl,
                       v5,
                       (const struct PixelFormatInfo *)&lpVtbl_high,
                       v4,
                       (unsigned int)this[18].lpVtbl,
                       (unsigned __int8 *)this[17].lpVtbl,
                       this,
                       a2);
  v7 = BitmapFromMemory;
  if ( BitmapFromMemory < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapFromMemory, 0x126u);
  return v7;
}
