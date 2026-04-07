/*
 * XREFs of ?_UpdateSolidFill@CImmersiveWindowIconic@@AEAAJXZ @ 0x180071B44
 * Callers:
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800715A4 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x180071800 (-LoadIconW@CImmersiveWindowIconic@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x18001DF40 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001E130 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?SetRect@CSolidRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800354E4 (-SetRect@CSolidRectangleInstruction@@QEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Create@CSolidRectangleInstruction@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800354FC (-Create@CSolidRectangleInstruction@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

__int64 __fastcall CImmersiveWindowIconic::_UpdateSolidFill(CImmersiveWindowIconic *this)
{
  unsigned __int8 *v2; // rcx
  __int64 v3; // rax
  float v4; // xmm0_4
  __int64 v5; // rax
  __m128i v6; // xmm1
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  struct CSolidRectangleInstruction *v10; // rdi
  int v11; // eax
  struct CSolidRectangleInstruction *v13; // [rsp+30h] [rbp-30h] BYREF
  __int128 v14; // [rsp+38h] [rbp-28h]
  __int128 v15; // [rsp+48h] [rbp-18h] BYREF

  v13 = 0LL;
  v2 = (unsigned __int8 *)*((_QWORD *)this + 33);
  *(_QWORD *)&v15 = 0LL;
  v3 = v2[169];
  *(float *)&v14 = GammaLUT_sRGB_to_scRGB[v2[168]] / 255.0;
  v4 = GammaLUT_sRGB_to_scRGB[v3];
  v5 = v2[170];
  *((float *)&v14 + 1) = v4 / 255.0;
  v6 = _mm_cvtsi32_si128(*((_DWORD *)this + 29));
  *((float *)&v14 + 2) = GammaLUT_sRGB_to_scRGB[v5] / 255.0;
  *((float *)&v14 + 3) = FLOAT_1_0;
  *((float *)&v15 + 2) = (float)*((int *)this + 28) + 0.0;
  *((float *)&v15 + 3) = _mm_cvtepi32_ps(v6).m128_f32[0] + 0.0;
  v7 = CVisual::ClearInstructions(this);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = CSolidRectangleInstruction::Create(
           *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
           &v13);
    v10 = v13;
    v8 = v9;
    if ( v9 >= 0 )
    {
      CSolidRectangleInstruction::SetRect((__int64)v13, &v15);
      *((_OWORD *)v10 + 1) = v14;
      v11 = CVisual::AddInstruction(this, v10);
      v8 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x86u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x82u);
    }
    if ( v10 )
      CBaseObject::Release(v10);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x80u);
  }
  return v8;
}
