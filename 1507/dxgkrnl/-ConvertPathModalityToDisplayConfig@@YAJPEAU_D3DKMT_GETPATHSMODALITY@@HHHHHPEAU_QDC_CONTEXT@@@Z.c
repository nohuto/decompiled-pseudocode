/*
 * XREFs of ?ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z @ 0x1C005FFDC
 * Callers:
 *     ?GetRequestedPathsModality@@YAJIHHHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C0060F28 (-GetRequestedPathsModality@@YAJIHHHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C0150298 (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 * Callees:
 *     ?GetPrimaryPathInCloneGroup@@YAIPEBU_D3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C0001308 (-GetPrimaryPathInCloneGroup@@YAIPEBU_D3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     IsInternalVideoOutput @ 0x1C0004FC0 (IsInternalVideoOutput.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C00085FC (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?ConvertDmmToDisplayConfigScaling@@YA?AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C005FFC0 (-ConvertDmmToDisplayConfigScaling@@YA-AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 *     ?FindModeArrayEntry@@YAPEAUDISPLAYCONFIG_MODE_INFO@@PEAU_QDC_CONTEXT@@W4DISPLAYCONFIG_MODE_INFO_TYPE@@IU_LUID@@@Z @ 0x1C006051C (-FindModeArrayEntry@@YAPEAUDISPLAYCONFIG_MODE_INFO@@PEAU_QDC_CONTEXT@@W4DISPLAYCONFIG_MODE_INFO_.c)
 *     ?GetNextModeArrayEntry@@YAPEAUDISPLAYCONFIG_MODE_INFO@@PEAU_QDC_CONTEXT@@@Z @ 0x1C0060558 (-GetNextModeArrayEntry@@YAPEAUDISPLAYCONFIG_MODE_INFO@@PEAU_QDC_CONTEXT@@@Z.c)
 *     ?DMMVideoSignalInfoToDisplayConfigVideoSignalInfo@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAUDISPLAYCONFIG_VIDEO_SIGNAL_INFO@@@Z @ 0x1C00628F4 (-DMMVideoSignalInfoToDisplayConfigVideoSignalInfo@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAUDISPLA.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?D3dPixelFormatToDisplayConfigPixelFormat@@YAXW4_D3DDDIFORMAT@@PEAW4DISPLAYCONFIG_PIXELFORMAT@@@Z @ 0x1C008D884 (-D3dPixelFormatToDisplayConfigPixelFormat@@YAXW4_D3DDDIFORMAT@@PEAW4DISPLAYCONFIG_PIXELFORMAT@@@.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C009C3A8 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C013F478 (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEAU_LUID@@IPEAI@Z @ 0x1C013F618 (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEAU_LUID@@IPEAI@Z.c)
 */

__int64 __fastcall ConvertPathModalityToDisplayConfig(
        struct _D3DKMT_GETPATHSMODALITY *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        struct _QDC_CONTEXT *a7)
{
  struct _QDC_CONTEXT *v7; // r15
  int v8; // r12d
  int v9; // ebp
  int v11; // r14d
  __int64 v12; // rdi
  int v13; // esi
  char *v14; // rbx
  struct DXGGLOBAL *Global; // rax
  int v16; // r10d
  unsigned __int16 LowPart; // dx
  DXGADAPTERSOURCEHASH *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 Denominator; // rcx
  __int64 v22; // r8
  __int64 PrimaryPathInCloneGroup; // r9
  _DWORD *v24; // r10
  _DWORD *v25; // rbp
  _QWORD *v26; // rsi
  int v27; // r10d
  int v28; // r12d
  int v29; // eax
  _BOOL8 v30; // rcx
  unsigned int v31; // r11d
  __int64 ModeArrayEntry; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rcx
  unsigned int v38; // ebp
  _QWORD *v39; // r11
  __int64 v40; // rax
  int v41; // ebp
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v42; // eax
  struct DISPLAYCONFIG_MODE_INFO *NextModeArrayEntry; // rax
  __int64 v44; // rcx
  int v45; // r11d
  __int64 v46; // r10
  struct DISPLAYCONFIG_MODE_INFO *v47; // rax
  __int64 *v48; // r11
  struct DISPLAYCONFIG_MODE_INFO *v49; // rsi
  __int64 v50; // rcx
  __int64 v52; // rcx
  int *v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rdx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  int HashForAdapterAndSource; // eax
  __int64 v66; // rcx
  __int64 v67; // rsi
  __int64 v68; // rax
  int v69; // eax
  struct DISPLAYCONFIG_MODE_INFO *v70; // rax
  __int128 v71; // xmm0
  __int64 v72; // rax
  _QWORD *v73; // rax
  __int16 v74; // si
  _DWORD *j; // rbx
  unsigned int v76; // edi
  __int64 v77; // rcx
  int AdapterAndSourceForHash; // ebp
  int v79; // eax
  unsigned int v80; // edx
  int v81; // r10d
  _DWORD *v82; // rcx
  __int64 v83; // rax
  int v84; // [rsp+20h] [rbp-78h]
  int v85; // [rsp+24h] [rbp-74h]
  int v86; // [rsp+28h] [rbp-70h]
  unsigned int v87; // [rsp+2Ch] [rbp-6Ch] BYREF
  DXGADAPTERSOURCEHASH *v88; // [rsp+30h] [rbp-68h]
  struct _D3DDDI_RATIONAL v89; // [rsp+38h] [rbp-60h] BYREF
  __int64 i; // [rsp+40h] [rbp-58h]
  struct _LUID v91; // [rsp+A0h] [rbp+8h] BYREF
  int v92; // [rsp+A8h] [rbp+10h]
  int v93; // [rsp+B0h] [rbp+18h]
  unsigned int v94; // [rsp+B8h] [rbp+20h]

  v94 = a4;
  v93 = a3;
  v92 = a2;
  v7 = a7;
  v8 = 0;
  v9 = a6;
  v11 = 1;
  v12 = *((_QWORD *)a7 + 1);
  if ( a6 )
  {
    if ( *((_DWORD *)a7 + 1) )
    {
      v13 = 0;
      if ( *((_WORD *)a1 + 10) )
      {
        v53 = (int *)((char *)a1 + 128);
        do
        {
          if ( IsInternalVideoOutput(*v53) )
            v13 = 1;
          v53 = (int *)(v54 + 216);
        }
        while ( v55 != 1 );
      }
      goto LABEL_4;
    }
LABEL_102:
    v56 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    *(_QWORD *)(v56 + 24) = *((unsigned int *)v7 + 1);
    if ( !v9 )
      v11 = *((unsigned __int16 *)a1 + 10);
    *(_QWORD *)(v56 + 32) = v11;
    WdLogEvent5_WdWarning(v56);
    return 3221225507LL;
  }
  if ( *((_DWORD *)a7 + 1) < (unsigned int)*((unsigned __int16 *)a1 + 10) )
    goto LABEL_102;
  v13 = 0;
LABEL_4:
  v14 = (char *)a1 + 48;
  v86 = 0;
  v85 = 0;
  Global = DXGGLOBAL::GetGlobal();
  v16 = 0;
  LowPart = 0;
  LOWORD(v91.LowPart) = 0;
  v18 = (struct DXGGLOBAL *)((char *)Global + 808);
  v88 = (struct DXGGLOBAL *)((char *)Global + 808);
  if ( *((_WORD *)a1 + 10) )
  {
    v19 = v13;
    for ( i = v13; ; v19 = i )
    {
      if ( v9 )
      {
        if ( v19 )
        {
          if ( !IsInternalVideoOutput(*((_DWORD *)v14 + 20)) )
            goto LABEL_61;
        }
      }
      PrimaryPathInCloneGroup = (unsigned int)GetPrimaryPathInCloneGroup(a1, LowPart);
      v25 = (_DWORD *)((char *)a1 + 216 * PrimaryPathInCloneGroup + 48);
      if ( *((_DWORD *)v14 + 4) == v25[4] && *((_DWORD *)v14 + 2) == v25[2] && *((_DWORD *)v14 + 3) == v25[3] )
        v25 = v24;
      if ( v25 )
        v8 = 1;
      v85 = v8;
      if ( (*(_DWORD *)v14 & 0x1000) == 0 )
      {
        v58 = WdLogNewEntry5_WdAssertion(Denominator, v20, v22, PrimaryPathInCloneGroup);
        *(_QWORD *)(v58 + 24) = 1181LL;
        WdLogEvent5_WdAssertion(v58);
      }
      v26 = v14 + 8;
      *(_QWORD *)v12 = *((_QWORD *)v14 + 1);
      if ( (*(_DWORD *)v14 & 0x2000) == 0 )
      {
        v59 = WdLogNewEntry5_WdAssertion(Denominator, v20, v22, PrimaryPathInCloneGroup);
        *(_QWORD *)(v59 + 24) = 1184LL;
        WdLogEvent5_WdAssertion(v59);
      }
      *(_DWORD *)(v12 + 8) = *((_DWORD *)v14 + 4);
      *(_DWORD *)(v12 + 16) = (*(_DWORD *)v14 >> 30) & 1;
      *(_QWORD *)(v12 + 20) = *v26;
      if ( (*(_DWORD *)v14 & 0x4000) == 0 )
      {
        v60 = WdLogNewEntry5_WdAssertion(Denominator, v20, v22, PrimaryPathInCloneGroup);
        *(_QWORD *)(v60 + 24) = 1190LL;
        WdLogEvent5_WdAssertion(v60);
      }
      *(_DWORD *)(v12 + 28) = *((_DWORD *)v14 + 5);
      if ( (*(_DWORD *)v14 & 0x8000) == 0 )
      {
        v61 = WdLogNewEntry5_WdAssertion(Denominator, v20, v22, PrimaryPathInCloneGroup);
        *(_QWORD *)(v61 + 24) = 1193LL;
        WdLogEvent5_WdAssertion(v61);
      }
      *(_DWORD *)(v12 + 36) = *((_DWORD *)v14 + 20);
      if ( (*(_DWORD *)v14 & 2) != 0 )
      {
        DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v14 + 24), &v89);
        v27 = 0;
        Denominator = v89.Denominator;
        *(_DWORD *)(v12 + 48) = v89.Numerator;
        *(_DWORD *)(v12 + 52) = Denominator;
        *(_DWORD *)(v12 + 56) = 1;
      }
      else
      {
        v27 = 0;
        *(_QWORD *)(v12 + 48) = 0LL;
        *(_DWORD *)(v12 + 56) = 0;
      }
      if ( (*(_DWORD *)v14 & 4) != 0 )
        *(_DWORD *)(v12 + 56) = (int)(*((_DWORD *)v14 + 18) << 29) >> 29;
      if ( (*(_DWORD *)v14 & 0x200) != 0 )
      {
        v42 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)v14 + 30));
        v20 = 1LL;
        Denominator = (unsigned int)(v42 - 1);
        if ( (unsigned int)Denominator <= 3 )
          v20 = (unsigned int)v42;
        *(_DWORD *)(v12 + 40) = v20;
      }
      else
      {
        *(_DWORD *)(v12 + 40) = 1;
      }
      if ( ((*(_DWORD *)(v12 + 40) - 2) & 0xFFFFFFFD) != 0 )
      {
        v28 = *((_DWORD *)v14 + 35);
        v29 = *((_DWORD *)v14 + 36);
      }
      else
      {
        v28 = *((_DWORD *)v14 + 36);
        v29 = *((_DWORD *)v14 + 35);
      }
      v84 = v29;
      if ( v92 == v27 )
      {
        if ( (*(_DWORD *)v14 & 0x400) == 0 )
        {
          if ( *(int *)v14 < 0 )
          {
            v63 = WdLogNewEntry5_WdAssertion(Denominator, v20, v22, PrimaryPathInCloneGroup);
            *(_QWORD *)(v63 + 24) = 1272LL;
            WdLogEvent5_WdAssertion(v63);
          }
LABEL_33:
          *(_DWORD *)(v12 + 44) = 128;
          goto LABEL_34;
        }
        v52 = *((unsigned int *)v14 + 31);
      }
      else
      {
        if ( (*(_DWORD *)v14 & 0x10000) == 0 )
          goto LABEL_33;
        if ( *((_DWORD *)v14 + 32) == 1 )
        {
          v62 = WdLogNewEntry5_WdAssertion(Denominator, v20, v22, PrimaryPathInCloneGroup);
          *(_QWORD *)(v62 + 24) = 1247LL;
          WdLogEvent5_WdAssertion(v62);
        }
        v52 = *((unsigned int *)v14 + 32);
      }
      *(_DWORD *)(v12 + 44) = ConvertDmmToDisplayConfigScaling(v52, v20, v22, PrimaryPathInCloneGroup);
LABEL_34:
      *(_DWORD *)(v12 + 64) = 0;
      v30 = (*(_DWORD *)v14 & 0x20000000) != 0;
      *(_DWORD *)(v12 + 64) = v30;
      if ( (*(_DWORD *)v14 & 0x2000000) != 0 )
        *(_DWORD *)(v12 + 64) |= 2u;
      if ( (*(_DWORD *)v14 & 0x4000000) != 0 )
        *(_DWORD *)(v12 + 64) |= 4u;
      if ( (*(_DWORD *)v14 & 0x10000000) != 0 )
        *(_DWORD *)(v12 + 64) |= 0x10u;
      if ( (*(_DWORD *)v14 & 0x8000000) != 0 )
        *(_DWORD *)(v12 + 64) |= 8u;
      *(_DWORD *)(v12 + 60) = (*(_DWORD *)v14 & 0x1D000000) != 0;
      if ( v93 || *(int *)v14 < 0 )
      {
        *(_DWORD *)(v12 + 68) = 1;
      }
      else
      {
        *(_DWORD *)(v12 + 68) = 0;
        v86 = 1;
      }
      if ( !v25 || v94 )
      {
        v31 = *((_DWORD *)v14 + 5);
      }
      else
      {
        if ( (*((_DWORD *)v14 + 5) & 0xF0000000) != 0 )
        {
          v64 = WdLogNewEntry5_WdAssertion(v30, 0LL, v22, PrimaryPathInCloneGroup);
          *(_QWORD *)(v64 + 24) = 1333LL;
          WdLogEvent5_WdAssertion(v64);
        }
        HashForAdapterAndSource = DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
                                    v88,
                                    (struct _LUID *)v14 + 1,
                                    *((_DWORD *)v14 + 4),
                                    &v87);
        v67 = HashForAdapterAndSource;
        if ( HashForAdapterAndSource < 0 )
        {
          v73 = (_QWORD *)WdLogNewEntry5_WdError(v66);
          v73[3] = (unsigned int)v25[2];
          v73[4] = *((unsigned int *)v14 + 4);
          v73[5] = v67;
          WdLogEvent5_WdError(v73);
          return (unsigned int)v67;
        }
        v26 = v25 + 2;
        v31 = (v87 << 28) + (*((_DWORD *)v14 + 5) & 0xFFFFFFF);
        *(_DWORD *)(v12 + 28) = v31;
        *(_QWORD *)(v12 + 20) = *((_QWORD *)v25 + 1);
      }
      ModeArrayEntry = FindModeArrayEntry(v7, 2LL, v31, *v26);
      v16 = 0;
      if ( ModeArrayEntry )
      {
        v36 = (ModeArrayEntry - *((_QWORD *)v7 + 3)) >> 6;
      }
      else if ( (*(_DWORD *)v14 & 0x87) != 0 )
      {
        NextModeArrayEntry = GetNextModeArrayEntry(v7);
        if ( !NextModeArrayEntry )
          goto LABEL_105;
        *(_DWORD *)NextModeArrayEntry = 2;
        *((_QWORD *)NextModeArrayEntry + 1) = *v26;
        *((_DWORD *)NextModeArrayEntry + 1) = v45;
        DMMVideoSignalInfoToDisplayConfigVideoSignalInfo(
          (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v14 + 24),
          (struct DISPLAYCONFIG_MODE_INFO *)((char *)NextModeArrayEntry + 16));
        LODWORD(v36) = (v46 - *((_QWORD *)v7 + 3)) >> 6;
        v16 = 0;
      }
      else
      {
        LODWORD(v36) = -1;
      }
      v37 = v94;
      if ( v94 )
        *(_WORD *)(v12 + 34) = v36;
      else
        *(_DWORD *)(v12 + 32) = v36;
      if ( !v25 || (_DWORD)v37 )
      {
        v38 = *((_DWORD *)v14 + 4);
        v39 = v14 + 8;
        if ( (_DWORD)v37 )
          goto LABEL_56;
      }
      else
      {
        v39 = v25 + 2;
        v38 = v25[4];
        *(_DWORD *)(v12 + 8) = v38;
        *(_QWORD *)v12 = *v39;
      }
      v40 = FindModeArrayEntry(v7, 1LL, v38, *v39);
      v16 = 0;
      if ( !v40 )
      {
        v37 = v94;
LABEL_56:
        if ( (*(_DWORD *)v14 & 0x20000) != 0 )
        {
          v47 = GetNextModeArrayEntry(v7);
          v49 = v47;
          if ( !v47 )
            goto LABEL_105;
          *((_DWORD *)v47 + 1) = v38;
          v41 = v84;
          *(_DWORD *)v47 = 1;
          v50 = *v48;
          *((_QWORD *)v47 + 1) = *v48;
          *((_DWORD *)v47 + 4) = v28;
          *((_DWORD *)v47 + 5) = v84;
          if ( (*(_DWORD *)v14 & 0x100) != 0 )
          {
            D3dPixelFormatToDisplayConfigPixelFormat(
              *((enum _D3DDDIFORMAT *)v14 + 26),
              (struct DISPLAYCONFIG_MODE_INFO *)((char *)v47 + 24));
          }
          else
          {
            if ( *((_DWORD *)v14 + 53) != v16 )
            {
              v68 = WdLogNewEntry5_WdAssertion(v50, v33, v34, v35);
              *(_QWORD *)(v68 + 24) = 1451LL;
              WdLogEvent5_WdAssertion(v68);
              v16 = 0;
            }
            *((_DWORD *)v49 + 6) = 4;
          }
          if ( (*(_DWORD *)v14 & 0x800) != 0 )
            *(_QWORD *)((char *)v49 + 28) = *(_QWORD *)(v14 + 132);
          else
            *(_QWORD *)((char *)v49 + 28) = 0x7FFFFFFFLL;
          v37 = v94;
          if ( v94 && a5 == v16 )
          {
            *(_WORD *)(v12 + 14) = (__int64)(unsigned int)((_DWORD)v49 - *((_DWORD *)v7 + 6)) >> 6;
            *(_DWORD *)(v12 + 12) |= 0xFFFFu;
          }
          else
          {
            *(_DWORD *)(v12 + 12) = ((__int64)v49 - *((_QWORD *)v7 + 3)) >> 6;
          }
        }
        else
        {
          v41 = v84;
          *(_DWORD *)(v12 + 12) = -1;
        }
        if ( (_DWORD)v37 )
        {
          *(_DWORD *)(v12 + 32) |= 0xFFFFu;
          if ( v14[117] != (_BYTE)v16 )
          {
            *(_DWORD *)(v12 + 68) |= 8u;
            v69 = *(_DWORD *)v14;
            if ( *(int *)v14 < 0 )
            {
              if ( (v69 & 0x800000) != 0 )
              {
                v70 = GetNextModeArrayEntry(v7);
                if ( !v70 )
                {
LABEL_105:
                  *(_QWORD *)(WdLogNewEntry5_WdTrace(v44, v33, v34, v35) + 24) = *((unsigned int *)v7 + 4);
                  return 3221225507LL;
                }
                *(_DWORD *)v70 = 3;
                *((_DWORD *)v70 + 1) = *((_DWORD *)v14 + 5);
                *((_QWORD *)v70 + 1) = *((_QWORD *)v14 + 1);
                *((_DWORD *)v70 + 4) = *((_DWORD *)v14 + 21);
                *((_DWORD *)v70 + 5) = *((_DWORD *)v14 + 22);
                v71 = *(_OWORD *)(v14 + 156);
                *((_QWORD *)v70 + 5) = 0LL;
                *((_DWORD *)v70 + 12) = v28;
                *(_OWORD *)((char *)v70 + 24) = v71;
                *((_DWORD *)v70 + 13) = v41;
                *(_WORD *)(v12 + 32) = (__int64)(unsigned int)((_DWORD)v70 - *((_DWORD *)v7 + 6)) >> 6;
              }
              else if ( (v69 & 0x100) != 0 )
              {
                v72 = WdLogNewEntry5_WdAssertion(v37, v33, v34, v35);
                *(_QWORD *)(v72 + 24) = 1537LL;
                WdLogEvent5_WdAssertion(v72);
                v16 = 0;
              }
            }
          }
        }
        goto LABEL_59;
      }
      *(_DWORD *)(v12 + 12) = (v40 - *((_QWORD *)v7 + 3)) >> 6;
LABEL_59:
      v9 = a6;
      v12 += 72LL;
      if ( a6 )
        goto LABEL_78;
      v8 = v85;
      LowPart = v91.LowPart;
LABEL_61:
      ++LowPart;
      v14 += 216;
      LOWORD(v91.LowPart) = LowPart;
      if ( LowPart >= *((_WORD *)a1 + 10) )
      {
LABEL_78:
        v18 = v88;
        break;
      }
    }
  }
  *((_QWORD *)v7 + 4) = v12;
  if ( v85 == v16 )
    return 0LL;
  if ( v86 == v16 )
    return 0LL;
  if ( v94 != v16 )
    return 0LL;
  v74 = v16;
  if ( (unsigned __int16)v16 >= *((_WORD *)a1 + 10) )
    return 0LL;
  for ( j = (_DWORD *)(*((_QWORD *)v7 + 1) + 28LL); ; j += 18 )
  {
    if ( (j[10] & 1) == 0 || (*j & 0xF0000000) == 0 )
      goto LABEL_151;
    v76 = *j >> 28;
    AdapterAndSourceForHash = DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(v18, v76, &v91, &a6);
    if ( AdapterAndSourceForHash < 0 )
      break;
    if ( v91.LowPart != *(j - 2) || (v79 = 0, v91.HighPart != *(j - 1)) )
      v79 = 1;
    v80 = 0;
    if ( *((_WORD *)a1 + 10) )
    {
      v81 = a6;
      v82 = (_DWORD *)(*((_QWORD *)v7 + 1) + 28LL);
      do
      {
        if ( (v82[10] & 1) == 0 )
        {
          if ( v79 )
          {
            if ( *v82 == (*j & 0xFFFFFFF) )
            {
              v82[9] &= ~1u;
              v82[8] = 0;
            }
          }
          else if ( *(v82 - 5) == *(j - 5) && *v82 == (*j & 0xFFFFFFF) )
          {
            *v82 = *j;
            *(v82 - 5) = v81;
          }
          else if ( *v82 == (*j & 0xFFFFFFF) )
          {
            *v82 = *j;
          }
        }
        ++v80;
        v82 += 18;
      }
      while ( v80 < *((unsigned __int16 *)a1 + 10) );
      v7 = a7;
    }
LABEL_151:
    if ( (unsigned __int16)++v74 >= *((_WORD *)a1 + 10) )
      return 0LL;
    v18 = v88;
  }
  v83 = WdLogNewEntry5_WdError(v77);
  *(_QWORD *)(v83 + 24) = v76;
  WdLogEvent5_WdError(v83);
  return (unsigned int)AdapterAndSourceForHash;
}
