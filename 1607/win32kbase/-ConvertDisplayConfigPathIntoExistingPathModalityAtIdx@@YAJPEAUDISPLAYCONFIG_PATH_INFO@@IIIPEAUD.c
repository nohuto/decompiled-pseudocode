/*
 * XREFs of ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IIIPEAUDISPLAYCONFIG_MODE_INFO@@IHPEAU_D3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00C5AEC
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0063200 (DrvSetDisplayConfig.c)
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@IPEAU_D3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00C60C8 (-ConvertDisplayConfigToPathModality@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_IN.c)
 * Callees:
 *     ?Convert16bitSdcModeInfoIdxTo32bit@@YAIG@Z @ 0x1C00C5A74 (-Convert16bitSdcModeInfoIdxTo32bit@@YAIG@Z.c)
 *     ?ConvertDCPixelFormatToD3DDI@@YAHW4DISPLAYCONFIG_PIXELFORMAT@@PEAW4_D3DDDIFORMAT@@@Z @ 0x1C00C5A88 (-ConvertDCPixelFormatToD3DDI@@YAHW4DISPLAYCONFIG_PIXELFORMAT@@PEAW4_D3DDDIFORMAT@@@Z.c)
 *     ?ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@PEAH@Z @ 0x1C00C6050 (-ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAU_D3DKMT_P.c)
 *     ?GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x1C00C7C1C (-GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z.c)
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
  char *v16; // rbx
  char *v17; // r15
  char *v18; // rbp
  int TargetVirtualization; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // r9
  int v27; // r11d
  unsigned int v28; // r13d
  unsigned int v29; // eax
  unsigned __int16 v30; // cx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rcx
  int v34; // r13d
  unsigned __int8 v35; // r9
  unsigned __int8 v36; // r8
  int v37; // edx
  char v38; // al
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // ecx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned int v50; // eax
  int v51; // eax
  __int128 v52; // xmm0
  int v53; // eax
  unsigned __int8 v54; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int8 v55[3]; // [rsp+31h] [rbp-37h] BYREF
  unsigned int v56; // [rsp+34h] [rbp-34h]
  unsigned int v57; // [rsp+38h] [rbp-30h] BYREF
  unsigned int v58; // [rsp+80h] [rbp+18h]

  v58 = a3;
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
  v16 = (char *)a8 + 216 * (unsigned int)a2;
  v17 = 0LL;
  v18 = 0LL;
  *((_DWORD *)v16 + 12) = 0;
  *((_DWORD *)v16 + 13) = 0;
  TargetVirtualization = GetTargetVirtualization(
                           *(struct _LUID *)a1,
                           *((_DWORD *)a1 + 7),
                           v55,
                           &v54,
                           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v16 + 32,
                           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v16 + 33);
  v24 = TargetVirtualization;
  if ( TargetVirtualization < 0 )
  {
    v25 = WdLogNewEntry5_WdError(v21, v20, v22, v23);
    *(_QWORD *)(v25 + 24) = v24;
    WdLogEvent5_WdError(v25);
    return (unsigned int)v24;
  }
  *((_DWORD *)v16 + 12) |= 0x8000u;
  v26 = *((unsigned int *)v16 + 12);
  v27 = a6 & 0x8000;
  if ( a6 < 0 )
  {
    v28 = Convert16bitSdcModeInfoIdxTo32bit(*((_WORD *)a1 + 7));
    v29 = Convert16bitSdcModeInfoIdxTo32bit(*((_WORD *)a1 + 17));
    v30 = *((_WORD *)a1 + 16);
    v56 = v29;
    v32 = (unsigned int)Convert16bitSdcModeInfoIdxTo32bit(v30);
  }
  else
  {
    v31 = *((unsigned int *)a1 + 8);
    v32 = 0xFFFFFFFFLL;
    v28 = *((_DWORD *)a1 + 3);
    v56 = *((_DWORD *)a1 + 8);
  }
  v57 = v32;
  if ( v28 == -1 )
  {
    if ( v27 )
    {
      v21 = (unsigned __int16)*((_DWORD *)a1 + 3) | 0xFE500000;
      LODWORD(v26) = v26 | 0x40000;
      *((_DWORD *)v16 + 62) = v21;
      *((_DWORD *)v16 + 12) = v26;
    }
  }
  else
  {
    if ( v28 >= (unsigned int)v11 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v21, v31, v32, v26);
      v33 = v28;
      goto LABEL_17;
    }
    v15 = (char *)a5 + 64 * (unsigned __int64)v28;
    if ( *(_DWORD *)v15 != 1 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v21, v31, v32, v26);
      v13[3] = a1;
      v13[4] = v15;
      goto LABEL_8;
    }
  }
  if ( (_DWORD)v31 != -1 )
  {
    if ( (unsigned int)v31 >= (unsigned int)v11 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v21, v31, v32, v26);
      v33 = v56;
      goto LABEL_17;
    }
    v17 = (char *)a5 + 64 * (unsigned __int64)(unsigned int)v31;
    if ( *(_DWORD *)v17 != 2 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v21, v31, v32, v26);
      v13[3] = a1;
      v13[4] = v17;
      goto LABEL_8;
    }
  }
  v34 = 3;
  if ( (_DWORD)v32 != -1 )
  {
    if ( (unsigned int)v32 >= (unsigned int)v11 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v21, v31, v32, v26);
      v33 = v57;
LABEL_17:
      v13[3] = v33;
      v13[4] = a1;
      v13[5] = v11;
LABEL_8:
      WdLogEvent5_WdError(v13);
      return 3221225485LL;
    }
    v18 = (char *)a5 + 64 * (unsigned __int64)(unsigned int)v32;
    if ( *(_DWORD *)v18 != 3 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v21, v31, v32, v26);
      v13[3] = a1;
      v13[4] = v18;
      goto LABEL_8;
    }
  }
  if ( !v15 && v17 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v21, v31, v32, v26);
    v13[3] = a1;
    goto LABEL_8;
  }
  v35 = v55[0];
  v36 = v54;
  v37 = *((_DWORD *)v16 + 12) | 0x87000;
  *((_QWORD *)v16 + 7) = *((_QWORD *)v9 + 33);
  *((_DWORD *)v16 + 16) = *((_DWORD *)a1 + 2);
  *((_DWORD *)v16 + 17) = *((_DWORD *)a1 + 7);
  *((_QWORD *)v16 + 28) = 0LL;
  *((_DWORD *)v16 + 12) = v37;
  if ( !v35 || (v38 = 0, !v36) )
    v38 = 1;
  v16[169] = v38;
  if ( v17 )
  {
    *((_DWORD *)v16 + 18) = (unsigned __int16)*((_DWORD *)v17 + 14);
    *((_DWORD *)v16 + 19) = *((_DWORD *)v17 + 12);
    *((_DWORD *)v16 + 20) = *((_DWORD *)v17 + 13);
    *((_DWORD *)v16 + 21) = *((_DWORD *)v17 + 10);
    *((_DWORD *)v16 + 22) = *((_DWORD *)v17 + 11);
    *((_DWORD *)v16 + 23) = *((_DWORD *)v17 + 8);
    *((_DWORD *)v16 + 24) = *((_DWORD *)v17 + 9);
    *((_DWORD *)v16 + 25) = *((_DWORD *)v17 + 6);
    *((_DWORD *)v16 + 26) = *((_DWORD *)v17 + 7);
    *((_QWORD *)v16 + 14) = *((_QWORD *)v17 + 2);
    *((_DWORD *)v16 + 30) ^= (*((_DWORD *)v16 + 30) ^ *((_DWORD *)v17 + 15)) & 7;
    *((_DWORD *)v16 + 30) = *((_DWORD *)v16 + 30) & 7 | (*((_DWORD *)v17 + 14) >> 13) & 0x1F8;
    *((_DWORD *)v16 + 12) |= 0x87u;
  }
  else
  {
    v39 = *((_DWORD *)a1 + 12);
    if ( v39 && *((_DWORD *)a1 + 13) && *((_DWORD *)a1 + 14) )
    {
      v40 = *((_DWORD *)v16 + 30);
      *((_DWORD *)v16 + 23) = v39;
      *((_DWORD *)v16 + 24) = *((_DWORD *)a1 + 13);
      *((_DWORD *)v16 + 30) = *((_DWORD *)a1 + 14) & 7 | v40 & 0xFFFFFE08 | 8;
      *((_DWORD *)v16 + 12) = v37 | 6;
    }
  }
  v41 = *((_DWORD *)v16 + 12);
  if ( (v41 & 2) != 0 && !*((_DWORD *)v16 + 24) )
    *((_DWORD *)v16 + 12) = v41 & 0xFFFFFFFD;
  if ( !v15 )
  {
LABEL_61:
    if ( v18 )
      goto LABEL_62;
    goto LABEL_63;
  }
  *((_DWORD *)v16 + 48) = *((_DWORD *)v15 + 4);
  v42 = *((_DWORD *)v15 + 5);
  *((_DWORD *)v16 + 12) |= 0x20000u;
  v43 = *((_DWORD *)v16 + 12);
  *((_DWORD *)v16 + 49) = v42;
  if ( !a7 || v35 && v36 )
    v44 = 0;
  else
    v44 = 0x200000;
  v45 = v44 | v43;
  *((_DWORD *)v16 + 12) = v45;
  *((_QWORD *)v16 + 23) = *(_QWORD *)(v15 + 28);
  *((_DWORD *)v16 + 12) = v45 | 0x800;
  if ( v35 && v36 )
    goto LABEL_58;
  if ( !v27 )
    goto LABEL_61;
  if ( v18 )
  {
LABEL_62:
    *((_DWORD *)v16 + 34) = *((_DWORD *)v18 + 4);
    *((_DWORD *)v16 + 35) = *((_DWORD *)v18 + 5);
    *((_DWORD *)v16 + 36) = *((_DWORD *)v18 + 4);
    *((_DWORD *)v16 + 37) = *((_DWORD *)v18 + 5);
    v51 = *((_DWORD *)v16 + 12) | 0x100;
    *(_QWORD *)(v16 + 156) = 21LL;
    *((_DWORD *)v16 + 12) = v51;
    *((_DWORD *)v16 + 41) = 0;
    v52 = *(_OWORD *)(v18 + 24);
    *((_DWORD *)v16 + 12) = v51 | 0x800000;
    *((_DWORD *)v16 + 65) = 2;
    *((_OWORD *)v16 + 13) = v52;
    goto LABEL_63;
  }
  if ( v17 )
  {
LABEL_58:
    *((_DWORD *)v16 + 34) = *((_DWORD *)v15 + 4);
    *((_DWORD *)v16 + 35) = *((_DWORD *)v15 + 5);
    *((_DWORD *)v16 + 36) = *((_DWORD *)v15 + 4);
    *((_DWORD *)v16 + 37) = *((_DWORD *)v15 + 5);
    if ( !(unsigned int)ConvertDCPixelFormatToD3DDI(*((_DWORD *)v15 + 6), &v57) )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v47, v46, v48, v49);
      v13[3] = *((int *)v15 + 6);
      v13[4] = v58;
      goto LABEL_8;
    }
    v50 = v57;
    *((_DWORD *)v16 + 12) |= 0x100u;
    *((_DWORD *)v16 + 39) = v50;
    *((_QWORD *)v16 + 20) = 0LL;
    goto LABEL_61;
  }
LABEL_63:
  if ( *((_DWORD *)a1 + 10) == 1 )
  {
    v34 = 1;
  }
  else if ( *((_DWORD *)a1 + 10) == 2 )
  {
    v34 = 2;
  }
  else if ( *((_DWORD *)a1 + 10) != 3 )
  {
    if ( *((_DWORD *)a1 + 10) == 4 )
      v34 = 4;
    else
      v34 = 0;
  }
  v53 = *((_DWORD *)v16 + 12);
  *((_DWORD *)v16 + 13) |= 0x200u;
  v53 |= 0x200u;
  *((_DWORD *)v16 + 43) = v34;
  *((_DWORD *)v16 + 12) = v53;
  if ( (v53 & 0x20000) != 0 && ((v34 - 2) & 0xFFFFFFFD) == 0 )
  {
    *((_DWORD *)v16 + 48) = *((_DWORD *)v15 + 5);
    *((_DWORD *)v16 + 49) = *((_DWORD *)v15 + 4);
  }
  ConvertDisplayConfigScalingToPathModalityForPath(a1, (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v16 + 48), a9);
  if ( (a6 & 0x400) == 0 )
    *((_DWORD *)v16 + 13) |= *((_DWORD *)v16 + 12) & 0x820987;
  *((_DWORD *)v16 + 64) = 0;
  return 0LL;
}
