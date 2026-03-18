/*
 * XREFs of ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00BABE0
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C00C5BF0 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C0005D38 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     ?HasValidPreferredDetailedTimingDescriptor@DpiInternal@@YA_NPEBX@Z @ 0x1C000A574 (-HasValidPreferredDetailedTimingDescriptor@DpiInternal@@YA_NPEBX@Z.c)
 *     ?GetNativeResolution@DpiInternal@@YA?AUtagSIZE@@PEBX@Z @ 0x1C000A7B8 (-GetNativeResolution@DpiInternal@@YA-AUtagSIZE@@PEBX@Z.c)
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C000A810 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x1C000A928 (-FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DP.c)
 *     ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C000A9A8 (-AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 *     ?AvgXY@DpiInternal@@YAJUtagSIZE@@@Z @ 0x1C000AAAC (-AvgXY@DpiInternal@@YAJUtagSIZE@@@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000AC00 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     IsInternalVideoOutput @ 0x1C000B478 (IsInternalVideoOutput.c)
 *     ?ScaleOverrideTestHook@@YAXQEBGPEAK@Z @ 0x1C000BB40 (-ScaleOverrideTestHook@@YAXQEBGPEAK@Z.c)
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C000CEBC (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal@@YAXUtagSIZE@@IPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0028E1C (-HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal@@YAXUtagSIZE@@IPEBU_DPI_SCALE_F.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1C00BA784 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z.c)
 *     MonitorGetMonitorDeviceInterfaceName @ 0x1C00BA98C (MonitorGetMonitorDeviceInterfaceName.c)
 *     ?TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGAEBU_LUID@@II@Z @ 0x1C00BAA9C (-TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGAEBU_LUID@@II@Z.c)
 *     ?LogScaleFactor@@YAXIIPEAU_DPI_INFORMATION@@@Z @ 0x1C00BAB24 (-LogScaleFactor@@YAXIIPEAU_DPI_INFORMATION@@@Z.c)
 *     ?GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@@Z @ 0x1C00BB44C (-GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@PEAE@Z @ 0x1C00BB554 (-GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00C219C (DmmGetVideoOutputTechnology.c)
 *     DpiReadPnpRegistryValue @ 0x1C00D90C0 (DpiReadPnpRegistryValue.c)
 *     MonitorGetEdidBaseBlockPtr @ 0x1C00D979C (MonitorGetEdidBaseBlockPtr.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00D9C74 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z @ 0x1C00DA348 (-DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z.c)
 *     ?GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z @ 0x1C00DA7C4 (-GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z.c)
 *     ?SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z @ 0x1C00FB174 (-SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z.c)
 *     ?GetSquareRoot@@YA_K_K@Z @ 0x1C016BA00 (-GetSquareRoot@@YA_K_K@Z.c)
 *     ?GetPhysicalDisplaySizeOverride@@YAJPEAUtagSIZE@@@Z @ 0x1C018CC28 (-GetPhysicalDisplaySizeOverride@@YAJPEAUtagSIZE@@@Z.c)
 *     ?LookupDisplayDiagonal@@YAJPEAK@Z @ 0x1C018CD94 (-LookupDisplayDiagonal@@YAJPEAK@Z.c)
 */

__int64 __fastcall UpdateGdiInfoForVidPnSource(
        const struct _DXGDMM_INTERFACE *a1,
        char *a2,
        unsigned int a3,
        int a4,
        struct _GDIINFO *a5,
        D3DDDI_GAMMA_RAMP_RGB256x3x16 *a6)
{
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *pRgb256x3x16; // r14
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(char *, UINT *, UCHAR *); // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  DpiInternal *v14; // r15
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  _DWORD *v20; // r12
  __int64 v21; // rcx
  int Win32DpiValues; // eax
  __int64 v23; // rcx
  __int64 v24; // rbx
  unsigned int v25; // ebx
  bool v26; // al
  int v27; // edi
  char v28; // al
  unsigned __int64 v29; // rdx
  unsigned int v30; // edi
  int v31; // eax
  int v32; // eax
  __int64 v33; // rcx
  __int64 (__fastcall *v34)(_QWORD, _QWORD, _QWORD, struct tagSIZE *); // rax
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rdx
  int v38; // esi
  int VideoOutputTechnology; // eax
  __int64 v40; // rcx
  __int64 v41; // rbx
  bool v42; // bl
  int v43; // edi
  unsigned __int8 *DataSize; // r14
  const void *v45; // rdx
  __int64 cx; // rcx
  struct tagSIZE NativeResolution; // rax
  LONG v48; // esi
  LONG v49; // r14d
  UINT v50; // eax
  unsigned int RotationSupport; // ebx
  unsigned int VidPnTargetId; // ebx
  int v53; // edx
  int v54; // r8d
  __int64 v55; // rcx
  int v56; // edi
  int v57; // eax
  UINT v58; // ecx
  int v59; // r8d
  unsigned int v60; // r9d
  unsigned int v61; // r10d
  unsigned int v62; // r8d
  unsigned int v63; // ebx
  char v64; // r14
  struct tagSIZE v65; // rdx
  __int64 v66; // rcx
  unsigned __int8 v67; // al
  unsigned __int8 PreferredScaleFactorForMonitor; // al
  struct tagSIZE v69; // rdx
  __int64 v70; // rcx
  struct tagSIZE v71; // rdx
  int v72; // eax
  int v73; // r8d
  int MonitorDeviceInterfaceName; // eax
  __int64 v75; // rcx
  unsigned int *v76; // r8
  __int64 v77; // rsi
  __m128i v78; // xmm1
  __int64 v79; // rcx
  unsigned int v80; // eax
  __int128 v81; // xmm1
  __int128 v82; // xmm0
  __int64 v84; // rax
  _QWORD *v85; // rax
  bool v86; // zf
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rax
  _QWORD *v93; // rax
  __int64 v94; // rax
  __int64 v95; // r10
  __int64 v96; // rbx
  unsigned __int64 SquareRoot; // rax
  unsigned __int64 v98; // rcx
  __int64 v99; // r10
  unsigned __int64 v100; // r12
  unsigned __int64 v101; // rbx
  __int64 v102; // rax
  __int64 v103; // rax
  EDIDCACHE *v104; // rcx
  char v105; // al
  __int64 v106; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v107; // r8d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v108; // ecx
  unsigned __int32 v109; // eax
  __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rax
  _QWORD *v113; // rax
  _QWORD *v114; // rax
  __int64 cy; // rcx
  int v116; // edx
  int v117; // eax
  __int64 v118; // rdx
  int v119; // eax
  const struct _DPI_SCALE_FACTOR_COLLECTION *v120; // r9
  __int64 v121; // rax
  struct _D3DKMDT_2DREGION *v122; // [rsp+20h] [rbp-E0h]
  DpiInternal *v123; // [rsp+20h] [rbp-E0h]
  unsigned __int8 *v124; // [rsp+28h] [rbp-D8h]
  struct _DPI_SCALE_FACTOR_COLLECTION *v125; // [rsp+30h] [rbp-D0h]
  bool v126; // [rsp+40h] [rbp-C0h]
  int v127; // [rsp+44h] [rbp-BCh] BYREF
  struct _D3DKMDT_2DREGION v128; // [rsp+48h] [rbp-B8h] BYREF
  struct tagSIZE v129; // [rsp+50h] [rbp-B0h] BYREF
  int v130; // [rsp+58h] [rbp-A8h] BYREF
  struct tagSIZE v131; // [rsp+60h] [rbp-A0h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH v132; // [rsp+68h] [rbp-98h] BYREF
  __int128 v133; // [rsp+1D0h] [rbp+D0h]
  struct tagSIZE v134[4]; // [rsp+1E0h] [rbp+E0h] BYREF
  _OWORD v135[6]; // [rsp+200h] [rbp+100h] BYREF
  wchar_t pszDest[128]; // [rsp+260h] [rbp+160h] BYREF

  pRgb256x3x16 = a6;
  v8 = a3;
  *(_QWORD *)&v132.CopyProtection.OEMCopyProtection[148] = a5;
  v9 = (__int64 (__fastcall *)(char *, UINT *, UCHAR *))*((_QWORD *)a1 + 6);
  *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[48] = a4;
  *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[132] = a3;
  v132.GammaRamp.Data.pRgb256x3x16 = a6;
  *(_QWORD *)&v132.CopyProtection.OEMCopyProtection[76] = 0LL;
  memset(&v132.Content, 0, 28);
  LOBYTE(v132.VidPnTargetColorCoeffDynamicRanges.ThirdChannel) = 0;
  *(_QWORD *)&v132.VisibleFromActiveTLOffset.cy = 0LL;
  v11 = v9(a2, &v132.VisibleFromActiveTLOffset.cy, &v132.CopyProtection.OEMCopyProtection[76]);
  v13 = v11;
  if ( v11 < 0 )
  {
    v84 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v84 + 24) = a2;
    *(_QWORD *)(v84 + 32) = v13;
    WdLogEvent5_WdError(v84);
    return (unsigned int)v13;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)&v132.VidPnTargetColorCoeffDynamicRanges.ThirdChannel,
    *(__int64 *)&v132.VisibleFromActiveTLOffset.cy,
    *((_QWORD *)a1 + 8),
    (__int64)a2);
  v14 = *(DpiInternal **)&v132.Content;
  *(_QWORD *)&v132.ContentTransformation.ScalingSupport = 0LL;
  *(_QWORD *)&v132.CopyProtection.OEMCopyProtection[60] = 0LL;
  v15 = (**(__int64 (__fastcall ***)(_QWORD, D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *, UCHAR *))&v132.CopyProtection.OEMCopyProtection[76])(
          *(_QWORD *)&v132.Content,
          &v132.ContentTransformation.ScalingSupport,
          &v132.CopyProtection.OEMCopyProtection[60]);
  v13 = v15;
  if ( v15 < 0 )
  {
    v85 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v85[3] = v14;
    v85[4] = v13;
LABEL_89:
    WdLogEvent5_WdError(v85);
    goto LABEL_90;
  }
  *(_QWORD *)&v132.CopyProtection.OEMCopyProtection[140] = 0LL;
  v17 = (**(__int64 (__fastcall ***)(_QWORD, _QWORD, UCHAR *))&v132.CopyProtection.OEMCopyProtection[60])(
          *(_QWORD *)&v132.ContentTransformation.ScalingSupport,
          (unsigned int)v8,
          &v132.CopyProtection.OEMCopyProtection[140]);
  v13 = v17;
  if ( v17 < 0 )
  {
    v85 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v85[3] = v8;
    v85[4] = *(_QWORD *)&v132.ContentTransformation.ScalingSupport;
    v85[5] = v13;
    goto LABEL_89;
  }
  LODWORD(v13) = GetCurrentContentResolution(
                   a2,
                   v8,
                   (const struct tagRECT **)&v132.CopyProtection.OEMCopyProtection[68],
                   (struct tagRECT *)&v132.VisibleFromActiveBROffset.cy,
                   (unsigned int *)&v132.CopyProtection.OEMCopyProtection[36]);
  if ( (int)v13 < 0 )
  {
LABEL_90:
    v86 = LOBYTE(v132.VidPnTargetColorCoeffDynamicRanges.ThirdChannel) == 0;
    goto LABEL_92;
  }
  v20 = *(_DWORD **)&v132.CopyProtection.OEMCopyProtection[68];
  if ( !*(_QWORD *)&v132.CopyProtection.OEMCopyProtection[68] )
  {
    v87 = WdLogNewEntry5_WdAssertion(v19);
    *(_QWORD *)(v87 + 24) = 1899LL;
    WdLogEvent5_WdAssertion(v87);
  }
  v21 = (unsigned int)(v20[2] - *v20);
  if ( v20[2] - *v20 <= 0 || (v21 = (unsigned int)(v20[3] - v20[1]), v20[3] - v20[1] <= 0) )
  {
    v88 = WdLogNewEntry5_WdAssertion(v21);
    *(_QWORD *)(v88 + 24) = 1902LL;
    WdLogEvent5_WdAssertion(v88);
  }
  v132.ImportanceOrdinal = D3DKMDT_VPPI_UNINITIALIZED;
  memset(v134, 0, sizeof(v134));
  Win32DpiValues = QueryWin32DpiValues(
                     (unsigned int *)&v132.ImportanceOrdinal,
                     (struct _DPI_SCALE_FACTOR_COLLECTION *)v134);
  v24 = Win32DpiValues;
  if ( Win32DpiValues < 0 )
  {
    v89 = WdLogNewEntry5_WdAssertion(v23);
    *(_QWORD *)(v89 + 24) = 1908LL;
    WdLogEvent5_WdAssertion(v89);
    v91 = WdLogNewEntry5_WdError(v90);
    *(_QWORD *)(v91 + 24) = v24;
    WdLogEvent5_WdError(v91);
  }
  v25 = 0;
  *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[56] = 0;
  memset(&v132.CopyProtection.OEMCopyProtection[156], 0, 0x60uLL);
  v26 = *(_QWORD *)&v132.CopyProtection.OEMCopyProtection[140] > 1uLL
     || *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[36] > 1u;
  v27 = (v132.CopyProtection.OEMCopyProtection[248] ^ v26) & 1 ^ *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[248];
  if ( *v20 || (v28 = 1, v20[1]) )
    v28 = 0;
  v29 = 0LL;
  *(_QWORD *)&v132.VisibleFromActiveTLOffset.cy = 0LL;
  v30 = ((unsigned __int8)v27 ^ (unsigned __int8)(32 * v28)) & 0x20 ^ v27;
  v31 = dword_1C0056E04;
  *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[248] = v30;
  v133 = *(_OWORD *)&v132.CopyProtection.OEMCopyProtection[220];
  if ( (v30 & 0x20) != 0 )
    v31 = *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[48];
  dword_1C0056E04 = v31;
  if ( !*(_QWORD *)&v132.CopyProtection.OEMCopyProtection[140] )
  {
    v78 = *(__m128i *)&v132.CopyProtection.OEMCopyProtection[172];
    *(_OWORD *)&v132.CopyProtection.OEMCopyProtection[252] = *(_OWORD *)&v132.CopyProtection.OEMCopyProtection[172];
LABEL_75:
    v79 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v78, 8));
    if ( (_DWORD)v79 )
    {
      v116 = _mm_cvtsi128_si32(_mm_srli_si128(v78, 12));
      if ( v116 )
      {
        if ( (v30 & 0x80u) == 0 )
        {
          v119 = 1000 * v79;
          v79 = *(_QWORD *)&v132.CopyProtection.OEMCopyProtection[148];
          *(_DWORD *)(*(_QWORD *)&v132.CopyProtection.OEMCopyProtection[148] + 8LL) = v119;
          *(_DWORD *)(v79 + 12) = 1000 * v116;
        }
        else
        {
          v117 = 1000 * v116;
          v118 = *(_QWORD *)&v132.CopyProtection.OEMCopyProtection[148];
          *(_DWORD *)(*(_QWORD *)&v132.CopyProtection.OEMCopyProtection[148] + 8LL) = v117;
          *(_DWORD *)(v118 + 12) = 1000 * v79;
        }
      }
    }
    if ( (v30 & 2) == 0
      || (v120 = (const struct _DPI_SCALE_FACTOR_COLLECTION *)(unsigned int)_mm_cvtsi128_si32(
                                                                              _mm_srli_si128(
                                                                                _mm_load_si128((const __m128i *)&v132.CopyProtection.OEMCopyProtection[236]),
                                                                                4)),
          (_DWORD)v120 == 1234568) )
    {
      v80 = *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[164];
    }
    else
    {
      v80 = DpiInternal::AdjustDesktopScaleFactorForOverride(
              (DpiInternal *)0x64,
              *(int *)&v132.CopyProtection.OEMCopyProtection[188],
              (struct tagSIZE)v134,
              v120);
      *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[164] = v80;
    }
    if ( v25 )
    {
      v80 = v25;
      *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[164] = v25;
      *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[240] = 1234567;
    }
    if ( !v80 )
    {
      v121 = WdLogNewEntry5_WdAssertion(v79);
      *(_QWORD *)(v121 + 24) = 2340LL;
      WdLogEvent5_WdAssertion(v121);
    }
    v81 = *(_OWORD *)&v132.CopyProtection.OEMCopyProtection[204];
    *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[156] = 100;
    *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[160] = 100;
    *(_OWORD *)pRgb256x3x16->Red = *(_OWORD *)&v132.CopyProtection.OEMCopyProtection[156];
    *(_OWORD *)&pRgb256x3x16->Red[8] = *(_OWORD *)&v132.CopyProtection.OEMCopyProtection[252];
    *(_OWORD *)&pRgb256x3x16->Red[16] = *(_OWORD *)&v132.CopyProtection.OEMCopyProtection[188];
    v82 = v133;
    *(_OWORD *)&pRgb256x3x16->Red[24] = v81;
    *(_OWORD *)&pRgb256x3x16->Red[32] = v82;
    *(_OWORD *)&pRgb256x3x16->Red[40] = *(_OWORD *)&v132.CopyProtection.OEMCopyProtection[236];
    if ( LOBYTE(v132.VidPnTargetColorCoeffDynamicRanges.ThirdChannel) )
      (*(void (__fastcall **)(_QWORD, DpiInternal *, _QWORD))&v132.CopyProtection.APSTriggerBits)(
        *(_QWORD *)&v132.CopyProtection.OEMCopyProtection[4],
        v14,
        0LL);
    return 0LL;
  }
  *(_OWORD *)&v132.CopyProtection.OEMCopyProtection[252] = *(_OWORD *)&v132.CopyProtection.OEMCopyProtection[172];
  while ( 1 )
  {
    v128.cy = -1;
    BYTE1(v128.cx) = 0;
    v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, UINT *))(*(_QWORD *)&v132.CopyProtection.OEMCopyProtection[60]
                                                                              + 8LL))(
            *(_QWORD *)&v132.ContentTransformation.ScalingSupport,
            (unsigned int)v8,
            v29,
            &v128.cy);
    v13 = v32;
    if ( v32 < 0 )
    {
      v114 = (_QWORD *)WdLogNewEntry5_WdError(v33);
      v114[3] = *(_QWORD *)&v132.VisibleFromActiveTLOffset.cy;
      cy = (unsigned int)v8;
      goto LABEL_156;
    }
    v131 = 0LL;
    v34 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct tagSIZE *))(*(_QWORD *)&v132.CopyProtection.OEMCopyProtection[60]
                                                                             + 24LL);
    memset(&v132.CopyProtection.OEMCopyProtection[92], 0, 28);
    v132.CopyProtection.OEMCopyProtection[84] = 0;
    v35 = v34(*(_QWORD *)&v132.ContentTransformation.ScalingSupport, (unsigned int)v8, v128.cy, &v131);
    v13 = v35;
    if ( v35 < 0 )
    {
      v114 = (_QWORD *)WdLogNewEntry5_WdError(v36);
      v114[3] = (unsigned int)v8;
      cy = v128.cy;
LABEL_156:
      v114[4] = cy;
      v114[5] = v13;
      WdLogEvent5_WdError(v114);
      v86 = LOBYTE(v132.VidPnTargetColorCoeffDynamicRanges.ThirdChannel) == 0;
      goto LABEL_92;
    }
    v37 = (__int64)v131;
    if ( !*(_QWORD *)&v131 )
    {
      v92 = WdLogNewEntry5_WdAssertion(v36);
      *(_QWORD *)(v92 + 24) = 1964LL;
      WdLogEvent5_WdAssertion(v92);
      v37 = (__int64)v131;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)&v132.CopyProtection.OEMCopyProtection[84],
      v37,
      *(_QWORD *)(*(_QWORD *)&v132.CopyProtection.OEMCopyProtection[60] + 32LL),
      *(__int64 *)&v132.ContentTransformation.ScalingSupport);
    v127 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)(*(_QWORD *)&v132.CopyProtection.OEMCopyProtection[92]
                                                                                   + 20LL));
    v126 = 0;
    v38 = v127;
    v130 = -2;
    VideoOutputTechnology = DmmGetVideoOutputTechnology(a2, v128.cy, &v130, 0LL);
    v41 = VideoOutputTechnology;
    if ( VideoOutputTechnology < 0 )
    {
      v93 = (_QWORD *)WdLogNewEntry5_WdError(v40);
      v93[3] = a2;
      v93[4] = v128.cy;
      v93[5] = v41;
      WdLogEvent5_WdError(v93);
      v42 = 0;
    }
    else
    {
      v42 = IsInternalVideoOutput(v130);
      v126 = v42;
    }
    *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[128] = v42;
    v129 = 0LL;
    *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[52] = 0;
    v43 = ((unsigned __int8)v30 ^ (unsigned __int8)(v30 | (4 * v42))) & 4 ^ v30;
    v132.GammaRamp.DataSize = MonitorGetEdidBaseBlockPtr((DXGADAPTER *)a2, v128.cy);
    DataSize = (unsigned __int8 *)v132.GammaRamp.DataSize;
    NativeResolution = DpiInternal::GetNativeResolution((DpiInternal *)v132.GammaRamp.DataSize, v45);
    cx = (unsigned int)(v38 - 2);
    v131 = NativeResolution;
    NativeResolution.cx = NativeResolution.cy;
    if ( (cx & 0xFFFFFFFD) != 0 )
    {
      *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[44] = NativeResolution.cy;
      NativeResolution.cx = v131.cx;
    }
    else
    {
      cx = (unsigned int)v131.cx;
      *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[44] = cx;
      v131.cx = NativeResolution.cy;
      v131.cy = cx;
    }
    *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[40] = NativeResolution.cx;
    if ( !DataSize )
    {
      v43 |= 8u;
      v49 = v129.cy;
      v48 = v129.cx;
      *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[188] = *(_DWORD *)(*(_QWORD *)&v132.CopyProtection.OEMCopyProtection[148]
                                                                         + 16LL);
      *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[192] = *(_DWORD *)(*(_QWORD *)&v132.CopyProtection.OEMCopyProtection[148]
                                                                         + 20LL);
LABEL_35:
      if ( v48 )
        goto LABEL_37;
      goto LABEL_36;
    }
    if ( (int)EDID_V1_GetPhysicalSize(
                cx,
                DataSize,
                (unsigned int *)&v132.CopyProtection.OEMCopyProtection[20],
                (unsigned int *)&v132.CopyProtection.OEMCopyProtection[124]) < 0 )
    {
      v94 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v94 + 24) = 2009LL;
      WdLogEvent5_WdAssertion(v94);
    }
    v48 = *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[20];
    v49 = *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[124];
    v129.cx = *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[20];
    v129.cy = *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[124];
    if ( ((v127 - 2) & 0xFFFFFFFD) == 0 )
    {
      v48 = *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[124];
      v129.cx = *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[124];
      v49 = *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[20];
      v129.cy = *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[20];
    }
    if ( !v48 || !v49 )
    {
      v129 = 0LL;
      v49 = 0;
      v48 = 0;
      goto LABEL_35;
    }
    if ( v48 * v49 > 16000 || v42 )
      goto LABEL_35;
    v43 |= 0x40u;
    *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[52] = 1;
    v129 = 0LL;
    v49 = 0;
    v48 = 0;
LABEL_36:
    BYTE1(v128.cx) = (a2[300] & 0x20) != 0;
LABEL_37:
    LODWORD(v13) = DpiInternal::GetCurrentSourceResolution(
                     v14,
                     *(struct D3DKMDT_HVIDPN__ *const *)&v132.CopyProtection.OEMCopyProtection[76],
                     *(const struct _DXGDMM_VIDPN_INTERFACE **)&v132.CopyProtection.OEMCopyProtection[92],
                     &v132,
                     v122);
    if ( (int)v13 < 0 )
      break;
    LOBYTE(v128.cx) = 0;
    LODWORD(v13) = DpiInternal::GetCurrentTargetResolution(
                     v14,
                     *(struct D3DKMDT_HVIDPN__ *const *)&v132.CopyProtection.OEMCopyProtection[76],
                     *(const struct _DXGDMM_VIDPN_INTERFACE **)&v132.CopyProtection.OEMCopyProtection[92],
                     (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v132.ContentTransformation.RotationSupport,
                     &v128,
                     v124);
    if ( (int)v13 < 0 )
    {
      if ( v132.CopyProtection.OEMCopyProtection[84] )
        (*(void (__fastcall **)(_QWORD, _QWORD))&v132.CopyProtection.OEMCopyProtection[100])(
          *(_QWORD *)&v132.CopyProtection.OEMCopyProtection[108],
          *(_QWORD *)&v132.CopyProtection.OEMCopyProtection[92]);
      v86 = LOBYTE(v132.VidPnTargetColorCoeffDynamicRanges.ThirdChannel) == 0;
      goto LABEL_92;
    }
    if ( ((v127 - 2) & 0xFFFFFFFD) != 0 )
    {
      v50 = v132.VisibleFromActiveTLOffset.cx;
      RotationSupport = (unsigned int)v132.ContentTransformation.RotationSupport;
    }
    else
    {
      v50 = (UINT)v132.ContentTransformation.RotationSupport;
      RotationSupport = v132.VisibleFromActiveTLOffset.cx;
      v132.ContentTransformation.RotationSupport = (D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT)v132.VisibleFromActiveTLOffset.cx;
      v132.VisibleFromActiveTLOffset.cx = v50;
    }
    v130 = RotationSupport;
    v127 = v50;
    if ( g_IsMobileCore )
    {
      *(_QWORD *)&v132.CopyProtection.OEMCopyProtection[28] = 0LL;
      if ( (int)GetPhysicalDisplaySizeOverride((struct tagSIZE *)&v132.CopyProtection.OEMCopyProtection[28]) < 0 )
      {
        if ( v126 )
        {
          *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[28] = 0;
          if ( (int)LookupDisplayDiagonal((unsigned int *)&v132.CopyProtection.OEMCopyProtection[28]) >= 0
            && RotationSupport < 0x20000
            && (unsigned int)v127 < 0x20000 )
          {
            v95 = 1000 * RotationSupport;
            v96 = (unsigned int)(1000 * v127);
            SquareRoot = GetSquareRoot(v95 * (unsigned int)v95 + v96 * v96);
            v98 = v96 * *(unsigned int *)&v132.CopyProtection.OEMCopyProtection[28];
            v100 = (v99 * (unsigned __int64)*(unsigned int *)&v132.CopyProtection.OEMCopyProtection[28] / SquareRoot
                  + 500)
                 / 0x3E8;
            v101 = (v98 / SquareRoot + 500) / 0x3E8;
            if ( v100 >= 0x7FFFFFFF )
            {
              v102 = WdLogNewEntry5_WdAssertion(v98);
              *(_QWORD *)(v102 + 24) = 2110LL;
              WdLogEvent5_WdAssertion(v102);
            }
            if ( v101 >= 0x7FFFFFFF )
            {
              v103 = WdLogNewEntry5_WdAssertion(v98);
              *(_QWORD *)(v103 + 24) = 2111LL;
              WdLogEvent5_WdAssertion(v103);
            }
            if ( v100 < 0x7FFFFFFF && v101 < 0x7FFFFFFF )
            {
              v48 = v100;
              v129.cx = v100;
              v49 = v101;
              v129.cy = v101;
              v104 = (EDIDCACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal(v98) + 79);
              if ( v104 )
                EDIDCACHE::SetPhysicalDimensionOfInternalPanel(v104, v100, v101, 1u);
            }
            v20 = *(_DWORD **)&v132.CopyProtection.OEMCopyProtection[68];
          }
        }
      }
      else
      {
        v129 = *(struct tagSIZE *)&v132.CopyProtection.OEMCopyProtection[28];
        v48 = *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[28];
        v49 = *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[32];
      }
    }
    if ( (v43 & 1) != 0
      && *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[36] <= 1u
      && *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[40]
      && *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[44] )
    {
      VidPnTargetId = v132.VidPnTargetId;
      if ( LOBYTE(v128.cx) )
      {
        VidPnTargetId = v132.VidPnTargetId >> 1;
        v132.VidPnTargetId >>= 1;
      }
      if ( v132.VidPnSourceId >= 2 * *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[40]
        || (v105 = 0, VidPnTargetId >= 2 * *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[44]) )
      {
        v105 = 1;
      }
      v43 ^= ((unsigned __int8)v43 ^ (unsigned __int8)(v43 | (2 * v105))) & 2;
      if ( LOBYTE(v128.cx) )
      {
        VidPnTargetId *= 2;
        v132.VidPnTargetId = VidPnTargetId;
      }
    }
    else
    {
      VidPnTargetId = v132.VidPnTargetId;
    }
    memset(v135, 0, sizeof(v135));
    DWORD1(v135[5]) = *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[48];
    v53 = *(_DWORD *)(*(_QWORD *)&v132.CopyProtection.OEMCopyProtection[92] + 20LL);
    if ( (unsigned int)(v53 - 5) <= 0xB )
      v53 = (v53 - 1) % 4 + 1;
    v54 = v20[2] - *v20;
    LODWORD(v135[2]) = v54;
    v55 = (unsigned int)(v20[3] - v20[1]);
    v56 = ((unsigned __int8)v43 ^ (unsigned __int8)((((v53 - 2) & 0xFFFFFFFD) == 0) << 7)) & 0x80 ^ v43;
    DWORD1(v135[2]) = v20[3] - v20[1];
    if ( ((v53 - 2) & 0xFFFFFFFD) == 0 )
      *(_QWORD *)&v135[2] = __PAIR64__(v54, v55);
    v57 = *(_DWORD *)(*(_QWORD *)&v132.CopyProtection.OEMCopyProtection[92] + 12LL);
    if ( v57 <= 0 )
      goto LABEL_134;
    if ( v57 <= 2 )
      goto LABEL_50;
    switch ( v57 )
    {
      case 3:
        v60 = v130;
        v61 = v127;
        v58 = v130
            * (v132.VidPnTargetColorCoeffDynamicRanges.FirstChannel - v132.VisibleFromActiveBROffset.cy)
            / v132.VidPnSourceId;
        v109 = v127 * (v132.VidPnTargetColorCoeffDynamicRanges.SecondChannel - v132.VidPnTargetColorBasis);
        break;
      case 4:
        v61 = v127;
        v60 = v130;
        if ( v130 * VidPnTargetId <= v127 * v132.VidPnSourceId )
        {
          v108 = v130;
          v107 = v130 * VidPnTargetId / v132.VidPnSourceId;
        }
        else
        {
          v107 = v127;
          v108 = v127 * v132.VidPnSourceId / VidPnTargetId;
        }
        v58 = v108
            * (v132.VidPnTargetColorCoeffDynamicRanges.FirstChannel - v132.VisibleFromActiveBROffset.cy)
            / v132.VidPnSourceId;
        v109 = v107 * (v132.VidPnTargetColorCoeffDynamicRanges.SecondChannel - v132.VidPnTargetColorBasis);
        break;
      case 5:
        goto LABEL_135;
      default:
        if ( v57 != 255 )
        {
LABEL_134:
          v106 = WdLogNewEntry5_WdAssertion(v55);
          *(_QWORD *)(v106 + 24) = *(int *)(*(_QWORD *)&v132.CopyProtection.OEMCopyProtection[92] + 12LL);
          WdLogEvent5_WdAssertion(v106);
LABEL_135:
          v56 |= 0x100u;
        }
LABEL_50:
        v58 = v132.VidPnTargetColorCoeffDynamicRanges.FirstChannel - v132.VisibleFromActiveBROffset.cy;
        v59 = v132.VidPnTargetColorCoeffDynamicRanges.SecondChannel - v132.VidPnTargetColorBasis;
        v60 = v130;
        v61 = v127;
        goto LABEL_51;
    }
    v59 = v109 / VidPnTargetId;
LABEL_51:
    v62 = v49 * v59;
    v63 = 0;
    v64 = BYTE1(v128.cx);
    DWORD2(v135[1]) = v48 * v58 / v60;
    v65 = (struct tagSIZE)(v62 % v61);
    HIDWORD(v135[1]) = v62 / v61;
    if ( BYTE1(v128.cx)
      || *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[52]
      || !v132.GammaRamp.DataSize
      || !(unsigned __int8)DpiInternal::HasValidPreferredDetailedTimingDescriptor(
                             (DpiInternal *)v132.GammaRamp.DataSize,
                             *(const void **)&v65) )
    {
      LODWORD(v135[4]) = 0;
    }
    else
    {
      v56 ^= ((unsigned __int8)v56 ^ (unsigned __int8)(16
                                                     * DetermineViewDistance(
                                                         a2,
                                                         &v129,
                                                         *(int *)&v132.CopyProtection.OEMCopyProtection[128],
                                                         &v131,
                                                         (unsigned int *)&v135[4]))) & 0x10;
      if ( !LODWORD(v135[4]) )
      {
        v110 = WdLogNewEntry5_WdAssertion(v66);
        *(_QWORD *)(v110 + 24) = 2241LL;
        WdLogEvent5_WdAssertion(v110);
      }
    }
    v127 = 0;
    if ( v126 && (int)DpiReadPnpRegistryValue(*((_QWORD *)a2 + 24), L"PreferredScaleFactor", &v127, 4LL, 2) >= 0 )
    {
      v63 = v127;
      v67 = 1;
    }
    else
    {
      v127 = 0;
      v67 = 0;
    }
    v30 = (v56 ^ (v67 << 12)) & 0x1000 ^ v56;
    *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[248] = v30;
    if ( (v30 & 0x1000) == 0 )
    {
      PreferredScaleFactorForMonitor = DpiInternal::GetPreferredScaleFactorForMonitor(
                                         (DpiInternal *)a2,
                                         (void *const)v128.cy,
                                         (v30 >> 5) & 1,
                                         &v127);
      v63 = v127;
      v30 ^= ((unsigned __int16)v30 ^ (unsigned __int16)(PreferredScaleFactorForMonitor << 11)) & 0x800;
      *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[248] = v30;
    }
    if ( v64 && v126 && !v63 )
    {
      DpiInternal::HeuristicallyPickScaleFactorsForInternalEdidlessBdd(
        *(DpiInternal **)&v135[2],
        v65,
        (__int64)v134,
        (const struct _DPI_SCALE_FACTOR_COLLECTION *)v135);
      DpiInternal::FillOverridesAndAdjustedScaleFactor(
        (DpiInternal *)(unsigned int)v132.ImportanceOrdinal,
        v111,
        (int *)v134,
        (const struct _DPI_SCALE_FACTOR_COLLECTION *)v135);
      v30 |= 0x400u;
      *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[248] = v30;
    }
    else
    {
      LODWORD(v123) = v132.ImportanceOrdinal;
      FillDpiInfo(
        (const struct tagSIZE *)&v135[1] + 1,
        (struct tagSIZE *)&v135[2],
        v134,
        (DpiInternal *)LODWORD(v135[4]),
        v123,
        v63,
        v125,
        (struct _DPI_INFORMATION *)v135);
    }
    if ( HIDWORD(v135[5]) )
    {
      v112 = WdLogNewEntry5_WdAssertion(v70);
      *(_QWORD *)(v112 + 24) = 2272LL;
      WdLogEvent5_WdAssertion(v112);
    }
    HIDWORD(v135[5]) = v30;
    if ( v126
      || (v30 & 4) == 0
      && (DpiInternal::AvgXY(*((DpiInternal **)&v135[3] + 1), v69),
          v72 = DpiInternal::AvgXY(*(DpiInternal **)&v132.CopyProtection.OEMCopyProtection[212], v71),
          v72 <= v73) )
    {
      *(_OWORD *)&v132.CopyProtection.OEMCopyProtection[156] = v135[0];
      *(_OWORD *)&v132.CopyProtection.OEMCopyProtection[252] = v135[1];
      *(_OWORD *)&v132.CopyProtection.OEMCopyProtection[188] = v135[2];
      v133 = v135[4];
      *(_OWORD *)&v132.CopyProtection.OEMCopyProtection[236] = v135[5];
      v30 = HIDWORD(v135[5]);
      *(_OWORD *)&v132.CopyProtection.OEMCopyProtection[204] = v135[3];
    }
    memset(pszDest, 0, sizeof(pszDest));
    MonitorDeviceInterfaceName = MonitorGetMonitorDeviceInterfaceName((DXGADAPTER *)a2, v128.cy, 0x80uLL, pszDest);
    v77 = MonitorDeviceInterfaceName;
    if ( MonitorDeviceInterfaceName < 0 )
    {
      v113 = (_QWORD *)WdLogNewEntry5_WdError(v75);
      v113[3] = a2;
      v113[4] = v128.cy;
      v113[5] = v77;
      WdLogEvent5_WdError(v113);
      pszDest[0] = 0;
    }
    else
    {
      ScaleOverrideTestHook((DpiInternal *)pszDest, (unsigned __int16 *)&v132.CopyProtection.OEMCopyProtection[56], v76);
    }
    LODWORD(v8) = *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[132];
    TraceLogDpiInfo(
      (struct _DPI_INFORMATION *)v135,
      pszDest,
      (const struct _LUID *)(a2 + 268),
      *(unsigned int *)&v132.CopyProtection.OEMCopyProtection[132],
      v63);
    LogScaleFactor(v8, v132.ImportanceOrdinal, (struct _DPI_INFORMATION *)v135);
    if ( v132.CopyProtection.OEMCopyProtection[84] )
      (*(void (__fastcall **)(_QWORD, _QWORD))&v132.CopyProtection.OEMCopyProtection[100])(
        *(_QWORD *)&v132.CopyProtection.OEMCopyProtection[108],
        *(_QWORD *)&v132.CopyProtection.OEMCopyProtection[92]);
    v29 = *(_QWORD *)&v132.VisibleFromActiveTLOffset.cy + 1LL;
    *(_QWORD *)&v132.VisibleFromActiveTLOffset.cy = v29;
    if ( v29 >= *(_QWORD *)&v132.CopyProtection.OEMCopyProtection[140] )
    {
      v25 = *(_DWORD *)&v132.CopyProtection.OEMCopyProtection[56];
      v78 = *(__m128i *)&v132.CopyProtection.OEMCopyProtection[252];
      pRgb256x3x16 = v132.GammaRamp.Data.pRgb256x3x16;
      goto LABEL_75;
    }
  }
  if ( v132.CopyProtection.OEMCopyProtection[84] )
    (*(void (__fastcall **)(_QWORD, _QWORD))&v132.CopyProtection.OEMCopyProtection[100])(
      *(_QWORD *)&v132.CopyProtection.OEMCopyProtection[108],
      *(_QWORD *)&v132.CopyProtection.OEMCopyProtection[92]);
  v86 = LOBYTE(v132.VidPnTargetColorCoeffDynamicRanges.ThirdChannel) == 0;
LABEL_92:
  if ( !v86 )
    (*(void (__fastcall **)(_QWORD, DpiInternal *))&v132.CopyProtection.APSTriggerBits)(
      *(_QWORD *)&v132.CopyProtection.OEMCopyProtection[4],
      v14);
  return (unsigned int)v13;
}
