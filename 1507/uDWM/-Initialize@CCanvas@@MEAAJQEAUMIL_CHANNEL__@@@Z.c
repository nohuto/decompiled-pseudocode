/*
 * XREFs of ?Initialize@CCanvas@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180019970
 * Callers:
 *     ?Create@CCanvas@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180015C90 (-Create@CCanvas@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Initialize@CAtlasedRectsVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18001B790 (-Initialize@CAtlasedRectsVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?Initialize@CAccent@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180036B70 (-Initialize@CAccent@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180028470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CCanvas::Initialize(CCanvas *this, struct MIL_CHANNEL__ *const a2)
{
  void *(*v4)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rdi
  CBaseObject *v5; // rax
  CBaseObject *v6; // rbx
  int v7; // eax
  int v8; // esi
  unsigned int v9; // edi

  *((_QWORD *)this + 2) = 0LL;
  v4 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = (CBaseObject *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x20uLL);
  else
    v5 = (CBaseObject *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v4)(WPF::g_pProcessHeap, 32LL);
  v6 = v5;
  if ( !v5 )
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x27u);
LABEL_14:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x69u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x27u);
    return v9;
  }
  *((_QWORD *)v5 + 2) = 0LL;
  *((_DWORD *)v5 + 2) = 1;
  *(_QWORD *)v5 = &CResource::`vftable';
  *((_QWORD *)v5 + 2) = a2;
  v7 = MilResource_CreateOrAddRefOnChannel(a2, 31LL, (char *)v5 + 24);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x44u);
  }
  else if ( !*((_DWORD *)v6 + 6) )
  {
    v9 = -2147024882;
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x45u);
    goto LABEL_17;
  }
  v9 = v8;
  if ( v8 >= 0 )
  {
    *((_QWORD *)this + 2) = v6;
    v6 = 0LL;
    goto LABEL_8;
  }
LABEL_17:
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x29u);
LABEL_8:
  if ( v6 )
    CBaseObject::Release(v6);
  if ( v8 < 0 )
    goto LABEL_14;
  return v9;
}
