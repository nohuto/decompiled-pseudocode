/*
 * XREFs of ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x180092754
 * Callers:
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x180091438 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x180091ECC (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 * Callees:
 *     ?GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCResource@@XZ @ 0x18000C130 (-GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCResource@@XZ.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x18000E35C (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDrawOcclusionRectangleInstruction@@SAJAEBU_MARGINS@@PEAPEAV1@@Z @ 0x18001402C (-Create@CDrawOcclusionRectangleInstruction@@SAJAEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     ?Create@CSolidRectangleInstruction@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001615C (-Create@CSolidRectangleInstruction@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?SetRect@CSolidRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800162C4 (-SetRect@CSolidRectangleInstruction@@QEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18001A610 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180023350 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180023540 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CScreenRotation::UpdateBackgroundInstructionsAndSize(
        CScreenRotation *this,
        const struct tagSIZE *a2,
        char a3)
{
  LONG cx; // eax
  CBaseObject *v4; // r12
  struct CSolidRectangleInstruction *v6; // r14
  struct CDrawOcclusionRectangleInstruction *v7; // r15
  struct CResource *v8; // r13
  __int64 v10; // rax
  void (__fastcall *v11)(CScreenRotation *, __int128 *); // rbx
  LONG v12; // eax
  int v13; // eax
  unsigned int v14; // ebx
  struct CResource *BrushNoRef; // rax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int128 v19; // xmm0
  int *v20; // rax
  struct CSolidRectangleInstruction *v21; // rcx
  int v22; // eax
  unsigned int v24; // [rsp+20h] [rbp-49h]
  struct CSolidRectangleInstruction *v25; // [rsp+30h] [rbp-39h] BYREF
  struct CResource *v26; // [rsp+38h] [rbp-31h] BYREF
  struct CRenderDataInstruction *v27; // [rsp+40h] [rbp-29h] BYREF
  struct tagRECT v28; // [rsp+48h] [rbp-21h] BYREF
  struct CDrawOcclusionRectangleInstruction *v29; // [rsp+58h] [rbp-11h] BYREF
  struct _MARGINS v30; // [rsp+60h] [rbp-9h] BYREF
  __int128 v31; // [rsp+70h] [rbp+7h] BYREF

  cx = a2->cx;
  v4 = 0LL;
  *(_QWORD *)&v30.cxLeftWidth = 0LL;
  *(_QWORD *)&v30.cyTopHeight = 0LL;
  v6 = 0LL;
  LODWORD(v31) = cx;
  v7 = 0LL;
  v8 = 0LL;
  DWORD1(v31) = a2->cy;
  v10 = *(_QWORD *)this;
  *(_QWORD *)&v28.left = a2;
  v27 = 0LL;
  v25 = 0LL;
  v11 = *(void (__fastcall **)(CScreenRotation *, __int128 *))(v10 + 80);
  v29 = 0LL;
  v26 = 0LL;
  v11(this, &v31);
  CVisual::ClearInstructions(this);
  if ( a3 )
  {
    v12 = *((_DWORD *)this + 28);
    v28.left = 0;
    v28.top = 0;
    v28.right = v12;
    v28.bottom = *((_DWORD *)this + 29);
    v13 = ResourceHelper::CreateRectangleGeometry(&v28, &v26);
    v14 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x43u);
      v8 = v26;
LABEL_19:
      if ( v8 )
        CBaseObject::Release(v8);
      if ( v7 )
        CBaseObject::Release(v7);
      goto LABEL_23;
    }
    BrushNoRef = CAnimatedTransitionVisual::GetBrushNoRef(*((CAnimatedTransitionVisual **)this + 37));
    v8 = v26;
    v16 = CDrawGeometryInstruction::Create(BrushNoRef, v26, &v27);
    v14 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x44u);
      v4 = v27;
      goto LABEL_19;
    }
    v4 = v27;
    v17 = CVisual::AddInstruction(this, v27);
    v14 = v17;
    if ( v17 < 0 )
    {
      v24 = 69;
      goto LABEL_18;
    }
LABEL_14:
    CDrawOcclusionRectangleInstruction::Create(&v30, &v29);
    v7 = v29;
    if ( !v29 )
    {
      v14 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x60u);
      goto LABEL_19;
    }
    v17 = CVisual::AddInstruction(this, v29);
    v14 = v17;
    if ( v17 >= 0 )
      goto LABEL_19;
    v24 = 97;
LABEL_18:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, v24);
    goto LABEL_19;
  }
  v18 = CSolidRectangleInstruction::Create(*(struct MIL_CHANNEL__ *const *)(*((_QWORD *)this + 2) + 16LL), &v25);
  v14 = v18;
  if ( v18 >= 0 )
  {
    v6 = v25;
    if ( !v25 )
    {
      v14 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x4Du);
      return v14;
    }
    v19 = *(_OWORD *)((char *)this + 348);
    v20 = *(int **)&v28.left;
    *(_QWORD *)&v31 = 0LL;
    v21 = v25;
    *((_OWORD *)v25 + 1) = v19;
    *(float *)&v19 = (float)v20[1];
    *((float *)&v31 + 2) = (float)*v20;
    HIDWORD(v31) = v19;
    CSolidRectangleInstruction::SetRect((__int64)v21, &v31);
    v22 = CVisual::AddInstruction(this, v6);
    v14 = v22;
    if ( v22 >= 0 )
      goto LABEL_14;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v22, 0x56u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0x4Cu);
    v6 = v25;
  }
LABEL_23:
  if ( v6 )
    CBaseObject::Release(v6);
  if ( v4 )
    CBaseObject::Release(v4);
  return v14;
}
