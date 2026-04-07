/*
 * XREFs of ?Initialize@CLivePreview@@MEAAJPEAUIDwmChannel@@@Z @ 0x180044DF0
 * Callers:
 *     ?Create@CLivePreview@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180044C78 (-Create@CLivePreview@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001F620 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?_EnsureResources@CLivePreview@@AEAAJXZ @ 0x180044D08 (-_EnsureResources@CLivePreview@@AEAAJXZ.c)
 *     ??0CLivePreviewTimeline@@QEAA@XZ @ 0x180044F8C (--0CLivePreviewTimeline@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLivePreview::Initialize(CLivePreview *this, struct IDwmChannel *a2)
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, v7);
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x4Cu);
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
