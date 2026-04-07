/*
 * XREFs of ?Create@CBitmapSource@@SAJIIIIPEBXPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000503C
 * Callers:
 *     ?RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@22PEAX_K@Z @ 0x180004D7C (-RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@.c)
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x180077A70 (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x180077F58 (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 *     ?BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z @ 0x180079734 (-BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z.c)
 * Callees:
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180015814 (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSource::Create(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        const void *a5,
        struct IDwmChannel *a6,
        struct CBitmapSource **a7)
{
  struct IWICBitmap *v7; // rdi
  unsigned __int64 v9; // r11
  int v13; // eax
  const struct _MARGINS *v14; // rdx
  unsigned int v15; // ebx
  struct IWICBitmap *v16; // rcx
  unsigned int v18; // [rsp+20h] [rbp-40h]
  struct IWICBitmap *v19; // [rsp+50h] [rbp-10h] BYREF
  __int64 v20; // [rsp+58h] [rbp-8h] BYREF

  v19 = 0LL;
  v7 = 0LL;
  v20 = 0LL;
  v9 = 4LL * a1;
  if ( v9 > 0xFFFFFFFF )
  {
    v15 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x101u);
    goto LABEL_7;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, GUID *, _DWORD, unsigned int, const void *, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 28) + 160LL))(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28),
          a1,
          a2,
          &GUID_WICPixelFormat32bppPBGRA,
          v9,
          4 * a2 * a1,
          a5,
          &v19);
  v15 = v13;
  if ( v13 < 0 )
  {
    v18 = 267;
  }
  else
  {
    v16 = v19;
    if ( !v19 )
    {
      v15 = -2147024890;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0x10Cu);
      goto LABEL_7;
    }
    if ( a3 == a1 && a4 == a2 )
    {
LABEL_6:
      v13 = CBitmapSource::Create(v16, v14, a6, a7);
      v15 = v13;
      if ( v13 >= 0 )
        goto LABEL_7;
      v18 = 290;
      goto LABEL_28;
    }
    v19 = 0LL;
    v7 = v16;
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 28)
                                                       + 88LL))(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28),
            &v20);
    v15 = v13;
    if ( v13 >= 0 )
    {
      if ( !v20 )
      {
        v15 = -2147024890;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0x114u);
        goto LABEL_7;
      }
      v13 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmap *, _QWORD, _QWORD, int))(*(_QWORD *)v20 + 64LL))(
              v20,
              v7,
              a3,
              a4,
              1);
      v15 = v13;
      if ( v13 >= 0 )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                           + 28)
                                                                                        + 144LL))(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28),
                v20,
                2LL,
                &v19);
        v15 = v13;
        if ( v13 >= 0 )
        {
          v16 = v19;
          if ( !v19 )
          {
            v15 = -2147024890;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0x119u);
            goto LABEL_7;
          }
          goto LABEL_6;
        }
        v18 = 280;
      }
      else
      {
        v18 = 278;
      }
    }
    else
    {
      v18 = 275;
    }
  }
LABEL_28:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v18);
LABEL_7:
  if ( v19 )
    ((void (__fastcall *)(struct IWICBitmap *))v19->lpVtbl->Release)(v19);
  if ( v7 )
    ((void (__fastcall *)(struct IWICBitmap *))v7->lpVtbl->Release)(v7);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  return v15;
}
