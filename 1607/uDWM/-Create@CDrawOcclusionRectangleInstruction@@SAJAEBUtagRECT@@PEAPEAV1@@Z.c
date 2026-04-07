/*
 * XREFs of ?Create@CDrawOcclusionRectangleInstruction@@SAJAEBUtagRECT@@PEAPEAV1@@Z @ 0x180037B54
 * Callers:
 *     ?_AddOcclusionInstruction@CAnimatedTransitionVisual@@IEAAJAEBUtagRECT@@@Z @ 0x180013C28 (-_AddOcclusionInstruction@CAnimatedTransitionVisual@@IEAAJAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002ADF0 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawOcclusionRectangleInstruction::Create(
        const struct tagRECT *a1,
        struct CDrawOcclusionRectangleInstruction **a2)
{
  unsigned int v4; // ebx
  void *(__fastcall *v5)(WPF::ProcessHeapImpl *, size_t); // rax
  struct CDrawOcclusionRectangleInstruction *v6; // rax
  __int128 v7; // xmm0

  v4 = 0;
  v5 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v5 == WPF::ProcessHeapImpl::AllocClear )
    v6 = (struct CDrawOcclusionRectangleInstruction *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x30uLL);
  else
    v6 = (struct CDrawOcclusionRectangleInstruction *)v5(WPF::g_pProcessHeap, 48LL);
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
