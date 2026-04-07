/*
 * XREFs of ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x180015AE4
 * Callers:
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180013CAC (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180016574 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x18001821C (-ValidateResources@CText@@AEAAJXZ.c)
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x18002988C (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008C6E8 (-_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002ADF0 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPopInstruction::Create(struct CPopInstruction **a1)
{
  unsigned int v2; // ebx
  void *(*v3)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  struct CPopInstruction *v4; // rax

  v2 = 0;
  v3 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v3 == WPF::ProcessHeapImpl::AllocClear )
    v4 = (struct CPopInstruction *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x10uLL);
  else
    v4 = (struct CPopInstruction *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v3)(
                                     WPF::g_pProcessHeap,
                                     16LL);
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 1;
    *(_QWORD *)v4 = &CPopInstruction::`vftable';
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    *a1 = v4;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Cu);
  }
  return v2;
}
