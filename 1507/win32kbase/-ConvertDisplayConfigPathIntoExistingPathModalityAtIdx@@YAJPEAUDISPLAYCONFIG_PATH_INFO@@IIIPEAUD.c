/*
 * XREFs of ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IIIPEAUDISPLAYCONFIG_MODE_INFO@@IHPEAU_D3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00B7F4C
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C001BEA0 (DrvSetDisplayConfig.c)
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@IPEAU_D3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00B84EC (-ConvertDisplayConfigToPathModality@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_IN.c)
 * Callees:
 *     ?Convert16bitSdcModeInfoIdxTo32bit@@YAIG@Z @ 0x1C00B7ED4 (-Convert16bitSdcModeInfoIdxTo32bit@@YAIG@Z.c)
 *     ?ConvertDCPixelFormatToD3DDI@@YAHW4DISPLAYCONFIG_PIXELFORMAT@@PEAW4_D3DDDIFORMAT@@@Z @ 0x1C00B7EE8 (-ConvertDCPixelFormatToD3DDI@@YAHW4DISPLAYCONFIG_PIXELFORMAT@@PEAW4_D3DDDIFORMAT@@@Z.c)
 *     ?ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@PEAH@Z @ 0x1C00B8478 (-ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAU_D3DKMT_P.c)
 *     ?IsVirtualModeDisabledForPath@@YAJU_LUID@@IPEAEPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C00BA6E8 (-IsVirtualModeDisabledForPath@@YAJU_LUID@@IPEAEPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 */

__int64 __fastcall ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(
        struct DISPLAYCONFIG_PATH_INFO *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct DISPLAYCONFIG_MODE_INFO *a5,
        __int16 a6,
        int a7,
        struct _D3DKMT_GETPATHSMODALITY *a8,
        int *a9)
{
  wchar_t *v9; // r14
  __int64 v11; // r12
  __int64 v12; // rbx
  _QWORD *v13; // rax
  char *v15; // rsi
  char *v16; // r15
  char *v17; // rbx
  char *v18; // rbp
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r13
  __int64 v25; // rax
  int v26; // r11d
  unsigned int v27; // r13d
  unsigned int v28; // eax
  unsigned __int16 v29; // cx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rcx
  int v33; // r13d
  unsigned __int8 v34; // r8
  int v35; // edx
  int v36; // edx
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  int v43; // ecx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  int v48; // eax
  int v49; // eax
  __int128 v50; // xmm0
  int v51; // eax
  unsigned __int8 v52[4]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v53; // [rsp+24h] [rbp-34h]
  _DWORD v54[12]; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v55; // [rsp+70h] [rbp+18h]

  v55 = a3;
  v9 = gpGraphicsDeviceList;
  v11 = (unsigned int)a4;
  v12 = (unsigned int)a3;
  while ( 1 )
  {
    if ( !v9 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2, a3, a4);
      v13[3] = v12;
      goto LABEL_8;
    }
    if ( (*((_DWORD *)v9 + 40) & 0x800000) != 0
      && *((_DWORD *)v9 + 66) == *(_DWORD *)a1
      && *((_DWORD *)v9 + 67) == *((_DWORD *)a1 + 1) )
    {
      break;
    }
    v9 = (wchar_t *)*((_QWORD *)v9 + 16);
  }
  v15 = 0LL;
  v16 = 0LL;
  v17 = (char *)a8 + 216 * (unsigned int)a2;
  v18 = 0LL;
  *((_DWORD *)v17 + 12) = 0;
  *((_DWORD *)v17 + 13) = 0;
  v19 = IsVirtualModeDisabledForPath(
          *(struct _LUID *)a1,
          *((_DWORD *)a1 + 7),
          v52,
          (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v17 + 32);
  v24 = v19;
  if ( v19 < 0 )
  {
    v25 = WdLogNewEntry5_WdError(v21, v20, v22, v23);
    *(_QWORD *)(v25 + 24) = v24;
    WdLogEvent5_WdError(v25);
    return (unsigned int)v24;
  }
  v52[0] = v52[0] == 0;
  *((_DWORD *)v17 + 12) |= 0x8000u;
  v26 = a6 & 0x8000;
  if ( a6 < 0 )
  {
    v27 = Convert16bitSdcModeInfoIdxTo32bit(*((_WORD *)a1 + 7));
    v28 = Convert16bitSdcModeInfoIdxTo32bit(*((_WORD *)a1 + 17));
    v29 = *((_WORD *)a1 + 16);
    v53 = v28;
    v31 = (unsigned int)Convert16bitSdcModeInfoIdxTo32bit(v29);
  }
  else
  {
    v30 = *((unsigned int *)a1 + 8);
    v31 = 0xFFFFFFFFLL;
    v27 = *((_DWORD *)a1 + 3);
    v53 = *((_DWORD *)a1 + 8);
  }
  v54[0] = v31;
  if ( v27 == -1 )
  {
    if ( v26 )
    {
      v21 = (unsigned __int16)*((_DWORD *)a1 + 3) | 0xFE500000;
      *((_DWORD *)v17 + 12) |= 0x40000u;
      *((_DWORD *)v17 + 62) = v21;
    }
  }
  else
  {
    if ( v27 >= (unsigned int)v11 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v21, v30, v31, v23);
      v32 = v27;
      goto LABEL_17;
    }
    v15 = (char *)a5 + 64 * (unsigned __int64)v27;
    if ( *(_DWORD *)v15 != 1 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v21, v30, v31, v23);
      v13[3] = a1;
      v13[4] = v15;
      goto LABEL_8;
    }
  }
  if ( (_DWORD)v30 != -1 )
  {
    if ( (unsigned int)v30 >= (unsigned int)v11 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v21, v30, v31, v23);
      v32 = v53;
      goto LABEL_17;
    }
    v16 = (char *)a5 + 64 * (unsigned __int64)(unsigned int)v30;
    if ( *(_DWORD *)v16 != 2 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v21, v30, v31, v23);
      v13[3] = a1;
      v13[4] = v16;
      goto LABEL_8;
    }
  }
  v33 = 3;
  if ( (_DWORD)v31 != -1 )
  {
    if ( (unsigned int)v31 >= (unsigned int)v11 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v21, v30, v31, v23);
      v32 = v54[0];
LABEL_17:
      v13[3] = v32;
      v13[4] = a1;
      v13[5] = v11;
LABEL_8:
      WdLogEvent5_WdError(v13);
      return 3221225485LL;
    }
    v18 = (char *)a5 + 64 * (unsigned __int64)(unsigned int)v31;
    if ( *(_DWORD *)v18 != 3 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v21, v30, v31, v23);
      v13[3] = a1;
      v13[4] = v18;
      goto LABEL_8;
    }
  }
  if ( !v15 && v16 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v21, v30, v31, v23);
    v13[3] = a1;
    goto LABEL_8;
  }
  v34 = v52[0];
  v35 = *((_DWORD *)v17 + 12) | 0x7000;
  *((_QWORD *)v17 + 7) = *((_QWORD *)v9 + 33);
  v36 = v35 | 0x80000;
  *((_DWORD *)v17 + 16) = *((_DWORD *)a1 + 2);
  *((_DWORD *)v17 + 17) = *((_DWORD *)a1 + 7);
  *((_QWORD *)v17 + 28) = 0LL;
  *((_DWORD *)v17 + 12) = v36;
  v17[165] = v34;
  if ( v16 )
  {
    *((_DWORD *)v17 + 18) = (unsigned __int16)*((_DWORD *)v16 + 14);
    *((_DWORD *)v17 + 19) = *((_DWORD *)v16 + 12);
    *((_DWORD *)v17 + 20) = *((_DWORD *)v16 + 13);
    *((_DWORD *)v17 + 21) = *((_DWORD *)v16 + 10);
    *((_DWORD *)v17 + 22) = *((_DWORD *)v16 + 11);
    *((_DWORD *)v17 + 23) = *((_DWORD *)v16 + 8);
    *((_DWORD *)v17 + 24) = *((_DWORD *)v16 + 9);
    *((_DWORD *)v17 + 25) = *((_DWORD *)v16 + 6);
    *((_DWORD *)v17 + 26) = *((_DWORD *)v16 + 7);
    *((_QWORD *)v17 + 14) = *((_QWORD *)v16 + 2);
    *((_DWORD *)v17 + 30) ^= (*((_DWORD *)v17 + 30) ^ *((_DWORD *)v16 + 15)) & 7;
    *((_DWORD *)v17 + 30) = *((_DWORD *)v17 + 30) & 7 | (*((_DWORD *)v16 + 14) >> 13) & 0x1F8;
    *((_DWORD *)v17 + 12) |= 0x87u;
  }
  else
  {
    v37 = *((_DWORD *)a1 + 12);
    if ( v37 && *((_DWORD *)a1 + 13) && *((_DWORD *)a1 + 14) )
    {
      v38 = *((_DWORD *)v17 + 30);
      *((_DWORD *)v17 + 23) = v37;
      *((_DWORD *)v17 + 24) = *((_DWORD *)a1 + 13);
      *((_DWORD *)v17 + 30) = *((_DWORD *)a1 + 14) & 7 | v38 & 0xFFFFFE08 | 8;
      *((_DWORD *)v17 + 12) = v36 | 6;
    }
  }
  v39 = *((_DWORD *)v17 + 12);
  if ( (v39 & 2) != 0 && !*((_DWORD *)v17 + 24) )
    *((_DWORD *)v17 + 12) = v39 & 0xFFFFFFFD;
  if ( !v15 )
  {
LABEL_55:
    if ( v18 )
      goto LABEL_56;
    goto LABEL_57;
  }
  *((_DWORD *)v17 + 47) = *((_DWORD *)v15 + 4);
  v40 = *((_DWORD *)v15 + 5);
  *((_DWORD *)v17 + 12) |= 0x20000u;
  v41 = *((_DWORD *)v17 + 12);
  *((_DWORD *)v17 + 48) = v40;
  if ( !a7 || (v42 = 0x200000, !v34) )
    v42 = 0;
  v43 = v42 | v41;
  *((_DWORD *)v17 + 12) = v43;
  *(_QWORD *)(v17 + 180) = *(_QWORD *)(v15 + 28);
  *((_DWORD *)v17 + 12) = v43 | 0x800;
  if ( !v34 )
    goto LABEL_52;
  if ( !v26 )
    goto LABEL_55;
  if ( v18 )
  {
LABEL_56:
    *((_DWORD *)v17 + 33) = *((_DWORD *)v18 + 4);
    *((_DWORD *)v17 + 34) = *((_DWORD *)v18 + 5);
    *((_DWORD *)v17 + 35) = *((_DWORD *)v18 + 4);
    *((_DWORD *)v17 + 36) = *((_DWORD *)v18 + 5);
    v49 = *((_DWORD *)v17 + 12) | 0x100;
    *((_QWORD *)v17 + 19) = 21LL;
    *((_DWORD *)v17 + 12) = v49;
    *((_DWORD *)v17 + 40) = 0;
    v50 = *(_OWORD *)(v18 + 24);
    *((_DWORD *)v17 + 12) = v49 | 0x800000;
    *((_DWORD *)v17 + 65) = 2;
    *(_OWORD *)(v17 + 204) = v50;
    goto LABEL_57;
  }
  if ( v16 )
  {
LABEL_52:
    *((_DWORD *)v17 + 33) = *((_DWORD *)v15 + 4);
    *((_DWORD *)v17 + 34) = *((_DWORD *)v15 + 5);
    *((_DWORD *)v17 + 35) = *((_DWORD *)v15 + 4);
    *((_DWORD *)v17 + 36) = *((_DWORD *)v15 + 5);
    if ( !(unsigned int)ConvertDCPixelFormatToD3DDI(*((_DWORD *)v15 + 6), v54) )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v45, v44, v46, v47);
      v13[3] = *((int *)v15 + 6);
      v13[4] = v55;
      goto LABEL_8;
    }
    v48 = v54[0];
    *((_DWORD *)v17 + 12) |= 0x100u;
    *((_DWORD *)v17 + 38) = v48;
    *(_QWORD *)(v17 + 156) = 0LL;
    goto LABEL_55;
  }
LABEL_57:
  if ( *((_DWORD *)a1 + 10) == 1 )
  {
    v33 = 1;
  }
  else if ( *((_DWORD *)a1 + 10) == 2 )
  {
    v33 = 2;
  }
  else if ( *((_DWORD *)a1 + 10) != 3 )
  {
    if ( *((_DWORD *)a1 + 10) == 4 )
      v33 = 4;
    else
      v33 = 0;
  }
  v51 = *((_DWORD *)v17 + 12);
  *((_DWORD *)v17 + 13) |= 0x200u;
  v51 |= 0x200u;
  *((_DWORD *)v17 + 42) = v33;
  *((_DWORD *)v17 + 12) = v51;
  if ( (v51 & 0x20000) != 0 && ((v33 - 2) & 0xFFFFFFFD) == 0 )
  {
    *((_DWORD *)v17 + 47) = *((_DWORD *)v15 + 5);
    *((_DWORD *)v17 + 48) = *((_DWORD *)v15 + 4);
  }
  ConvertDisplayConfigScalingToPathModalityForPath(a1, (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v17 + 48), a9);
  if ( (a6 & 0x400) == 0 )
    *((_DWORD *)v17 + 13) |= *((_DWORD *)v17 + 12) & 0x820987;
  *((_DWORD *)v17 + 64) = 0;
  return 0LL;
}
