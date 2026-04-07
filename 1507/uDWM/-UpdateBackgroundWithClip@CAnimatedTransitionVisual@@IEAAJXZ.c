/*
 * XREFs of ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180003D98
 * Callers:
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800386A4 (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCResource@@XZ @ 0x180003D7C (-GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCResource@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x180010A98 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x180010AD0 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180014A30 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001E130 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x1800392E4 (-RoundToNearestInt@@YAHM@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::UpdateBackgroundWithClip(CAnimatedTransitionVisual *this)
{
  struct tagRECT v1; // xmm0
  int v2; // edx
  const RECT *v3; // r12
  struct CResource **v4; // rsi
  int v5; // r9d
  int v6; // r8d
  int v8; // ecx
  struct CResource *v9; // rdi
  int v10; // r9d
  int RectangleGeometry; // eax
  unsigned int v12; // ebx
  struct CResource *BrushNoRef; // rax
  int v14; // eax
  CBaseObject *v15; // rsi
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  struct CResource *v24; // [rsp+30h] [rbp-40h] BYREF
  struct CRenderDataInstruction *v25; // [rsp+38h] [rbp-38h] BYREF
  int v26; // [rsp+40h] [rbp-30h]
  struct tagRECT rc; // [rsp+48h] [rbp-28h] BYREF
  struct tagRECT rcDst; // [rsp+58h] [rbp-18h] BYREF

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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, RectangleGeometry, 0x45Bu);
  }
  else
  {
    BrushNoRef = CAnimatedTransitionVisual::GetBrushNoRef(this);
    v14 = CDrawGeometryInstruction::Create(BrushNoRef, *v4, &v25);
    v15 = v25;
    v12 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x461u);
    }
    else
    {
      v16 = CVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v25);
      v12 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x463u);
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
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x469u);
          v9 = v24;
        }
        else
        {
          v20 = *((_QWORD *)this + 3);
          v25 = (struct CRenderDataInstruction *)46;
          v26 = 0;
          if ( v20 )
            v21 = *(_DWORD *)(v20 + 24);
          else
            v21 = 0;
          v9 = v24;
          HIDWORD(v25) = v21;
          v26 = *((_DWORD *)v24 + 6);
          v22 = MilResource_SendCommand(
                  &v25,
                  0xCu,
                  *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4));
          v12 = v22;
          if ( v22 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x470u);
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
