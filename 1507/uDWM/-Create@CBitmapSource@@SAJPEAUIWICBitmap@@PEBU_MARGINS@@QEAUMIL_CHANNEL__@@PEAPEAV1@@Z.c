/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180012B7C
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180013474 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x180016150 (-ValidateResources@CText@@AEAAJXZ.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18006BA3C (-Create@CBitmapSource@@SAJIIIIPEBXQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z @ 0x1800175D4 (-Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z.c)
 *     ?Initialize@CBitmapSource@@AEAAJQEAUMIL_CHANNEL__@@@Z @ 0x1800176B8 (-Initialize@CBitmapSource@@AEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180028470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CBitmapSource::Create(
        struct IWICBitmap *a1,
        const struct _MARGINS *a2,
        struct MIL_CHANNEL__ *const a3,
        struct CBitmapSource **a4)
{
  void *(*v7)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rdi
  CBitmapSource *v8; // rax
  CBitmapSource *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax

  v7 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v7 == WPF::ProcessHeapImpl::AllocClear )
    v8 = (CBitmapSource *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x68uLL);
  else
    v8 = (CBitmapSource *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v7)(WPF::g_pProcessHeap, 104LL);
  v9 = v8;
  if ( v8 )
  {
    *((_QWORD *)v8 + 2) = 0LL;
    *((_QWORD *)v8 + 12) = 0LL;
    *((_DWORD *)v8 + 2) = 1;
    *(_QWORD *)v8 = &CBitmapSource::`vftable';
    *((_DWORD *)v8 + 20) = 0x80000000;
    *((_DWORD *)v8 + 22) = 0x80000000;
    *((_DWORD *)v8 + 21) = 0x80000000;
    *((_DWORD *)v8 + 23) = 0x80000000;
    v10 = CBitmapSource::Initialize(v8, a3);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0xD4u);
    }
    else
    {
      v12 = CBitmapSource::Update(v9, a1);
      v11 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0xD6u);
      }
      else
      {
        *a4 = v9;
        v9 = 0LL;
      }
    }
    if ( v9 )
      CBaseObject::Release(v9);
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0xD2u);
  }
  return v11;
}
