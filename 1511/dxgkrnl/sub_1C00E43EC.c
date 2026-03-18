/*
 * XREFs of sub_1C00E43EC @ 0x1C00E43EC
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z @ 0x1C013E230 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C013EEBC (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C0009FA8 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00A6F40 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00A6FD8 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C00A726C (ConvertDMMScalingToGdiScaling.c)
 */

__int64 __fastcall sub_1C00E43EC(
        unsigned int *a1,
        unsigned int *a2,
        unsigned int a3,
        int a4,
        unsigned __int8 a5,
        char a6,
        char a7,
        char a8,
        struct _D3DDDI_RATIONAL *a9,
        unsigned __int8 *a10)
{
  __int64 v12; // r14
  UINT v14; // eax
  UINT Numerator; // ecx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rax

  v12 = a4;
  *a10 = 0;
  a9[1].Numerator = a1[7];
  a9->Numerator = a1[4];
  v14 = a1[5];
  Numerator = a9[5].Numerator;
  a9->Denominator = v14;
  a9[3].Numerator = (int)(a2[14] << 29) >> 29;
  a9[4].Denominator ^= (a9[4].Denominator ^ a5) & 1;
  a9[5].Numerator = ((a8 & 0xF | Numerator & 0xC0) ^ ((a8 & 0xF | Numerator & 0xC0) ^ ((a6 != 0) << 6)) & 0x40) & 0x7F | ((a7 != 0) << 7);
  DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a2 + 2), a9 + 2);
  a9[1].Denominator = DmmMapVSyncFromRationalToInteger(
                        a9 + 2,
                        (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(a2[14] << 29) >> 29),
                        a10);
  ConvertDMMScalingToGdiScaling(a3, &a9[4], v16, v17);
  result = (unsigned int)(D3DKMDT_VPPR_GET_CONTENT_ROTATION((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v12) - 1);
  if ( (_DWORD)result )
  {
    result = (unsigned int)(result - 1);
    if ( !(_DWORD)result )
    {
      a9[3].Denominator = 2;
      goto LABEL_6;
    }
    result = (unsigned int)(result - 1);
    if ( !(_DWORD)result )
    {
      a9[3].Denominator = 3;
      goto LABEL_6;
    }
    if ( (_DWORD)result == 1 )
    {
      a9[3].Denominator = 4;
      goto LABEL_6;
    }
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
    v23[3] = v12;
    v23[4] = *a1;
    v23[5] = *a2;
    result = WdLogEvent5_WdWarning(v23);
  }
  a9[3].Denominator = 1;
LABEL_6:
  if ( a1[1] == 3 )
  {
LABEL_14:
    a9[5].Numerator |= 0x10u;
    a9[4].Denominator |= 1u;
    return result;
  }
  if ( a1[1] == 4 )
  {
    a9[5].Numerator |= 0x20u;
    goto LABEL_14;
  }
  return result;
}
