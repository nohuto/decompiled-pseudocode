/*
 * XREFs of ?ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z @ 0x1C00A883C
 * Callers:
 *     ?GetRequestedPathsModality@@YAJIHHHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00AB440 (-GetRequestedPathsModality@@YAJIHHHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C01535AC (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C0009FA8 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?GetPrimaryPathInCloneGroup@@YAIPEBU_D3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C000A2D4 (-GetPrimaryPathInCloneGroup@@YAIPEBU_D3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     IsInternalVideoOutput @ 0x1C000A310 (IsInternalVideoOutput.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C000C12C (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C001FF24 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?D3dPixelFormatToDisplayConfigPixelFormat@@YAXW4_D3DDDIFORMAT@@PEAW4DISPLAYCONFIG_PIXELFORMAT@@@Z @ 0x1C008D8DC (-D3dPixelFormatToDisplayConfigPixelFormat@@YAXW4_D3DDDIFORMAT@@PEAW4DISPLAYCONFIG_PIXELFORMAT@@@.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00A6FD8 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?FindModeArrayEntry@@YAPEAUDISPLAYCONFIG_MODE_INFO@@PEAU_QDC_CONTEXT@@W4DISPLAYCONFIG_MODE_INFO_TYPE@@IU_LUID@@@Z @ 0x1C00A8E68 (-FindModeArrayEntry@@YAPEAUDISPLAYCONFIG_MODE_INFO@@PEAU_QDC_CONTEXT@@W4DISPLAYCONFIG_MODE_INFO_.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00A8EB0 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?GetNextModeArrayEntry@@YAPEAUDISPLAYCONFIG_MODE_INFO@@PEAU_QDC_CONTEXT@@@Z @ 0x1C00A9514 (-GetNextModeArrayEntry@@YAPEAUDISPLAYCONFIG_MODE_INFO@@PEAU_QDC_CONTEXT@@@Z.c)
 *     ?DMMVideoSignalInfoToDisplayConfigVideoSignalInfo@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAUDISPLAYCONFIG_VIDEO_SIGNAL_INFO@@@Z @ 0x1C00AAA34 (-DMMVideoSignalInfoToDisplayConfigVideoSignalInfo@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAUDISPLA.c)
 *     ?ConvertDmmToDisplayConfigScaling@@YA?AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C00AAA9C (-ConvertDmmToDisplayConfigScaling@@YA-AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C01458E8 (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEAU_LUID@@IPEAI@Z @ 0x1C0145AAC (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEAU_LUID@@IPEAI@Z.c)
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
  __int64 v7; // rsi
  int v8; // r15d
  __int64 v9; // r14
  int v10; // r12d
  int v11; // r13d
  unsigned int v12; // ebx
  __int64 v13; // rdi
  int PrimaryPathInCloneGroup; // eax
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // r10
  int v18; // ebx
  __int64 v19; // rdi
  struct DXGGLOBAL *Global; // rax
  _DWORD *v21; // r10
  DXGADAPTERSOURCEHASH *v22; // r13
  __int64 v23; // rax
  __int64 Denominator; // rcx
  _DWORD *v25; // r12
  bool v26; // zf
  _QWORD *v27; // rbx
  int v28; // r10d
  int v29; // eax
  unsigned int v30; // r11d
  __int64 ModeArrayEntry; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned int v34; // r12d
  _QWORD *v35; // r11
  __int64 v36; // rax
  __int64 v37; // rcx
  int v38; // r12d
  unsigned int v39; // eax
  struct _QDC_CONTEXT *v40; // r13
  __int64 v41; // rbx
  unsigned int j; // edx
  __int64 v43; // rax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v45; // eax
  int v46; // edx
  struct DISPLAYCONFIG_MODE_INFO *NextModeArrayEntry; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  int v52; // r11d
  __int64 v53; // r10
  struct DISPLAYCONFIG_MODE_INFO *v54; // rax
  __int64 *v55; // r11
  struct DISPLAYCONFIG_MODE_INFO *v56; // rbx
  __int64 v57; // rcx
  __int64 v58; // rcx
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  struct DISPLAYCONFIG_MODE_INFO *v62; // rbx
  __int64 v63; // r8
  __int64 v64; // r9
  __int128 v65; // xmm0
  __int64 v66; // rdx
  unsigned int v67; // edx
  __int64 v68; // r9
  unsigned int v69; // r8d
  __int64 v70; // rdx
  _QWORD *v71; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rax
  int HashForAdapterAndSource; // eax
  __int64 v82; // rcx
  char HashBitShift; // al
  unsigned int v84; // ebx
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  unsigned int v89; // r12d
  int *v90; // rdi
  DXGADAPTERSOURCEHASH *v91; // r14
  unsigned int v92; // ebx
  __int64 v93; // rcx
  int v94; // eax
  unsigned int v95; // r14d
  unsigned int v96; // r12d
  _DWORD *v97; // rbx
  __int64 v98; // rcx
  int v99; // r13d
  int v100; // r13d
  int HashBitMask; // eax
  __int64 v102; // rax
  int IsVirtualizationDisabledForTarget; // [rsp+30h] [rbp-50h]
  char v104; // [rsp+34h] [rbp-4Ch] BYREF
  char v105; // [rsp+35h] [rbp-4Bh] BYREF
  int v106; // [rsp+38h] [rbp-48h]
  __int64 v107; // [rsp+40h] [rbp-40h]
  int v108; // [rsp+48h] [rbp-38h]
  unsigned int v109; // [rsp+4Ch] [rbp-34h] BYREF
  int v110; // [rsp+50h] [rbp-30h]
  DXGADAPTERSOURCEHASH *v111; // [rsp+58h] [rbp-28h]
  struct _D3DDDI_RATIONAL v112; // [rsp+60h] [rbp-20h] BYREF
  int v113; // [rsp+68h] [rbp-18h]
  __int64 v114; // [rsp+70h] [rbp-10h]
  int v115; // [rsp+C8h] [rbp+48h]
  int v116; // [rsp+D0h] [rbp+50h]
  unsigned int v117; // [rsp+D8h] [rbp+58h]
  int v118; // [rsp+E8h] [rbp+68h]

  v117 = a4;
  v116 = a3;
  v115 = a2;
  v7 = i;
  v8 = 1;
  v9 = *((_QWORD *)a7 + 1);
  if ( a6 )
  {
    if ( *((_DWORD *)a7 + 1) )
      goto LABEL_3;
LABEL_112:
    v66 = WdLogNewEntry5_WdWarning(i, a2, a3, a4);
    *(_QWORD *)(v66 + 24) = *((unsigned int *)a7 + 1);
    if ( !a6 )
      v8 = *(unsigned __int16 *)(v7 + 20);
    *(_QWORD *)(v66 + 32) = v8;
    WdLogEvent5_WdWarning(v66);
    return 3221225507LL;
  }
  if ( *((_DWORD *)a7 + 1) < (unsigned int)*(unsigned __int16 *)(i + 20) )
    goto LABEL_112;
LABEL_3:
  v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( !*(_WORD *)(i + 20) )
  {
    IsVirtualizationDisabledForTarget = a6;
    goto LABEL_11;
  }
  while ( 1 )
  {
    v13 = 216LL * v12;
    if ( IsInternalVideoOutput(*(_DWORD *)(v13 + v7 + 128)) )
      v10 = 1;
    PrimaryPathInCloneGroup = GetPrimaryPathInCloneGroup((const struct _D3DKMT_GETPATHSMODALITY *)v7, v12);
    v15 = *(_DWORD *)(v13 + v7 + 68);
    v16 = *(_QWORD *)(v13 + v7 + 56);
    *(_DWORD *)(v13 + v7 + 232) = PrimaryPathInCloneGroup;
    IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                          v16,
                                          v15,
                                          (unsigned int)&v105,
                                          (unsigned int)&v104,
                                          v17);
    if ( IsVirtualizationDisabledForTarget < 0 )
      break;
    if ( !v105 || v104 || v117 )
    {
      *(_DWORD *)(v13 + v7 + 236) = 0;
    }
    else
    {
      *(_DWORD *)(v13 + v7 + 236) = 1;
      v11 = 1;
    }
    if ( ++v12 >= *(unsigned __int16 *)(v7 + 20) )
    {
      if ( v11 )
      {
        v67 = *(unsigned __int16 *)(v7 + 20);
        for ( i = 0LL; (unsigned int)i < v67; i = (unsigned int)(i + 1) )
        {
          v68 = 216LL * (unsigned int)i;
          if ( *(_DWORD *)(v68 + v7 + 236) )
          {
            if ( *(_DWORD *)(v68 + v7 + 232) != (_DWORD)i )
            {
              v69 = 0;
              if ( v67 )
              {
                do
                {
                  v70 = 216LL * v69;
                  if ( *(_DWORD *)(v70 + v7 + 232) == *(_DWORD *)(v68 + v7 + 232) )
                    *(_DWORD *)(v70 + v7 + 232) = i;
                  ++v69;
                }
                while ( v69 < *(unsigned __int16 *)(v7 + 20) );
              }
            }
          }
          v67 = *(unsigned __int16 *)(v7 + 20);
        }
      }
LABEL_11:
      v18 = 0;
      LODWORD(v107) = 0;
      v108 = 0;
      v19 = v7 + 48;
      Global = DXGGLOBAL::GetGlobal(i);
      v21 = 0LL;
      v113 = 0;
      v22 = (struct DXGGLOBAL *)((char *)Global + 952);
      v111 = (struct DXGGLOBAL *)((char *)Global + 952);
      if ( *(_WORD *)(v7 + 20) )
      {
        v23 = v10;
        v114 = v10;
        while ( 2 )
        {
          if ( a6 != (_DWORD)v21 )
          {
            if ( v23 )
            {
              if ( !IsInternalVideoOutput(*(_DWORD *)(v19 + 80)) )
                goto LABEL_70;
            }
          }
          Denominator = 216LL * *(unsigned int *)(v19 + 184);
          v25 = (_DWORD *)(Denominator + v7 + 48);
          if ( *(_DWORD *)(v19 + 16) == v25[4] && *(_DWORD *)(v19 + 8) == v25[2] && *(_DWORD *)(v19 + 12) == v25[3] )
            v25 = v21;
          if ( v25 )
            v18 = 1;
          v26 = (*(_DWORD *)v19 & 0x1000) == 0;
          v108 = v18;
          if ( v26 )
          {
            v73 = WdLogNewEntry5_WdAssertion(Denominator);
            *(_QWORD *)(v73 + 24) = 1259LL;
            WdLogEvent5_WdAssertion(v73);
          }
          v27 = (_QWORD *)(v19 + 8);
          *(_QWORD *)v9 = *(_QWORD *)(v19 + 8);
          if ( (*(_DWORD *)v19 & 0x2000) == 0 )
          {
            v74 = WdLogNewEntry5_WdAssertion(Denominator);
            *(_QWORD *)(v74 + 24) = 1262LL;
            WdLogEvent5_WdAssertion(v74);
          }
          *(_DWORD *)(v9 + 8) = *(_DWORD *)(v19 + 16);
          *(_DWORD *)(v9 + 16) = (*(_DWORD *)v19 >> 30) & 1;
          *(_QWORD *)(v9 + 20) = *v27;
          if ( (*(_DWORD *)v19 & 0x4000) == 0 )
          {
            v75 = WdLogNewEntry5_WdAssertion(Denominator);
            *(_QWORD *)(v75 + 24) = 1268LL;
            WdLogEvent5_WdAssertion(v75);
          }
          *(_DWORD *)(v9 + 28) = *(_DWORD *)(v19 + 20);
          if ( (*(_DWORD *)v19 & 0x8000) == 0 )
          {
            v76 = WdLogNewEntry5_WdAssertion(Denominator);
            *(_QWORD *)(v76 + 24) = 1271LL;
            WdLogEvent5_WdAssertion(v76);
          }
          *(_DWORD *)(v9 + 36) = *(_DWORD *)(v19 + 80);
          if ( (*(_DWORD *)v19 & 2) != 0 )
          {
            DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v19 + 24), &v112);
            v28 = 0;
            Denominator = v112.Denominator;
            *(_DWORD *)(v9 + 48) = v112.Numerator;
            *(_DWORD *)(v9 + 52) = Denominator;
            *(_DWORD *)(v9 + 56) = 1;
          }
          else
          {
            v28 = 0;
            *(_QWORD *)(v9 + 48) = 0LL;
            *(_DWORD *)(v9 + 56) = 0;
          }
          if ( (*(_DWORD *)v19 & 4) != 0 )
            *(_DWORD *)(v9 + 56) = (int)(*(_DWORD *)(v19 + 72) << 29) >> 29;
          if ( (*(_DWORD *)v19 & 0x200) != 0 )
          {
            v45 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)(v19 + 120));
            v46 = 1;
            Denominator = (unsigned int)(v45 - 1);
            if ( (unsigned int)Denominator <= 3 )
              v46 = v45;
            *(_DWORD *)(v9 + 40) = v46;
          }
          else
          {
            *(_DWORD *)(v9 + 40) = 1;
          }
          if ( ((*(_DWORD *)(v9 + 40) - 2) & 0xFFFFFFFD) != 0 )
          {
            v106 = *(_DWORD *)(v19 + 140);
            v29 = *(_DWORD *)(v19 + 144);
          }
          else
          {
            v106 = *(_DWORD *)(v19 + 144);
            v29 = *(_DWORD *)(v19 + 140);
          }
          v110 = v29;
          if ( v115 == v28 )
          {
            if ( (*(_DWORD *)v19 & 0x400) == 0 )
            {
              if ( *(int *)v19 < 0 )
              {
                v78 = WdLogNewEntry5_WdAssertion(Denominator);
                *(_QWORD *)(v78 + 24) = 1350LL;
                WdLogEvent5_WdAssertion(v78);
              }
LABEL_40:
              *(_DWORD *)(v9 + 44) = 128;
LABEL_41:
              *(_DWORD *)(v9 + 64) = 0;
              *(_DWORD *)(v9 + 64) = (*(_DWORD *)v19 & 0x20000000) != 0;
              if ( (*(_DWORD *)v19 & 0x2000000) != 0 )
                *(_DWORD *)(v9 + 64) |= 2u;
              if ( (*(_DWORD *)v19 & 0x4000000) != 0 )
                *(_DWORD *)(v9 + 64) |= 4u;
              if ( (*(_DWORD *)v19 & 0x10000000) != 0 )
                *(_DWORD *)(v9 + 64) |= 0x10u;
              if ( (*(_DWORD *)v19 & 0x8000000) != 0 )
                *(_DWORD *)(v9 + 64) |= 8u;
              *(_DWORD *)(v9 + 60) = (*(_DWORD *)v19 & 0x1D000000) != 0;
              if ( v116 || *(int *)v19 < 0 )
              {
                *(_DWORD *)(v9 + 68) = 1;
              }
              else
              {
                *(_DWORD *)(v9 + 68) = 0;
                LODWORD(v107) = 1;
              }
              if ( !v25 || v117 )
              {
                v30 = *(_DWORD *)(v19 + 20);
              }
              else
              {
                if ( ((unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v22) & *(_DWORD *)(v19 + 20)) != 0 )
                {
                  v80 = WdLogNewEntry5_WdAssertion(v79);
                  *(_QWORD *)(v80 + 24) = 1411LL;
                  WdLogEvent5_WdAssertion(v80);
                }
                HashForAdapterAndSource = DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
                                            v22,
                                            (struct _LUID *)(v19 + 8),
                                            *(_DWORD *)(v19 + 16),
                                            &v109);
                v41 = HashForAdapterAndSource;
                IsVirtualizationDisabledForTarget = HashForAdapterAndSource;
                if ( HashForAdapterAndSource < 0 )
                {
                  v71 = (_QWORD *)WdLogNewEntry5_WdError(v82);
                  v71[3] = (unsigned int)v25[2];
                  v71[4] = *(unsigned int *)(v19 + 16);
                  v71[5] = v41;
                  goto LABEL_146;
                }
                HashBitShift = DXGADAPTERSOURCEHASH::GetHashBitShift(v22);
                v84 = v109 << HashBitShift;
                v30 = v84 + (*(_DWORD *)(v19 + 20) & ~(unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v22));
                v27 = v25 + 2;
                *(_DWORD *)(v9 + 28) = v30;
                *(_QWORD *)(v9 + 20) = *((_QWORD *)v25 + 1);
              }
              ModeArrayEntry = FindModeArrayEntry(a7, 2LL, v30, *v27);
              v21 = 0LL;
              if ( ModeArrayEntry )
              {
                v32 = (ModeArrayEntry - *((_QWORD *)a7 + 3)) >> 6;
              }
              else if ( (*(_DWORD *)v19 & 0x87) != 0 )
              {
                NextModeArrayEntry = GetNextModeArrayEntry(a7);
                if ( !NextModeArrayEntry )
                  goto LABEL_147;
                *(_DWORD *)NextModeArrayEntry = 2;
                *((_QWORD *)NextModeArrayEntry + 1) = *v27;
                *((_DWORD *)NextModeArrayEntry + 1) = v52;
                DMMVideoSignalInfoToDisplayConfigVideoSignalInfo(
                  (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v19 + 24),
                  (struct DISPLAYCONFIG_MODE_INFO *)((char *)NextModeArrayEntry + 16));
                LODWORD(v32) = (v53 - *((_QWORD *)a7 + 3)) >> 6;
                v21 = 0LL;
              }
              else
              {
                LODWORD(v32) = -1;
              }
              v33 = v117;
              if ( v117 )
                *(_WORD *)(v9 + 34) = v32;
              else
                *(_DWORD *)(v9 + 32) = v32;
              if ( v25 && !v117 )
              {
                v35 = v25 + 2;
                v34 = v25[4];
                *(_DWORD *)(v9 + 8) = v34;
                *(_QWORD *)v9 = *v35;
LABEL_61:
                v36 = FindModeArrayEntry(a7, 1LL, v34, *v35);
                v21 = 0LL;
                if ( v36 )
                {
                  *(_DWORD *)(v9 + 12) = (v36 - *((_QWORD *)a7 + 3)) >> 6;
                }
                else
                {
LABEL_62:
                  if ( (*(_DWORD *)v19 & 0x20000) != 0 )
                  {
                    v54 = GetNextModeArrayEntry(a7);
                    v56 = v54;
                    if ( !v54 )
                    {
LABEL_147:
                      LODWORD(v41) = -1073741789;
                      *(_QWORD *)(WdLogNewEntry5_WdTrace(v49, v48, v50, v51) + 24) = *((unsigned int *)a7 + 4);
                      goto LABEL_75;
                    }
                    *((_DWORD *)v54 + 1) = v34;
                    v38 = v106;
                    *(_DWORD *)v54 = 1;
                    v57 = *v55;
                    *((_QWORD *)v54 + 1) = *v55;
                    *((_DWORD *)v54 + 4) = v38;
                    *((_DWORD *)v54 + 5) = v110;
                    if ( (*(_DWORD *)v19 & 0x100) != 0 )
                    {
                      D3dPixelFormatToDisplayConfigPixelFormat(
                        *(_DWORD *)(v19 + 104),
                        (struct DISPLAYCONFIG_MODE_INFO *)((char *)v54 + 24));
                    }
                    else
                    {
                      if ( *(_DWORD *)(v19 + 212) != (_DWORD)v21 )
                      {
                        v85 = WdLogNewEntry5_WdAssertion(v57);
                        *(_QWORD *)(v85 + 24) = 1531LL;
                        WdLogEvent5_WdAssertion(v85);
                        v21 = 0LL;
                      }
                      *((_DWORD *)v56 + 6) = 4;
                    }
                    if ( (*(_DWORD *)v19 & 0x800) != 0 )
                      *(_QWORD *)((char *)v56 + 28) = *(_QWORD *)(v19 + 132);
                    else
                      *(_QWORD *)((char *)v56 + 28) = 0x7FFFFFFFLL;
                    v37 = v117;
                    if ( v117 && a5 == (_DWORD)v21 )
                    {
                      *(_WORD *)(v9 + 14) = (__int64)(unsigned int)((_DWORD)v56 - *((_DWORD *)a7 + 6)) >> 6;
                      *(_DWORD *)(v9 + 12) |= 0xFFFFu;
                    }
                    else
                    {
                      *(_DWORD *)(v9 + 12) = ((__int64)v56 - *((_QWORD *)a7 + 3)) >> 6;
                    }
                  }
                  else
                  {
                    if ( !v116 && (*(_DWORD *)(v9 + 68) & 1) != 0 )
                    {
                      v86 = WdLogNewEntry5_WdError(v33);
                      *(_QWORD *)(v86 + 24) = 1560LL;
                      WdLogEvent5_WdError(v86);
                      v21 = 0LL;
                      IsVirtualizationDisabledForTarget = -1073741637;
                    }
                    v37 = v117;
                    v38 = v106;
                    *(_DWORD *)(v9 + 12) = -1;
                  }
                  if ( (_DWORD)v37 )
                  {
                    *(_DWORD *)(v9 + 32) |= 0xFFFFu;
                    if ( *(_BYTE *)(v19 + 117) != (_BYTE)v21 )
                    {
                      *(_DWORD *)(v9 + 68) |= 8u;
                      v59 = *(_DWORD *)v19;
                      if ( *(int *)v19 < 0 )
                      {
                        if ( (v59 & 0x800000) != 0 )
                        {
                          v62 = GetNextModeArrayEntry(a7);
                          if ( !v62 )
                          {
                            v87 = WdLogNewEntry5_WdTrace(v61, v60, v63, v64);
                            v21 = 0LL;
                            IsVirtualizationDisabledForTarget = -1073741789;
                            *(_QWORD *)(v87 + 24) = *((unsigned int *)a7 + 4);
                          }
                          *(_DWORD *)v62 = 3;
                          *((_DWORD *)v62 + 1) = *(_DWORD *)(v19 + 20);
                          *((_QWORD *)v62 + 1) = *(_QWORD *)(v19 + 8);
                          *((_DWORD *)v62 + 4) = *(_DWORD *)(v19 + 84);
                          *((_DWORD *)v62 + 5) = *(_DWORD *)(v19 + 88);
                          v65 = *(_OWORD *)(v19 + 156);
                          *((_DWORD *)v62 + 13) = v110;
                          *(_OWORD *)((char *)v62 + 24) = v65;
                          *((_QWORD *)v62 + 5) = 0LL;
                          *((_DWORD *)v62 + 12) = v38;
                          *(_WORD *)(v9 + 32) = (__int64)(unsigned int)((_DWORD)v62 - *((_DWORD *)a7 + 6)) >> 6;
                        }
                        else if ( (v59 & 0x100) != 0 )
                        {
                          v88 = WdLogNewEntry5_WdAssertion(v37);
                          *(_QWORD *)(v88 + 24) = 1624LL;
                          WdLogEvent5_WdAssertion(v88);
                          v21 = 0LL;
                        }
                      }
                    }
                  }
                }
                v9 += 72LL;
                if ( a6 != (_DWORD)v21 )
                  goto LABEL_73;
                v22 = v111;
                v18 = v108;
LABEL_70:
                v19 += 216LL;
                v39 = *(unsigned __int16 *)(v7 + 20);
                if ( ++v113 >= v39 )
                  goto LABEL_73;
                v23 = v114;
                continue;
              }
              v34 = *(_DWORD *)(v19 + 16);
              v35 = (_QWORD *)(v19 + 8);
              if ( !v117 )
                goto LABEL_61;
              goto LABEL_62;
            }
            v58 = *(unsigned int *)(v19 + 124);
          }
          else
          {
            if ( (*(_DWORD *)v19 & 0x10000) == 0 )
              goto LABEL_40;
            if ( *(_DWORD *)(v19 + 128) == 1 )
            {
              v77 = WdLogNewEntry5_WdAssertion(Denominator);
              *(_QWORD *)(v77 + 24) = 1325LL;
              WdLogEvent5_WdAssertion(v77);
            }
            v58 = *(unsigned int *)(v19 + 128);
          }
          break;
        }
        *(_DWORD *)(v9 + 44) = ConvertDmmToDisplayConfigScaling(v58);
        goto LABEL_41;
      }
LABEL_73:
      v40 = a7;
      *((_QWORD *)a7 + 4) = v9;
      if ( v108 != (_DWORD)v21 && (_DWORD)v107 != (_DWORD)v21 && v117 == (_DWORD)v21 )
      {
        v89 = (unsigned int)v21;
        v118 = (int)v21;
        if ( (unsigned __int16)v21 < *(_WORD *)(v7 + 20) )
        {
          v90 = (int *)(*((_QWORD *)a7 + 1) + 28LL);
          do
          {
            if ( (v90[10] & 1) != 0 )
            {
              v91 = v111;
              if ( ((unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v111) & *v90) != 0 )
              {
                v92 = (unsigned int)*v90 >> DXGADAPTERSOURCEHASH::GetHashBitShift(v91);
                IsVirtualizationDisabledForTarget = DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(
                                                      v91,
                                                      v92,
                                                      (struct _LUID *)&v112,
                                                      &v109);
                if ( IsVirtualizationDisabledForTarget < 0 )
                {
                  v102 = WdLogNewEntry5_WdError(v93);
                  *(_QWORD *)(v102 + 24) = v92;
                  WdLogEvent5_WdError(v102);
                  break;
                }
                if ( v112.Numerator != *(v90 - 2) || (v94 = 0, v112.Denominator != *(v90 - 1)) )
                  v94 = 1;
                v95 = 0;
                if ( *(_WORD *)(v7 + 20) )
                {
                  v96 = v109;
                  v97 = (_DWORD *)(*((_QWORD *)v40 + 1) + 28LL);
                  v98 = v94;
                  v107 = v94;
                  while ( 1 )
                  {
                    if ( (v97[10] & 1) == 0 )
                    {
                      if ( v98 )
                      {
                        if ( *v97 == (*v90 & ~(unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v111)) )
                        {
                          v97[9] &= ~1u;
                          v97[8] = 0;
                        }
                      }
                      else
                      {
                        if ( *(v97 - 5) != *(v90 - 5)
                          || (v99 = *v90, *v97 != (v99 & ~(unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v111))) )
                        {
                          v100 = *v90;
                          HashBitMask = DXGADAPTERSOURCEHASH::GetHashBitMask(v111);
                          v98 = v107;
                          if ( *v97 == (v100 & ~HashBitMask) )
                            *v97 = v100;
                          goto LABEL_166;
                        }
                        *v97 = v99;
                        *(v97 - 5) = v96;
                      }
                      v98 = v107;
                    }
LABEL_166:
                    ++v95;
                    v97 += 18;
                    if ( v95 >= *(unsigned __int16 *)(v7 + 20) )
                    {
                      v89 = v118;
                      v40 = a7;
                      break;
                    }
                  }
                }
              }
            }
            ++v89;
            v90 += 18;
            v118 = v89;
          }
          while ( v89 < *(unsigned __int16 *)(v7 + 20) );
        }
      }
      LODWORD(v41) = IsVirtualizationDisabledForTarget;
      goto LABEL_75;
    }
  }
  v71 = (_QWORD *)WdLogNewEntry5_WdError(i);
  LODWORD(v41) = IsVirtualizationDisabledForTarget;
  v71[3] = IsVirtualizationDisabledForTarget;
LABEL_146:
  WdLogEvent5_WdError(v71);
LABEL_75:
  for ( j = 0; j < *(unsigned __int16 *)(v7 + 20); *(_QWORD *)(216 * v43 + v7 + 232) = 0LL )
    v43 = j++;
  return (unsigned int)v41;
}
