/*
 * XREFs of ?Create@CText@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800085D0
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180023350 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CText@@AEAA@XZ @ 0x180016B20 (--0CText@@AEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18001CF40 (-Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180028470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CText::Create(struct MIL_CHANNEL__ *const a1, struct CText **a2)
{
  void *(*v4)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rdi
  CText *v5; // rax
  CVisual *v6; // rbx
  __int64 (__fastcall *v7)(CVisual *__hidden, struct MIL_CHANNEL__ *const); // rdi
  int v8; // eax
  unsigned int v9; // edi

  if ( !a2 )
  {
    v9 = -2147024809;
LABEL_17:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x2Du);
    return v9;
  }
  v4 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = (CText *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x1A0uLL);
  else
    v5 = (CText *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v4)(WPF::g_pProcessHeap, 416LL);
  if ( v5 )
    v6 = CText::CText(v5);
  else
    v6 = 0LL;
  if ( !v6 )
  {
    v9 = -2147024882;
    goto LABEL_17;
  }
  v7 = *(__int64 (__fastcall **)(CVisual *__hidden, struct MIL_CHANNEL__ *const))(*(_QWORD *)v6 + 8LL);
  if ( v7 == CVisual::Initialize )
    v8 = CVisual::Initialize(v6, a1);
  else
    v8 = v7(v6, a1);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x2Du);
  }
  else
  {
    *a2 = v6;
    v6 = 0LL;
  }
  if ( v6 )
    CBaseObject::Release(v6);
  return v9;
}
