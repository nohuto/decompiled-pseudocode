/*
 * XREFs of ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008C428
 * Callers:
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180014520 (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x18000B42C (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     ?_AddOcclusionInstruction@CAnimatedTransitionVisual@@IEAAJAEBUtagRECT@@@Z @ 0x180013C28 (-_AddOcclusionInstruction@CAnimatedTransitionVisual@@IEAAJAEBUtagRECT@@@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x18001517C (-RoundToNearestInt@@YAHM@Z.c)
 *     ?Create@CDrawTileImageInstruction@@SAJPEAVCResource@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z @ 0x180015220 (-Create@CDrawTileImageInstruction@@SAJPEAVCResource@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x1800204C4 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
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
  CBaseObject *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  struct CRenderDataInstruction *v18; // [rsp+30h] [rbp-50h] BYREF
  struct CResource *v19; // [rsp+38h] [rbp-48h] BYREF
  struct tagRECT rc; // [rsp+40h] [rbp-40h] BYREF
  RECT rcSrc2; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+60h] [rbp-20h] BYREF

  v1 = *((_DWORD *)this + 234);
  v3 = _mm_cvtsi32_si128(*((_DWORD *)this + 210));
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 202));
  v18 = 0LL;
  v19 = 0LL;
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
         &v18);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = (char *)this + 8;
    v10 = CVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v18);
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
        v12 = ResourceHelper::CreateRectangleGeometry(&rcDst, &v19);
        v13 = v19;
        v8 = v12;
        if ( v12 >= 0 )
        {
          v14 = *((_QWORD *)v9 + 2);
          if ( v14 )
            v15 = *(unsigned int *)(v14 + 24);
          else
            v15 = 0LL;
          v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 4)
                                                                   + 368LL))(
                  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
                  v15,
                  *((unsigned int *)v19 + 6));
          v8 = v16;
          if ( v16 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x4B3u);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x4AEu);
        }
        if ( v13 )
          CBaseObject::Release(v13);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x4A4u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x4A2u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x4A1u);
  }
  if ( v18 )
    CBaseObject::Release(v18);
  return v8;
}
