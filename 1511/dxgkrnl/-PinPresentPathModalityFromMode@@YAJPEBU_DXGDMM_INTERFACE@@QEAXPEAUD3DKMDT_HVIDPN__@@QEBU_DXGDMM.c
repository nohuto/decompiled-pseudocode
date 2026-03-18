/*
 * XREFs of ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C01410A0
 * Callers:
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C0141F18 (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C000A1C4 (DxgkLogCodePointPacket.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C000AC34 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00A484C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00A4894 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00A4904 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00A6F40 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00A6FD8 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00A7368 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_D.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x1C00A9540 (DxgkGetGlobalRawmodeFlag.c)
 *     ConvertGdiScalingToDMMScaling @ 0x1C00AE3B0 (ConvertGdiScalingToDMMScaling.c)
 *     ?ConvertD3DddiRotationToDmmRotation@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DDDI_ROTATION@@@Z @ 0x1C013FFC4 (-ConvertD3DddiRotationToDmmRotation@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DDDI_ROTAT.c)
 *     ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0140020 (-ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QE.c)
 *     ?RetrievePinnedModeForTarget@@YAJQEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPN__@@IPEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C01419BC (-RetrievePinnedModeForTarget@@YAJQEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPN__@@IPEAU_D3DKMD.c)
 *     DmmGetDefaultScaling @ 0x1C017A3FC (DmmGetDefaultScaling.c)
 *     DmmGetMostImportantVidPnPathTargetsFromSource @ 0x1C017A6D8 (DmmGetMostImportantVidPnPathTargetsFromSource.c)
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
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int16 v37; // ax
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rbx
  int MostImportantVidPnPathTargetsFromSource; // eax
  __int64 v42; // rcx
  _QWORD *v43; // rax
  unsigned int v44; // eax
  __int64 v45; // rsi
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rdi
  int v47; // eax
  __int64 v48; // rcx
  const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v49; // r9
  struct _DXGDMM_VIDPN_INTERFACE *v50; // r8
  struct D3DKMDT_HVIDPN__ *v51; // rdx
  unsigned int v52; // eax
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  D3DDDI_RATIONAL RefreshRate; // rax
  int v58; // edx
  int v59; // edx
  int v60; // eax
  __int64 DisplayFixedOutput; // rcx
  __int64 v62; // rcx
  unsigned int i; // edi
  unsigned __int16 v64; // ax
  const struct _LUID *v65; // r14
  unsigned int j; // esi
  unsigned __int16 v67; // dx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v68; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v69; // rax
  bool GlobalRawmodeFlag; // al
  struct D3DKMDT_HVIDPN__ **v71; // r14
  int v72; // edi
  int v73; // edi
  unsigned int k; // ebx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v75; // rax
  signed int PathModalityForAdapterWithCoreAccessHeld; // eax
  __int64 v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // rax
  _BYTE v80[64]; // [rsp+48h] [rbp-B1h] BYREF
  __int64 v81; // [rsp+88h] [rbp-71h]
  _D3DKMDT_VIDPN_TARGET_MODE v82; // [rsp+A8h] [rbp-51h] BYREF
  unsigned __int64 v84; // [rsp+150h] [rbp+57h] BYREF
  struct D3DKMDT_HVIDPN__ *v85; // [rsp+158h] [rbp+5Fh]
  struct _DXGDMM_VIDPN_INTERFACE *v86; // [rsp+160h] [rbp+67h]

  v86 = a4;
  v85 = a3;
  if ( !a2 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v16 + 24) = 3587LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !a3 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v17 + 24) = 3588LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a4 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v18 + 24) = 3589LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v19 = a5;
  if ( !a5 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v20 + 24) = 3590LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v21 = a6;
  if ( !a6 )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v22 + 24) = 3591LL;
    WdLogEvent5_WdAssertion(v22);
  }
  v23 = a9;
  if ( !a9 )
  {
    v24 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v24 + 24) = 3592LL;
    WdLogEvent5_WdAssertion(v24);
  }
  v25 = a7;
  if ( a7 == -1 )
  {
    v26 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v26 + 24) = 3593LL;
    WdLogEvent5_WdAssertion(v26);
  }
  if ( !a13 )
  {
    v27 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v27 + 24) = 3594LL;
    WdLogEvent5_WdAssertion(v27);
  }
  v28 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, unsigned __int64 *))v21 + 16))(v19, &v84);
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
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v80, v84, v84);
  v37 = v81;
  if ( v81 )
    v37 = *(_WORD *)(v81 + 22);
  if ( v37 >= (unsigned __int16)v84 )
  {
    v40 = *(_QWORD *)(a2 + 252);
    MostImportantVidPnPathTargetsFromSource = DmmGetMostImportantVidPnPathTargetsFromSource((DXGADAPTER *)a2);
    v39 = MostImportantVidPnPathTargetsFromSource;
    if ( MostImportantVidPnPathTargetsFromSource >= 0 )
    {
      v44 = 0;
      a7 = 0;
      if ( v84 )
      {
        v45 = 0LL;
        while ( 1 )
        {
          PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v80, v44);
          v47 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, __int64, unsigned int *, unsigned int *))a6
                 + 17))(
                  v19,
                  v45,
                  &a12,
                  &a11);
          v39 = v47;
          if ( v47 < 0 )
            break;
          v49 = a6;
          v50 = v86;
          v51 = v85;
          *((_DWORD *)PathDescriptor + 4) = a12;
          v52 = a11;
          *(_DWORD *)PathDescriptor |= 0x87000u;
          *((_DWORD *)PathDescriptor + 5) = v52;
          *((_QWORD *)PathDescriptor + 1) = v40;
          v53 = ConvertVidPnPathToPathDescription((DXGADAPTER *)a2, v51, v50, v49, v19, a12, a11, PathDescriptor);
          v39 = v53;
          if ( v53 < 0 )
          {
            v43 = (_QWORD *)WdLogNewEntry5_WdError(v54);
            v43[3] = a12;
            v43[4] = a11;
            v43[5] = v19;
            v43[6] = v39;
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
            v58 = *(_DWORD *)PathDescriptor;
            *((_DWORD *)PathDescriptor + 1) |= 2u;
            v59 = v58 | 2;
            *(_DWORD *)PathDescriptor = v59;
            *(D3DDDI_RATIONAL *)((char *)PathDescriptor + 44) = RefreshRate;
            if ( a11 == a10 )
            {
              v60 = ConvertD3DddiRotationToDmmRotation((unsigned int)v23->DisplayOrientation);
              *(_DWORD *)PathDescriptor |= 0x200u;
              *((_DWORD *)PathDescriptor + 30) = v60;
            }
            else
            {
              *((_DWORD *)PathDescriptor + 30) = 0;
              *(_DWORD *)PathDescriptor = v59 & 0xFFFFFDFF;
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
              ConvertGdiScalingToDMMScaling(DisplayFixedOutput, (_DWORD *)PathDescriptor + 31, v55, v56);
            }
            *(_DWORD *)PathDescriptor |= 0x400u;
          }
          else
          {
            *((_DWORD *)PathDescriptor + 1) |= 0x187u;
          }
          v44 = a7 + 1;
          v45 = v44;
          ++a7;
          if ( v44 >= v84 )
            goto LABEL_42;
        }
        v43 = (_QWORD *)WdLogNewEntry5_WdError(v48);
        v43[3] = v19;
        v43[4] = v39;
      }
      else
      {
LABEL_42:
        v62 = v81;
        for ( i = 0; ; ++i )
        {
          v64 = v62 ? *(_WORD *)(v62 + 20) : 0;
          if ( i >= v64 )
            break;
          v65 = (const struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v80, i);
          if ( (v65->LowPart & 0x40000) != 0 )
          {
            v62 = v81;
          }
          else
          {
            for ( j = i; ; ++j )
            {
              v62 = v81;
              v67 = v81 ? *(_WORD *)(v81 + 20) : 0;
              if ( j >= v67 )
                break;
              v68 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v80, j);
              if ( CCD_TOPOLOGY::IsMatchingSource(v68, v65 + 1, v65[2].LowPart) )
              {
                *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v80, j) + 50) = i | 0xFE548000;
                v69 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v80, j);
                *(_DWORD *)v69 |= 0x40000u;
              }
            }
          }
        }
        GlobalRawmodeFlag = DxgkGetGlobalRawmodeFlag(v62);
        v71 = a13;
        v72 = 0;
        if ( GlobalRawmodeFlag )
          v72 = 0x20000;
        v73 = v72 | 0x40000;
        if ( (int)BmlGetPathModalityForAdapterWithCoreAccessHeld(v81, (__int64)a2, 1, 2, v73, (__int64)a13) >= 0 )
          goto LABEL_70;
        for ( k = 0; k < v84; ++k )
        {
          v75 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v80, k);
          if ( *((_DWORD *)v75 + 4) == (_DWORD)v25 )
            *((_DWORD *)v75 + 1) &= ~2u;
        }
        PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                     v81,
                                                     (__int64)a2,
                                                     1,
                                                     2,
                                                     v73,
                                                     (__int64)v71);
        v39 = PathModalityForAdapterWithCoreAccessHeld;
        DxgkLogCodePointPacket(0x1Eu, PathModalityForAdapterWithCoreAccessHeld, a8 + (v25 & 0xFFFF0000), 0);
        if ( (int)v39 >= 0 )
        {
LABEL_70:
          LODWORD(v39) = RetrievePinnedModeForTarget(v86, *v71, a10, &v82);
          if ( (int)v39 < 0 )
          {
            v79 = WdLogNewEntry5_WdAssertion(v78);
            *(_QWORD *)(v79 + 24) = 3866LL;
            WdLogEvent5_WdAssertion(v79);
            a1[8](a2, *v71);
            *v71 = 0LL;
          }
          else
          {
            DmmCalculatePresentationVSync(&v82.VideoSignalInfo, &v23->RefreshRate);
            v23->IntegerRefreshRate = DmmMapVSyncFromRationalToInteger(
                                        &v23->RefreshRate,
                                        (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&v82.VideoSignalInfo.AdditionalSignalInfo << 29) >> 29),
                                        0LL);
          }
          goto LABEL_73;
        }
        v43 = (_QWORD *)WdLogNewEntry5_WdError(v77);
        v43[3] = v39;
      }
    }
    else
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdError(v42);
      v43[3] = v25;
      v43[4] = v19;
      v43[5] = v39;
    }
LABEL_47:
    WdLogEvent5_WdError(v43);
  }
  else
  {
    v38 = WdLogNewEntry5_WdLowResource(v34, v33, v35, v36);
    *(_QWORD *)(v38 + 24) = v84;
    WdLogEvent5_WdLowResource(v38);
    LODWORD(v39) = -1073741801;
  }
LABEL_73:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v80);
  return (unsigned int)v39;
}
