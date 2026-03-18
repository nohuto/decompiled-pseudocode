/*
 * XREFs of ?GetD2D1CommandListForContext@CAtlasedRects@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bitmap@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18009C564
 * Callers:
 *     ?DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z @ 0x1800691B0 (-DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateNewD2DCommandList@CAtlasedRects@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bitmap@@PEAPEAVCAtlasedRectsCommandList@@@Z @ 0x18009BE18 (-CreateNewD2DCommandList@CAtlasedRects@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bit.c)
 *     ?GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18009C698 (-GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList.c)
 *     ?ReleaseD2DCommandList@CAtlasedRects@@AEAAXXZ @ 0x18010DFE8 (-ReleaseD2DCommandList@CAtlasedRects@@AEAAXXZ.c)
 */

__int64 __fastcall CAtlasedRects::GetD2D1CommandListForContext(
        CAtlasedRects *this,
        struct ID2DContextOwner *a2,
        struct ID2DContext *a3,
        struct ID2D1Bitmap *a4,
        struct ID2D1PrivateCompositorCommandList **a5)
{
  struct ID2D1PrivateCompositorCommandList **v5; // r14
  unsigned int v7; // r9d
  CD2DCommandList **v8; // r10
  struct ID2DContextOwner *v9; // rdx
  __int64 v12; // r11
  __int64 v13; // r8
  int ID2DCommandList; // eax
  unsigned int v15; // ebx
  int v17; // eax
  struct CAtlasedRectsCommandList *v18; // [rsp+48h] [rbp+10h] BYREF

  v18 = a2;
  v5 = a5;
  v7 = *((_DWORD *)this + 42);
  v8 = 0LL;
  v9 = 0LL;
  *a5 = 0LL;
  if ( !v7 )
  {
LABEL_6:
    v18 = (struct CAtlasedRectsCommandList *)v8;
    if ( v8 )
      goto LABEL_7;
    goto LABEL_9;
  }
  v12 = *((_QWORD *)this + 18);
  while ( 1 )
  {
    v13 = *(_QWORD *)(v12 + 8LL * (_QWORD)v9);
    if ( a3 == *(struct ID2DContext **)(*(_QWORD *)(*(_QWORD *)(v13 + 24) + 24LL) + 24LL) )
      break;
    v9 = (struct ID2DContextOwner *)(unsigned int)((_DWORD)v9 + 1);
    if ( (unsigned int)v9 >= v7 )
      goto LABEL_6;
  }
  if ( *(struct ID2D1Bitmap **)(v13 + 16) == a4 )
  {
    v8 = *(CD2DCommandList ***)(v12 + 8LL * (_QWORD)v9);
    goto LABEL_6;
  }
  CAtlasedRects::ReleaseD2DCommandList(this);
  v18 = 0LL;
LABEL_9:
  v17 = CAtlasedRects::CreateNewD2DCommandList(this, v9, a3, a4, &v18);
  v15 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x158u);
    return v15;
  }
  v8 = (CD2DCommandList **)v18;
LABEL_7:
  ID2DCommandList = CD2DCommandList::GetID2DCommandList(v8[3], 0LL, v5);
  v15 = ID2DCommandList;
  if ( ID2DCommandList < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ID2DCommandList, 0x15Bu);
  return v15;
}
