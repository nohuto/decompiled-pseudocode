/*
 * XREFs of ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C00E1094
 * Callers:
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C00E0DB8 (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C000AF10 (DxgkLogCodePointPacket.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C000CD24 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0089D20 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C0089D68 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0089DE4 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x1C00B8BF0 (DxgkGetGlobalRawmodeFlag.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00BCB40 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_D.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00BEAF0 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00BEB88 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ConvertGdiScalingToDMMScaling @ 0x1C00D9768 (ConvertGdiScalingToDMMScaling.c)
 *     ?RetrievePinnedModeForTarget@@YAJQEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPN__@@IPEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00E15A8 (-RetrievePinnedModeForTarget@@YAJQEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPN__@@IPEAU_D3DKMD.c)
 *     ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00E16C4 (-ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QE.c)
 *     DmmGetMostImportantVidPnPathTargetsFromSource @ 0x1C00E195C (DmmGetMostImportantVidPnPathTargetsFromSource.c)
 *     DmmGetDefaultScaling @ 0x1C01A3D08 (DmmGetDefaultScaling.c)
 */

__int64 __fastcall PinPresentPathModalityFromMode(
        void (__fastcall **a1)(char *, struct D3DKMDT_HVIDPN__ *),
        char *a2,
        struct D3DKMDT_HVIDPN__ *a3,
        struct _DXGDMM_VIDPN_INTERFACE *a4,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a5,
        struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a6,
        unsigned int a7,
        unsigned __int64 a8,
        struct _D3DKMT_DISPLAYMODE *a9,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a10,
        unsigned int a11,
        unsigned int a12,
        struct D3DKMDT_HVIDPN__ **a13)
{
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v16; // r15
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v17; // rbx
  struct _D3DKMT_DISPLAYMODE *v18; // r12
  __int64 v19; // r14
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rcx
  unsigned __int16 v24; // ax
  __int64 v25; // rbx
  int MostImportantVidPnPathTargetsFromSource; // eax
  __int64 v27; // rcx
  __int64 v28; // rsi
  unsigned int v29; // eax
  __int64 v30; // rsi
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rdi
  int v32; // eax
  __int64 v33; // rcx
  const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v34; // r9
  struct _DXGDMM_VIDPN_INTERFACE *v35; // r8
  struct D3DKMDT_HVIDPN__ *v36; // rdx
  unsigned int v37; // eax
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  D3DDDI_RATIONAL RefreshRate; // rax
  int v43; // edx
  int v44; // edx
  __int64 DisplayOrientation; // rsi
  int v46; // eax
  __int64 DisplayFixedOutput; // rcx
  __int64 v48; // rcx
  unsigned int i; // edi
  unsigned __int16 v50; // ax
  const struct _LUID *v51; // r15
  unsigned int j; // esi
  unsigned __int16 v53; // dx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v54; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v55; // rax
  bool GlobalRawmodeFlag; // al
  struct D3DKMDT_HVIDPN__ **v57; // r15
  int v58; // edi
  int v59; // edi
  __int64 v60; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rax
  unsigned int k; // ebx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v75; // rax
  signed int PathModalityForAdapterWithCoreAccessHeld; // eax
  __int64 v77; // rcx
  __int64 v78; // rax
  _BYTE v79[64]; // [rsp+48h] [rbp-B1h] BYREF
  __int64 v80; // [rsp+88h] [rbp-71h]
  _D3DKMDT_VIDPN_TARGET_MODE v81; // [rsp+A8h] [rbp-51h] BYREF
  unsigned __int64 v83; // [rsp+150h] [rbp+57h] BYREF
  struct D3DKMDT_HVIDPN__ *v84; // [rsp+158h] [rbp+5Fh]
  struct _DXGDMM_VIDPN_INTERFACE *v85; // [rsp+160h] [rbp+67h]

  v85 = a4;
  v84 = a3;
  if ( !a2 )
  {
    v62 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v62 + 24) = 3589LL;
    WdLogEvent5_WdAssertion(v62);
  }
  if ( !a3 )
  {
    v63 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v63 + 24) = 3590LL;
    WdLogEvent5_WdAssertion(v63);
  }
  if ( !a4 )
  {
    v64 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v64 + 24) = 3591LL;
    WdLogEvent5_WdAssertion(v64);
  }
  v16 = a5;
  if ( !a5 )
  {
    v65 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v65 + 24) = 3592LL;
    WdLogEvent5_WdAssertion(v65);
  }
  v17 = a6;
  if ( !a6 )
  {
    v66 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v66 + 24) = 3593LL;
    WdLogEvent5_WdAssertion(v66);
  }
  v18 = a9;
  if ( !a9 )
  {
    v67 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v67 + 24) = 3594LL;
    WdLogEvent5_WdAssertion(v67);
  }
  v19 = a7;
  if ( a7 == -1 )
  {
    v68 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v68 + 24) = 3595LL;
    WdLogEvent5_WdAssertion(v68);
  }
  if ( !a13 )
  {
    v69 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v69 + 24) = 3596LL;
    WdLogEvent5_WdAssertion(v69);
  }
  v20 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, unsigned __int64 *))v17 + 16))(v16, &v83);
  v22 = v20;
  if ( v20 >= 0 )
  {
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v79, v83, v83);
    v24 = v80;
    if ( v80 )
      v24 = *(_WORD *)(v80 + 22);
    if ( v24 < (unsigned __int16)v83 )
    {
      v71 = WdLogNewEntry5_WdLowResource(v23);
      *(_QWORD *)(v71 + 24) = v83;
      WdLogEvent5_WdLowResource(v71);
      LODWORD(v28) = -1073741801;
    }
    else
    {
      v25 = *(_QWORD *)(a2 + 268);
      MostImportantVidPnPathTargetsFromSource = DmmGetMostImportantVidPnPathTargetsFromSource((DXGADAPTER *)a2);
      v28 = MostImportantVidPnPathTargetsFromSource;
      if ( MostImportantVidPnPathTargetsFromSource < 0 )
      {
        v72 = (_QWORD *)WdLogNewEntry5_WdError(v27);
        v72[3] = v19;
        v72[4] = v16;
        v72[5] = v28;
      }
      else
      {
        v29 = 0;
        a7 = 0;
        if ( v83 )
        {
          v30 = 0LL;
          while ( 1 )
          {
            PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v79, v29);
            v32 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, __int64, unsigned int *, unsigned int *))a6
                   + 17))(
                    v16,
                    v30,
                    &a12,
                    &a11);
            v28 = v32;
            if ( v32 < 0 )
              break;
            v34 = a6;
            v35 = v85;
            v36 = v84;
            *((_DWORD *)PathDescriptor + 4) = a12;
            v37 = a11;
            *(_DWORD *)PathDescriptor |= 0x87000u;
            *((_DWORD *)PathDescriptor + 5) = v37;
            *((_QWORD *)PathDescriptor + 1) = v25;
            v38 = ConvertVidPnPathToPathDescription((DXGADAPTER *)a2, v36, v35, v34, v16, a12, a11, PathDescriptor);
            v28 = v38;
            if ( v38 < 0 )
            {
              v72 = (_QWORD *)WdLogNewEntry5_WdError(v39);
              v72[3] = a12;
              v72[4] = a11;
              v72[5] = v16;
              v72[6] = v28;
              goto LABEL_72;
            }
            if ( a12 == (_DWORD)v19 )
            {
              *((_DWORD *)PathDescriptor + 22) = v18->Width;
              *((_DWORD *)PathDescriptor + 23) = v18->Height;
              *((_QWORD *)PathDescriptor + 12) = *((_QWORD *)PathDescriptor + 11);
              *((_DWORD *)PathDescriptor + 27) = v18->Format;
              *((_BYTE *)PathDescriptor + 120) = (*((_BYTE *)&v18->Flags + 4) & 0x10) != 0;
              *(_DWORD *)PathDescriptor |= 0x100u;
              *((_DWORD *)PathDescriptor + 1) |= 0x100u;
              RefreshRate = v18->RefreshRate;
              v43 = *(_DWORD *)PathDescriptor;
              *((_DWORD *)PathDescriptor + 1) |= 2u;
              v44 = v43 | 2;
              *(_DWORD *)PathDescriptor = v44;
              *(D3DDDI_RATIONAL *)((char *)PathDescriptor + 44) = RefreshRate;
              if ( a11 == a10 )
              {
                DisplayOrientation = v18->DisplayOrientation;
                switch ( v18->DisplayOrientation )
                {
                  case D3DDDI_ROTATION_IDENTITY:
                    v46 = 1;
                    break;
                  case D3DDDI_ROTATION_90:
                    v46 = 2;
                    break;
                  case D3DDDI_ROTATION_180:
                    v46 = 3;
                    break;
                  case D3DDDI_ROTATION_270:
                    v46 = 4;
                    break;
                  default:
                    v73 = WdLogNewEntry5_WdError((unsigned int)(v18->DisplayOrientation - 3));
                    *(_QWORD *)(v73 + 24) = DisplayOrientation;
                    WdLogEvent5_WdError(v73);
                    v46 = 255;
                    break;
                }
                *(_DWORD *)PathDescriptor |= 0x200u;
                *((_DWORD *)PathDescriptor + 31) = v46;
              }
              else
              {
                *((_DWORD *)PathDescriptor + 31) = 0;
                *(_DWORD *)PathDescriptor = v44 & 0xFFFFFDFF;
              }
              if ( a11 == a10 )
                *((_DWORD *)PathDescriptor + 18) ^= (*((_DWORD *)PathDescriptor + 18) ^ v18->ScanLineOrdering) & 7;
              *(_DWORD *)PathDescriptor |= 4u;
              DisplayFixedOutput = v18->DisplayFixedOutput;
              if ( (unsigned int)(DisplayFixedOutput - 1) <= 1 )
              {
                ConvertGdiScalingToDMMScaling(DisplayFixedOutput, (_DWORD *)PathDescriptor + 32, v40, v41);
              }
              else if ( (*(_DWORD *)PathDescriptor & 0x400) == 0 )
              {
                DmmGetDefaultScaling(a2, (char *)PathDescriptor + 128);
              }
              *(_DWORD *)PathDescriptor |= 0x400u;
            }
            else
            {
              *((_DWORD *)PathDescriptor + 1) |= 0x187u;
            }
            v29 = a7 + 1;
            v30 = v29;
            ++a7;
            if ( v29 >= v83 )
              goto LABEL_38;
          }
          v72 = (_QWORD *)WdLogNewEntry5_WdError(v33);
          v72[3] = v16;
          v72[4] = v28;
        }
        else
        {
LABEL_38:
          v48 = v80;
          for ( i = 0; ; ++i )
          {
            v50 = v48 ? *(_WORD *)(v48 + 20) : 0;
            if ( i >= v50 )
              break;
            v51 = (const struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v79, i);
            if ( (v51->LowPart & 0x40000) != 0 )
            {
              v48 = v80;
            }
            else
            {
              for ( j = i; ; ++j )
              {
                v48 = v80;
                v53 = v80 ? *(_WORD *)(v80 + 20) : 0;
                if ( j >= v53 )
                  break;
                v54 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v79, j);
                if ( CCD_TOPOLOGY::IsMatchingSource(v54, v51 + 1, v51[2].LowPart) )
                {
                  *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v79, j) + 50) = i | 0xFE548000;
                  v55 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v79, j);
                  *(_DWORD *)v55 |= 0x40000u;
                }
              }
            }
          }
          GlobalRawmodeFlag = DxgkGetGlobalRawmodeFlag(v48);
          v57 = a13;
          v58 = 0;
          if ( GlobalRawmodeFlag )
            v58 = 0x20000;
          v59 = v58 | 0x40000;
          if ( (int)BmlGetPathModalityForAdapterWithCoreAccessHeld(v80, (__int64)a2, 1, 2, v59, (__int64)a13) >= 0 )
            goto LABEL_54;
          for ( k = 0; k < v83; ++k )
          {
            v75 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v79, k);
            if ( *((_DWORD *)v75 + 4) == (_DWORD)v19 )
              *((_DWORD *)v75 + 1) &= ~2u;
          }
          PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                       v80,
                                                       (__int64)a2,
                                                       1,
                                                       2,
                                                       v59,
                                                       (__int64)v57);
          v28 = PathModalityForAdapterWithCoreAccessHeld;
          DxgkLogCodePointPacket(0x1Eu, PathModalityForAdapterWithCoreAccessHeld, a8 + (v19 & 0xFFFF0000), 0);
          if ( (int)v28 >= 0 )
          {
LABEL_54:
            LODWORD(v28) = RetrievePinnedModeForTarget(v85, *v57, a10, &v81);
            if ( (int)v28 < 0 )
            {
              v78 = WdLogNewEntry5_WdAssertion(v60);
              *(_QWORD *)(v78 + 24) = 3868LL;
              WdLogEvent5_WdAssertion(v78);
              a1[8](a2, *v57);
              *v57 = 0LL;
            }
            else
            {
              DmmCalculatePresentationVSync(&v81.VideoSignalInfo, &v18->RefreshRate);
              v18->IntegerRefreshRate = DmmMapVSyncFromRationalToInteger(
                                          &v18->RefreshRate,
                                          (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&v81.VideoSignalInfo.AdditionalSignalInfo << 29) >> 29),
                                          0LL);
            }
            goto LABEL_56;
          }
          v72 = (_QWORD *)WdLogNewEntry5_WdError(v77);
          v72[3] = v28;
        }
      }
LABEL_72:
      WdLogEvent5_WdError(v72);
    }
LABEL_56:
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v79);
    return (unsigned int)v28;
  }
  v70 = (_QWORD *)WdLogNewEntry5_WdError(v21);
  v70[3] = v19;
  v70[4] = v16;
  v70[5] = v22;
  WdLogEvent5_WdError(v70);
  return (unsigned int)v22;
}
