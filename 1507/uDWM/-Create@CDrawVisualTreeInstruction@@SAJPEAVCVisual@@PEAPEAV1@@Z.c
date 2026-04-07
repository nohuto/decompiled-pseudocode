/*
 * XREFs of ?Create@CDrawVisualTreeInstruction@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800350D8
 * Callers:
 *     ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x18003472C (-UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180028470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CDrawVisualTreeInstruction::Create(struct CVisual *a1, struct CDrawVisualTreeInstruction **a2)
{
  void *(__fastcall *v4)(WPF::ProcessHeapImpl *, size_t); // rsi
  _DWORD *v5; // rax
  unsigned int v6; // ebx

  v4 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x18uLL);
  else
    v5 = (_DWORD *)v4(WPF::g_pProcessHeap, 24LL);
  v6 = 0;
  if ( v5 )
  {
    v5[2] = 1;
    *(_QWORD *)v5 = &CDrawVisualTreeInstruction::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    *((_QWORD *)v5 + 2) = a1;
    if ( a1 )
      _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
    *a2 = (struct CDrawVisualTreeInstruction *)v5;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x2Cu);
  }
  return v6;
}
