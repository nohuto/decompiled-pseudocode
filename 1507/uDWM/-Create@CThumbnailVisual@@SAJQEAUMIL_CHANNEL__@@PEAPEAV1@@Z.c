/*
 * XREFs of ?Create@CThumbnailVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001225C
 * Callers:
 *     ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x180012000 (-EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CThumbnailVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180014660 (-Initialize@CThumbnailVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ??0CThumbnailVisual@@IEAA@XZ @ 0x180014840 (--0CThumbnailVisual@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180028470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CThumbnailVisual::Create(struct MIL_CHANNEL__ *const a1, struct CThumbnailVisual **a2)
{
  void *(*v4)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rdi
  CThumbnailVisual *v5; // rax
  CThumbnailVisual *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi

  if ( !a2 )
  {
    v8 = -2147024809;
LABEL_15:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x2Bu);
    return v8;
  }
  v4 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = (CThumbnailVisual *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x218uLL);
  else
    v5 = (CThumbnailVisual *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v4)(WPF::g_pProcessHeap, 536LL);
  if ( v5 )
    v6 = CThumbnailVisual::CThumbnailVisual(v5);
  else
    v6 = 0LL;
  if ( !v6 )
  {
    v8 = -2147024882;
    goto LABEL_15;
  }
  v7 = CThumbnailVisual::Initialize(v6, a1);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x2Bu);
  }
  else
  {
    *a2 = v6;
    v6 = 0LL;
  }
  if ( v6 )
    CBaseObject::Release(v6);
  return v8;
}
