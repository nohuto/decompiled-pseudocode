/*
 * XREFs of ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x1800AAB70
 * Callers:
 *     ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z @ 0x18000611C (-EndWalk@-$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x180052F20 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 *     ?UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z @ 0x1800555EC (-UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18007D530 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?RemoveAt@CPtrArrayBase@@IEAAX_K@Z @ 0x180067ACC (-RemoveAt@CPtrArrayBase@@IEAAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

void CThreadContext::UnregisterGraphWalkRoot(void)
{
  _QWORD *Value; // rbx
  __int64 v1; // rdx
  _QWORD *v2; // rax

  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v2 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                     WPF::g_pProcessHeap,
                     8LL);
    Value = v2;
    if ( v2 )
      *v2 = 0LL;
    else
      Value = 0LL;
    if ( !Value )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x41u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x8Cu);
      return;
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, Value);
  }
  if ( (*Value & 2) != 0 )
    v1 = *(_QWORD *)(*Value & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v1 = *Value & 1LL;
  CPtrArrayBase::RemoveAt((CPtrArrayBase *)Value, v1 - 1);
}
