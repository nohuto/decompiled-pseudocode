/*
 * XREFs of ?GetD2D1CommandListForContext@CAtlasedRects@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bitmap@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18002540C
 * Callers:
 *     ?DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z @ 0x18003E8D0 (-DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z.c)
 * Callees:
 *     ?CreateNewD2DCommandList@CAtlasedRects@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bitmap@@PEAPEAVCAtlasedRectsCommandList@@@Z @ 0x180025620 (-CreateNewD2DCommandList@CAtlasedRects@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bit.c)
 *     ?GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x180025E58 (-GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseD2DCommandList@CAtlasedRects@@AEAAXXZ @ 0x1800F8FBC (-ReleaseD2DCommandList@CAtlasedRects@@AEAAXXZ.c)
 */

__int64 __fastcall CAtlasedRects::GetD2D1CommandListForContext(
        CAtlasedRects *this,
        struct ID2DContextOwner *a2,
        struct ID2DContext *a3,
        struct ID2D1Bitmap *a4,
        struct ID2D1PrivateCompositorCommandList **a5)
{
  struct ID2D1PrivateCompositorCommandList **v5; // r14
  CD2DCommandList **v6; // r10
  struct ID2DContextOwner *v7; // rdx
  __int64 v11; // r9
  __int64 v12; // r8
  int ID2DCommandList; // eax
  unsigned int v14; // ebx
  int v16; // eax
  struct CAtlasedRectsCommandList *v17; // [rsp+48h] [rbp+10h] BYREF

  v17 = a2;
  v5 = a5;
  v6 = 0LL;
  v7 = 0LL;
  *a5 = 0LL;
  if ( !*((_DWORD *)this + 24) )
  {
LABEL_6:
    v17 = (struct CAtlasedRectsCommandList *)v6;
    if ( v6 )
      goto LABEL_7;
    goto LABEL_9;
  }
  v11 = *((_QWORD *)this + 9);
  while ( 1 )
  {
    v12 = *(_QWORD *)(v11 + 8LL * (_QWORD)v7);
    if ( a3 == *(struct ID2DContext **)(*(_QWORD *)(*(_QWORD *)(v12 + 24) + 24LL) + 16LL) )
      break;
    v7 = (struct ID2DContextOwner *)(unsigned int)((_DWORD)v7 + 1);
    if ( (unsigned int)v7 >= *((_DWORD *)this + 24) )
      goto LABEL_6;
  }
  if ( *(struct ID2D1Bitmap **)(v12 + 16) == a4 )
  {
    v6 = *(CD2DCommandList ***)(v11 + 8LL * (_QWORD)v7);
    goto LABEL_6;
  }
  CAtlasedRects::ReleaseD2DCommandList(this);
  v17 = 0LL;
LABEL_9:
  v16 = CAtlasedRects::CreateNewD2DCommandList(this, v7, a3, a4, &v17);
  v14 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x158u);
    return v14;
  }
  v6 = (CD2DCommandList **)v17;
LABEL_7:
  ID2DCommandList = CD2DCommandList::GetID2DCommandList(v6[3], 0LL, v5);
  v14 = ID2DCommandList;
  if ( ID2DCommandList < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ID2DCommandList, 0x15Bu);
  return v14;
}
