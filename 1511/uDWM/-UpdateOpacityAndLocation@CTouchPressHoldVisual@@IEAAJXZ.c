/*
 * XREFs of ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x18009C3AC
 * Callers:
 *     ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009BDE8 (-StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009BF90 (-StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009C120 (-StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ @ 0x18009CA30 (-UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180022540 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180023350 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180023540 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CRectangleInstruction@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18003C170 (-Create@CRectangleInstruction@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?SetRect@CRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003C46C (-SetRect@CRectangleInstruction@@QEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z @ 0x18003C484 (-SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall CTouchPressHoldVisual::UpdateOpacityAndLocation(CTouchPressHoldVisual *this)
{
  float v1; // xmm1_4
  int v3; // ebx
  int v4; // edx
  float v5; // xmm8_4
  int v6; // r8d
  int v7; // edx
  int v8; // eax
  int v9; // r8d
  float v10; // xmm4_4
  float v11; // xmm7_4
  float v12; // xmm6_4
  struct MIL_CHANNEL__ *v13; // rcx
  double v14; // xmm10_8
  float v15; // xmm9_4
  double v16; // xmm11_8
  double v17; // xmm13_8
  double v18; // xmm12_8
  int v19; // eax
  unsigned int v20; // ebx
  struct CRectangleInstruction *v21; // rdi
  int v22; // eax
  int v23; // eax
  int v24; // edx
  float v25; // xmm8_4
  struct MIL_CHANNEL__ *v26; // rcx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  unsigned int v31; // xmm1_4
  struct MIL_CHANNEL__ *v32; // rcx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // edx
  struct MIL_CHANNEL__ *v37; // rcx
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  float v42; // xmm0_4
  struct MIL_CHANNEL__ *v43; // rcx
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  struct CRectangleInstruction *v51; // [rsp+38h] [rbp-69h] BYREF
  struct _D3DCOLORVALUE v52; // [rsp+40h] [rbp-61h] BYREF
  struct _D3DCOLORVALUE v53; // [rsp+50h] [rbp-51h] BYREF
  __int128 v54; // [rsp+60h] [rbp-41h] BYREF

  v1 = *((float *)this + 78);
  v51 = 0LL;
  CVisual::SetOpacity(this, v1);
  if ( *((int *)this + 75) < 10 )
    *((_DWORD *)this + 75) = 10;
  if ( *((int *)this + 76) < 10 )
    *((_DWORD *)this + 76) = 10;
  CVisual::ClearInstructions(this);
  v3 = *((_DWORD *)this + 75);
  v4 = *((_DWORD *)this + 79);
  v5 = (float)(*((_DWORD *)this + 71) - v3 / 2);
  *(float *)&v54 = v5;
  v6 = MulDiv(-5, v4, 100);
  v7 = *((_DWORD *)this + 91);
  v8 = *((_DWORD *)this + 76);
  v9 = *((_DWORD *)this + 72) - *((_DWORD *)this + 77) - v3 / 2 + v6;
  *(_QWORD *)&v53.r = 0x3F8000003F800000LL;
  *(_QWORD *)&v53.b = 0x3F8000003F800000LL;
  v10 = (float)v9;
  *((float *)&v54 + 2) = (float)v3 + v5;
  *((float *)&v54 + 1) = (float)v9;
  *(struct _D3DCOLORVALUE *)&v52.r = (struct _D3DCOLORVALUE)_xmm;
  *((float *)&v54 + 3) = (float)v8 + (float)v9;
  if ( v3 <= 2 * v7 || v8 <= 2 * v7 )
  {
    v47 = CRectangleInstruction::Create(
            *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
            &v51);
    v20 = v47;
    if ( v47 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v47, 0x171u);
      goto LABEL_41;
    }
    v21 = v51;
    v48 = CRectangleInstruction::SetSolidFill(v51, &v52, *((float *)this + 90));
    v20 = v48;
    if ( v48 >= 0 )
    {
      CRectangleInstruction::SetRect((__int64)v21, &v54);
      v49 = CVisual::AddInstruction(this, v21);
      v20 = v49;
      if ( v49 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v49, 0x174u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v48, 0x172u);
    }
  }
  else
  {
    v11 = (float)((float)v8 + (float)v9) - v10;
    v12 = (float)((float)v3 + v5) - v5;
    v13 = (struct MIL_CHANNEL__ *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
    v14 = (float)((float)v7 + v5);
    *(float *)&v54 = v5;
    v15 = v10;
    v16 = (float)((float)(v12 + v5) - (float)v7);
    *((float *)&v54 + 1) = (float)v9;
    v17 = (float)((float)v7 + v10);
    v18 = (float)((float)(v11 + v10) - (float)v7);
    *((float *)&v54 + 2) = (float)v7 + v5;
    *((float *)&v54 + 3) = v11 + v10;
    v19 = CRectangleInstruction::Create(v13, &v51);
    v20 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0x190u);
LABEL_41:
      v21 = v51;
      goto LABEL_52;
    }
    v21 = v51;
    v22 = CRectangleInstruction::SetSolidFill(v51, &v52, *((float *)this + 90));
    v20 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v22, 0x191u);
      goto LABEL_52;
    }
    CRectangleInstruction::SetRect((__int64)v21, &v54);
    v23 = CVisual::AddInstruction(this, v21);
    v20 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v23, 0x193u);
      goto LABEL_52;
    }
    if ( v21 )
    {
      CBaseObject::Release(v21);
      v51 = 0LL;
    }
    v24 = *((_DWORD *)this + 91);
    v25 = v14;
    v26 = (struct MIL_CHANNEL__ *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
    *(_QWORD *)&v54 = __PAIR64__(LODWORD(v15), LODWORD(v25));
    *((float *)&v54 + 2) = (float)(v12 + v25) - (float)(2 * v24);
    *((float *)&v54 + 3) = (float)v24 + v15;
    v27 = CRectangleInstruction::Create(v26, &v51);
    v20 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v27, 0x19Bu);
      goto LABEL_41;
    }
    v21 = v51;
    v28 = CRectangleInstruction::SetSolidFill(v51, &v52, *((float *)this + 90));
    v20 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v28, 0x19Cu);
      goto LABEL_52;
    }
    CRectangleInstruction::SetRect((__int64)v21, &v54);
    v29 = CVisual::AddInstruction(this, v21);
    v20 = v29;
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v29, 0x19Eu);
      goto LABEL_52;
    }
    if ( v21 )
    {
      CBaseObject::Release(v21);
      v51 = 0LL;
    }
    v30 = *((_DWORD *)this + 91);
    *(float *)&v31 = v16;
    v32 = (struct MIL_CHANNEL__ *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
    *(_QWORD *)&v54 = __PAIR64__(LODWORD(v15), v31);
    *((float *)&v54 + 2) = (float)v30 + *(float *)&v31;
    *((float *)&v54 + 3) = v11 + v15;
    v33 = CRectangleInstruction::Create(v32, &v51);
    v20 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v33, 0x1A6u);
      goto LABEL_41;
    }
    v21 = v51;
    v34 = CRectangleInstruction::SetSolidFill(v51, &v52, *((float *)this + 90));
    v20 = v34;
    if ( v34 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v34, 0x1A7u);
      goto LABEL_52;
    }
    CRectangleInstruction::SetRect((__int64)v21, &v54);
    v35 = CVisual::AddInstruction(this, v21);
    v20 = v35;
    if ( v35 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v35, 0x1A9u);
      goto LABEL_52;
    }
    if ( v21 )
    {
      CBaseObject::Release(v21);
      v51 = 0LL;
    }
    v36 = *((_DWORD *)this + 91);
    *(float *)&v54 = v14;
    v37 = (struct MIL_CHANNEL__ *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
    *((float *)&v54 + 1) = v18;
    *((float *)&v54 + 2) = (float)(v12 + v25) - (float)(2 * v36);
    *((float *)&v54 + 3) = (float)v36 + *((float *)&v54 + 1);
    v38 = CRectangleInstruction::Create(v37, &v51);
    v20 = v38;
    if ( v38 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v38, 0x1B1u);
      goto LABEL_41;
    }
    v21 = v51;
    v39 = CRectangleInstruction::SetSolidFill(v51, &v52, *((float *)this + 90));
    v20 = v39;
    if ( v39 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v39, 0x1B2u);
      goto LABEL_52;
    }
    CRectangleInstruction::SetRect((__int64)v21, &v54);
    v40 = CVisual::AddInstruction(this, v21);
    v20 = v40;
    if ( v40 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v40, 0x1B4u);
      goto LABEL_52;
    }
    if ( v21 )
    {
      CBaseObject::Release(v21);
      v51 = 0LL;
    }
    v41 = *((_DWORD *)this + 91);
    *(float *)&v54 = v14;
    v42 = (float)(2 * v41);
    *((float *)&v54 + 1) = v17;
    v43 = (struct MIL_CHANNEL__ *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
    *((float *)&v54 + 2) = (float)(v12 + v25) - v42;
    *((float *)&v54 + 3) = (float)(v11 + *((float *)&v54 + 1)) - v42;
    v44 = CRectangleInstruction::Create(v43, &v51);
    v20 = v44;
    if ( v44 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v44, 0x1BCu);
      goto LABEL_41;
    }
    v21 = v51;
    v45 = CRectangleInstruction::SetSolidFill(v51, &v53, *((float *)this + 89));
    v20 = v45;
    if ( v45 >= 0 )
    {
      CRectangleInstruction::SetRect((__int64)v21, &v54);
      v46 = CVisual::AddInstruction(this, v21);
      v20 = v46;
      if ( v46 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v46, 0x1BFu);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v45, 0x1BDu);
    }
  }
LABEL_52:
  if ( v21 )
    CBaseObject::Release(v21);
  return v20;
}
