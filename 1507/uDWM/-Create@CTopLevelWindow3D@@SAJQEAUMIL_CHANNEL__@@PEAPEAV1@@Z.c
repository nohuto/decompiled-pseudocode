/*
 * XREFs of ?Create@CTopLevelWindow3D@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800083A4
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002E0BC (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CTopLevelWindow3D@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180027EE0 (-Initialize@CTopLevelWindow3D@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ??0CTopLevelWindow3D@@IEAA@XZ @ 0x180027FDC (--0CTopLevelWindow3D@@IEAA@XZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180028470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::Create(struct MIL_CHANNEL__ *const a1, struct CTopLevelWindow3D **a2)
{
  void *(*v4)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rdi
  CTopLevelWindow3D *v5; // rax
  CTopLevelWindow3D *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi

  if ( !a2 )
  {
    v8 = -2147024809;
LABEL_15:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x41u);
    return v8;
  }
  v4 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = (CTopLevelWindow3D *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x1D8uLL);
  else
    v5 = (CTopLevelWindow3D *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v4)(WPF::g_pProcessHeap, 472LL);
  if ( v5 )
    v6 = CTopLevelWindow3D::CTopLevelWindow3D(v5);
  else
    v6 = 0LL;
  if ( !v6 )
  {
    v8 = -2147024882;
    goto LABEL_15;
  }
  v7 = CTopLevelWindow3D::Initialize(v6, a1);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x41u);
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
