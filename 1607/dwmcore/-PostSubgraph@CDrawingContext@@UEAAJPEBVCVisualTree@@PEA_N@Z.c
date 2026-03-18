/*
 * XREFs of ?PostSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1801071B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x180004548 (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006BD60 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?PopStacksForNode@CDrawingContext@@AEAAJPEBVCVisual@@@Z @ 0x180107390 (-PopStacksForNode@CDrawingContext@@AEAAJPEBVCVisual@@@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEBAPEBUStackBackfaceVisibilityEntry@CDrawingContext@@XZ @ 0x180112424 (-GetTopByReference@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@.c)
 *     ?RedrawVisual@CDrawingContext@@AEAAJV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x180124FC0 (-RedrawVisual@CDrawingContext@@AEAAJV-$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z.c)
 */

__int64 __fastcall CDrawingContext::PostSubgraph(CDrawingContext *this, const struct CVisualTree *a2, bool *a3)
{
  unsigned int v4; // esi
  struct CVisual *CurrentVisual; // rax
  struct CVisual *v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // rcx
  int v13; // eax
  __int128 v15; // [rsp+30h] [rbp-38h] BYREF

  *a3 = 1;
  v4 = 0;
  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 8));
  v6 = CurrentVisual;
  if ( (*((_BYTE *)CurrentVisual + 154) & 0x10) == 0 )
  {
    if ( (*((_BYTE *)CurrentVisual + 153) & 0x40) != 0 )
    {
      v7 = *((_QWORD *)this - 12);
      v8 = *(_DWORD *)(v7 + 1112);
      if ( v8 )
        *(_DWORD *)(v7 + 1112) = v8 - 1;
    }
    if ( (*((_BYTE *)v6 + 152) & 0x40) != 0 )
    {
      --*((_DWORD *)this + 1591);
      *((_BYTE *)v6 + 152) &= ~0x40u;
    }
    CDrawingContext::PopStacksForNode((CDrawingContext *)((char *)this - 120), v6);
    if ( *(struct CVisual **)CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::GetTopByReference(
                               (char *)this + 3024,
                               v9,
                               v10,
                               v11) == v6
      && *v12 )
    {
      --*v12;
    }
    if ( (*((_BYTE *)v6 + 153) & 0x20) != 0 )
    {
      if ( *(_BYTE *)(*((_QWORD *)this + 766) + 32LL) )
      {
        CDrawingContext::CalcClippedNodeWorldSpaceBounds((__int64)this - 120, (__int64)v6, &v15);
        v13 = CDrawingContext::RedrawVisual((CDrawingContext *)((char *)this - 120));
        v4 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x22E8u);
      }
    }
  }
  return v4;
}
