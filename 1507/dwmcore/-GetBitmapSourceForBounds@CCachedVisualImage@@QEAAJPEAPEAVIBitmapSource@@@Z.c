/*
 * XREFs of ?GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z @ 0x180052B18
 * Callers:
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180053790 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?GetBounds@CCachedVisualImage@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800532E0 (-GetBounds@CCachedVisualImage@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     ?Create@CBoundsBitmap@@SAJPEAVCImageSource@@PEAPEAV1@@Z @ 0x18005F1C4 (-Create@CBoundsBitmap@@SAJPEAVCImageSource@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180070C30 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

__int64 __fastcall CCachedVisualImage::GetBitmapSourceForBounds(CCachedVisualImage *this, struct IBitmapSource **a2)
{
  CMILCOMBase **v3; // rdi
  int Bounds; // eax
  unsigned int v5; // ebx
  CMILCOMBase *v6; // rcx
  float v7; // xmm0_4
  unsigned int v9; // [rsp+20h] [rbp-38h]
  float v10; // [rsp+34h] [rbp-24h]
  float v11[4]; // [rsp+38h] [rbp-20h] BYREF

  *a2 = 0LL;
  if ( *((_DWORD *)this + 30) )
  {
    v5 = -2147467263;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467263, 0x576u);
    return v5;
  }
  v3 = (CMILCOMBase **)((char *)this + 272);
  if ( *((_QWORD *)this + 34) )
  {
    Bounds = CCachedVisualImage::GetBounds((char *)this + 8, 0LL, 0LL, v11);
    v5 = Bounds;
    if ( Bounds >= 0 )
    {
      v6 = *v3;
      v7 = (float)(v11[3] - v11[1]) + 6291456.25;
      v10 = (float)(v11[2] - v11[0]) + 6291456.25;
      *((_DWORD *)v6 + 7) = (int)(LODWORD(v10) << 10) >> 11;
      *((_DWORD *)v6 + 6) = (int)(LODWORD(v7) << 10) >> 11;
      goto LABEL_5;
    }
    v9 = 1416;
LABEL_12:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, v9);
    return v5;
  }
  Bounds = CBoundsBitmap::Create(this, (struct CBoundsBitmap **)this + 34);
  v5 = Bounds;
  if ( Bounds < 0 )
  {
    v9 = 1407;
    goto LABEL_12;
  }
LABEL_5:
  Bounds = CMILCOMBase::InternalQueryInterface(*v3, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, (void **)a2);
  v5 = Bounds;
  if ( Bounds < 0 )
  {
    v9 = 1423;
    goto LABEL_12;
  }
  return v5;
}
