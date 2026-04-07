/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAXKQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800488A4
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180048824 (-Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z @ 0x18001CCC4 (-Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z.c)
 *     ?Initialize@CBitmapSource@@AEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18001CDA8 (-Initialize@CBitmapSource@@AEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIBitmapSource@@@Z @ 0x180041B8C (-Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_M.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CBitmapSource::Create(
        void *a1,
        unsigned int a2,
        struct MIL_CHANNEL__ *const a3,
        struct CBitmapSource **a4)
{
  int v6; // eax
  struct IBitmapSource *v7; // r14
  unsigned int v8; // edi
  __int64 v9; // rax
  CBitmapSource *v10; // rbx
  int v11; // eax
  int v12; // eax
  int v14; // r9d
  unsigned int v15; // [rsp+20h] [rbp-38h]
  enum DXGI_FORMAT v16; // [rsp+28h] [rbp-30h]
  enum DXGI_ALPHA_MODE v17; // [rsp+30h] [rbp-28h]
  struct IWICBitmap *v18; // [rsp+40h] [rbp-18h] BYREF
  struct IBitmapSource *v19; // [rsp+48h] [rbp-10h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  v6 = CCompressedSourceBitmap::Create(
         *((struct IWICImagingFactory **)CDesktopManager::s_pDesktopManagerInstance + 30),
         a1,
         a2,
         96.0,
         96.0,
         v16,
         v17,
         &v19);
  v7 = v19;
  v8 = v6;
  if ( v6 < 0 )
  {
    v15 = 136;
LABEL_18:
    v14 = v6;
LABEL_20:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, v15);
    goto LABEL_11;
  }
  v6 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, struct IWICBitmap **))v19)(
         v19,
         &GUID_00000121_a8f2_4877_ba0a_fd2b6645fb94,
         &v18);
  v8 = v6;
  if ( v6 < 0 )
  {
    v15 = 138;
    goto LABEL_18;
  }
  v9 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         104LL);
  v10 = (CBitmapSource *)v9;
  if ( v9 )
  {
    *(_QWORD *)(v9 + 16) = 0LL;
    *(_QWORD *)(v9 + 96) = 0LL;
    *(_DWORD *)(v9 + 8) = 1;
    *(_QWORD *)v9 = &CBitmapSource::`vftable';
    *(_DWORD *)(v9 + 80) = 0x80000000;
    *(_DWORD *)(v9 + 88) = 0x80000000;
    *(_DWORD *)(v9 + 84) = 0x80000000;
    *(_DWORD *)(v9 + 92) = 0x80000000;
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
  {
    v8 = -2147024882;
    v15 = 141;
    v14 = -2147024882;
    goto LABEL_20;
  }
  v11 = CBitmapSource::Initialize(v10, a3);
  v8 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x8Fu);
  }
  else
  {
    v12 = CBitmapSource::Update(v10, v18);
    v8 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x91u);
    }
    else
    {
      *a4 = v10;
      v10 = 0LL;
    }
  }
  if ( v10 )
    CBaseObject::Release(v10);
LABEL_11:
  if ( v18 )
    ((void (__fastcall *)(struct IWICBitmap *))v18->lpVtbl->Release)(v18);
  if ( v7 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
