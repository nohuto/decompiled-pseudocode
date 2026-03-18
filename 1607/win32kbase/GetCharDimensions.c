/*
 * XREFs of GetCharDimensions @ 0x1C0057B00
 * Callers:
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C0056368 (-UpdateUserScreen@@YAHH@Z.c)
 *     InitUserScreen @ 0x1C0057224 (InitUserScreen.c)
 * Callees:
 *     IsGreGetTextExtentWSupported_0 @ 0x1C0001050 (IsGreGetTextExtentWSupported_0.c)
 *     GreGetTextExtentW_0 @ 0x1C0001058 (GreGetTextExtentW_0.c)
 *     Is_GetTextMetricsWSupported_0 @ 0x1C0002958 (Is_GetTextMetricsWSupported_0.c)
 *     _GetTextMetricsW_0 @ 0x1C0002960 (_GetTextMetricsW_0.c)
 *     GetDPIServerInfo @ 0x1C007A720 (GetDPIServerInfo.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

__int64 __fastcall GetCharDimensions(HDC a1, __int64 a2, LONG *a3)
{
  int v6; // edx
  double v7; // xmm5_8
  __int128 v8; // xmm4
  __int128 v9; // xmm3
  __int128 v11; // xmm1
  __int64 DPIServerInfo; // rax
  LONG v13; // eax
  int v14; // [rsp+30h] [rbp-50h]
  tagTEXTMETRICW v15; // [rsp+38h] [rbp-48h] BYREF

  if ( (int)Is_GetTextMetricsWSupported_0() < 0 || GetTextMetricsW_0(a1, &v15) )
  {
    v6 = *(_DWORD *)&v15.tmCharSet;
    v7 = *(double *)&v15.tmDefaultChar;
    v8 = *(_OWORD *)&v15.tmOverhang;
    v9 = *(_OWORD *)&v15.tmHeight;
  }
  else
  {
    DPIServerInfo = GetDPIServerInfo();
    *(_OWORD *)&v15.tmHeight = *(_OWORD *)(DPIServerInfo + 44);
    v9 = *(_OWORD *)&v15.tmHeight;
    *(_OWORD *)&v15.tmExternalLeading = *(_OWORD *)(DPIServerInfo + 60);
    *(_OWORD *)&v15.tmOverhang = *(_OWORD *)(DPIServerInfo + 76);
    *(_QWORD *)&v15.tmDefaultChar = *(_QWORD *)(DPIServerInfo + 92);
    v8 = *(_OWORD *)&v15.tmOverhang;
    v6 = *(_DWORD *)(DPIServerInfo + 100);
    v7 = *(double *)&v15.tmDefaultChar;
    v13 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&v15.tmExternalLeading, 4));
    *(_DWORD *)&v15.tmCharSet = v6;
    if ( !v15.tmAveCharWidth )
      v13 = 8;
    v15.tmAveCharWidth = v13;
  }
  if ( a2 )
  {
    v11 = *(_OWORD *)&v15.tmExternalLeading;
    *(_OWORD *)a2 = v9;
    *(_OWORD *)(a2 + 16) = v11;
    *(_OWORD *)(a2 + 32) = v8;
    *(double *)(a2 + 48) = v7;
    *(_DWORD *)(a2 + 56) = v6;
  }
  if ( a3 )
    *a3 = v15.tmHeight;
  if ( (v15.tmPitchAndFamily & 1) != 0
    && (int)IsGreGetTextExtentWSupported_0() >= 0
    && (unsigned int)GreGetTextExtentW_0() )
  {
    return (unsigned int)((int)(((int)((unsigned __int64)(1321528399LL * v14) >> 32) >> 3)
                              + 1
                              + ((unsigned int)((unsigned __int64)(1321528399LL * v14) >> 32) >> 31))
                        / 2);
  }
  else
  {
    return (unsigned int)v15.tmAveCharWidth;
  }
}
