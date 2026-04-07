/*
 * XREFs of ?_UpdateSolidFill@CAccent@@IEAAJPEAVCVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x18001452C
 * Callers:
 *     ?_UpdateBackgroundGeometry@CAccent@@IEAAJXZ @ 0x180010D18 (-_UpdateBackgroundGeometry@CAccent@@IEAAJXZ.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x180014140 (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?UpdateLayout@CAccent@@UEAAJXZ @ 0x1800155F0 (-UpdateLayout@CAccent@@UEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x1800158BC (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?_UpdateTransitionGradient@CAccent@@IEAAXXZ @ 0x18007CE68 (-_UpdateTransitionGradient@CAccent@@IEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetMonitorRectAtIndex@CDesktopManager@@SA_NIPEAUtagRECT@@@Z @ 0x1800135E4 (-GetMonitorRectAtIndex@CDesktopManager@@SA_NIPEAUtagRECT@@@Z.c)
 *     ?Create@CSolidRectangleInstruction@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001615C (-Create@CSolidRectangleInstruction@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?SetRect@CSolidRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800162C4 (-SetRect@CSolidRectangleInstruction@@QEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180023350 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180023540 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall CAccent::_UpdateSolidFill(_DWORD *a1, CVisual *a2, int a3, struct tagRECT *a4, int a5)
{
  struct CSolidRectangleInstruction *v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // xmm0_4
  int v13; // eax
  int v14; // eax
  __int128 v16; // xmm6
  unsigned int v17; // esi
  unsigned int v18; // ecx
  int v19; // eax
  float v20; // xmm2_4
  __m128i v21; // xmm1
  struct MIL_CHANNEL__ *v22; // rcx
  int v23; // eax
  int v24; // eax
  struct CSolidRectangleInstruction *v25; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT v26; // [rsp+38h] [rbp-38h] BYREF
  __int128 v27; // [rsp+48h] [rbp-28h] BYREF

  v26 = *a4;
  v25 = 0LL;
  v8 = 0LL;
  v9 = CVisual::ClearInstructions(a2);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x3D9u);
  }
  else
  {
    *(float *)&v27 = GammaLUT_sRGB_to_scRGB[(unsigned __int8)a3] / 255.0;
    *((float *)&v27 + 1) = GammaLUT_sRGB_to_scRGB[BYTE1(a3)] / 255.0;
    v11 = a1[67];
    *((float *)&v27 + 2) = GammaLUT_sRGB_to_scRGB[BYTE2(a3)] / 255.0;
    if ( (v11 & 0x800) != 0 )
      v12 = 0;
    else
      v12 = a5;
    HIDWORD(v27) = v12;
    if ( (v11 & 4) != 0 )
    {
      v16 = v27;
      v17 = 0;
      *(_QWORD *)&v26.left = 0LL;
      *(_QWORD *)&v26.right = 0LL;
      while ( CDesktopManager::GetMonitorRectAtIndex(v17, &v26) )
      {
        if ( v26.left || v26.top || (a1[67] & 8) == 0 )
        {
          v18 = v26.bottom - v26.top;
          if ( v26.bottom - v26.top < 0 )
            v18 = 0;
          v19 = v26.right - v26.left;
          if ( v26.right - v26.left < 0 )
            v19 = 0;
          v20 = (float)(v26.top - a1[143]);
          *(float *)&v27 = (float)(v26.left - a1[142]);
          *((float *)&v27 + 1) = v20;
          v21 = _mm_cvtsi32_si128(v18);
          v22 = (struct MIL_CHANNEL__ *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
          *((float *)&v27 + 2) = (float)v19 + *(float *)&v27;
          *((float *)&v27 + 3) = _mm_cvtepi32_ps(v21).m128_f32[0] + v20;
          v23 = CSolidRectangleInstruction::Create(v22, &v25);
          v10 = v23;
          if ( v23 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v23, 0x3FCu);
            goto LABEL_27;
          }
          v8 = v25;
          CSolidRectangleInstruction::SetRect(v25, &v27);
          *((_OWORD *)v8 + 1) = v16;
          v24 = CVisual::AddInstruction(a2, v8);
          v10 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v24, 0x3FFu);
            break;
          }
        }
        ++v17;
      }
    }
    else
    {
      v13 = CSolidRectangleInstruction::Create(
              *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
              &v25);
      v10 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x404u);
LABEL_27:
        v8 = v25;
      }
      else
      {
        v8 = v25;
        CSolidRectangleInstruction::SetRect(v25, &v26);
        *((_OWORD *)v8 + 1) = v27;
        v14 = CVisual::AddInstruction(a2, v8);
        v10 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x407u);
      }
    }
    if ( v8 )
      CBaseObject::Release(v8);
  }
  return v10;
}
