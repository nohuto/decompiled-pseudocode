/*
 * XREFs of ?ProcessReadyFlipExImages@CWindowNode@@AEAAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x180079B20
 * Callers:
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007C1A0 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?DiscardOutdatedFlipExImages@CWindowNode@@AEAAXXZ @ 0x180104D9C (-DiscardOutdatedFlipExImages@CWindowNode@@AEAAXXZ.c)
 * Callees:
 *     ?HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180008F80 (-HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CWindowNode::ProcessReadyFlipExImages(CWindowNode *this, struct CCompositionSurfaceBitmap **a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 i; // r15
  __int64 v7; // rbx
  unsigned int v8; // ebx
  unsigned int v9; // ebx

  if ( a2 )
    *a2 = 0LL;
  v4 = (unsigned int)(*((_DWORD *)this + 308) - 1);
  v5 = (int)v4;
  if ( (int)v4 >= 0 )
  {
    while ( !CCompositionSurfaceBitmap::HasContent((CCompositionSurfaceBitmap *)(*(_QWORD *)(*((_QWORD *)this + 151)
                                                                                           + 8 * v5)
                                                                               + 40LL)) )
    {
      v4 = (unsigned int)(v4 - 1);
      if ( --v5 < 0 )
        return;
    }
    if ( a2 )
      *a2 = *(struct CCompositionSurfaceBitmap **)(*((_QWORD *)this + 151) + 8 * v4);
    for ( i = 0LL; i < v5; ++i )
    {
      v7 = *((_QWORD *)this + 151);
      CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v7 + 8 * i));
      *(_QWORD *)(v7 + 8 * i) = 0LL;
    }
    if ( a2 )
      v4 = (unsigned int)(v4 + 1);
    if ( (_DWORD)v4 )
    {
      v8 = *((_DWORD *)this + 308);
      if ( (unsigned int)v4 > v8 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x236u);
      }
      else
      {
        v9 = v8 - v4;
        if ( v9 )
          memmove(*((void **)this + 151), (const void *)(*((_QWORD *)this + 151) + 8 * v4), 8LL * v9);
        *((_DWORD *)this + 308) = v9;
      }
    }
  }
}
