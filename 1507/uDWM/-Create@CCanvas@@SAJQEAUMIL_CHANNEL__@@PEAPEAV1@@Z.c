/*
 * XREFs of ?Create@CCanvas@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180015C90
 * Callers:
 *     ?CloneVisualTree@CCanvas@@UEAAJPEAPEAVCVisual@@@Z @ 0x180019D00 (-CloneVisualTree@CCanvas@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180021314 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x1800213C0 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Initialize@CTopLevelWindow@@MEAAJQEAUMIL_CHANNEL__@@_N@Z @ 0x180024960 (-Initialize@CTopLevelWindow@@MEAAJQEAUMIL_CHANNEL__@@_N@Z.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x18003577C (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003A7BC (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CCanvas@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180019970 (-Initialize@CCanvas@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180028470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CCanvas::Create(struct MIL_CHANNEL__ *const a1, struct CCanvas **a2)
{
  void *(*v4)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rsi
  CBaseObject *v5; // rax
  CBaseObject *v6; // rbx
  __int64 result; // rax
  unsigned int v8; // esi

  if ( a2 )
  {
    v4 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
    if ( v4 == WPF::ProcessHeapImpl::AllocClear )
      v5 = (CBaseObject *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x108uLL);
    else
      v5 = (CBaseObject *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v4)(WPF::g_pProcessHeap, 264LL);
    v6 = v5;
    if ( v5 )
    {
      *((_DWORD *)v5 + 2) = 1;
      *((_QWORD *)v5 + 4) = &VisualCollection::`vftable';
      *((_QWORD *)v5 + 6) = 0LL;
      *((_QWORD *)v5 + 7) = 0LL;
      *((_QWORD *)v5 + 8) = 0LL;
      *((_DWORD *)v5 + 18) = 0;
      *((_QWORD *)v5 + 29) = 0LL;
      *((_QWORD *)v5 + 30) = 0LL;
      *((_QWORD *)v5 + 31) = 0LL;
      *((_DWORD *)v5 + 64) = 0;
      *((_QWORD *)v5 + 2) = 0LL;
      *((_QWORD *)v5 + 3) = 0LL;
      *((_QWORD *)v5 + 11) = 0LL;
      *((_QWORD *)v5 + 12) = 0LL;
      *((_QWORD *)v5 + 21) = 0x3FF0000000000000LL;
      *((_QWORD *)v5 + 20) = 0x3FF0000000000000LL;
      *((_QWORD *)v5 + 22) = 0x3FF0000000000000LL;
      *(_QWORD *)v5 = &CCanvas::`vftable';
      *((_DWORD *)v5 + 46) = -2;
      *((_QWORD *)v5 + 5) = v5;
      *((_DWORD *)v5 + 30) = 0x7FFFFFFF;
      *((_DWORD *)v5 + 32) = 0x7FFFFFFF;
      *((_DWORD *)v5 + 31) = 0x7FFFFFFF;
      *((_DWORD *)v5 + 33) = 0x7FFFFFFF;
      result = CCanvas::Initialize(v5, a1);
      v8 = result;
      if ( (int)result < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, result, 0x14u);
        CBaseObject::Release(v6);
        return v8;
      }
      else
      {
        *a2 = v6;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x14u);
      return 2147942414LL;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0x14u);
    return 2147942487LL;
  }
  return result;
}
