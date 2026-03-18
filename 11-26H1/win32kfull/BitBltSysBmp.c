/*
 * XREFs of BitBltSysBmp @ 0x140124BEC
 * Callers:
 *     xxxDrawCaptionBar @ 0x140122F88 (xxxDrawCaptionBar.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x140125A40 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     xxxTrackCaptionButton @ 0x140149F00 (xxxTrackCaptionButton.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1401F04C0 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     xxxRealDrawMenuItem @ 0x1401F9D14 (xxxRealDrawMenuItem.c)
 *     DrawSize @ 0x140258578 (DrawSize.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1402F5658 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     MNDrawArrow @ 0x1402FA3FC (MNDrawArrow.c)
 * Callees:
 *     GreBitBltInternal @ 0x1400B5980 (GreBitBltInternal.c)
 *     IS_UI_LANGID @ 0x140124878 (IS_UI_LANGID.c)
 *     GetOemBitmapInfoForDpi @ 0x140124A34 (GetOemBitmapInfoForDpi.c)
 *     GetOemBitmapInfo @ 0x140124E90 (GetOemBitmapInfo.c)
 *     GreGetLayout @ 0x1401264BC (GreGetLayout.c)
 *     GreStretchBlt @ 0x14016B458 (GreStretchBlt.c)
 *     ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x1401C0154 (-PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z.c)
 *     GreGetDCDpiScaleValue @ 0x1401C0220 (GreGetDCDpiScaleValue.c)
 */

__int64 __fastcall BitBltSysBmp(HDC a1, int a2, int a3, unsigned int a4, int a5)
{
  __int16 *OemBitmapInfoForDpi; // rdi
  __int16 *OemBitmapInfo; // rbp
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  HDC v14; // r14
  int v15; // r9d
  unsigned int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v21; // r15d
  int v22; // r8d
  int v23; // ecx
  int v24; // r9d
  int DCDpiScaleValue; // eax

  OemBitmapInfoForDpi = 0LL;
  OemBitmapInfo = (__int16 *)GetOemBitmapInfo(a4);
  if ( (W32GetCurrentThreadDpiAwarenessContext(v11) & 0xF) == 0 )
  {
    DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
    if ( DCDpiScaleValue > 1 )
      OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(a4, 96 * DCDpiScaleValue);
  }
  if ( a5 )
    v14 = PrepareHDCBITSBitmap((HDC)((unsigned __int64)a1 & -(__int64)(OemBitmapInfoForDpi != 0LL)));
  else
    v14 = *(HDC *)(*(_QWORD *)(W32GetUserSessionState(v13, v12) + 56968) + 64LL);
  if ( !v14 )
    return 0LL;
  v15 = OemBitmapInfo[2];
  if ( OemBitmapInfoForDpi )
    v16 = GreStretchBlt(
            a1,
            a2,
            a3,
            v15,
            OemBitmapInfo[3],
            v14,
            *OemBitmapInfoForDpi,
            OemBitmapInfoForDpi[1],
            OemBitmapInfoForDpi[2],
            OemBitmapInfoForDpi[3],
            0xCC0020u,
            0);
  else
    v16 = GreBitBltInternal(
            (Gre::Base *)a1,
            a2,
            a3,
            v15,
            OemBitmapInfo[3],
            (__int64)v14,
            *OemBitmapInfo,
            OemBitmapInfo[1],
            0xCC0020u,
            0,
            0);
  v17 = v16;
  if ( v16
    && ((unsigned int)IS_UI_LANGID()
     || *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v19, v18) + 19904) + 7012LL) == 1037)
    && (GreGetLayout(a1) & 1) != 0
    && a4 - 11 <= 2 )
  {
    v21 = a2 + 2;
    if ( a4 != 12 )
      v21 = a2;
    v22 = a3 + 2;
    v23 = OemBitmapInfo[3] - 4;
    v24 = OemBitmapInfo[2] - 4;
    if ( OemBitmapInfoForDpi )
      return (unsigned int)GreStretchBlt(
                             a1,
                             v21,
                             v22,
                             v24,
                             v23,
                             v14,
                             *OemBitmapInfoForDpi + 2,
                             OemBitmapInfoForDpi[1] + 2,
                             OemBitmapInfoForDpi[2] - 4,
                             OemBitmapInfoForDpi[3] - 4,
                             0x80CC0020,
                             0);
    else
      return (unsigned int)GreBitBltInternal(
                             (Gre::Base *)a1,
                             v21,
                             v22,
                             v24,
                             v23,
                             (__int64)v14,
                             *OemBitmapInfo + 2,
                             OemBitmapInfo[1] + 2,
                             0x80CC0020,
                             0,
                             0);
  }
  return v17;
}
