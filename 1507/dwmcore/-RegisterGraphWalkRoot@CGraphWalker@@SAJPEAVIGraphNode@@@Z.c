/*
 * XREFs of ?RegisterGraphWalkRoot@CGraphWalker@@SAJPEAVIGraphNode@@@Z @ 0x18000EC84
 * Callers:
 *     ?UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z @ 0x18001F774 (-UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18004BE00 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x18000ED10 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x18001AF98 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ??ACPtrArrayBase@@IEAA_K_K@Z @ 0x18001B258 (--ACPtrArrayBase@@IEAA_K_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CGraphWalker::RegisterGraphWalkRoot(struct IGraphNode *a1)
{
  int Current; // eax
  unsigned int v3; // ebx
  CPtrArrayBase *v4; // r10
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rdx
  __int64 v8; // rdx
  unsigned int v9; // [rsp+20h] [rbp-18h]
  struct CThreadContext *v10; // [rsp+48h] [rbp+10h] BYREF

  Current = CThreadContext::GetCurrent(&v10);
  v3 = Current;
  if ( Current < 0 )
  {
    v9 = 371;
    goto LABEL_14;
  }
  v4 = v10;
  if ( (*(_QWORD *)v10 & 2) != 0 )
    v5 = *(_QWORD *)(*(_QWORD *)v10 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v5 = *(_QWORD *)v10 & 1LL;
  v6 = 0LL;
  if ( !v5 )
  {
LABEL_5:
    Current = CPtrArrayBase::InsertAt(v4, (unsigned __int64)a1, v5);
    v3 = Current;
    if ( Current >= 0 )
      return v3;
    v9 = 387;
LABEL_14:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Current, v9);
    return v3;
  }
  while ( a1 != (struct IGraphNode *)CPtrArrayBase::operator[](v4, v6) )
  {
    v6 = v8 + 1;
    if ( v6 >= v5 )
      goto LABEL_5;
  }
  v3 = -2147467260;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467260, 0x17Eu);
  return v3;
}
