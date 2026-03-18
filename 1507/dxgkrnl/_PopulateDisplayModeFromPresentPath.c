/*
 * XREFs of _PopulateDisplayModeFromPresentPath @ 0x1C00D3740
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C00D2CA4 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C0139878 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C00085FC (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C009A7B4 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C009BD2C (ConvertDMMScalingToGdiScaling.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C009C3A8 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 */

__int64 __fastcall PopulateDisplayModeFromPresentPath(
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
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rax

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
  a9[1].Denominator = DmmMapVSyncFromRationalToInteger(a9 + 2, (unsigned int)((int)(a2[14] << 29) >> 29), a10, v16);
  ConvertDMMScalingToGdiScaling(a3, &a9[4], v17, v18);
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
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
    v24[3] = v12;
    v24[4] = *a1;
    v24[5] = *a2;
    result = WdLogEvent5_WdWarning(v24);
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
