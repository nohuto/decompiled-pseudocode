/*
 * XREFs of ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x1800910BC
 * Callers:
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x18008FE28 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x18009086C (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 * Callees:
 *     ?GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCResource@@XZ @ 0x180005614 (-GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCResource@@XZ.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x18000B42C (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180017B68 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180020310 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x1800204C4 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800379AC (-Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetRect@CSolidRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180037A3C (-SetRect@CSolidRectangleInstruction@@QEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Create@CDrawOcclusionRectangleInstruction@@SAJAEBU_MARGINS@@PEAPEAV1@@Z @ 0x180037A84 (-Create@CDrawOcclusionRectangleInstruction@@SAJAEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CScreenRotation::UpdateBackgroundInstructionsAndSize(
        CScreenRotation *this,
        const struct tagSIZE *a2,
        char a3)
{
  LONG cx; // eax
  struct CRenderDataInstruction *v4; // rsi
  CBaseObject *v6; // r15
  CBaseObject *v7; // r14
  CBaseObject *v8; // r12
  __int64 v9; // rax
  void (__fastcall *v12)(CScreenRotation *, struct tagRECT *); // rax
  LONG v13; // eax
  int v14; // eax
  unsigned int v15; // ebx
  struct CResource *BrushNoRef; // rax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int128 v20; // xmm0
  struct CSolidRectangleInstruction *v21; // rcx
  int v22; // eax
  unsigned int v24; // [rsp+20h] [rbp-60h]
  struct CResource *v25; // [rsp+30h] [rbp-50h] BYREF
  struct CRenderDataInstruction *v26; // [rsp+38h] [rbp-48h] BYREF
  struct CSolidRectangleInstruction *v27; // [rsp+40h] [rbp-40h] BYREF
  struct CDrawOcclusionRectangleInstruction *v28; // [rsp+48h] [rbp-38h] BYREF
  struct _MARGINS v29; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v30; // [rsp+60h] [rbp-20h] BYREF

  cx = a2->cx;
  v4 = 0LL;
  *(_QWORD *)&v29.cxLeftWidth = 0LL;
  *(_QWORD *)&v29.cyTopHeight = 0LL;
  v6 = 0LL;
  v30.left = cx;
  v7 = 0LL;
  v8 = 0LL;
  v30.top = a2->cy;
  v9 = *(_QWORD *)this;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v12 = *(void (__fastcall **)(CScreenRotation *, struct tagRECT *))(v9 + 80);
  v25 = 0LL;
  v12(this, &v30);
  CVisual::ClearInstructions(this);
  if ( a3 )
  {
    v13 = *((_DWORD *)this + 28);
    v30.left = 0;
    v30.top = 0;
    v30.right = v13;
    v30.bottom = *((_DWORD *)this + 29);
    v14 = ResourceHelper::CreateRectangleGeometry(&v30, &v25);
    v15 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x43u);
      v8 = v25;
LABEL_19:
      if ( v8 )
        CBaseObject::Release(v8);
      if ( v7 )
        CBaseObject::Release(v7);
      goto LABEL_23;
    }
    BrushNoRef = CAnimatedTransitionVisual::GetBrushNoRef(*((CAnimatedTransitionVisual **)this + 37));
    v8 = v25;
    v17 = CDrawGeometryInstruction::Create(BrushNoRef, v25, &v26);
    v15 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0x44u);
      v6 = v26;
      goto LABEL_19;
    }
    v6 = v26;
    v18 = CVisual::AddInstruction(this, v26);
    v15 = v18;
    if ( v18 < 0 )
    {
      v24 = 69;
      goto LABEL_18;
    }
LABEL_14:
    CDrawOcclusionRectangleInstruction::Create(&v29, &v28);
    v7 = v28;
    if ( !v28 )
    {
      v15 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x60u);
      goto LABEL_19;
    }
    v18 = CVisual::AddInstruction(this, v28);
    v15 = v18;
    if ( v18 >= 0 )
      goto LABEL_19;
    v24 = 97;
LABEL_18:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, v24);
    goto LABEL_19;
  }
  v19 = CSolidRectangleInstruction::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), &v27);
  v15 = v19;
  if ( v19 >= 0 )
  {
    v4 = v27;
    if ( !v27 )
    {
      v15 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x4Du);
      return v15;
    }
    v20 = *(_OWORD *)((char *)this + 348);
    v30.left = 0;
    v30.top = 0;
    v21 = v27;
    *((_OWORD *)v27 + 1) = v20;
    *(float *)&v20 = (float)a2->cy;
    *(float *)&v30.right = (float)a2->cx;
    v30.bottom = v20;
    CSolidRectangleInstruction::SetRect((__int64)v21, &v30);
    v22 = CVisual::AddInstruction(this, v4);
    v15 = v22;
    if ( v22 >= 0 )
      goto LABEL_14;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v22, 0x56u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0x4Cu);
    v4 = v27;
  }
LABEL_23:
  if ( v4 )
    CBaseObject::Release(v4);
  if ( v6 )
    CBaseObject::Release(v6);
  return v15;
}
