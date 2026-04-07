/*
 * XREFs of ?Create@CDrawOcclusionRectangleInstruction@@SAJAEBU_MARGINS@@PEAPEAV1@@Z @ 0x1800398D8
 * Callers:
 *     ?_AddOcclusionInstruction@CAccent@@IEAAJXZ @ 0x180036778 (-_AddOcclusionInstruction@CAccent@@IEAAJXZ.c)
 *     ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x18008F1E4 (-UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180028470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CDrawOcclusionRectangleInstruction::Create(
        const struct _MARGINS *a1,
        struct CDrawOcclusionRectangleInstruction **a2)
{
  unsigned int v4; // edi
  void *(__fastcall *v5)(WPF::ProcessHeapImpl *, size_t); // rsi
  _DWORD *v6; // rax
  _DWORD *v7; // rbx

  v4 = 0;
  v5 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v5 == WPF::ProcessHeapImpl::AllocClear )
    v6 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x30uLL);
  else
    v6 = (_DWORD *)v5(WPF::g_pProcessHeap, 48LL);
  v7 = v6;
  if ( v6 )
  {
    v6[2] = 1;
    *(_QWORD *)v6 = &CDrawOcclusionRectangleInstruction::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    *((struct _MARGINS *)v7 + 1) = *a1;
    SetRectEmpty((LPRECT)v7 + 2);
    *a2 = (struct CDrawOcclusionRectangleInstruction *)v7;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x2Cu);
  }
  return v4;
}
