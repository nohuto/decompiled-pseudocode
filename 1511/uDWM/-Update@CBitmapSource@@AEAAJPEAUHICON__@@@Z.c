/*
 * XREFs of ?Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z @ 0x18001CBEC
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEAUHICON__@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18003C9AC (-Create@CBitmapSource@@SAJPEAUHICON__@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z @ 0x18001CCC4 (-Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z.c)
 *     ?CreateFormatConverterToPBGRA@@YAJPEAUIWICBitmapSource@@PEAPEAUIWICBitmap@@@Z @ 0x18003A370 (-CreateFormatConverterToPBGRA@@YAJPEAUIWICBitmapSource@@PEAPEAUIWICBitmap@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?DoStackCapture@@YAXJI@Z @ 0x18004FE24 (-DoStackCapture@@YAXJI@Z.c)
 */

__int64 __fastcall CBitmapSource::Update(CBitmapSource *this, HICON a2)
{
  int v3; // eax
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  struct IWICBitmap *v8; // [rsp+60h] [rbp+18h] BYREF
  struct IWICBitmapSource *v9; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, HICON, struct IWICBitmapSource **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                               + 30)
                                                                            + 176LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30),
         a2,
         &v9);
  if ( v3 < 0 )
  {
    DoStackCapture(v3, 0x224u);
    v5 = 0;
  }
  else
  {
    v4 = CreateFormatConverterToPBGRA(v9, &v8);
    v5 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x232u);
    }
    else
    {
      v6 = CBitmapSource::Update(this, v8);
      v5 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x234u);
    }
  }
  if ( v8 )
    ((void (__fastcall *)(struct IWICBitmap *))v8->lpVtbl->Release)(v8);
  if ( v9 )
    ((void (__fastcall *)(struct IWICBitmapSource *))v9->lpVtbl->Release)(v9);
  return v5;
}
