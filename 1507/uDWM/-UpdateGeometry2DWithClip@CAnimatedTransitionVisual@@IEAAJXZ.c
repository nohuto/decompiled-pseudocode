/*
 * XREFs of ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800898E8
 * Callers:
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800386A4 (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x180010A98 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001E130 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CDrawTileImageInstruction@@SAJPEAVCResource@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z @ 0x18003755C (-Create@CDrawTileImageInstruction@@SAJPEAVCResource@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z.c)
 *     ?_AddOcclusionInstruction@CAnimatedTransitionVisual@@IEAAJAEBUtagRECT@@@Z @ 0x180037DB0 (-_AddOcclusionInstruction@CAnimatedTransitionVisual@@IEAAJAEBUtagRECT@@@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x1800392E4 (-RoundToNearestInt@@YAHM@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::UpdateGeometry2DWithClip(CAnimatedTransitionVisual *this)
{
  LONG v1; // eax
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  int v5; // r15d
  int v6; // r12d
  int v7; // eax
  unsigned int v8; // ebx
  char *v9; // r14
  int v10; // eax
  int v11; // eax
  int v12; // eax
  struct CResource *v13; // rdi
  __int64 v14; // rax
  int v15; // eax
  struct CRenderDataInstruction *v17; // [rsp+30h] [rbp-50h] BYREF
  struct CResource *v18; // [rsp+38h] [rbp-48h] BYREF
  int v19; // [rsp+40h] [rbp-40h]
  struct tagRECT rc; // [rsp+48h] [rbp-38h] BYREF
  RECT rcSrc2; // [rsp+58h] [rbp-28h] BYREF
  struct tagRECT rcDst; // [rsp+68h] [rbp-18h] BYREF

  v1 = *((_DWORD *)this + 234);
  v3 = _mm_cvtsi32_si128(*((_DWORD *)this + 210));
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 202));
  v17 = 0LL;
  v18 = 0LL;
  rc.left = 0;
  rc.top = 0;
  rc.right = v1;
  rc.bottom = *((_DWORD *)this + 235);
  v5 = RoundToNearestInt((float)(_mm_cvtepi32_ps(v3).m128_f32[0] + *((float *)this + 184)) - _mm_cvtepi32_ps(v4).m128_f32[0]);
  v6 = RoundToNearestInt((float)((float)*((int *)this + 211) + *((float *)this + 185)) - (float)*((int *)this + 203));
  OffsetRect(&rc, v5, v6);
  v7 = CDrawTileImageInstruction::Create(
         *((struct CResource **)this + 71),
         &rc,
         (const struct tagPOINT *)this + 116,
         *((float *)this + 182),
         &v17);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = (char *)this + 8;
    v10 = CVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v17);
    v8 = v10;
    if ( v10 >= 0 )
    {
      v11 = CAnimatedTransitionVisual::_AddOcclusionInstruction(this, &rc);
      v8 = v11;
      if ( v11 >= 0 )
      {
        rcSrc2 = *(RECT *)((char *)this + 808);
        OffsetRect(&rcSrc2, v5, v6);
        IntersectRect(&rcDst, (const RECT *)((char *)this + 824), &rcSrc2);
        v12 = ResourceHelper::CreateRectangleGeometry(&rcDst, &v18);
        v13 = v18;
        v8 = v12;
        if ( v12 >= 0 )
        {
          v19 = 0;
          v14 = *((_QWORD *)v9 + 2);
          v18 = (struct CResource *)46;
          if ( v14 )
            LODWORD(v14) = *(_DWORD *)(v14 + 24);
          HIDWORD(v18) = v14;
          v19 = *((_DWORD *)v13 + 6);
          v15 = MilResource_SendCommand(
                  &v18,
                  0xCu,
                  *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4));
          v8 = v15;
          if ( v15 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x4AFu);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x4A8u);
        }
        if ( v13 )
          CBaseObject::Release(v13);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x49Eu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x49Cu);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x49Bu);
  }
  if ( v17 )
    CBaseObject::Release(v17);
  return v8;
}
