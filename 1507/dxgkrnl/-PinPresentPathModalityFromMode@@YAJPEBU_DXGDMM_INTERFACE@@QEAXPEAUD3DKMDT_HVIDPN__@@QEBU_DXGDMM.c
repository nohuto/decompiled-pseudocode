/*
 * XREFs of ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C013AC74
 * Callers:
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C013BAEC (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 * Callees:
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C0001188 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C00084E0 (DxgkLogCodePointPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x1C00623A0 (DxgkGetGlobalRawmodeFlag.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0066084 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00660CC (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0066138 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C009A7B4 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C009BADC (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_D.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C009C3A8 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ConvertGdiScalingToDMMScaling @ 0x1C00B0564 (ConvertGdiScalingToDMMScaling.c)
 *     ?ConvertD3DddiRotationToDmmRotation@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DDDI_ROTATION@@@Z @ 0x1C013A91C (-ConvertD3DddiRotationToDmmRotation@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DDDI_ROTAT.c)
 *     ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C013A978 (-ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QE.c)
 *     ?RetrievePinnedModeForTarget@@YAJQEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPN__@@IPEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C013B590 (-RetrievePinnedModeForTarget@@YAJQEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPN__@@IPEAU_D3DKMD.c)
 *     DmmGetDefaultScaling @ 0x1C0175E64 (DmmGetDefaultScaling.c)
 *     DmmGetMostImportantVidPnPathTargetsFromSource @ 0x1C0176140 (DmmGetMostImportantVidPnPathTargetsFromSource.c)
 */

__int64 __fastcall PinPresentPathModalityFromMode(
        void (__fastcall **a1)(char *, char *),
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
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v19; // r14
  __int64 v20; // rax
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v21; // rbx
  __int64 v22; // rax
  struct _D3DKMT_DISPLAYMODE *v23; // r12
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rbx
  _QWORD *v31; // rax
  __int64 v33; // rcx
  unsigned __int16 v34; // ax
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rbx
  int MostImportantVidPnPathTargetsFromSource; // eax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  _QWORD *v42; // rax
  unsigned int v43; // eax
  __int64 v44; // rsi
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rdi
  int v46; // eax
  __int64 v47; // rcx
  const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v48; // r9
  struct _DXGDMM_VIDPN_INTERFACE *v49; // r8
  struct D3DKMDT_HVIDPN__ *v50; // rdx
  unsigned int v51; // eax
  int v52; // eax
  __int64 v53; // rcx
  D3DDDI_RATIONAL RefreshRate; // rax
  int v55; // edx
  int v56; // edx
  int v57; // eax
  __int64 DisplayFixedOutput; // rcx
  __int64 v59; // rcx
  unsigned int i; // edi
  unsigned __int16 v61; // ax
  const struct _LUID *v62; // r14
  unsigned int j; // esi
  unsigned __int16 v64; // dx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v65; // rax
  __int64 v66; // r8
  __int64 v67; // r9
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v68; // rax
  bool GlobalRawmodeFlag; // al
  char **v70; // r14
  int v71; // edi
  unsigned int v72; // edi
  __int64 v73; // r8
  __int64 v74; // r9
  unsigned int k; // ebx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v76; // rax
  signed int PathModalityForAdapterWithCoreAccessHeld; // eax
  __int64 v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // r9
  __int64 v84; // rax
  _BYTE v85[64]; // [rsp+48h] [rbp-B1h] BYREF
  __int64 v86; // [rsp+88h] [rbp-71h]
  _D3DKMDT_VIDPN_TARGET_MODE v87; // [rsp+A8h] [rbp-51h] BYREF
  unsigned __int64 v89; // [rsp+150h] [rbp+57h] BYREF
  struct D3DKMDT_HVIDPN__ *v90; // [rsp+158h] [rbp+5Fh]
  struct _DXGDMM_VIDPN_INTERFACE *v91; // [rsp+160h] [rbp+67h]

  v91 = a4;
  v90 = a3;
  if ( !a2 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1, 0LL, a3, a4);
    *(_QWORD *)(v16 + 24) = 3510LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !a3 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v17 + 24) = 3511LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a4 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v18 + 24) = 3512LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v19 = a5;
  if ( !a5 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v20 + 24) = 3513LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v21 = a6;
  if ( !a6 )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v22 + 24) = 3514LL;
    WdLogEvent5_WdAssertion(v22);
  }
  v23 = a9;
  if ( !a9 )
  {
    v24 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v24 + 24) = 3515LL;
    WdLogEvent5_WdAssertion(v24);
  }
  v25 = a7;
  if ( a7 == -1 )
  {
    v26 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v26 + 24) = 3516LL;
    WdLogEvent5_WdAssertion(v26);
  }
  if ( !a13 )
  {
    v27 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v27 + 24) = 3517LL;
    WdLogEvent5_WdAssertion(v27);
  }
  v28 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, unsigned __int64 *))v21 + 16))(v19, &v89);
  v30 = v28;
  if ( v28 < 0 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v29);
    v31[3] = v25;
    v31[4] = v19;
    v31[5] = v30;
    WdLogEvent5_WdError(v31);
    return (unsigned int)v30;
  }
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v85, v89, v89);
  v34 = v86;
  if ( v86 )
    v34 = *(_WORD *)(v86 + 22);
  if ( v34 >= (unsigned __int16)v89 )
  {
    v37 = *(_QWORD *)(a2 + 252);
    MostImportantVidPnPathTargetsFromSource = DmmGetMostImportantVidPnPathTargetsFromSource((DXGADAPTER *)a2);
    v36 = MostImportantVidPnPathTargetsFromSource;
    if ( MostImportantVidPnPathTargetsFromSource >= 0 )
    {
      v43 = 0;
      a7 = 0;
      if ( v89 )
      {
        v44 = 0LL;
        while ( 1 )
        {
          PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v85, v43, v40, v41);
          v46 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, __int64, unsigned int *, unsigned int *))a6
                 + 17))(
                  v19,
                  v44,
                  &a12,
                  &a11);
          v36 = v46;
          if ( v46 < 0 )
            break;
          v48 = a6;
          v49 = v91;
          v50 = v90;
          *((_DWORD *)PathDescriptor + 4) = a12;
          v51 = a11;
          *(_DWORD *)PathDescriptor |= 0x87000u;
          *((_DWORD *)PathDescriptor + 5) = v51;
          *((_QWORD *)PathDescriptor + 1) = v37;
          v52 = ConvertVidPnPathToPathDescription((__int64)a2, v50, v49, v48, v19, a12, a11, PathDescriptor);
          v36 = v52;
          if ( v52 < 0 )
          {
            v42 = (_QWORD *)WdLogNewEntry5_WdError(v53);
            v42[3] = a12;
            v42[4] = a11;
            v42[5] = v19;
            v42[6] = v36;
            goto LABEL_47;
          }
          if ( a12 == (_DWORD)v25 )
          {
            *((_DWORD *)PathDescriptor + 21) = v23->Width;
            *((_DWORD *)PathDescriptor + 22) = v23->Height;
            *(_QWORD *)((char *)PathDescriptor + 92) = *(_QWORD *)((char *)PathDescriptor + 84);
            *((_DWORD *)PathDescriptor + 26) = v23->Format;
            *((_BYTE *)PathDescriptor + 116) = (*((_BYTE *)&v23->Flags + 4) & 0x10) != 0;
            *(_DWORD *)PathDescriptor |= 0x100u;
            *((_DWORD *)PathDescriptor + 1) |= 0x100u;
            RefreshRate = v23->RefreshRate;
            v55 = *(_DWORD *)PathDescriptor;
            *((_DWORD *)PathDescriptor + 1) |= 2u;
            v56 = v55 | 2;
            *(_DWORD *)PathDescriptor = v56;
            *(D3DDDI_RATIONAL *)((char *)PathDescriptor + 44) = RefreshRate;
            if ( a11 == a10 )
            {
              v57 = ConvertD3DddiRotationToDmmRotation((unsigned int)v23->DisplayOrientation);
              *(_DWORD *)PathDescriptor |= 0x200u;
              *((_DWORD *)PathDescriptor + 30) = v57;
            }
            else
            {
              *((_DWORD *)PathDescriptor + 30) = 0;
              *(_DWORD *)PathDescriptor = v56 & 0xFFFFFDFF;
            }
            if ( a11 == a10 )
              *((_DWORD *)PathDescriptor + 18) ^= (*((_DWORD *)PathDescriptor + 18) ^ v23->ScanLineOrdering) & 7;
            *(_DWORD *)PathDescriptor |= 4u;
            DisplayFixedOutput = v23->DisplayFixedOutput;
            if ( (unsigned int)(DisplayFixedOutput - 1) > 1 )
            {
              if ( (*(_DWORD *)PathDescriptor & 0x400) == 0 )
                DmmGetDefaultScaling(a2, (char *)PathDescriptor + 124);
            }
            else
            {
              ConvertGdiScalingToDMMScaling(DisplayFixedOutput, (_DWORD *)PathDescriptor + 31, v40, v41);
            }
            *(_DWORD *)PathDescriptor |= 0x400u;
          }
          else
          {
            *((_DWORD *)PathDescriptor + 1) |= 0x187u;
          }
          v43 = a7 + 1;
          v44 = v43;
          ++a7;
          if ( v43 >= v89 )
            goto LABEL_42;
        }
        v42 = (_QWORD *)WdLogNewEntry5_WdError(v47);
        v42[3] = v19;
        v42[4] = v36;
      }
      else
      {
LABEL_42:
        v59 = v86;
        for ( i = 0; ; ++i )
        {
          v61 = v59 ? *(_WORD *)(v59 + 20) : 0;
          if ( i >= v61 )
            break;
          v62 = (const struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v85, i, v40, v41);
          if ( (v62->LowPart & 0x40000) != 0 )
          {
            v59 = v86;
          }
          else
          {
            for ( j = i; ; ++j )
            {
              v59 = v86;
              v64 = v86 ? *(_WORD *)(v86 + 20) : 0;
              if ( j >= v64 )
                break;
              v65 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v85, j, v40, v41);
              if ( CCD_TOPOLOGY::IsMatchingSource(v65, v62 + 1, v62[2].LowPart) )
              {
                *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v85, j, v40, v41) + 50) = i | 0xFE548000;
                v68 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v85, j, v66, v67);
                *(_DWORD *)v68 |= 0x40000u;
              }
            }
          }
        }
        GlobalRawmodeFlag = DxgkGetGlobalRawmodeFlag();
        v70 = (char **)a13;
        v71 = 0;
        if ( GlobalRawmodeFlag )
          v71 = 0x20000;
        v72 = v71 | 0x40000;
        if ( (int)BmlGetPathModalityForAdapterWithCoreAccessHeld(v86, (__int64)a2, 1, 2u, v72, (char **)a13) >= 0 )
          goto LABEL_70;
        for ( k = 0; k < v89; ++k )
        {
          v76 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v85, k, v73, v74);
          if ( *((_DWORD *)v76 + 4) == (_DWORD)v25 )
            *((_DWORD *)v76 + 1) &= ~2u;
        }
        PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                     v86,
                                                     (__int64)a2,
                                                     1,
                                                     2u,
                                                     v72,
                                                     v70);
        v36 = PathModalityForAdapterWithCoreAccessHeld;
        DxgkLogCodePointPacket(0x1Eu, PathModalityForAdapterWithCoreAccessHeld, a8 + (v25 & 0xFFFF0000), 0);
        if ( (int)v36 >= 0 )
        {
LABEL_70:
          LODWORD(v36) = RetrievePinnedModeForTarget(v91, (struct D3DKMDT_HVIDPN__ *)*v70, a10, &v87);
          if ( (int)v36 < 0 )
          {
            v84 = WdLogNewEntry5_WdAssertion(v80, v79, v81, v82);
            *(_QWORD *)(v84 + 24) = 3789LL;
            WdLogEvent5_WdAssertion(v84);
            a1[8](a2, *v70);
            *v70 = 0LL;
          }
          else
          {
            DmmCalculatePresentationVSync(&v87.VideoSignalInfo, &v23->RefreshRate);
            v23->IntegerRefreshRate = DmmMapVSyncFromRationalToInteger(
                                        &v23->RefreshRate,
                                        (unsigned int)((int)(*(_DWORD *)&v87.VideoSignalInfo.AdditionalSignalInfo << 29) >> 29),
                                        0LL,
                                        v83);
          }
          goto LABEL_73;
        }
        v42 = (_QWORD *)WdLogNewEntry5_WdError(v78);
        v42[3] = v36;
      }
    }
    else
    {
      v42 = (_QWORD *)WdLogNewEntry5_WdError(v39);
      v42[3] = v25;
      v42[4] = v19;
      v42[5] = v36;
    }
LABEL_47:
    WdLogEvent5_WdError(v42);
  }
  else
  {
    v35 = WdLogNewEntry5_WdLowResource(v33);
    *(_QWORD *)(v35 + 24) = v89;
    WdLogEvent5_WdLowResource(v35);
    LODWORD(v36) = -1073741801;
  }
LABEL_73:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v85);
  return (unsigned int)v36;
}
