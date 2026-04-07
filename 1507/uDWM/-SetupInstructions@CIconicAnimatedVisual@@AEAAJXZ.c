/*
 * XREFs of ?SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ @ 0x18009BAB8
 * Callers:
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x18009BF10 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180014A30 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001E130 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?SetRect@CSolidRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800354E4 (-SetRect@CSolidRectangleInstruction@@QEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Create@CSolidRectangleInstruction@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800354FC (-Create@CSolidRectangleInstruction@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?GetPillarBoxColor@CImmersiveState@@SAXPEAU_D3DCOLORVALUE@@@Z @ 0x18009B584 (-GetPillarBoxColor@CImmersiveState@@SAXPEAU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CIconicAnimatedVisual::SetupInstructions(CIconicAnimatedVisual *this)
{
  int *v1; // rbx
  _D3DCOLORVALUE *v3; // rdi
  struct MIL_CHANNEL__ *v4; // rcx
  float v5; // xmm1_4
  __m128i v6; // xmm0
  float v7; // xmm1_4
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  struct CRenderDataInstruction *v14; // [rsp+30h] [rbp-40h] BYREF
  struct CSolidRectangleInstruction *v15; // [rsp+38h] [rbp-38h] BYREF
  _D3DCOLORVALUE v16; // [rsp+40h] [rbp-30h] BYREF
  __int128 v17; // [rsp+50h] [rbp-20h] BYREF

  v14 = 0LL;
  v1 = (int *)((char *)this + 352);
  v3 = 0LL;
  v15 = 0LL;
  if ( IsRectEmpty((const RECT *)this + 22) )
    goto LABEL_6;
  CImmersiveState::GetPillarBoxColor(&v16);
  v4 = (struct MIL_CHANNEL__ *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
  v5 = (float)*((int *)this + 90);
  *(float *)&v17 = (float)*v1;
  v6 = _mm_cvtsi32_si128(*((_DWORD *)this + 89));
  *((float *)&v17 + 2) = v5;
  v7 = (float)*((int *)this + 91);
  DWORD1(v17) = _mm_cvtepi32_ps(v6).m128_u32[0];
  *((float *)&v17 + 3) = v7;
  v8 = CSolidRectangleInstruction::Create(v4, &v15);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0xC3u);
    v3 = (_D3DCOLORVALUE *)v15;
    goto LABEL_12;
  }
  v3 = (_D3DCOLORVALUE *)v15;
  CSolidRectangleInstruction::SetRect((__int64)v15, &v17);
  *(_D3DCOLORVALUE *)&v3[1].r = *(_D3DCOLORVALUE *)&v16.r;
  v10 = CVisual::AddInstruction(this, (struct CRenderDataInstruction *)v3);
  v9 = v10;
  if ( v10 >= 0 )
  {
LABEL_6:
    v11 = CDrawGeometryInstruction::Create(*((struct CResource **)this + 36), *((struct CResource **)this + 41), &v14);
    v9 = v11;
    if ( v11 >= 0 )
    {
      v12 = CVisual::AddInstruction(this, v14);
      v9 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0xCEu);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0xCDu);
    }
    if ( v14 )
      CBaseObject::Release(v14);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0xC6u);
  }
LABEL_12:
  if ( v3 )
    CBaseObject::Release((CBaseObject *)v3);
  return v9;
}
