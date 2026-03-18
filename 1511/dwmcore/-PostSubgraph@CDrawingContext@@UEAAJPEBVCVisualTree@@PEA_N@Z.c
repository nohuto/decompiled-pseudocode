/*
 * XREFs of ?PostSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800F36D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18003EDDC (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x180043690 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?PopStacksForNode@CDrawingContext@@AEAAJPEBVCVisual@@@Z @ 0x1800F37DC (-PopStacksForNode@CDrawingContext@@AEAAJPEBVCVisual@@@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEBAPEBUStackBackfaceVisibilityEntry@CDrawingContext@@XZ @ 0x1800FE284 (-GetTopByReference@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@.c)
 *     ?RedrawVisual@CDrawingContext@@AEAAJV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18010E8F8 (-RedrawVisual@CDrawingContext@@AEAAJV-$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z.c)
 */

__int64 __fastcall CDrawingContext::PostSubgraph(CDrawingContext *this, const struct CVisualTree *a2, bool *a3)
{
  unsigned int v4; // esi
  struct CVisual *CurrentVisual; // rax
  struct CVisual *v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  int v11; // eax
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF

  *a3 = 1;
  v4 = 0;
  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 8));
  v6 = CurrentVisual;
  if ( (*((_BYTE *)CurrentVisual + 74) & 0x10) == 0 )
  {
    if ( (*((_BYTE *)CurrentVisual + 73) & 0x40) != 0 )
    {
      v7 = *((_QWORD *)this - 3);
      v8 = *(_DWORD *)(v7 + 1008);
      if ( v8 )
        *(_DWORD *)(v7 + 1008) = v8 - 1;
    }
    if ( (*((_BYTE *)v6 + 72) & 0x40) != 0 )
    {
      --*((_DWORD *)this + 1435);
      *((_BYTE *)v6 + 72) &= ~0x40u;
    }
    CDrawingContext::PopStacksForNode((CDrawingContext *)((char *)this - 48), v6);
    if ( *(struct CVisual **)CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::GetTopByReference(
                               (char *)this + 2656,
                               v9) == v6
      && *v10 )
    {
      --*v10;
    }
    if ( (*((_BYTE *)v6 + 73) & 0x20) != 0 )
    {
      if ( *(_BYTE *)(*((_QWORD *)this + 689) + 32LL) )
      {
        CDrawingContext::CalcClippedNodeWorldSpaceBounds((__int64)this - 48, (__int64)v6, &v13);
        v11 = CDrawingContext::RedrawVisual((CDrawingContext *)((char *)this - 48), (struct MilRectF *)&v13);
        v4 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x225Cu);
      }
    }
  }
  return v4;
}
