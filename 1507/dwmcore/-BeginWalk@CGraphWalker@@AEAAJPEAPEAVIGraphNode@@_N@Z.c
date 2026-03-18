/*
 * XREFs of ?BeginWalk@CGraphWalker@@AEAAJPEAPEAVIGraphNode@@_N@Z @ 0x18005BE78
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18000A73C (--$WalkSubtree@VCHitTestContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTes.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800325D0 (--$WalkSubtree@VCOcclusionContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOccl.c)
 *     ?BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z @ 0x18014D19C (-BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z.c)
 * Callees:
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x18001AF98 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ??ACPtrArrayBase@@IEAA_K_K@Z @ 0x18001B258 (--ACPtrArrayBase@@IEAA_K_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CGraphWalker::BeginWalk(CGraphWalker *this, struct IGraphNode **a2, char a3)
{
  __int64 v3; // rbp
  unsigned int v4; // edi
  struct IGraphNode *v5; // r14
  _QWORD *Value; // rbx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rdx
  int v11; // eax
  int v12; // ebx
  __int64 result; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rax

  v3 = (__int64)*a2;
  v4 = 0;
  v5 = 0LL;
  if ( !a3 )
    goto LABEL_9;
  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v15 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                      WPF::g_pProcessHeap,
                      8LL);
    Value = v15;
    if ( v15 )
      *v15 = 0LL;
    else
      Value = 0LL;
    if ( !Value )
    {
      v12 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x41u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x173u);
      goto LABEL_7;
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, Value);
  }
  if ( (*Value & 2) != 0 )
    v9 = *(_QWORD *)(*Value & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v9 = *Value & 1LL;
  v10 = 0LL;
  if ( v9 )
  {
    while ( v3 != CPtrArrayBase::operator[](Value, v10) )
    {
      v10 = v14 + 1;
      if ( v10 >= v9 )
        goto LABEL_6;
    }
    v12 = -2147467260;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467260, 0x17Eu);
    v4 = -2147467260;
    goto LABEL_22;
  }
LABEL_6:
  v11 = CPtrArrayBase::InsertAt((CPtrArrayBase *)Value, v3, v9);
  v12 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x183u);
LABEL_7:
  v4 = v12;
  if ( v12 < 0 )
  {
LABEL_22:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x43u);
    goto LABEL_10;
  }
  v5 = (struct IGraphNode *)v3;
LABEL_9:
  *((_DWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 1) = v3;
LABEL_10:
  result = v4;
  *a2 = v5;
  return result;
}
