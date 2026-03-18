/*
 * XREFs of ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x1800AD988
 * Callers:
 *     ?UpdateNodeCVIRenderTarget@CDrawingContext@@QEAAXPEBVCVisualTree@@PEAVCVisual@@PEAVCCachedVisualImage@@_NAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x180003688 (-UpdateNodeCVIRenderTarget@CDrawingContext@@QEAAXPEBVCVisualTree@@PEAVCVisual@@PEAVCCachedVisual.c)
 *     ?BeginWalk@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@_N@Z @ 0x18000D510 (-BeginWalk@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@_N@Z.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x18005FC60 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800A258C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800A2644 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CThreadContext::RegisterGraphWalkRoot(void *a1)
{
  _QWORD *Value; // rbx
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rdx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  int v10; // r9d
  unsigned int v11; // [rsp+20h] [rbp-18h]

  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v9 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                     WPF::g_pProcessHeap,
                     8LL);
    Value = v9;
    if ( v9 )
      *v9 = 0LL;
    else
      Value = 0LL;
    if ( !Value )
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x41u);
      v11 = 107;
LABEL_18:
      v10 = v6;
LABEL_20:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v11);
      return v6;
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, Value);
  }
  if ( (*Value & 2) != 0 )
    v3 = *(_QWORD *)(*Value & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v3 = *Value & 1LL;
  v4 = 0LL;
  if ( v3 )
  {
    while ( a1 != (void *)CPtrArrayBase::operator[](Value, v4) )
    {
      v4 = v8 + 1;
      if ( v4 >= v3 )
        goto LABEL_5;
    }
    v6 = -2147467260;
    v11 = 118;
    goto LABEL_18;
  }
LABEL_5:
  v5 = CPtrArrayBase::InsertAt((CPtrArrayBase *)Value, (__int64)a1, v3);
  v6 = v5;
  if ( v5 < 0 )
  {
    v11 = 123;
    v10 = v5;
    goto LABEL_20;
  }
  return v6;
}
