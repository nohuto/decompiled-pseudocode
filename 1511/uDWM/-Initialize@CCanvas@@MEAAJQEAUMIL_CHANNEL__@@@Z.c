/*
 * XREFs of ?Initialize@CCanvas@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18001F8D0
 * Callers:
 *     ?Initialize@CAccent@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180015800 (-Initialize@CAccent@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?Create@CCanvas@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001CED0 (-Create@CCanvas@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Initialize@CAtlasedRectsVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180020DF0 (-Initialize@CAtlasedRectsVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002B470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CCanvas::Initialize(CCanvas *this, struct MIL_CHANNEL__ *const a2)
{
  void *(*v4)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rdi
  CBaseObject *v5; // rax
  CBaseObject *v6; // rbx
  int v7; // eax
  int v8; // edi
  unsigned int v9; // esi

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
    goto LABEL_15;
  }
  *((_DWORD *)v5 + 2) = 1;
  *((_QWORD *)v5 + 2) = a2;
  *(_QWORD *)v5 = &CResource::`vftable';
  v7 = MilResource_CreateOrAddRefOnChannel(a2, 31LL, (char *)v5 + 24);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x44u);
  }
  else if ( !*((_DWORD *)v6 + 6) )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x45u);
    v9 = -2147024882;
    goto LABEL_13;
  }
  v9 = v8;
  if ( v8 >= 0 )
  {
    *((_QWORD *)this + 2) = v6;
    goto LABEL_8;
  }
LABEL_13:
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x29u);
  CBaseObject::Release(v6);
LABEL_8:
  if ( v8 < 0 )
  {
LABEL_15:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x69u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x27u);
  }
  return v9;
}
