/*
 * XREFs of ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00AAFE8
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C00AAEC0 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C0004FC0 (IsInternalVideoOutput.c)
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C00085E0 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     ?HasValidPreferredDetailedTimingDescriptor@DpiInternal@@YA_NPEBX@Z @ 0x1C0008A70 (-HasValidPreferredDetailedTimingDescriptor@DpiInternal@@YA_NPEBX@Z.c)
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0009A80 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0009B98 (-FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DP.c)
 *     ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C0009C18 (-AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 *     ?AvgXY@DpiInternal@@YAJUtagSIZE@@@Z @ 0x1C0009D1C (-AvgXY@DpiInternal@@YAJUtagSIZE@@@Z.c)
 *     ?ScaleOverrideTestHook@@YAXQEBGPEAK@Z @ 0x1C0009DF4 (-ScaleOverrideTestHook@@YAXQEBGPEAK@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0009E4C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C0009EBC (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     ?GetNativeResolution@DpiInternal@@YA?AUtagSIZE@@PEBX@Z @ 0x1C000A094 (-GetNativeResolution@DpiInternal@@YA-AUtagSIZE@@PEBX@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal@@YAXUtagSIZE@@IPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0022418 (-HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal@@YAXUtagSIZE@@IPEBU_DPI_SCALE_F.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00627F0 (DmmGetVideoOutputTechnology.c)
 *     ?LogScaleFactor@@YAXIIPEAU_DPI_INFORMATION@@@Z @ 0x1C00AB874 (-LogScaleFactor@@YAXIIPEAU_DPI_INFORMATION@@@Z.c)
 *     ?TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGPEAU_LUID@@I@Z @ 0x1C00AB910 (-TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGPEAU_LUID@@I@Z.c)
 *     MonitorGetMonitorDeviceInterfaceName @ 0x1C00ABC40 (MonitorGetMonitorDeviceInterfaceName.c)
 *     ?SqmDpiCommon@@YAXPEBU_DPI_INFORMATION@@UtagSIZE@@1@Z @ 0x1C00ABD3C (-SqmDpiCommon@@YAXPEBU_DPI_INFORMATION@@UtagSIZE@@1@Z.c)
 *     ?SqmDpiInfoStream@@YAXPEBU_DPI_INFORMATION@@QEAXIPEBX@Z @ 0x1C00ABE40 (-SqmDpiInfoStream@@YAXPEBU_DPI_INFORMATION@@QEAXIPEBX@Z.c)
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIPEAI@Z @ 0x1C00ABFB0 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIPEAI@Z.c)
 *     ?DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z @ 0x1C00AC0F8 (-DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z.c)
 *     ?GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@PEAE@Z @ 0x1C00AC14C (-GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@@Z @ 0x1C00AC250 (-GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     MonitorGetEdidBaseBlockPtr @ 0x1C00AC358 (MonitorGetEdidBaseBlockPtr.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00AC434 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z @ 0x1C00AC500 (-GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z.c)
 *     DpiReadPnpRegistryValue @ 0x1C00CE800 (DpiReadPnpRegistryValue.c)
 */

__int64 __fastcall UpdateGdiInfoForVidPnSource(
        const struct _DXGDMM_INTERFACE *a1,
        char *a2,
        unsigned int a3,
        int a4,
        struct _GDIINFO *a5,
        struct _DPI_INFORMATION *a6)
{
  struct _DPI_INFORMATION *v6; // r12
  __int64 v8; // r15
  __int64 (__fastcall *v9)(char *, struct _LUID *, _BYTE *); // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  DpiInternal *v14; // rsi
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _DWORD *v23; // r14
  unsigned int v24; // edi
  __int64 v25; // rcx
  int Win32DpiValues; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rbx
  __int64 v32; // rdx
  const struct _DPI_SCALE_FACTOR_COLLECTION *v33; // r9
  bool v34; // al
  int v35; // ebx
  char v36; // al
  unsigned __int64 v37; // r14
  int v38; // ebx
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 (__fastcall *v42)(_QWORD, _QWORD, _QWORD, struct _LUID *); // rax
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  int v48; // r15d
  unsigned int v49; // r12d
  int VideoOutputTechnology; // eax
  __int64 v51; // rcx
  __int64 v52; // rdi
  bool v53; // di
  int v54; // r14d
  int v55; // ebx
  const void *v56; // rdx
  struct tagSIZE NativeResolution; // rax
  __int64 v58; // rcx
  LONG cy; // eax
  LONG cx; // r12d
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // r8
  int CurrentTargetResolution; // eax
  unsigned int v66; // edi
  unsigned int v67; // r12d
  __int64 v68; // rdx
  __int64 v69; // r8
  int v70; // ebx
  __int64 v71; // rcx
  int v72; // eax
  unsigned int v73; // ecx
  int v74; // r8d
  unsigned int *v75; // r9
  unsigned int v76; // r10d
  bool v77; // di
  unsigned int v78; // r8d
  unsigned __int8 *v79; // r15
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  unsigned int v83; // ecx
  unsigned __int8 v84; // al
  struct tagSIZE v85; // rdx
  bool PreferredScaleFactorForMonitor; // al
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  struct tagSIZE v91; // rdx
  struct tagSIZE v92; // rdx
  int v93; // eax
  int v94; // r8d
  int MonitorDeviceInterfaceName; // eax
  __int64 v96; // rcx
  unsigned int *v97; // r8
  __int64 v98; // rdi
  __m128i v99; // xmm1
  __int64 v100; // rcx
  unsigned int v101; // eax
  __int128 v102; // xmm1
  __int128 v103; // xmm0
  __int64 v105; // rax
  _QWORD *v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rcx
  __int64 v111; // rax
  __int64 v112; // rax
  _QWORD *v113; // rax
  __int64 v114; // rax
  unsigned int v115; // eax
  char v116; // al
  __int64 v117; // rax
  unsigned int v118; // r8d
  unsigned int v119; // ecx
  unsigned int v120; // eax
  __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rax
  _QWORD *v124; // rax
  bool v125; // zf
  _QWORD *v126; // rax
  __int64 v127; // rcx
  int v128; // eax
  int v129; // eax
  __int64 v130; // rax
  struct _D3DKMDT_2DREGION *v131; // [rsp+20h] [rbp-E0h]
  unsigned __int8 *v132; // [rsp+28h] [rbp-D8h]
  struct _DPI_SCALE_FACTOR_COLLECTION *v133; // [rsp+30h] [rbp-D0h]
  bool v134; // [rsp+40h] [rbp-C0h]
  unsigned int v135; // [rsp+44h] [rbp-BCh] BYREF
  bool v136; // [rsp+48h] [rbp-B8h]
  _BYTE v137[11]; // [rsp+49h] [rbp-B7h] BYREF
  struct _LUID EdidBaseBlockPtr; // [rsp+58h] [rbp-A8h] BYREF
  struct tagSIZE v139; // [rsp+60h] [rbp-A0h] BYREF
  struct _D3DKMDT_2DREGION v140; // [rsp+68h] [rbp-98h] BYREF
  struct tagSIZE v141; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v142[368]; // [rsp+78h] [rbp-88h] BYREF
  _OWORD v143[6]; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned __int16 v144[128]; // [rsp+250h] [rbp+150h] BYREF

  v6 = a6;
  v8 = a3;
  *(_QWORD *)&v142[152] = a5;
  v9 = (__int64 (__fastcall *)(char *, struct _LUID *, _BYTE *))*((_QWORD *)a1 + 6);
  *(_DWORD *)&v142[160] = a4;
  *(_DWORD *)&v142[164] = a3;
  *(_QWORD *)&v142[328] = a6;
  *(_QWORD *)&v142[104] = 0LL;
  memset(&v142[48], 0, 28);
  v142[40] = 0;
  EdidBaseBlockPtr = 0LL;
  v11 = v9(a2, &EdidBaseBlockPtr, &v142[104]);
  v13 = v11;
  if ( v11 < 0 )
  {
    v105 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v105 + 24) = a2;
    *(_QWORD *)(v105 + 32) = v13;
    WdLogEvent5_WdError(v105);
    return (unsigned int)v13;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)&v142[40],
    *(_QWORD *)&EdidBaseBlockPtr,
    *((_QWORD *)a1 + 8),
    (__int64)a2);
  v14 = *(DpiInternal **)&v142[48];
  *(_QWORD *)&v142[8] = 0LL;
  *(_QWORD *)&v142[88] = 0LL;
  v15 = (**(__int64 (__fastcall ***)(_QWORD, _BYTE *, _BYTE *))&v142[104])(*(_QWORD *)&v142[48], &v142[8], &v142[88]);
  v13 = v15;
  if ( v15 < 0 )
  {
    v106 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v106[3] = v14;
    v106[4] = v13;
LABEL_86:
    WdLogEvent5_WdError(v106);
LABEL_87:
    if ( v142[40] )
      (*(void (__fastcall **)(_QWORD, DpiInternal *))&v142[56])(*(_QWORD *)&v142[64], v14);
    return (unsigned int)v13;
  }
  *(_QWORD *)&v142[176] = 0LL;
  v17 = (**(__int64 (__fastcall ***)(_QWORD, _QWORD, _BYTE *))&v142[88])(
          *(_QWORD *)&v142[8],
          (unsigned int)v8,
          &v142[176]);
  v13 = v17;
  if ( v17 < 0 )
  {
    v106 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v106[3] = v8;
    v106[4] = *(_QWORD *)&v142[8];
    v106[5] = v13;
    goto LABEL_86;
  }
  LODWORD(v13) = GetCurrentContentResolution(
                   a2,
                   v8,
                   (const struct tagRECT **)&v142[192],
                   (struct tagRECT *)&v142[24],
                   (unsigned int *)&v140);
  if ( (int)v13 < 0 )
    goto LABEL_87;
  v23 = *(_DWORD **)&v142[192];
  v24 = 0;
  if ( !*(_QWORD *)&v142[192] )
  {
    v107 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
    *(_QWORD *)(v107 + 24) = 1739LL;
    WdLogEvent5_WdAssertion(v107);
  }
  v25 = (unsigned int)(v23[2] - *v23);
  if ( v23[2] - *v23 <= 0 || (v25 = (unsigned int)(v23[3] - v23[1]), v23[3] - v23[1] <= 0) )
  {
    v108 = WdLogNewEntry5_WdAssertion(v25, v19, v21, v22);
    *(_QWORD *)(v108 + 24) = 1742LL;
    WdLogEvent5_WdAssertion(v108);
  }
  v140.cy = 0;
  memset(&v142[336], 0, 0x20uLL);
  Win32DpiValues = QueryWin32DpiValues(&v140.cy, (struct _DPI_SCALE_FACTOR_COLLECTION *)&v142[336]);
  v31 = Win32DpiValues;
  if ( Win32DpiValues < 0 )
  {
    v109 = WdLogNewEntry5_WdAssertion(v28, v27, v29, v30);
    *(_QWORD *)(v109 + 24) = 1748LL;
    WdLogEvent5_WdAssertion(v109);
    v111 = WdLogNewEntry5_WdError(v110);
    *(_QWORD *)(v111 + 24) = v31;
    WdLogEvent5_WdError(v111);
  }
  *(_DWORD *)&v142[96] = 0;
  memset(&v142[216], 0, 0x60uLL);
  v34 = *(_QWORD *)&v142[176] > 1uLL || v140.cx > 1;
  v35 = (v142[308] ^ v34) & 1 ^ *(_DWORD *)&v142[308];
  if ( *v23 || (v36 = 1, v23[1]) )
    v36 = 0;
  v37 = 0LL;
  *(_QWORD *)&v142[184] = 0LL;
  v38 = ((unsigned __int8)v35 ^ (unsigned __int8)(32 * v36)) & 0x20 ^ v35;
  *(_DWORD *)&v142[308] = v38;
  *(_OWORD *)&v142[312] = *(_OWORD *)&v142[280];
  if ( !*(_QWORD *)&v142[176] )
  {
    v99 = *(__m128i *)&v142[232];
    *(_OWORD *)&v142[200] = *(_OWORD *)&v142[232];
LABEL_72:
    v100 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v99, 8));
    if ( (_DWORD)v100 )
    {
      v32 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v99, 12));
      if ( (_DWORD)v32 )
      {
        if ( (v38 & 0x80u) == 0 )
        {
          v129 = 1000 * v100;
          v100 = *(_QWORD *)&v142[152];
          *(_DWORD *)(*(_QWORD *)&v142[152] + 8LL) = v129;
          *(_DWORD *)(v100 + 12) = 1000 * v32;
        }
        else
        {
          v128 = 1000 * v32;
          v32 = *(_QWORD *)&v142[152];
          *(_DWORD *)(*(_QWORD *)&v142[152] + 8LL) = v128;
          *(_DWORD *)(v32 + 12) = 1000 * v100;
        }
      }
    }
    if ( (v38 & 2) == 0
      || (v33 = (const struct _DPI_SCALE_FACTOR_COLLECTION *)(unsigned int)_mm_cvtsi128_si32(
                                                                             _mm_srli_si128(
                                                                               _mm_load_si128((const __m128i *)&v142[296]),
                                                                               4)),
          (_DWORD)v33 == 1234568) )
    {
      v101 = *(_DWORD *)&v142[224];
    }
    else
    {
      v101 = DpiInternal::AdjustDesktopScaleFactorForOverride(
               (DpiInternal *)0x64,
               *(int *)&v142[248],
               (struct tagSIZE)&v142[336],
               v33);
      *(_DWORD *)&v142[224] = v101;
    }
    if ( v24 )
    {
      v101 = v24;
      *(_DWORD *)&v142[300] = 1234567;
      *(_DWORD *)&v142[224] = v24;
    }
    if ( !v101 )
    {
      v130 = WdLogNewEntry5_WdAssertion(v100, v32, 0LL, v33);
      *(_QWORD *)(v130 + 24) = 2173LL;
      WdLogEvent5_WdAssertion(v130);
    }
    v102 = *(_OWORD *)&v142[264];
    *(_DWORD *)&v142[216] = 100;
    *(_DWORD *)&v142[220] = 100;
    *(_OWORD *)v6 = *(_OWORD *)&v142[216];
    *((_OWORD *)v6 + 1) = *(_OWORD *)&v142[200];
    *((_OWORD *)v6 + 2) = *(_OWORD *)&v142[248];
    v103 = *(_OWORD *)&v142[312];
    *((_OWORD *)v6 + 3) = v102;
    *((_OWORD *)v6 + 4) = v103;
    *((_OWORD *)v6 + 5) = *(_OWORD *)&v142[296];
    if ( v142[40] )
      (*(void (__fastcall **)(_QWORD, DpiInternal *, _QWORD))&v142[56])(*(_QWORD *)&v142[64], v14, 0LL);
    return 0LL;
  }
  *(_OWORD *)&v142[200] = *(_OWORD *)&v142[232];
  while ( 1 )
  {
    *(_DWORD *)&v137[3] = -1;
    v136 = 0;
    v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _BYTE *))(*(_QWORD *)&v142[88] + 8LL))(
            *(_QWORD *)&v142[8],
            (unsigned int)v8,
            v37,
            &v137[3]);
    v41 = v39;
    if ( v39 < 0 )
    {
      v126 = (_QWORD *)WdLogNewEntry5_WdError(v40);
      v127 = (unsigned int)v8;
      v126[3] = v37;
      goto LABEL_136;
    }
    EdidBaseBlockPtr = 0LL;
    v42 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct _LUID *))(*(_QWORD *)&v142[88] + 24LL);
    memset(&v142[120], 0, 28);
    v142[112] = 0;
    v43 = v42(*(_QWORD *)&v142[8], (unsigned int)v8, *(unsigned int *)&v137[3], &EdidBaseBlockPtr);
    v41 = v43;
    if ( v43 < 0 )
    {
      v126 = (_QWORD *)WdLogNewEntry5_WdError(v44);
      v126[3] = (unsigned int)v8;
      v127 = *(unsigned int *)&v137[3];
LABEL_136:
      v126[4] = v127;
      v126[5] = v41;
      WdLogEvent5_WdError(v126);
      v125 = v142[40] == 0;
      goto LABEL_137;
    }
    v47 = (__int64)EdidBaseBlockPtr;
    if ( !*(_QWORD *)&EdidBaseBlockPtr )
    {
      v112 = WdLogNewEntry5_WdAssertion(v44, 0LL, v45, v46);
      *(_QWORD *)(v112 + 24) = 1797LL;
      WdLogEvent5_WdAssertion(v112);
      v47 = (__int64)EdidBaseBlockPtr;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)&v142[112],
      v47,
      *(_QWORD *)(*(_QWORD *)&v142[88] + 32LL),
      *(__int64 *)&v142[8]);
    v48 = 0;
    v135 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)(*(_QWORD *)&v142[120] + 20LL));
    v134 = 0;
    *(_DWORD *)&v137[7] = -2;
    v49 = v135;
    VideoOutputTechnology = DmmGetVideoOutputTechnology((DXGADAPTER *)a2, *(unsigned int *)&v137[3], &v137[7], 0LL);
    v52 = VideoOutputTechnology;
    if ( VideoOutputTechnology < 0 )
    {
      v113 = (_QWORD *)WdLogNewEntry5_WdError(v51);
      v113[3] = a2;
      v113[4] = *(unsigned int *)&v137[3];
      v113[5] = v52;
      WdLogEvent5_WdError(v113);
      v53 = 0;
    }
    else
    {
      v53 = IsInternalVideoOutput(*(int *)&v137[7]);
      v134 = v53;
    }
    v54 = 0;
    v140.cx = 0;
    *(_DWORD *)&v142[172] = v53;
    v139 = 0LL;
    v55 = ((unsigned __int8)v38 ^ (unsigned __int8)(v38 | (4 * v53))) & 4 ^ v38;
    EdidBaseBlockPtr = (struct _LUID)MonitorGetEdidBaseBlockPtr((DXGADAPTER *)a2, *(unsigned int *)&v137[3]);
    NativeResolution = DpiInternal::GetNativeResolution(*(DpiInternal **)&EdidBaseBlockPtr, v56);
    v58 = v49 - 2;
    v141 = NativeResolution;
    if ( (v58 & 0xFFFFFFFD) != 0 )
    {
      cy = v141.cy;
      cx = v141.cx;
    }
    else
    {
      cy = v141.cx;
      cx = v141.cy;
      v141.cx = v141.cy;
      v141.cy = cy;
    }
    *(_DWORD *)&v142[80] = cy;
    if ( EdidBaseBlockPtr )
    {
      if ( (int)EDID_V1_GetPhysicalSize(
                  v58,
                  *(unsigned __int8 **)&EdidBaseBlockPtr,
                  (unsigned int *)&v142[100],
                  (unsigned int *)&v142[168]) < 0 )
      {
        v114 = WdLogNewEntry5_WdAssertion(0LL, v61, v62, v63);
        *(_QWORD *)(v114 + 24) = 1842LL;
        WdLogEvent5_WdAssertion(v114);
      }
      v54 = *(_DWORD *)&v142[100];
      v48 = *(_DWORD *)&v142[168];
      v139.cx = *(_DWORD *)&v142[100];
      v139.cy = *(_DWORD *)&v142[168];
      if ( ((v135 - 2) & 0xFFFFFFFD) == 0 )
      {
        v54 = *(_DWORD *)&v142[168];
        v139.cx = *(_DWORD *)&v142[168];
        v48 = *(_DWORD *)&v142[100];
        v139.cy = *(_DWORD *)&v142[100];
      }
      if ( !v54 || !v48 )
      {
        v48 = 0;
        v139 = 0LL;
        v54 = 0;
LABEL_33:
        if ( v54 )
          goto LABEL_35;
        goto LABEL_34;
      }
      if ( v54 * v48 > 16000 || v53 )
        goto LABEL_33;
      v55 |= 0x40u;
      v140.cx = 1;
      v48 = 0;
      v139 = 0LL;
      v54 = 0;
    }
    else
    {
      v55 |= 8u;
      *(_DWORD *)&v142[248] = *(_DWORD *)(*(_QWORD *)&v142[152] + 16LL);
      *(_DWORD *)&v142[252] = *(_DWORD *)(*(_QWORD *)&v142[152] + 20LL);
    }
LABEL_34:
    v136 = (a2[284] & 0x10) != 0;
LABEL_35:
    LODWORD(v41) = DpiInternal::GetCurrentSourceResolution(
                     v14,
                     *(struct D3DKMDT_HVIDPN__ *const *)&v142[104],
                     *(const struct _DXGDMM_VIDPN_INTERFACE **)&v142[120],
                     (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)v142,
                     v131);
    if ( (int)v41 < 0 )
      break;
    v137[0] = 0;
    CurrentTargetResolution = DpiInternal::GetCurrentTargetResolution(
                                v14,
                                *(struct D3DKMDT_HVIDPN__ *const *)&v142[104],
                                *(const struct _DXGDMM_VIDPN_INTERFACE **)&v142[120],
                                (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v142[16],
                                (struct _D3DKMDT_2DREGION *)v137,
                                v132);
    v64 = 0LL;
    LODWORD(v41) = CurrentTargetResolution;
    if ( CurrentTargetResolution < 0 )
    {
      if ( v142[112] )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))&v142[128])(*(_QWORD *)&v142[136], *(_QWORD *)&v142[120], 0LL);
        v64 = 0LL;
      }
      v125 = v142[40] == 0;
      goto LABEL_137;
    }
    if ( ((v135 - 2) & 0xFFFFFFFD) != 0 )
    {
      *(_DWORD *)&v137[7] = *(_DWORD *)&v142[20];
      v135 = *(_DWORD *)&v142[16];
    }
    else
    {
      *(_DWORD *)&v137[7] = *(_DWORD *)&v142[16];
      v135 = *(_DWORD *)&v142[20];
      *(_DWORD *)&v142[16] = *(_DWORD *)&v142[20];
      *(_DWORD *)&v142[20] = *(_DWORD *)&v137[7];
    }
    if ( (v55 & 1) != 0 && cx && *(_DWORD *)&v142[80] )
    {
      v66 = *(_DWORD *)&v142[4];
      if ( v137[0] )
      {
        v66 = *(_DWORD *)&v142[4] >> 1;
        *(_DWORD *)&v142[4] >>= 1;
      }
      v115 = 2 * cx;
      v67 = *(_DWORD *)v142;
      if ( *(_DWORD *)v142 >= v115 || (v116 = 0, v66 >= 2 * *(_DWORD *)&v142[80]) )
        v116 = 1;
      v55 ^= ((unsigned __int8)v55 ^ (unsigned __int8)(v55 | (2 * v116))) & 2;
      if ( v137[0] )
      {
        v66 *= 2;
        *(_DWORD *)&v142[4] = v66;
      }
    }
    else
    {
      v66 = *(_DWORD *)&v142[4];
      v67 = *(_DWORD *)v142;
    }
    memset(v143, 0, sizeof(v143));
    DWORD1(v143[5]) = *(_DWORD *)&v142[160];
    v68 = *(unsigned int *)(*(_QWORD *)&v142[120] + 20LL);
    if ( (unsigned int)(v68 - 5) <= 0xB )
      v68 = (unsigned int)(((int)v68 - 1) % 4 + 1);
    v69 = (unsigned int)(*(_DWORD *)(*(_QWORD *)&v142[192] + 8LL) - **(_DWORD **)&v142[192]);
    LODWORD(v143[2]) = *(_DWORD *)(*(_QWORD *)&v142[192] + 8LL) - **(_DWORD **)&v142[192];
    v70 = ((unsigned __int8)v55 ^ (unsigned __int8)(((((_DWORD)v68 - 2) & 0xFFFFFFFD) == 0) << 7)) & 0x80 ^ v55;
    v71 = (unsigned int)(*(_DWORD *)(*(_QWORD *)&v142[192] + 12LL) - *(_DWORD *)(*(_QWORD *)&v142[192] + 4LL));
    DWORD1(v143[2]) = *(_DWORD *)(*(_QWORD *)&v142[192] + 12LL) - *(_DWORD *)(*(_QWORD *)&v142[192] + 4LL);
    if ( (((_DWORD)v68 - 2) & 0xFFFFFFFD) == 0 )
      *(_QWORD *)&v143[2] = __PAIR64__(v69, v71);
    v72 = *(_DWORD *)(*(_QWORD *)&v142[120] + 12LL);
    if ( v72 <= 0 )
      goto LABEL_113;
    if ( v72 <= 2 )
      goto LABEL_47;
    switch ( v72 )
    {
      case 3:
        v75 = (unsigned int *)v135;
        v76 = *(_DWORD *)&v137[7];
        v73 = v135 * (*(_DWORD *)&v142[32] - *(_DWORD *)&v142[24]) / v67;
        v120 = *(_DWORD *)&v137[7] * (*(_DWORD *)&v142[36] - *(_DWORD *)&v142[28]);
        break;
      case 4:
        v76 = *(_DWORD *)&v137[7];
        v75 = (unsigned int *)v135;
        if ( v66 * v135 <= v67 * *(_DWORD *)&v137[7] )
        {
          v119 = v135;
          v118 = v66 * v135 / v67;
        }
        else
        {
          v118 = *(_DWORD *)&v137[7];
          v119 = v67 * *(_DWORD *)&v137[7] / v66;
        }
        v73 = v119 * (*(_DWORD *)&v142[32] - *(_DWORD *)&v142[24]) / v67;
        v120 = v118 * (*(_DWORD *)&v142[36] - *(_DWORD *)&v142[28]);
        break;
      case 5:
        goto LABEL_114;
      default:
        if ( v72 != 255 )
        {
LABEL_113:
          v117 = WdLogNewEntry5_WdAssertion(v71, v68, v69, *(_QWORD *)&v142[120]);
          *(_QWORD *)(v117 + 24) = *(int *)(*(_QWORD *)&v142[120] + 12LL);
          WdLogEvent5_WdAssertion(v117);
LABEL_114:
          v70 |= 0x100u;
        }
LABEL_47:
        v73 = *(_DWORD *)&v142[32] - *(_DWORD *)&v142[24];
        v74 = *(_DWORD *)&v142[36] - *(_DWORD *)&v142[28];
        v75 = (unsigned int *)v135;
        v76 = *(_DWORD *)&v137[7];
        goto LABEL_48;
    }
    v74 = v120 / v66;
LABEL_48:
    v77 = v136;
    v78 = v48 * v74;
    v79 = (unsigned __int8 *)EdidBaseBlockPtr;
    DWORD2(v143[1]) = v54 * v73 / (unsigned int)v75;
    HIDWORD(v143[1]) = v78 / v76;
    if ( v136
      || v140.cx
      || !*(_QWORD *)&EdidBaseBlockPtr
      || !(unsigned __int8)DpiInternal::HasValidPreferredDetailedTimingDescriptor(
                             *(DpiInternal **)&EdidBaseBlockPtr,
                             (const void *)(v78 % v76)) )
    {
      LODWORD(v143[4]) = 0;
    }
    else
    {
      v70 ^= ((unsigned __int8)v70 ^ (unsigned __int8)(16
                                                     * DetermineViewDistance(
                                                         a2,
                                                         &v139,
                                                         *(int *)&v142[172],
                                                         &v141,
                                                         (unsigned int *)&v143[4]))) & 0x10;
      if ( !LODWORD(v143[4]) )
      {
        v121 = WdLogNewEntry5_WdAssertion(v81, v80, v82, v75);
        *(_QWORD *)(v121 + 24) = 2069LL;
        WdLogEvent5_WdAssertion(v121);
      }
    }
    v135 = 0;
    if ( v134
      && (LODWORD(v131) = 2, (int)DpiReadPnpRegistryValue(*((_QWORD *)a2 + 22), L"PreferredScaleFactor", &v135, 4LL) >= 0) )
    {
      v83 = v135;
      v84 = 1;
    }
    else
    {
      v83 = 0;
      v84 = 0;
      v135 = 0;
    }
    v85 = (struct tagSIZE)4096LL;
    v38 = (v70 ^ (v84 << 12)) & 0x1000 ^ v70;
    *(_DWORD *)&v142[308] = v38;
    if ( (v38 & 0x1000) == 0 )
    {
      PreferredScaleFactorForMonitor = DpiInternal::GetPreferredScaleFactorForMonitor(
                                         (DpiInternal *)a2,
                                         (void *const)*(unsigned int *)&v137[3],
                                         (unsigned int)&v135,
                                         v75);
      v83 = v135;
      v38 ^= ((unsigned __int16)v38 ^ (PreferredScaleFactorForMonitor << 11)) & 0x800;
      *(_DWORD *)&v142[308] = v38;
    }
    if ( v77 && v134 && !v83 )
    {
      DpiInternal::HeuristicallyPickScaleFactorsForInternalEdidlessBdd(
        *(DpiInternal **)&v143[2],
        v85,
        (__int64)&v142[336],
        (const struct _DPI_SCALE_FACTOR_COLLECTION *)v143);
      DpiInternal::FillOverridesAndAdjustedScaleFactor(
        (DpiInternal *)v140.cy,
        v122,
        (int *)&v142[336],
        (const struct _DPI_SCALE_FACTOR_COLLECTION *)v143);
      v38 |= 0x400u;
      *(_DWORD *)&v142[308] = v38;
    }
    else
    {
      LODWORD(v131) = v140.cy;
      FillDpiInfo(
        (const struct tagSIZE *)&v143[1] + 1,
        (struct tagSIZE *)&v143[2],
        (const struct tagSIZE *)&v142[336],
        (DpiInternal *)LODWORD(v143[4]),
        (DpiInternal *)v131,
        v83,
        v133,
        (struct _DPI_INFORMATION *)v143);
    }
    if ( HIDWORD(v143[5]) )
    {
      v123 = WdLogNewEntry5_WdAssertion(v88, v87, v89, v90);
      *(_QWORD *)(v123 + 24) = 2099LL;
      WdLogEvent5_WdAssertion(v123);
    }
    HIDWORD(v143[5]) = v38;
    SqmDpiInfoStream((const struct _DPI_INFORMATION *)v143, a2, *(unsigned int *)&v137[3], v79);
    SqmDpiCommon((const struct _DPI_INFORMATION *)v143, v139, v141);
    if ( v134
      || (v38 & 4) == 0
      && (DpiInternal::AvgXY(*((DpiInternal **)&v143[3] + 1), v91),
          v93 = DpiInternal::AvgXY(*(DpiInternal **)&v142[272], v92),
          v93 <= v94) )
    {
      *(_OWORD *)&v142[216] = v143[0];
      *(_OWORD *)&v142[200] = v143[1];
      *(_OWORD *)&v142[248] = v143[2];
      *(_OWORD *)&v142[312] = v143[4];
      *(_OWORD *)&v142[296] = v143[5];
      v38 = HIDWORD(v143[5]);
      *(_OWORD *)&v142[264] = v143[3];
    }
    memset(v144, 0, sizeof(v144));
    MonitorDeviceInterfaceName = MonitorGetMonitorDeviceInterfaceName((DXGADAPTER *)a2, *(unsigned int *)&v137[3]);
    v98 = MonitorDeviceInterfaceName;
    if ( MonitorDeviceInterfaceName < 0 )
    {
      v124 = (_QWORD *)WdLogNewEntry5_WdError(v96);
      v124[3] = a2;
      v124[4] = *(unsigned int *)&v137[3];
      v124[5] = v98;
      WdLogEvent5_WdError(v124);
      v144[0] = 0;
    }
    else
    {
      v144[1] = 92;
      ScaleOverrideTestHook((DpiInternal *)v144, (unsigned __int16 *)&v142[96], v97);
    }
    LODWORD(v8) = *(_DWORD *)&v142[164];
    EdidBaseBlockPtr = *(struct _LUID *)(a2 + 252);
    TraceLogDpiInfo((struct _DPI_INFORMATION *)v143, v144, &EdidBaseBlockPtr, *(unsigned int *)&v142[164]);
    LogScaleFactor(v8, v140.cy, (struct _DPI_INFORMATION *)v143);
    if ( v142[112] )
      (*(void (__fastcall **)(_QWORD, _QWORD))&v142[128])(*(_QWORD *)&v142[136], *(_QWORD *)&v142[120]);
    v37 = *(_QWORD *)&v142[184] + 1LL;
    *(_QWORD *)&v142[184] = v37;
    if ( v37 >= *(_QWORD *)&v142[176] )
    {
      v24 = *(_DWORD *)&v142[96];
      v99 = *(__m128i *)&v142[200];
      v6 = *(struct _DPI_INFORMATION **)&v142[328];
      goto LABEL_72;
    }
  }
  if ( v142[112] )
    (*(void (__fastcall **)(_QWORD, _QWORD))&v142[128])(*(_QWORD *)&v142[136], *(_QWORD *)&v142[120]);
  v125 = v142[40] == 0;
LABEL_137:
  if ( !v125 )
    (*(void (__fastcall **)(_QWORD, DpiInternal *, __int64))&v142[56])(*(_QWORD *)&v142[64], v14, v64);
  return (unsigned int)v41;
}
