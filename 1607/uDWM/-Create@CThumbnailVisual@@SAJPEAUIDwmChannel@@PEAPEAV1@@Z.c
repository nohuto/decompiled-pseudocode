/*
 * XREFs of ?Create@CThumbnailVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18003FDD0
 * Callers:
 *     ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x18003FB80 (-EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ?Initialize@CThumbnailVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800174E0 (-Initialize@CThumbnailVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ??0CThumbnailVisual@@IEAA@XZ @ 0x1800176A8 (--0CThumbnailVisual@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002ADF0 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CThumbnailVisual::Create(struct IDwmChannel *a1, struct CThumbnailVisual **a2)
{
  void *(__fastcall *v4)(WPF::ProcessHeapImpl *, size_t); // rax
  CThumbnailVisual *v5; // rax
  CThumbnailVisual *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi

  if ( !a2 )
  {
    v8 = -2147024809;
LABEL_16:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x2Bu);
    return v8;
  }
  v4 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = (CThumbnailVisual *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x218uLL);
  else
    v5 = (CThumbnailVisual *)v4(WPF::g_pProcessHeap, 536LL);
  if ( v5 )
    v6 = CThumbnailVisual::CThumbnailVisual(v5);
  else
    v6 = 0LL;
  if ( !v6 )
  {
    v8 = -2147024882;
    goto LABEL_16;
  }
  v7 = CThumbnailVisual::Initialize(v6, a1);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x2Bu);
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
