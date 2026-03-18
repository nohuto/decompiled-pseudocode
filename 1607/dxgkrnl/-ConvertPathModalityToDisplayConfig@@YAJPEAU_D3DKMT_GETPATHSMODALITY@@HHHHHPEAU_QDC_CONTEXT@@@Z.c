/*
 * XREFs of ?ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z @ 0x1C00C06E0
 * Callers:
 *     ?GetRequestedPathsModality@@YAJIHHHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00C26A8 (-GetRequestedPathsModality@@YAJIHHHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C017862C (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C0005D54 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C000A750 (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetPrimaryPathInCloneGroup@@YAIPEBU_D3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C000B43C (-GetPrimaryPathInCloneGroup@@YAIPEBU_D3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     IsInternalVideoOutput @ 0x1C000B478 (IsInternalVideoOutput.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0026954 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?D3dPixelFormatToDisplayConfigPixelFormat@@YAXW4_D3DDDIFORMAT@@PEAW4DISPLAYCONFIG_PIXELFORMAT@@@Z @ 0x1C007A4D8 (-D3dPixelFormatToDisplayConfigPixelFormat@@YAXW4_D3DDDIFORMAT@@PEAW4DISPLAYCONFIG_PIXELFORMAT@@@.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00BEB88 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?FindModeArrayEntry@@YAPEAUDISPLAYCONFIG_MODE_INFO@@PEAU_QDC_CONTEXT@@W4DISPLAYCONFIG_MODE_INFO_TYPE@@IU_LUID@@@Z @ 0x1C00C0D18 (-FindModeArrayEntry@@YAPEAUDISPLAYCONFIG_MODE_INFO@@PEAU_QDC_CONTEXT@@W4DISPLAYCONFIG_MODE_INFO_.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00C0D60 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?GetNextModeArrayEntry@@YAPEAUDISPLAYCONFIG_MODE_INFO@@PEAU_QDC_CONTEXT@@@Z @ 0x1C00C0F5C (-GetNextModeArrayEntry@@YAPEAUDISPLAYCONFIG_MODE_INFO@@PEAU_QDC_CONTEXT@@@Z.c)
 *     ?DMMVideoSignalInfoToDisplayConfigVideoSignalInfo@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAUDISPLAYCONFIG_VIDEO_SIGNAL_INFO@@@Z @ 0x1C00C2AB4 (-DMMVideoSignalInfoToDisplayConfigVideoSignalInfo@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAUDISPLA.c)
 *     ?ConvertDmmToDisplayConfigScaling@@YA?AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C00C2B1C (-ConvertDmmToDisplayConfigScaling@@YA-AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C01693F0 (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C01695CC (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 */

__int64 __fastcall ConvertPathModalityToDisplayConfig(
        __int64 i,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        struct _QDC_CONTEXT *a7)
{
  struct _QDC_CONTEXT *v7; // r13
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // rsi
  int v11; // r15d
  unsigned int v12; // ebx
  __int64 v13; // rdi
  int v14; // edx
  int PrimaryPathInCloneGroup; // eax
  int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // r10
  int IsVirtualizationDisabledForTarget; // eax
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rdi
  struct DXGGLOBAL *Global; // rax
  _DWORD *v24; // r8
  DXGADAPTERSOURCEHASH *v25; // rcx
  __int64 Denominator; // rcx
  _DWORD *v27; // rbx
  int v28; // eax
  bool v29; // zf
  int v30; // r10d
  unsigned int v31; // eax
  unsigned int v32; // r11d
  _QWORD *v33; // rbx
  __int64 ModeArrayEntry; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  _DWORD *v37; // rax
  unsigned int v38; // r10d
  _QWORD *v39; // r11
  __int64 v40; // rax
  int v41; // edx
  unsigned int v42; // eax
  unsigned int j; // edx
  __int64 v44; // rax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v46; // eax
  int v47; // edx
  struct DISPLAYCONFIG_MODE_INFO *NextModeArrayEntry; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r9
  int v52; // r11d
  __int64 v53; // r10
  struct DISPLAYCONFIG_MODE_INFO *v54; // rax
  int v55; // r10d
  __int64 *v56; // r11
  struct DISPLAYCONFIG_MODE_INFO *v57; // rbx
  __int64 v58; // rcx
  __int64 v59; // rcx
  int v60; // eax
  struct DISPLAYCONFIG_MODE_INFO *v61; // rax
  __int128 v62; // xmm0
  unsigned int v63; // ecx
  __int64 v64; // rcx
  unsigned int v65; // edx
  __int64 v66; // r9
  unsigned int v67; // r8d
  __int64 v68; // rdx
  _QWORD *v69; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  DXGADAPTERSOURCEHASH *v77; // r12
  __int64 v78; // rcx
  __int64 v79; // rax
  int HashForAdapterAndSource; // eax
  __int64 v81; // rcx
  char HashBitShift; // al
  unsigned int v83; // ebx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  unsigned int v87; // ebx
  _DWORD *v88; // rdi
  unsigned int v89; // ebx
  __int64 v90; // rcx
  int v91; // eax
  unsigned int v92; // esi
  __int64 v93; // rbx
  unsigned int v94; // r13d
  _DWORD *v95; // rbx
  DXGADAPTERSOURCEHASH *v96; // r12
  __int64 v97; // rcx
  int HashBitMask; // eax
  char v99; // [rsp+30h] [rbp-40h] BYREF
  char v100; // [rsp+31h] [rbp-3Fh] BYREF
  unsigned int v101; // [rsp+34h] [rbp-3Ch]
  int v102; // [rsp+38h] [rbp-38h]
  int v103; // [rsp+3Ch] [rbp-34h]
  int AdapterAndSourceForHash; // [rsp+40h] [rbp-30h]
  __int64 v105; // [rsp+48h] [rbp-28h]
  DXGADAPTERSOURCEHASH *v106; // [rsp+50h] [rbp-20h]
  int v107; // [rsp+58h] [rbp-18h]
  unsigned int v108; // [rsp+5Ch] [rbp-14h] BYREF
  _DWORD *v109; // [rsp+60h] [rbp-10h]
  struct _D3DDDI_RATIONAL v110; // [rsp+68h] [rbp-8h] BYREF
  int v111; // [rsp+B8h] [rbp+48h]
  int v112; // [rsp+C0h] [rbp+50h]
  unsigned int v113; // [rsp+C8h] [rbp+58h]
  int v114; // [rsp+D8h] [rbp+68h]

  v113 = a4;
  v112 = a3;
  v111 = a2;
  v7 = a7;
  v8 = i;
  LODWORD(v9) = 0;
  v10 = *((_QWORD *)a7 + 1);
  v11 = 1;
  if ( a6 )
  {
    if ( *((_DWORD *)a7 + 1) )
      goto LABEL_3;
LABEL_112:
    v64 = WdLogNewEntry5_WdWarning(i, a2, a3, a4);
    *(_QWORD *)(v64 + 24) = *((unsigned int *)a7 + 1);
    if ( !a6 )
      v11 = *(unsigned __int16 *)(v8 + 20);
    *(_QWORD *)(v64 + 32) = v11;
    WdLogEvent5_WdWarning(v64);
    return 3221225507LL;
  }
  if ( *((_DWORD *)a7 + 1) < (unsigned int)*(unsigned __int16 *)(i + 20) )
    goto LABEL_112;
LABEL_3:
  v101 = 0;
  v12 = 0;
  v102 = 0;
  if ( *(_WORD *)(i + 20) )
  {
    do
    {
      v13 = 216LL * v12;
      if ( IsInternalVideoOutput(*(_DWORD *)(v13 + v8 + 128)) )
        v14 = 1;
      v102 = v14;
      PrimaryPathInCloneGroup = GetPrimaryPathInCloneGroup((const struct _D3DKMT_GETPATHSMODALITY *)v8, v12);
      v16 = *(_DWORD *)(v13 + v8 + 68);
      v17 = *(_QWORD *)(v13 + v8 + 56);
      *(_DWORD *)(v13 + v8 + 232) = PrimaryPathInCloneGroup;
      IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                            v17,
                                            v16,
                                            (unsigned int)&v99,
                                            (unsigned int)&v100,
                                            v18,
                                            v18);
      v9 = IsVirtualizationDisabledForTarget;
      if ( IsVirtualizationDisabledForTarget < 0 )
      {
        v69 = (_QWORD *)WdLogNewEntry5_WdError(v20);
        v69[3] = v9;
        goto LABEL_175;
      }
      if ( !v99 || v100 || v113 )
      {
        i = v101;
        *(_DWORD *)(v13 + v8 + 236) = 0;
      }
      else
      {
        i = 1LL;
        *(_DWORD *)(v13 + v8 + 236) = 1;
        v101 = 1;
      }
      ++v12;
    }
    while ( v12 < *(unsigned __int16 *)(v8 + 20) );
    if ( (_DWORD)i )
    {
      v65 = *(unsigned __int16 *)(v8 + 20);
      for ( i = 0LL; (unsigned int)i < v65; i = (unsigned int)(i + 1) )
      {
        v66 = 216LL * (unsigned int)i;
        if ( *(_DWORD *)(v66 + v8 + 236) )
        {
          if ( *(_DWORD *)(v66 + v8 + 232) != (_DWORD)i )
          {
            v67 = 0;
            if ( v65 )
            {
              do
              {
                v68 = 216LL * v67;
                if ( *(_DWORD *)(v68 + v8 + 232) == *(_DWORD *)(v66 + v8 + 232) )
                  *(_DWORD *)(v68 + v8 + 232) = i;
                ++v67;
              }
              while ( v67 < *(unsigned __int16 *)(v8 + 20) );
            }
          }
        }
        v65 = *(unsigned __int16 *)(v8 + 20);
      }
    }
  }
  v21 = 0;
  AdapterAndSourceForHash = 0;
  v103 = 0;
  v22 = v8 + 48;
  Global = DXGGLOBAL::GetGlobal(i);
  v24 = 0LL;
  LODWORD(v105) = 0;
  v25 = (struct DXGGLOBAL *)((char *)Global + 792);
  v106 = (struct DXGGLOBAL *)((char *)Global + 792);
  if ( *(_WORD *)(v8 + 20) )
  {
    while ( a6 != (_DWORD)v24 )
    {
      if ( !v102 )
        break;
      if ( IsInternalVideoOutput(*(_DWORD *)(v22 + 80)) )
        break;
LABEL_72:
      v42 = *(unsigned __int16 *)(v8 + 20);
      v22 += 216LL;
      LODWORD(v105) = v41 + 1;
      if ( v41 + 1 >= v42 )
      {
LABEL_73:
        v21 = v103;
        v25 = v106;
        goto LABEL_74;
      }
    }
    Denominator = 216LL * *(unsigned int *)(v22 + 184);
    v27 = (_DWORD *)(Denominator + v8 + 48);
    v109 = v27;
    if ( *(_DWORD *)(v22 + 16) == v27[4] && *(_DWORD *)(v22 + 8) == v27[2] )
    {
      if ( *(_DWORD *)(v22 + 12) == v27[3] )
        v27 = v24;
      v109 = v27;
    }
    v28 = v103;
    if ( v27 )
      v28 = 1;
    v29 = (*(_DWORD *)v22 & 0x1000) == 0;
    v103 = v28;
    if ( v29 )
    {
      v71 = WdLogNewEntry5_WdAssertion(Denominator);
      *(_QWORD *)(v71 + 24) = 1269LL;
      WdLogEvent5_WdAssertion(v71);
    }
    *(_QWORD *)v10 = *(_QWORD *)(v22 + 8);
    if ( (*(_DWORD *)v22 & 0x2000) == 0 )
    {
      v72 = WdLogNewEntry5_WdAssertion(Denominator);
      *(_QWORD *)(v72 + 24) = 1272LL;
      WdLogEvent5_WdAssertion(v72);
    }
    *(_DWORD *)(v10 + 8) = *(_DWORD *)(v22 + 16);
    *(_DWORD *)(v10 + 16) = (*(_DWORD *)v22 >> 30) & 1;
    *(_QWORD *)(v10 + 20) = *(_QWORD *)(v22 + 8);
    if ( (*(_DWORD *)v22 & 0x4000) == 0 )
    {
      v73 = WdLogNewEntry5_WdAssertion(Denominator);
      *(_QWORD *)(v73 + 24) = 1278LL;
      WdLogEvent5_WdAssertion(v73);
    }
    *(_DWORD *)(v10 + 28) = *(_DWORD *)(v22 + 20);
    if ( (*(_DWORD *)v22 & 0x8000) == 0 )
    {
      v74 = WdLogNewEntry5_WdAssertion(Denominator);
      *(_QWORD *)(v74 + 24) = 1281LL;
      WdLogEvent5_WdAssertion(v74);
    }
    *(_DWORD *)(v10 + 36) = *(_DWORD *)(v22 + 80);
    if ( (*(_DWORD *)v22 & 2) != 0 )
    {
      DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v22 + 24), &v110);
      v30 = 0;
      Denominator = v110.Denominator;
      *(_DWORD *)(v10 + 48) = v110.Numerator;
      *(_DWORD *)(v10 + 52) = Denominator;
      *(_DWORD *)(v10 + 56) = 1;
    }
    else
    {
      v30 = 0;
      *(_QWORD *)(v10 + 48) = 0LL;
      *(_DWORD *)(v10 + 56) = 0;
    }
    if ( (*(_DWORD *)v22 & 4) != 0 )
      *(_DWORD *)(v10 + 56) = (int)(*(_DWORD *)(v22 + 72) << 29) >> 29;
    if ( (*(_DWORD *)v22 & 0x200) != 0 )
    {
      v46 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)(v22 + 124));
      v47 = 1;
      Denominator = (unsigned int)(v46 - 1);
      if ( (unsigned int)Denominator <= 3 )
        v47 = v46;
      *(_DWORD *)(v10 + 40) = v47;
    }
    else
    {
      *(_DWORD *)(v10 + 40) = 1;
    }
    if ( ((*(_DWORD *)(v10 + 40) - 2) & 0xFFFFFFFD) != 0 )
    {
      v107 = *(_DWORD *)(v22 + 144);
      v31 = *(_DWORD *)(v22 + 148);
    }
    else
    {
      v107 = *(_DWORD *)(v22 + 148);
      v31 = *(_DWORD *)(v22 + 144);
    }
    v101 = v31;
    if ( v111 == v30 )
    {
      if ( (*(_DWORD *)v22 & 0x400) == 0 )
      {
        if ( *(int *)v22 < 0 )
        {
          v76 = WdLogNewEntry5_WdAssertion(Denominator);
          *(_QWORD *)(v76 + 24) = 1360LL;
          WdLogEvent5_WdAssertion(v76);
        }
        goto LABEL_40;
      }
      v59 = *(unsigned int *)(v22 + 128);
    }
    else
    {
      if ( (*(_DWORD *)v22 & 0x10000) == 0 )
      {
LABEL_40:
        *(_DWORD *)(v10 + 44) = 128;
        goto LABEL_41;
      }
      if ( *(_DWORD *)(v22 + 132) == 1 )
      {
        v75 = WdLogNewEntry5_WdAssertion(Denominator);
        *(_QWORD *)(v75 + 24) = 1335LL;
        WdLogEvent5_WdAssertion(v75);
      }
      v59 = *(unsigned int *)(v22 + 132);
    }
    *(_DWORD *)(v10 + 44) = ConvertDmmToDisplayConfigScaling(v59);
LABEL_41:
    *(_DWORD *)(v10 + 64) = 0;
    *(_DWORD *)(v10 + 64) = (*(_DWORD *)v22 & 0x20000000) != 0;
    if ( (*(_DWORD *)v22 & 0x2000000) != 0 )
      *(_DWORD *)(v10 + 64) |= 2u;
    if ( (*(_DWORD *)v22 & 0x4000000) != 0 )
      *(_DWORD *)(v10 + 64) |= 4u;
    if ( (*(_DWORD *)v22 & 0x10000000) != 0 )
      *(_DWORD *)(v10 + 64) |= 0x10u;
    if ( (*(_DWORD *)v22 & 0x8000000) != 0 )
      *(_DWORD *)(v10 + 64) |= 8u;
    if ( (*(_DWORD *)v22 & 0x10) != 0 )
      *(_DWORD *)(v10 + 64) |= 0x20u;
    *(_DWORD *)(v10 + 60) = (*(_DWORD *)v22 & 0x1D000000) != 0;
    if ( v112 || *(int *)v22 < 0 )
    {
      *(_DWORD *)(v10 + 68) = 1;
    }
    else
    {
      *(_DWORD *)(v10 + 68) = 0;
      AdapterAndSourceForHash = 1;
    }
    if ( !v27 || v113 )
    {
      v32 = *(_DWORD *)(v22 + 20);
      v33 = (_QWORD *)(v22 + 8);
    }
    else
    {
      v77 = v106;
      if ( ((unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v106) & *(_DWORD *)(v22 + 20)) != 0 )
      {
        v79 = WdLogNewEntry5_WdAssertion(v78);
        *(_QWORD *)(v79 + 24) = 1426LL;
        WdLogEvent5_WdAssertion(v79);
      }
      HashForAdapterAndSource = DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
                                  v77,
                                  (const struct _LUID *)(v22 + 8),
                                  *(_DWORD *)(v22 + 16),
                                  &v108);
      v9 = HashForAdapterAndSource;
      if ( HashForAdapterAndSource < 0 )
      {
        v69 = (_QWORD *)WdLogNewEntry5_WdError(v81);
        v69[3] = (unsigned int)v27[2];
        v69[4] = *(unsigned int *)(v22 + 16);
        v69[5] = v9;
        goto LABEL_175;
      }
      HashBitShift = DXGADAPTERSOURCEHASH::GetHashBitShift(v106);
      v83 = v108 << HashBitShift;
      v32 = v83 + (*(_DWORD *)(v22 + 20) & ~(unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v106));
      v33 = v109 + 2;
      *(_DWORD *)(v10 + 28) = v32;
      *(_QWORD *)(v10 + 20) = *v33;
    }
    ModeArrayEntry = FindModeArrayEntry(a7, 2LL, v32, *v33);
    v24 = 0LL;
    if ( ModeArrayEntry )
    {
      v35 = (ModeArrayEntry - *((_QWORD *)a7 + 3)) >> 6;
    }
    else if ( (*(_DWORD *)v22 & 0x87) != 0 )
    {
      NextModeArrayEntry = GetNextModeArrayEntry(a7);
      if ( !NextModeArrayEntry )
        goto LABEL_145;
      *(_DWORD *)NextModeArrayEntry = 2;
      *((_QWORD *)NextModeArrayEntry + 1) = *v33;
      *((_DWORD *)NextModeArrayEntry + 1) = v52;
      DMMVideoSignalInfoToDisplayConfigVideoSignalInfo(
        (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v22 + 24),
        (struct DISPLAYCONFIG_MODE_INFO *)((char *)NextModeArrayEntry + 16));
      LODWORD(v35) = (v53 - *((_QWORD *)a7 + 3)) >> 6;
      v24 = 0LL;
    }
    else
    {
      LODWORD(v35) = -1;
    }
    v36 = v113;
    if ( v113 )
      *(_WORD *)(v10 + 34) = v35;
    else
      *(_DWORD *)(v10 + 32) = v35;
    v37 = v109;
    if ( !v109 || v113 )
    {
      v38 = *(_DWORD *)(v22 + 16);
      v39 = (_QWORD *)(v22 + 8);
      LODWORD(v109) = v38;
      if ( v113 )
        goto LABEL_65;
    }
    else
    {
      v38 = v109[4];
      v39 = v109 + 2;
      *(_DWORD *)(v10 + 8) = v38;
      *(_QWORD *)v10 = *((_QWORD *)v37 + 1);
      LODWORD(v109) = v38;
    }
    v40 = FindModeArrayEntry(a7, 1LL, v38, *v39);
    v24 = 0LL;
    if ( v40 )
    {
      *(_DWORD *)(v10 + 12) = (v40 - *((_QWORD *)a7 + 3)) >> 6;
LABEL_70:
      v10 += 72LL;
      if ( a6 != (_DWORD)v24 )
        goto LABEL_73;
      v41 = v105;
      goto LABEL_72;
    }
    v36 = v113;
LABEL_65:
    if ( (*(_DWORD *)v22 & 0x20000) != 0 )
    {
      v54 = GetNextModeArrayEntry(a7);
      v24 = 0LL;
      v57 = v54;
      if ( !v54 )
        goto LABEL_145;
      *(_DWORD *)v54 = 1;
      *((_DWORD *)v54 + 1) = v55;
      v58 = *v56;
      *((_QWORD *)v54 + 1) = *v56;
      *((_DWORD *)v54 + 4) = v107;
      *((_DWORD *)v54 + 5) = v101;
      if ( (*(_DWORD *)v22 & 0x100) != 0 )
      {
        D3dPixelFormatToDisplayConfigPixelFormat(
          *(_DWORD *)(v22 + 108),
          (struct DISPLAYCONFIG_MODE_INFO *)((char *)v54 + 24));
      }
      else
      {
        if ( *(_DWORD *)(v22 + 212) )
        {
          v84 = WdLogNewEntry5_WdAssertion(v58);
          *(_QWORD *)(v84 + 24) = 1546LL;
          WdLogEvent5_WdAssertion(v84);
          v24 = 0LL;
        }
        *((_DWORD *)v57 + 6) = 4;
      }
      if ( (*(_DWORD *)v22 & 0x800) != 0 )
        *(_QWORD *)((char *)v57 + 28) = *(_QWORD *)(v22 + 136);
      else
        *(_QWORD *)((char *)v57 + 28) = 0x7FFFFFFFLL;
      v36 = v113;
      if ( v113 && a5 == (_DWORD)v24 )
      {
        *(_WORD *)(v10 + 14) = (__int64)(unsigned int)((_DWORD)v57 - *((_DWORD *)a7 + 6)) >> 6;
        *(_DWORD *)(v10 + 12) |= 0xFFFFu;
      }
      else
      {
        *(_DWORD *)(v10 + 12) = ((__int64)v57 - *((_QWORD *)a7 + 3)) >> 6;
      }
    }
    else
    {
      if ( !v112 && (*(_DWORD *)(v10 + 68) & 1) != 0 )
      {
        v86 = WdLogNewEntry5_WdError(v36);
        *(_QWORD *)(v86 + 24) = 1575LL;
        WdLogEvent5_WdError(v86);
        LODWORD(v9) = -1073741637;
        goto LABEL_75;
      }
      *(_DWORD *)(v10 + 12) = -1;
    }
    if ( (_DWORD)v36 )
    {
      *(_DWORD *)(v10 + 32) |= 0xFFFFu;
      if ( *(_BYTE *)(v22 + 121) != (_BYTE)v24 )
      {
        *(_DWORD *)(v10 + 68) |= 8u;
        v60 = *(_DWORD *)v22;
        if ( *(int *)v22 < 0 )
        {
          if ( (v60 & 0x800000) != 0 )
          {
            v61 = GetNextModeArrayEntry(a7);
            v24 = 0LL;
            if ( !v61 )
            {
LABEL_145:
              LODWORD(v9) = -1073741789;
              *(_QWORD *)(WdLogNewEntry5_WdTrace(v50, v49, v24, v51) + 24) = *((unsigned int *)a7 + 4);
              goto LABEL_75;
            }
            *(_DWORD *)v61 = 3;
            *((_DWORD *)v61 + 1) = *(_DWORD *)(v22 + 20);
            *((_QWORD *)v61 + 1) = *(_QWORD *)(v22 + 8);
            *((_DWORD *)v61 + 4) = *(_DWORD *)(v22 + 88);
            *((_DWORD *)v61 + 5) = *(_DWORD *)(v22 + 92);
            v62 = *(_OWORD *)(v22 + 160);
            *((_DWORD *)v61 + 12) = v107;
            v63 = v101;
            *(_OWORD *)((char *)v61 + 24) = v62;
            *((_QWORD *)v61 + 5) = 0LL;
            *((_DWORD *)v61 + 13) = v63;
            *(_WORD *)(v10 + 32) = (__int64)(unsigned int)((_DWORD)v61 - *((_DWORD *)a7 + 6)) >> 6;
          }
          else if ( (v60 & 0x100) != 0 )
          {
            v85 = WdLogNewEntry5_WdAssertion(v36);
            *(_QWORD *)(v85 + 24) = 1641LL;
            WdLogEvent5_WdAssertion(v85);
            v24 = 0LL;
          }
        }
      }
    }
    goto LABEL_70;
  }
LABEL_74:
  *((_QWORD *)a7 + 4) = v10;
  if ( v21 )
  {
    if ( AdapterAndSourceForHash != (_DWORD)v24 && v113 == (_DWORD)v24 )
    {
      v87 = (unsigned int)v24;
      v114 = (int)v24;
      if ( (unsigned __int16)v24 < *(_WORD *)(v8 + 20) )
      {
        v88 = (_DWORD *)(*((_QWORD *)a7 + 1) + 28LL);
        while ( 1 )
        {
          if ( (v88[10] & 1) != 0 && ((unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v25) & *v88) != 0 )
          {
            v89 = *v88 >> DXGADAPTERSOURCEHASH::GetHashBitShift(v106);
            AdapterAndSourceForHash = DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(
                                        v106,
                                        v89,
                                        (struct _LUID *)&v110,
                                        &v108);
            LODWORD(v9) = AdapterAndSourceForHash;
            if ( AdapterAndSourceForHash < 0 )
            {
              v69 = (_QWORD *)WdLogNewEntry5_WdError(v90);
              v69[3] = v89;
LABEL_175:
              WdLogEvent5_WdError(v69);
              break;
            }
            if ( v110.Numerator != *(v88 - 2) || (v91 = 0, v110.Denominator != *(v88 - 1)) )
              v91 = 1;
            v92 = 0;
            v93 = *((_QWORD *)v7 + 1);
            if ( *(_WORD *)(v8 + 20) )
            {
              v94 = v108;
              v95 = (_DWORD *)(v93 + 28);
              v96 = v106;
              v97 = v91;
              v105 = v91;
              while ( 1 )
              {
                if ( (v95[10] & 1) == 0 )
                {
                  if ( v97 )
                  {
                    if ( *v95 == (~(unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v96) & *v88) )
                    {
                      v95[9] &= ~1u;
                      v95[8] = 0;
                    }
                  }
                  else
                  {
                    if ( *(v95 - 5) != *(v88 - 5)
                      || *v95 != (~(unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v96) & *v88) )
                    {
                      HashBitMask = DXGADAPTERSOURCEHASH::GetHashBitMask(v96);
                      v97 = v105;
                      if ( *v95 == (~HashBitMask & *v88) )
                        *v95 = *v88;
                      goto LABEL_165;
                    }
                    *v95 = *v88;
                    *(v95 - 5) = v94;
                  }
                  v97 = v105;
                }
LABEL_165:
                ++v92;
                v95 += 18;
                if ( v92 >= *(unsigned __int16 *)(v8 + 20) )
                {
                  LODWORD(v9) = AdapterAndSourceForHash;
                  v7 = a7;
                  break;
                }
              }
            }
            v87 = v114;
          }
          ++v87;
          v88 += 18;
          v114 = v87;
          if ( v87 >= *(unsigned __int16 *)(v8 + 20) )
            break;
          v25 = v106;
        }
      }
    }
  }
LABEL_75:
  for ( j = 0; j < *(unsigned __int16 *)(v8 + 20); *(_QWORD *)(216 * v44 + v8 + 232) = 0LL )
    v44 = j++;
  return (unsigned int)v9;
}
