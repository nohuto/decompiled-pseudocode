/*
 * XREFs of ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0190EE8
 * Callers:
 *     ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0190854 (-DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C0005D38 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     ?HasValidPreferredDetailedTimingDescriptor@DpiInternal@@YA_NPEBX@Z @ 0x1C000A574 (-HasValidPreferredDetailedTimingDescriptor@DpiInternal@@YA_NPEBX@Z.c)
 *     ?GetNativeResolution@DpiInternal@@YA?AUtagSIZE@@PEBX@Z @ 0x1C000A7B8 (-GetNativeResolution@DpiInternal@@YA-AUtagSIZE@@PEBX@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000AC00 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     IsInternalVideoOutput @ 0x1C000B478 (IsInternalVideoOutput.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?IsPreferredModeInterlaced@DpiInternal@@YA_NPEBX@Z @ 0x1C00128D4 (-IsPreferredModeInterlaced@DpiInternal@@YA_NPEBX@Z.c)
 *     ?GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@@Z @ 0x1C00BB44C (-GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@PEAE@Z @ 0x1C00BB554 (-GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00C219C (DmmGetVideoOutputTechnology.c)
 *     MonitorGetEdidBaseBlockPtr @ 0x1C00D979C (MonitorGetEdidBaseBlockPtr.c)
 *     ?IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z @ 0x1C018CD34 (-IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z.c)
 *     ?AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z @ 0x1C0190678 (-AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z.c)
 *     ?DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HHPEAI@Z @ 0x1C01907E8 (-DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HHPEAI@Z.c)
 *     ?FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0190940 (-FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0190A58 (-FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?GetPhysicalSizeFromEDID@Win81@@YAXPEBXPEAUtagSIZE@@@Z @ 0x1C0190AFC (-GetPhysicalSizeFromEDID@Win81@@YAXPEBXPEAUtagSIZE@@@Z.c)
 *     ?HeuristicallyPickScaleFactorsForInternalEdidlessBdd@Win81@@YAXUtagSIZE@@IPEAU_DPI_INFORMATION@@@Z @ 0x1C0190CE4 (-HeuristicallyPickScaleFactorsForInternalEdidlessBdd@Win81@@YAXUtagSIZE@@IPEAU_DPI_INFORMATION@@.c)
 */

__int64 __fastcall Win81::UpdateGdiInfoForVidPnSource(
        Win81 *this,
        const struct _DXGDMM_INTERFACE *a2,
        void *const a3,
        D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 (__fastcall *v6)(const struct _DXGDMM_INTERFACE *, struct _D3DKMDT_VIDPN_PRESENT_PATH *, UINT *); // rax
  DXGADAPTER *v7; // r14
  __int64 v8; // rsi
  int v10; // eax
  __int64 v11; // rcx
  _OWORD *v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // r15
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rcx
  unsigned __int64 v22; // r15
  unsigned int v23; // edi
  int v24; // eax
  __int64 v25; // rcx
  __int64 (__fastcall *v26)(_QWORD, _QWORD, _QWORD, __int64 *); // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v31; // eax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v32; // r15d
  bool v33; // si
  int VideoOutputTechnology; // eax
  __int64 v35; // rcx
  __int64 v36; // rbx
  _QWORD *v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // edi
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *pRgb256x3x16; // rbx
  const void *v42; // rdx
  __int64 NativeResolution; // rax
  struct tagSIZE *v44; // r8
  struct tagSIZE v45; // r9
  int v46; // r12d
  LONG v47; // r13d
  unsigned int v48; // r14d
  unsigned int v49; // esi
  D3DDDI_VIDEO_PRESENT_TARGET_ID VidPnTargetId; // eax
  unsigned int v51; // r15d
  unsigned int v52; // ebx
  bool v53; // al
  __int64 v54; // r13
  int v55; // edx
  __int64 v56; // rax
  __int64 v57; // r9
  struct tagSIZE v58; // rdx
  int v59; // eax
  DpiInternal *v60; // rbx
  Win81 *v61; // rsi
  unsigned int IsAudioAvailableInEdid; // eax
  int v63; // edx
  char v64; // al
  __int64 v65; // rcx
  unsigned int v66; // ebx
  __int64 v67; // rax
  char cx; // si
  __int64 v69; // rax
  D3DDDI_VIDEO_PRESENT_TARGET_ID v70; // ecx
  unsigned int v71; // eax
  unsigned int v72; // eax
  __int64 v73; // rdx
  struct _DPI_INFORMATION *v74; // r9
  _QWORD *v75; // rax
  struct tagSIZE v76; // r8
  unsigned int v77; // eax
  __int64 v78; // rax
  __int128 v79; // xmm1
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  __int128 v82; // xmm0
  struct _D3DKMDT_2DREGION *v84; // [rsp+28h] [rbp-E0h]
  struct tagSIZE v85; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v86; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v87; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v88; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v89; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v90; // [rsp+6Ch] [rbp-9Ch]
  D3DDDI_VIDEO_PRESENT_TARGET_ID v91; // [rsp+70h] [rbp-98h]
  struct _D3DKMDT_VIDPN_PRESENT_PATH v92; // [rsp+78h] [rbp-90h] BYREF
  __int128 v93; // [rsp+1E0h] [rbp+D8h]
  __int128 v94; // [rsp+1F0h] [rbp+E8h]

  v6 = (__int64 (__fastcall *)(const struct _DXGDMM_INTERFACE *, struct _D3DKMDT_VIDPN_PRESENT_PATH *, UINT *))*((_QWORD *)this + 6);
  v7 = a2;
  v8 = (unsigned int)a3;
  *(_QWORD *)&v92.VidPnTargetColorCoeffDynamicRanges.ThirdChannel = a2;
  v92.ContentTransformation.Rotation = a4;
  v92.VidPnTargetColorBasis = (int)a3;
  *(_QWORD *)&v92.VisibleFromActiveTLOffset.cy = 0LL;
  memset(&v92.CopyProtection.OEMCopyProtection[44], 0, 28);
  v92.CopyProtection.OEMCopyProtection[36] = 0;
  *(_QWORD *)&v92.VidPnSourceId = 0LL;
  v10 = v6(a2, &v92, &v92.VisibleFromActiveTLOffset.cy);
  v12 = (_OWORD *)v10;
  if ( v10 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v13[3] = v7;
LABEL_5:
    v13[4] = v12;
LABEL_94:
    WdLogEvent5_WdError(v13);
    goto LABEL_103;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)&v92.CopyProtection.OEMCopyProtection[36],
    *(__int64 *)&v92.VidPnSourceId,
    *((_QWORD *)this + 8),
    (__int64)v7);
  v14 = *(_QWORD *)&v92.CopyProtection.OEMCopyProtection[44];
  *(_QWORD *)&v92.ImportanceOrdinal = 0LL;
  *(_QWORD *)&v92.ContentTransformation.RotationSupport = 0LL;
  v15 = (**(__int64 (__fastcall ***)(_QWORD, D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE *, D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *))&v92.VisibleFromActiveTLOffset.cy)(
          *(_QWORD *)&v92.CopyProtection.OEMCopyProtection[44],
          &v92.ImportanceOrdinal,
          &v92.ContentTransformation.RotationSupport);
  v12 = (_OWORD *)v15;
  if ( v15 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v13[3] = v14;
    goto LABEL_5;
  }
  *(_QWORD *)&v92.VidPnTargetColorCoeffDynamicRanges.FirstChannel = 0LL;
  v17 = (**(__int64 (__fastcall ***)(_QWORD, _QWORD, D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES *))&v92.ContentTransformation.RotationSupport)(
          *(_QWORD *)&v92.ImportanceOrdinal,
          (unsigned int)v8,
          &v92.VidPnTargetColorCoeffDynamicRanges);
  v12 = (_OWORD *)v17;
  if ( v17 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v13[3] = v8;
    v19 = *(_QWORD *)&v92.ImportanceOrdinal;
LABEL_93:
    v13[4] = v19;
    v13[5] = v12;
    goto LABEL_94;
  }
  memset(&v92.CopyProtection.OEMCopyProtection[180], 0, 0x60uLL);
  v21 = *(_QWORD *)&v92.VidPnTargetColorCoeffDynamicRanges.FirstChannel;
  v12 = (_OWORD *)a6;
  v22 = 0LL;
  *(_QWORD *)&v92.CopyProtection.OEMCopyProtection[28] = 0LL;
  v23 = HIDWORD(v92.GammaRamp.DataSize) & 0xFFFFFFDE | (*(_QWORD *)&v92.VidPnTargetColorCoeffDynamicRanges.FirstChannel > 1uLL) | *(_DWORD *)(a6 + 92) & 0x20;
  HIDWORD(v92.GammaRamp.DataSize) = v23;
  v94 = *(_OWORD *)&v92.CopyProtection.OEMCopyProtection[244];
  if ( !*(_QWORD *)&v92.VidPnTargetColorCoeffDynamicRanges.FirstChannel )
  {
    v93 = *(_OWORD *)&v92.CopyProtection.OEMCopyProtection[196];
LABEL_96:
    if ( (v23 & 2) == 0
      || (v76 = (struct tagSIZE)(unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(_mm_load_si128((const __m128i *)&v92.GammaRamp), 4)),
          v76.cx == 1234568) )
    {
      v77 = *(_DWORD *)&v92.CopyProtection.OEMCopyProtection[188];
    }
    else
    {
      v77 = Win81::AdjustDesktopScaleFactorForOverride(
              (Win81 *)0x64,
              *(int *)&v92.CopyProtection.OEMCopyProtection[212],
              v76,
              (const struct Win81::DPI_SCALE_FACTOR_COLLECTION *)v20);
      *(_DWORD *)&v92.CopyProtection.OEMCopyProtection[188] = v77;
    }
    if ( !v77 )
    {
      v78 = WdLogNewEntry5_WdAssertion(v21);
      *(_QWORD *)(v78 + 24) = 1077LL;
      WdLogEvent5_WdAssertion(v78);
    }
    v79 = v93;
    *v12 = *(_OWORD *)&v92.CopyProtection.OEMCopyProtection[180];
    v80 = *(_OWORD *)&v92.CopyProtection.OEMCopyProtection[212];
    v12[1] = v79;
    v81 = *(_OWORD *)&v92.CopyProtection.OEMCopyProtection[228];
    v12[2] = v80;
    v82 = v94;
    v12[3] = v81;
    v12[4] = v82;
    v12[5] = *(_OWORD *)&v92.GammaRamp.Type;
    LODWORD(v12) = 0;
    goto LABEL_103;
  }
  v93 = *(_OWORD *)&v92.CopyProtection.OEMCopyProtection[196];
  while ( 1 )
  {
    v85.cy = -1;
    BYTE2(v85.cx) = 0;
    v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, LONG *))(*(_QWORD *)&v92.ContentTransformation.RotationSupport
                                                                              + 8LL))(
            *(_QWORD *)&v92.ImportanceOrdinal,
            (unsigned int)v8,
            v22,
            &v85.cy);
    v12 = (_OWORD *)v24;
    if ( v24 < 0 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v25);
      v19 = (unsigned int)v8;
      v13[3] = v22;
      goto LABEL_93;
    }
    v88 = 0LL;
    v26 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)&v92.ContentTransformation.RotationSupport
                                                                      + 24LL);
    memset(&v92.CopyProtection.APSTriggerBits, 0, 28);
    LOBYTE(v92.Content) = 0;
    v27 = v26(*(_QWORD *)&v92.ImportanceOrdinal, (unsigned int)v8, (unsigned int)v85.cy, &v88);
    v12 = (_OWORD *)v27;
    if ( v27 < 0 )
      break;
    v29 = v88;
    if ( !v88 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v28);
      *(_QWORD *)(v30 + 24) = 832LL;
      WdLogEvent5_WdAssertion(v30);
      v29 = v88;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)&v92.Content,
      v29,
      *(_QWORD *)(*(_QWORD *)&v92.ContentTransformation.RotationSupport + 32LL),
      *(__int64 *)&v92.ImportanceOrdinal);
    v31 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)(*(_QWORD *)&v92.CopyProtection.APSTriggerBits
                                                                                  + 20LL));
    LOBYTE(v85.cx) = 0;
    LODWORD(v86) = -2;
    v32 = v31;
    v33 = 0;
    VideoOutputTechnology = DmmGetVideoOutputTechnology(v7, v85.cy, &v86, 0LL);
    v36 = VideoOutputTechnology;
    if ( VideoOutputTechnology >= 0 )
    {
      v33 = IsInternalVideoOutput(v86);
      LOBYTE(v85.cx) = v33;
    }
    else
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdError(v35);
      v37[3] = v7;
      v37[4] = (unsigned int)v85.cy;
      v37[5] = v36;
      WdLogEvent5_WdError(v37);
    }
    v92.VisibleFromActiveBROffset.cy = v33;
    v87 = 0LL;
    v92.ContentTransformation.ScalingSupport = 0;
    v40 = (v23 ^ (v23 | (4 * v33))) & 4 ^ v23;
    v92.GammaRamp.Data.pRgb256x3x16 = (D3DDDI_GAMMA_RAMP_RGB256x3x16 *)MonitorGetEdidBaseBlockPtr(
                                                                         v7,
                                                                         (unsigned int)v85.cy,
                                                                         v38,
                                                                         v39);
    pRgb256x3x16 = v92.GammaRamp.Data.pRgb256x3x16;
    NativeResolution = (__int64)DpiInternal::GetNativeResolution((DpiInternal *)v92.GammaRamp.Data.pRgb256x3x16, v42);
    v88 = NativeResolution;
    if ( ((v32 - 2) & 0xFFFFFFFD) != 0 )
    {
      v47 = HIDWORD(v88);
      v46 = v88;
    }
    else
    {
      v46 = HIDWORD(v88);
      v47 = NativeResolution;
      v88 = __PAIR64__(NativeResolution, HIDWORD(v88));
    }
    if ( pRgb256x3x16 )
    {
      Win81::GetPhysicalSizeFromEDID((Win81 *)pRgb256x3x16, (int *)&v87, v44, *(_QWORD *)&v45);
      if ( ((v32 - 2) & 0xFFFFFFFD) != 0 )
      {
        v48 = HIDWORD(v87);
        v49 = v87;
      }
      else
      {
        v48 = v87;
        v49 = HIDWORD(v87);
        v87 = __PAIR64__(v87, HIDWORD(v87));
      }
      if ( v49 && v48 )
      {
        if ( (int)(v49 * v48) <= 16000 && !LOBYTE(v85.cx) )
        {
          v48 = 0;
          v92.ContentTransformation.ScalingSupport = (D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT)1;
          v40 |= 0x40u;
          v87 = 0LL;
          v49 = 0;
LABEL_32:
          BYTE2(v85.cx) = (*(_BYTE *)(*(_QWORD *)&v92.VidPnTargetColorCoeffDynamicRanges.ThirdChannel + 300LL) & 0x20) != 0;
          goto LABEL_33;
        }
      }
      else
      {
        v48 = 0;
        v87 = 0LL;
        v49 = 0;
      }
    }
    else
    {
      v48 = HIDWORD(v87);
      v40 |= 8u;
      v49 = v87;
    }
    if ( !v49 )
      goto LABEL_32;
LABEL_33:
    LODWORD(v12) = DpiInternal::GetCurrentSourceResolution(
                     *(DpiInternal **)&v92.CopyProtection.OEMCopyProtection[44],
                     *(struct D3DKMDT_HVIDPN__ *const *)&v92.VisibleFromActiveTLOffset.cy,
                     *(const struct _DXGDMM_VIDPN_INTERFACE **)&v92.CopyProtection.APSTriggerBits,
                     (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v89);
    if ( (int)v12 < 0 )
      goto LABEL_90;
    BYTE1(v85.cx) = 0;
    LODWORD(v12) = DpiInternal::GetCurrentTargetResolution(
                     *(DpiInternal **)&v92.CopyProtection.OEMCopyProtection[44],
                     *(struct D3DKMDT_HVIDPN__ *const *)&v92.VisibleFromActiveTLOffset.cy,
                     *(const struct _DXGDMM_VIDPN_INTERFACE **)&v92.CopyProtection.APSTriggerBits,
                     &v92,
                     (struct _D3DKMDT_2DREGION *)((char *)&v85 + 1));
    if ( (int)v12 < 0 )
      goto LABEL_90;
    VidPnTargetId = v92.VidPnTargetId;
    if ( ((v32 - 2) & 0xFFFFFFFD) != 0 )
    {
      LODWORD(v86) = v92.VidPnTargetId;
      VidPnTargetId = v92.VidPnSourceId;
    }
    else
    {
      LODWORD(v86) = v92.VidPnSourceId;
      v92.VidPnSourceId = v92.VidPnTargetId;
      v92.VidPnTargetId = v86;
    }
    v51 = v89;
    v91 = VidPnTargetId;
    if ( (v40 & 1) != 0 && v46 && v47 )
    {
      v52 = v90;
      if ( BYTE1(v85.cx) )
      {
        v52 = v90 >> 1;
        v90 >>= 1;
      }
      v53 = v89 >= 2 * v46 || v52 >= 2 * v47;
      v40 ^= ((unsigned __int8)v40 ^ (unsigned __int8)(v40 | (2 * v53))) & 2;
      if ( BYTE1(v85.cx) )
      {
        v52 *= 2;
        v90 = v52;
      }
    }
    else
    {
      v52 = v90;
    }
    memset(&v92.CopyProtection.OEMCopyProtection[84], 0, 0x60uLL);
    v54 = *(_QWORD *)&v92.CopyProtection.APSTriggerBits;
    *(_DWORD *)&v92.CopyProtection.OEMCopyProtection[168] = a5;
    *(_DWORD *)&v92.CopyProtection.OEMCopyProtection[116] = v89;
    v55 = *(_DWORD *)(*(_QWORD *)&v92.CopyProtection.APSTriggerBits + 12LL);
    *(_DWORD *)&v92.CopyProtection.OEMCopyProtection[120] = v52;
    if ( v55 == 1 )
      goto LABEL_58;
    if ( v55 != 2 )
    {
      if ( v55 == 3 )
        goto LABEL_58;
      if ( v55 != 4 )
      {
        if ( v55 == 5 )
          goto LABEL_57;
        if ( v55 != 255 )
        {
          v56 = WdLogNewEntry5_WdAssertion((unsigned int)(v55 - 5));
          *(_QWORD *)(v56 + 24) = *(int *)(v54 + 12);
          WdLogEvent5_WdAssertion(v56);
LABEL_57:
          v40 |= 0x100u;
        }
LABEL_58:
        v57 = 4LL;
        goto LABEL_59;
      }
    }
    v57 = 4LL;
    if ( v55 == 4 )
    {
      v70 = v91;
      if ( v49 * v52 <= v48 * v89 )
      {
        v89 = v91;
        v72 = v52 * v91 / v51;
        v51 = v91;
        v52 = v72;
        v90 = v72;
      }
      else
      {
        v71 = v89 * (unsigned int)v86 / v52;
        v52 = v86;
        v51 = v71;
        v89 = v71;
        v90 = v86;
      }
    }
    else
    {
      v70 = v91;
    }
    v49 = v49 * v51 / v70;
    v48 = v48 * v52 / (unsigned int)v86;
LABEL_59:
    v58 = (struct tagSIZE)*(unsigned int *)(v54 + 20);
    *(_DWORD *)&v92.CopyProtection.OEMCopyProtection[108] = v49;
    *(_DWORD *)&v92.CopyProtection.OEMCopyProtection[112] = v48;
    if ( (unsigned int)(v58.cx - 5) <= 0xB )
      v58 = (struct tagSIZE)(unsigned int)((v58.cx - 1) % 4 + 1);
    v59 = v58.cx - 2;
    LOBYTE(v58.cx) = BYTE2(v85.cx);
    v23 = ((unsigned __int8)v40 ^ (unsigned __int8)(((v59 & 0xFFFFFFFD) == 0) << 7)) & 0x80 ^ v40;
    HIDWORD(v92.GammaRamp.DataSize) = v23;
    if ( !BYTE2(v85.cx) && !*(_DWORD *)&v92.ContentTransformation.ScalingSupport )
    {
      v60 = (DpiInternal *)v92.GammaRamp.Data.pRgb256x3x16;
      if ( v92.GammaRamp.Data.pRgb256x3x16 )
      {
        if ( (unsigned __int8)DpiInternal::HasValidPreferredDetailedTimingDescriptor(
                                (DpiInternal *)v92.GammaRamp.Data.pRgb256x3x16,
                                *(const void **)&v58) )
        {
          v61 = *(Win81 **)&v92.VidPnTargetColorCoeffDynamicRanges.ThirdChannel;
          IsAudioAvailableInEdid = DpiInternal::IsAudioAvailableInEdid(
                                     *(DpiInternal **)&v92.VidPnTargetColorCoeffDynamicRanges.ThirdChannel,
                                     (void *)(unsigned int)v85.cy);
          LODWORD(v84) = DpiInternal::IsPreferredModeInterlaced(v60, (const void *)IsAudioAvailableInEdid);
          v64 = Win81::DetermineViewDistance(
                  v61,
                  &v87,
                  (const struct tagSIZE *)v92.VisibleFromActiveBROffset.cy,
                  (int)&v88,
                  (const struct tagSIZE *)v84,
                  v63,
                  (unsigned int *)&v92.CopyProtection.OEMCopyProtection[148]);
          v66 = *(_DWORD *)&v92.CopyProtection.OEMCopyProtection[148];
          v23 ^= ((unsigned __int8)v23 ^ (unsigned __int8)(16 * v64)) & 0x10;
          HIDWORD(v92.GammaRamp.DataSize) = v23;
          if ( !*(_DWORD *)&v92.CopyProtection.OEMCopyProtection[148] )
          {
            v67 = WdLogNewEntry5_WdAssertion(v65);
            *(_QWORD *)(v67 + 24) = 1033LL;
            WdLogEvent5_WdAssertion(v67);
          }
LABEL_67:
          cx = v85.cx;
          goto LABEL_68;
        }
      }
    }
    v66 = 0;
    *(_DWORD *)&v92.CopyProtection.OEMCopyProtection[148] = 0;
    if ( !LOBYTE(v58.cx) )
      goto LABEL_67;
    cx = v85.cx;
    if ( LOBYTE(v85.cx) )
    {
      Win81::HeuristicallyPickScaleFactorsForInternalEdidlessBdd(
        *(Win81 **)&v92.CopyProtection.OEMCopyProtection[116],
        v58,
        (__int64)&v92.CopyProtection.OEMCopyProtection[84],
        (struct _DPI_INFORMATION *)v57);
      Win81::FillOverridesAndAdjustedScaleFactor(
        (Win81 *)(unsigned int)v92.ContentTransformation.Rotation,
        v73,
        (__int64)&v92.CopyProtection.OEMCopyProtection[84],
        v74);
      v23 |= 0x400u;
      HIDWORD(v92.GammaRamp.DataSize) = v23;
      goto LABEL_69;
    }
LABEL_68:
    Win81::FillDpiInfo(
      (Win81 *)&v92.CopyProtection.OEMCopyProtection[108],
      (const struct tagSIZE *)&v92.CopyProtection.OEMCopyProtection[116],
      (const struct tagSIZE *)v66,
      v92.ContentTransformation.Rotation,
      (unsigned int)v84,
      (__int64)&v92.CopyProtection.OEMCopyProtection[84]);
LABEL_69:
    if ( *(_DWORD *)&v92.CopyProtection.OEMCopyProtection[176] )
    {
      v69 = WdLogNewEntry5_WdAssertion(v21);
      *(_QWORD *)(v69 + 24) = 1050LL;
      WdLogEvent5_WdAssertion(v69);
    }
    *(_DWORD *)&v92.CopyProtection.OEMCopyProtection[176] = v23;
    if ( cx
      || (v23 & 4) == 0
      && (v20 = 2LL,
          (*(_DWORD *)&v92.CopyProtection.OEMCopyProtection[236] + *(_DWORD *)&v92.CopyProtection.OEMCopyProtection[240])
        / 2 <= (*(_DWORD *)&v92.CopyProtection.OEMCopyProtection[140]
              + *(_DWORD *)&v92.CopyProtection.OEMCopyProtection[144])
             / 2) )
    {
      *(_OWORD *)&v92.CopyProtection.OEMCopyProtection[180] = *(_OWORD *)&v92.CopyProtection.OEMCopyProtection[84];
      v93 = *(_OWORD *)&v92.CopyProtection.OEMCopyProtection[100];
      *(_OWORD *)&v92.CopyProtection.OEMCopyProtection[212] = *(_OWORD *)&v92.CopyProtection.OEMCopyProtection[116];
      v94 = *(_OWORD *)&v92.CopyProtection.OEMCopyProtection[148];
      *(_OWORD *)&v92.GammaRamp.Type = *(_OWORD *)&v92.CopyProtection.OEMCopyProtection[164];
      v23 = *(_DWORD *)&v92.CopyProtection.OEMCopyProtection[176];
      *(_OWORD *)&v92.CopyProtection.OEMCopyProtection[228] = *(_OWORD *)&v92.CopyProtection.OEMCopyProtection[132];
    }
    if ( LOBYTE(v92.Content) )
      (*(void (__fastcall **)(_QWORD, __int64))&v92.CopyProtection.OEMCopyProtection[4])(
        *(_QWORD *)&v92.CopyProtection.OEMCopyProtection[12],
        v54);
    LODWORD(v8) = v92.VidPnTargetColorBasis;
    v22 = *(_QWORD *)&v92.CopyProtection.OEMCopyProtection[28] + 1LL;
    v7 = *(DXGADAPTER **)&v92.VidPnTargetColorCoeffDynamicRanges.ThirdChannel;
    *(_QWORD *)&v92.CopyProtection.OEMCopyProtection[28] = v22;
    if ( v22 >= *(_QWORD *)&v92.VidPnTargetColorCoeffDynamicRanges.FirstChannel )
    {
      v12 = (_OWORD *)a6;
      goto LABEL_96;
    }
  }
  v75 = (_QWORD *)WdLogNewEntry5_WdError(v28);
  v75[3] = (unsigned int)v8;
  v75[4] = (unsigned int)v85.cy;
  v75[5] = v12;
  WdLogEvent5_WdError(v75);
LABEL_90:
  if ( LOBYTE(v92.Content) )
    (*(void (__fastcall **)(_QWORD, _QWORD))&v92.CopyProtection.OEMCopyProtection[4])(
      *(_QWORD *)&v92.CopyProtection.OEMCopyProtection[12],
      *(_QWORD *)&v92.CopyProtection.APSTriggerBits);
LABEL_103:
  if ( v92.CopyProtection.OEMCopyProtection[36] )
    (*(void (__fastcall **)(_QWORD, _QWORD))&v92.CopyProtection.OEMCopyProtection[52])(
      *(_QWORD *)&v92.CopyProtection.OEMCopyProtection[60],
      *(_QWORD *)&v92.CopyProtection.OEMCopyProtection[44]);
  return (unsigned int)v12;
}
