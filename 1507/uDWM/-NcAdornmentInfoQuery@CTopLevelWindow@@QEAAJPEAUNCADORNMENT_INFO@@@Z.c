/*
 * XREFs of ?NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z @ 0x180003124
 * Callers:
 *     ?GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z @ 0x1800032B4 (-GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z.c)
 *     ?GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z @ 0x18007873C (-GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z.c)
 * Callees:
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1800035B4 (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?GetLocalToWorldTransform@CVisual@@QEAAXPEAUD2DMatrix@@@Z @ 0x180003798 (-GetLocalToWorldTransform@CVisual@@QEAAXPEAUD2DMatrix@@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::NcAdornmentInfoQuery(CTopLevelWindow *this, struct NCADORNMENT_INFO *a2)
{
  unsigned int v4; // r14d
  unsigned int *v5; // rdi
  __m128i v6; // xmm1
  __m128i v7; // xmm0
  float v8; // xmm5_4
  float v9; // xmm1_4
  RECT *v10; // rsi
  _DWORD *v11; // rcx
  RECT v12; // xmm0
  float v14; // [rsp+30h] [rbp-29h] BYREF
  float v15; // [rsp+34h] [rbp-25h]
  float v16; // [rsp+38h] [rbp-21h] BYREF
  float v17; // [rsp+3Ch] [rbp-1Dh]
  RECT rcSrc2; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v19[64]; // [rsp+50h] [rbp-9h] BYREF

  v4 = -2147024809;
  if ( *(_DWORD *)a2 )
  {
    switch ( *(_DWORD *)a2 )
    {
      case 1:
        v5 = (unsigned int *)*((_QWORD *)this + 64);
        break;
      case 2:
        v5 = (unsigned int *)*((_QWORD *)this + 65);
        break;
      case 3:
        v5 = (unsigned int *)*((_QWORD *)this + 66);
        break;
      default:
        if ( *(_DWORD *)a2 != 4 || (*((_DWORD *)this + 152) & 0x10000) == 0 )
          return v4;
        v5 = (unsigned int *)*((_QWORD *)this + 68);
        break;
    }
  }
  else
  {
    v5 = (unsigned int *)*((_QWORD *)this + 63);
  }
  if ( v5 )
  {
    CVisual::GetLocalToWorldTransform((CVisual *)v5, (struct D2DMatrix *)v19);
    v6 = _mm_cvtsi32_si128(v5[28]);
    v7 = _mm_cvtsi32_si128(v5[29]);
    v14 = 0.0;
    v15 = 0.0;
    LODWORD(v16) = _mm_cvtepi32_ps(v6).m128_u32[0];
    LODWORD(v17) = _mm_cvtepi32_ps(v7).m128_u32[0];
    D3DXVec2TransformCoord((struct D2DVector2 *)&v14, (const struct D2DVector2 *)&v14, (const struct D2DMatrix *)v19);
    D3DXVec2TransformCoord((struct D2DVector2 *)&v16, (const struct D2DVector2 *)&v16, (const struct D2DMatrix *)v19);
    v8 = v14;
    v9 = v16;
    if ( v14 > v16 )
    {
      v9 = v14;
      v8 = v16;
    }
    v10 = (RECT *)((char *)a2 + 4);
    SetRect(v10, (int)v8, (int)v15, (int)v9, (int)v17);
    v4 = 0;
    v11 = (_DWORD *)((char *)this + 660);
    if ( (*((_BYTE *)this + 264) & 4) == 0 )
      v11 = (_DWORD *)((char *)this + 644);
    v12 = *(RECT *)(*((_QWORD *)this + 93) + 48LL);
    rcSrc2 = v12;
    rcSrc2.left = *v11 + _mm_cvtsi128_si32((__m128i)v12);
    rcSrc2.right = v12.right - v11[1];
    rcSrc2.top = v11[2] + v12.top;
    rcSrc2.bottom = v12.bottom - v11[3];
    IntersectRect(v10, v10, &rcSrc2);
  }
  return v4;
}
