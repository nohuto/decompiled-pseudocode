/*
 * XREFs of ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180005630
 * Callers:
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180014520 (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCResource@@XZ @ 0x180005614 (-GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCResource@@XZ.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x18000B42C (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x18000B468 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x18001517C (-RoundToNearestInt@@YAHM@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180017B68 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x1800204C4 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::UpdateBackgroundWithClip(CAnimatedTransitionVisual *this)
{
  struct tagRECT v1; // xmm0
  int v2; // edx
  const RECT *v3; // r12
  struct CResource **v4; // r14
  int v5; // r9d
  int v6; // r8d
  int v8; // ecx
  CBaseObject *v9; // rdi
  int v10; // r9d
  int RectangleGeometry; // eax
  unsigned int v12; // ebx
  struct CResource *BrushNoRef; // rax
  int v14; // eax
  CBaseObject *v15; // r14
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // eax
  struct CResource *v24; // [rsp+30h] [rbp-40h] BYREF
  struct CRenderDataInstruction *v25; // [rsp+38h] [rbp-38h] BYREF
  struct tagRECT rc; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+50h] [rbp-20h] BYREF

  v1 = *(struct tagRECT *)((char *)this + 840);
  v2 = *((_DWORD *)this + 207);
  v3 = (const RECT *)((char *)this + 824);
  v4 = (struct CResource **)((char *)this + 696);
  v5 = *((_DWORD *)this + 209);
  v6 = *((_DWORD *)this + 208) - *((_DWORD *)this + 206);
  v8 = *((_DWORD *)this + 206);
  v9 = 0LL;
  if ( v6 < 0 )
    v6 = 0;
  v24 = 0LL;
  v10 = v5 - v3->top;
  v25 = 0LL;
  if ( v10 < 0 )
    v10 = 0;
  rc = v1;
  RectangleGeometry = ResourceHelper::CreateRectangleGeometry(v8, v2, v6, v10, v4);
  v12 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, RectangleGeometry, 0x464u);
  }
  else
  {
    BrushNoRef = CAnimatedTransitionVisual::GetBrushNoRef(this);
    v14 = CDrawGeometryInstruction::Create(BrushNoRef, *v4, &v25);
    v15 = v25;
    v12 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x46Au);
    }
    else
    {
      v16 = CVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v25);
      v12 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x46Cu);
      }
      else
      {
        v17 = RoundToNearestInt(*((float *)this + 185));
        v18 = RoundToNearestInt(*((float *)this + 184));
        OffsetRect(&rc, v18, v17);
        IntersectRect(&rcDst, v3, &rc);
        v19 = ResourceHelper::CreateRectangleGeometry(&rcDst, &v24);
        v12 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x472u);
          v9 = v24;
        }
        else
        {
          v20 = 0LL;
          v9 = v24;
          v21 = *((_QWORD *)this + 3);
          if ( v21 )
            v20 = *(unsigned int *)(v21 + 24);
          v22 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 4)
                                                                   + 368LL))(
                  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
                  v20,
                  *((unsigned int *)v24 + 6));
          v12 = v22;
          if ( v22 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x477u);
        }
      }
    }
    if ( v15 )
      CBaseObject::Release(v15);
    if ( v9 )
      CBaseObject::Release(v9);
  }
  return v12;
}
