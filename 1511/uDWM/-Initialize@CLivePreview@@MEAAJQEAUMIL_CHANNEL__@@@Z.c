/*
 * XREFs of ?Initialize@CLivePreview@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x1800439F0
 * Callers:
 *     ?Create@CLivePreview@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180043860 (-Create@CLivePreview@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x1800222C0 (-Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?_EnsureResources@CLivePreview@@AEAAJXZ @ 0x180043904 (-_EnsureResources@CLivePreview@@AEAAJXZ.c)
 *     ??0CLivePreviewTimeline@@QEAA@XZ @ 0x180043B9C (--0CLivePreviewTimeline@@QEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CLivePreview::Initialize(CLivePreview *this, struct MIL_CHANNEL__ *const a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  CLivePreviewTimeline *v5; // rax
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v3 = CVisual::Initialize(this, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    v7 = 73;
LABEL_11:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, v7);
    return v4;
  }
  v5 = (CLivePreviewTimeline *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 16LL))(
                                 WPF::g_pProcessHeap,
                                 96LL);
  if ( v5 )
    v5 = CLivePreviewTimeline::CLivePreviewTimeline(v5);
  *((_QWORD *)this + 56) = v5;
  if ( !v5 )
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x4Cu);
    return v4;
  }
  v3 = CLivePreview::_EnsureResources(this);
  v4 = v3;
  if ( v3 < 0 )
  {
    v7 = 78;
    goto LABEL_11;
  }
  return v4;
}
