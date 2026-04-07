/*
 * XREFs of ?Create@CAtlasButton@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800078A0
 * Callers:
 *     ?Initialize@CButton@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18001A980 (-Initialize@CButton@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180028470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??0CAtlasedImage@@IEAA@XZ @ 0x1800293DC (--0CAtlasedImage@@IEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CAtlasButton::Create(struct MIL_CHANNEL__ *const a1, struct CAtlasButton **a2)
{
  unsigned int v2; // ebx
  void *(*v5)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rbp
  CAtlasedImage *v6; // rax
  __int64 v7; // rcx

  v2 = 0;
  if ( !a2 )
  {
    v2 = -2147024809;
LABEL_12:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0xC3u);
    return v2;
  }
  v5 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v5 == WPF::ProcessHeapImpl::AllocClear )
    v6 = (CAtlasedImage *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0xA8uLL);
  else
    v6 = (CAtlasedImage *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v5)(WPF::g_pProcessHeap, 168LL);
  if ( v6 )
  {
    CAtlasedImage::CAtlasedImage(v6);
    *(_QWORD *)(v7 + 136) = 0LL;
    *(_QWORD *)v7 = &CAtlasButton::`vftable';
    *(_QWORD *)(v7 + 144) = 0LL;
    *(_QWORD *)(v7 + 152) = 1LL;
    *(_BYTE *)(v7 + 160) = 0;
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
  {
    v2 = -2147024882;
    goto LABEL_12;
  }
  *(_QWORD *)(v7 + 104) = a1;
  *a2 = (struct CAtlasButton *)v7;
  return v2;
}
