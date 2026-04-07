/*
 * XREFs of ?Create@CDrawOcclusionRectangleInstruction@@SAJAEBUtagRECT@@PEAPEAV1@@Z @ 0x18000E754
 * Callers:
 *     ?_AddOcclusionInstruction@CAnimatedTransitionVisual@@IEAAJAEBUtagRECT@@@Z @ 0x18000C880 (-_AddOcclusionInstruction@CAnimatedTransitionVisual@@IEAAJAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002B470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CDrawOcclusionRectangleInstruction::Create(
        const struct tagRECT *a1,
        struct CDrawOcclusionRectangleInstruction **a2)
{
  unsigned int v4; // ebx
  void *(*v5)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rsi
  struct CDrawOcclusionRectangleInstruction *v6; // rax
  __int128 v7; // xmm0

  v4 = 0;
  v5 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v5 == WPF::ProcessHeapImpl::AllocClear )
    v6 = (struct CDrawOcclusionRectangleInstruction *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x30uLL);
  else
    v6 = (struct CDrawOcclusionRectangleInstruction *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v5)(
                                                        WPF::g_pProcessHeap,
                                                        48LL);
  if ( v6 )
  {
    *((_DWORD *)v6 + 2) = 1;
    *(_QWORD *)v6 = &CDrawOcclusionRectangleInstruction::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v7 = (__int128)*a1;
    *a2 = v6;
    *((_OWORD *)v6 + 2) = v7;
    *((_QWORD *)v6 + 2) = 0LL;
    *((_QWORD *)v6 + 3) = 0LL;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x47u);
  }
  return v4;
}
