/*
 * XREFs of ?Initialize@CLivePreview@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180045D00
 * Callers:
 *     ?Create@CLivePreview@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180045B70 (-Create@CLivePreview@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18001CF40 (-Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?_EnsureResources@CLivePreview@@AEAAJXZ @ 0x180045C14 (-_EnsureResources@CLivePreview@@AEAAJXZ.c)
 *     ?DisableZBuffer@CVisual@@QEAAXXZ @ 0x180046CDC (-DisableZBuffer@CVisual@@QEAAXXZ.c)
 *     ??0CLivePreviewTimeline@@QEAA@XZ @ 0x180046D24 (--0CLivePreviewTimeline@@QEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CLivePreview::Initialize(CBaseObject **this, struct MIL_CHANNEL__ *const a2)
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
LABEL_12:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, v7);
    return v4;
  }
  v5 = (CLivePreviewTimeline *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 16LL))(
                                 WPF::g_pProcessHeap,
                                 96LL);
  if ( v5 )
    v5 = CLivePreviewTimeline::CLivePreviewTimeline(v5);
  this[56] = v5;
  if ( !v5 )
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x4Cu);
    return v4;
  }
  v3 = CLivePreview::_EnsureResources((CLivePreview *)this);
  v4 = v3;
  if ( v3 < 0 )
  {
    v7 = 78;
    goto LABEL_12;
  }
  CVisual::DisableZBuffer((CVisual *)this);
  return v4;
}
