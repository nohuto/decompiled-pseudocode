/*
 * XREFs of ?Create@CBitmapSource@@SAJIIIIPEBXQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180011734
 * Callers:
 *     ?RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@22PEAX_K@Z @ 0x18000AED0 (-RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@.c)
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x180075E84 (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x180076780 (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 *     ?BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z @ 0x180078624 (-BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180018438 (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CBitmapSource::Create(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        const void *a5,
        struct MIL_CHANNEL__ *const a6,
        struct CBitmapSource **a7)
{
  struct IWICBitmap *v7; // r14
  unsigned __int64 v9; // r15
  int v11; // eax
  const struct _MARGINS *v12; // rdx
  unsigned int v13; // edi
  struct IWICBitmap *v14; // rcx
  unsigned int v16; // [rsp+20h] [rbp-30h]
  struct IWICBitmap *v17; // [rsp+40h] [rbp-10h] BYREF
  __int64 v18; // [rsp+48h] [rbp-8h] BYREF

  v17 = 0LL;
  v7 = 0LL;
  v18 = 0LL;
  v9 = 4LL * a1;
  if ( v9 > 0xFFFFFFFF )
  {
    v13 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x12Bu);
    goto LABEL_7;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, GUID *, _DWORD, unsigned int, const void *, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 30) + 160LL))(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30),
          a1,
          a2,
          &GUID_WICPixelFormat32bppPBGRA,
          v9,
          4 * a2 * a1,
          a5,
          &v17);
  v13 = v11;
  if ( v11 < 0 )
  {
    v16 = 309;
  }
  else
  {
    v14 = v17;
    if ( !v17 )
    {
      v13 = -2147024890;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0x136u);
      goto LABEL_7;
    }
    if ( a3 == a1 && a4 == a2 )
    {
LABEL_6:
      v11 = CBitmapSource::Create(v14, v12, a6, a7);
      v13 = v11;
      if ( v11 >= 0 )
        goto LABEL_7;
      v16 = 332;
      goto LABEL_28;
    }
    v7 = v17;
    v17 = 0LL;
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 30)
                                                       + 88LL))(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30),
            &v18);
    v13 = v11;
    if ( v11 >= 0 )
    {
      if ( !v18 )
      {
        v13 = -2147024890;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0x13Eu);
        goto LABEL_7;
      }
      v11 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmap *, _QWORD, _QWORD, int))(*(_QWORD *)v18 + 64LL))(
              v18,
              v7,
              a3,
              a4,
              1);
      v13 = v11;
      if ( v11 >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                           + 30)
                                                                                        + 144LL))(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30),
                v18,
                2LL,
                &v17);
        v13 = v11;
        if ( v11 >= 0 )
        {
          v14 = v17;
          if ( !v17 )
          {
            v13 = -2147024890;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0x143u);
            goto LABEL_7;
          }
          goto LABEL_6;
        }
        v16 = 322;
      }
      else
      {
        v16 = 320;
      }
    }
    else
    {
      v16 = 317;
    }
  }
LABEL_28:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v16);
LABEL_7:
  if ( v17 )
    ((void (__fastcall *)(struct IWICBitmap *))v17->lpVtbl->Release)(v17);
  if ( v7 )
    ((void (__fastcall *)(struct IWICBitmap *))v7->lpVtbl->Release)(v7);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return v13;
}
