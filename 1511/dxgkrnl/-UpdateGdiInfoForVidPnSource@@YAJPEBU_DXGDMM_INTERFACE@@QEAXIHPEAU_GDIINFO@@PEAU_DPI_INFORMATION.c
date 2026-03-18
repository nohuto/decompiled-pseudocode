/*
 * XREFs of ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00ABF5C
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C00AD640 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     ?GetNativeResolution@DpiInternal@@YA?AUtagSIZE@@PEBX@Z @ 0x1C0001170 (-GetNativeResolution@DpiInternal@@YA-AUtagSIZE@@PEBX@Z.c)
 *     ?HasValidPreferredDetailedTimingDescriptor@DpiInternal@@YA_NPEBX@Z @ 0x1C0001300 (-HasValidPreferredDetailedTimingDescriptor@DpiInternal@@YA_NPEBX@Z.c)
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C0009F58 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     IsInternalVideoOutput @ 0x1C000A310 (IsInternalVideoOutput.c)
 *     ?ScaleOverrideTestHook@@YAXQEBGPEAK@Z @ 0x1C000A5D4 (-ScaleOverrideTestHook@@YAXQEBGPEAK@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000A5E8 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C000A658 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x1C000A770 (-FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DP.c)
 *     ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C000A7F0 (-AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 *     ?AvgXY@DpiInternal@@YAJUtagSIZE@@@Z @ 0x1C000A8F4 (-AvgXY@DpiInternal@@YAJUtagSIZE@@@Z.c)
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C000AA38 (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal@@YAXUtagSIZE@@IPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x1C002230C (-HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal@@YAXUtagSIZE@@IPEBU_DPI_SCALE_F.c)
 *     DpiReadPnpRegistryValue @ 0x1C005CD60 (DpiReadPnpRegistryValue.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00AA170 (DmmGetVideoOutputTechnology.c)
 *     ?LogScaleFactor@@YAXIIPEAU_DPI_INFORMATION@@@Z @ 0x1C00AC7E8 (-LogScaleFactor@@YAXIIPEAU_DPI_INFORMATION@@@Z.c)
 *     ?TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGPEAU_LUID@@II@Z @ 0x1C00AC884 (-TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGPEAU_LUID@@II@Z.c)
 *     MonitorGetMonitorDeviceInterfaceName @ 0x1C00AC904 (MonitorGetMonitorDeviceInterfaceName.c)
 *     ?SqmDpiCommon@@YAXPEBU_DPI_INFORMATION@@UtagSIZE@@1@Z @ 0x1C00ACA00 (-SqmDpiCommon@@YAXPEBU_DPI_INFORMATION@@UtagSIZE@@1@Z.c)
 *     ?SqmDpiInfoStream@@YAXPEBU_DPI_INFORMATION@@QEAXIPEBX@Z @ 0x1C00ACB04 (-SqmDpiInfoStream@@YAXPEBU_DPI_INFORMATION@@QEAXIPEBX@Z.c)
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIPEAI@Z @ 0x1C00ACC74 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIPEAI@Z.c)
 *     ?DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z @ 0x1C00ACEDC (-DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z.c)
 *     ?GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@PEAE@Z @ 0x1C00AD200 (-GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@@Z @ 0x1C00AD304 (-GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     MonitorGetEdidBaseBlockPtr @ 0x1C00AD40C (MonitorGetEdidBaseBlockPtr.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00AD4E8 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z @ 0x1C00AD5B4 (-GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z.c)
 */

__int64 __fastcall UpdateGdiInfoForVidPnSource(
        const struct _DXGDMM_INTERFACE *a1,
        char *a2,
        unsigned int a3,
        int a4,
        struct _GDIINFO *a5,
        struct _DPI_INFORMATION *a6)
{
  struct _DPI_INFORMATION *v6; // r13
  char *v7; // r12
  __int64 v8; // r15
  __int64 (__fastcall *v10)(char *, struct _LUID *, _BYTE *); // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  DpiInternal *v14; // r14
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  _DWORD *v20; // rsi
  unsigned int v21; // edi
  __int64 v22; // rcx
  int Win32DpiValues; // eax
  __int64 v24; // rcx
  __int64 v25; // rbx
  bool v26; // al
  int v27; // ebx
  char v28; // al
  unsigned __int64 v29; // rsi
  int v30; // ebx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 (__fastcall *v34)(_QWORD, _QWORD, _QWORD, struct _LUID *); // rax
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rdx
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v38; // eax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v39; // r13d
  int VideoOutputTechnology; // eax
  __int64 v41; // rcx
  __int64 v42; // rdi
  bool v43; // di
  int v44; // esi
  int v45; // r15d
  int v46; // ebx
  const void *v47; // rdx
  struct tagSIZE NativeResolution; // rax
  __int64 v49; // rcx
  LONG cy; // eax
  LONG cx; // r12d
  __int64 v52; // r8
  int CurrentTargetResolution; // eax
  int v54; // eax
  unsigned int v55; // edi
  __int64 v56; // r12
  int v57; // edx
  unsigned int v58; // r11d
  int v59; // r8d
  int v60; // ebx
  __int64 v61; // rcx
  int v62; // eax
  unsigned int v63; // ecx
  int v64; // r8d
  unsigned int *v65; // r9
  unsigned int v66; // r10d
  unsigned __int8 *v67; // r13
  unsigned int v68; // r8d
  struct tagSIZE v69; // rdx
  bool v70; // al
  __int64 v71; // rcx
  unsigned int v72; // edi
  unsigned __int8 v73; // al
  bool PreferredScaleFactorForMonitor; // al
  __int64 v75; // rcx
  struct tagSIZE v76; // rdx
  struct tagSIZE v77; // rdx
  int v78; // eax
  int v79; // r8d
  int MonitorDeviceInterfaceName; // eax
  __int64 v81; // rcx
  unsigned int *v82; // r8
  __int64 v83; // rsi
  __m128i v84; // xmm1
  __int64 v85; // rcx
  unsigned int v86; // eax
  __int128 v87; // xmm1
  __int128 v88; // xmm0
  __int64 v90; // rax
  _QWORD *v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rax
  _QWORD *v98; // rax
  __int64 v99; // rax
  char v100; // al
  __int64 v101; // rax
  unsigned int v102; // r8d
  unsigned int v103; // ecx
  unsigned int v104; // eax
  __int64 v105; // rax
  int PnpRegistryValue; // eax
  __int64 v107; // rdx
  __int64 v108; // rax
  _QWORD *v109; // rax
  bool v110; // zf
  _QWORD *v111; // rax
  __int64 v112; // rcx
  int v113; // edx
  int v114; // eax
  __int64 v115; // rdx
  int v116; // eax
  const struct _DPI_SCALE_FACTOR_COLLECTION *v117; // r9
  __int64 v118; // rax
  struct _D3DKMDT_2DREGION *v119; // [rsp+20h] [rbp-E0h]
  DpiInternal *v120; // [rsp+20h] [rbp-E0h]
  unsigned __int8 *v121; // [rsp+28h] [rbp-D8h]
  struct _DPI_SCALE_FACTOR_COLLECTION *v122; // [rsp+30h] [rbp-D0h]
  bool v123; // [rsp+40h] [rbp-C0h]
  bool v124; // [rsp+41h] [rbp-BFh]
  _BYTE v125[10]; // [rsp+42h] [rbp-BEh] BYREF
  unsigned int v126; // [rsp+4Ch] [rbp-B4h] BYREF
  struct _LUID EdidBaseBlockPtr; // [rsp+50h] [rbp-B0h] BYREF
  struct tagSIZE v128; // [rsp+58h] [rbp-A8h] BYREF
  struct _D3DKMDT_2DREGION v129; // [rsp+60h] [rbp-A0h] BYREF
  struct tagSIZE v130; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v131[376]; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v132[6]; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned __int16 v133[128]; // [rsp+250h] [rbp+150h] BYREF

  v6 = a6;
  v7 = a2;
  v8 = a3;
  *(_QWORD *)&v131[160] = a5;
  v10 = (__int64 (__fastcall *)(char *, struct _LUID *, _BYTE *))*((_QWORD *)a1 + 6);
  *(_QWORD *)&v131[184] = a2;
  *(_DWORD *)&v131[172] = a4;
  *(_DWORD *)&v131[176] = a3;
  *(_QWORD *)&v131[336] = a6;
  *(_QWORD *)&v131[104] = 0LL;
  memset(&v131[48], 0, 28);
  v131[40] = 0;
  EdidBaseBlockPtr = 0LL;
  v11 = v10(a2, &EdidBaseBlockPtr, &v131[104]);
  v13 = v11;
  if ( v11 < 0 )
  {
    v90 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v90 + 24) = v7;
    *(_QWORD *)(v90 + 32) = v13;
    WdLogEvent5_WdError(v90);
    return (unsigned int)v13;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)&v131[40],
    *(_QWORD *)&EdidBaseBlockPtr,
    *((_QWORD *)a1 + 8),
    (__int64)v7);
  v14 = *(DpiInternal **)&v131[48];
  *(_QWORD *)&v131[8] = 0LL;
  *(_QWORD *)&v131[88] = 0LL;
  v15 = (**(__int64 (__fastcall ***)(_QWORD, _BYTE *, _BYTE *))&v131[104])(*(_QWORD *)&v131[48], &v131[8], &v131[88]);
  v13 = v15;
  if ( v15 < 0 )
  {
    v91 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v91[3] = v14;
    v91[4] = v13;
LABEL_86:
    WdLogEvent5_WdError(v91);
LABEL_87:
    if ( v131[40] )
      (*(void (__fastcall **)(_QWORD, DpiInternal *))&v131[56])(*(_QWORD *)&v131[64], v14);
    return (unsigned int)v13;
  }
  *(_QWORD *)&v131[152] = 0LL;
  v17 = (**(__int64 (__fastcall ***)(_QWORD, _QWORD, _BYTE *))&v131[88])(
          *(_QWORD *)&v131[8],
          (unsigned int)v8,
          &v131[152]);
  v13 = v17;
  if ( v17 < 0 )
  {
    v91 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v91[3] = v8;
    v91[4] = *(_QWORD *)&v131[8];
    v91[5] = v13;
    goto LABEL_86;
  }
  LODWORD(v13) = GetCurrentContentResolution(
                   v7,
                   v8,
                   (const struct tagRECT **)&v131[192],
                   (struct tagRECT *)&v131[24],
                   (unsigned int *)&v129);
  if ( (int)v13 < 0 )
    goto LABEL_87;
  v20 = *(_DWORD **)&v131[192];
  v21 = 0;
  if ( !*(_QWORD *)&v131[192] )
  {
    v92 = WdLogNewEntry5_WdAssertion(v19);
    *(_QWORD *)(v92 + 24) = 2023LL;
    WdLogEvent5_WdAssertion(v92);
  }
  v22 = (unsigned int)(v20[2] - *v20);
  if ( v20[2] - *v20 <= 0 || (v22 = (unsigned int)(v20[3] - v20[1]), v20[3] - v20[1] <= 0) )
  {
    v93 = WdLogNewEntry5_WdAssertion(v22);
    *(_QWORD *)(v93 + 24) = 2026LL;
    WdLogEvent5_WdAssertion(v93);
  }
  v129.cy = 0;
  memset(&v131[344], 0, 0x20uLL);
  Win32DpiValues = QueryWin32DpiValues(&v129.cy, (struct _DPI_SCALE_FACTOR_COLLECTION *)&v131[344]);
  v25 = Win32DpiValues;
  if ( Win32DpiValues < 0 )
  {
    v94 = WdLogNewEntry5_WdAssertion(v24);
    *(_QWORD *)(v94 + 24) = 2032LL;
    WdLogEvent5_WdAssertion(v94);
    v96 = WdLogNewEntry5_WdError(v95);
    *(_QWORD *)(v96 + 24) = v25;
    WdLogEvent5_WdError(v96);
  }
  *(_DWORD *)&v131[80] = 0;
  memset(&v131[224], 0, 0x60uLL);
  v26 = *(_QWORD *)&v131[152] > 1uLL || v129.cx > 1;
  v27 = (v131[316] ^ v26) & 1 ^ *(_DWORD *)&v131[316];
  if ( *v20 || (v28 = 1, v20[1]) )
    v28 = 0;
  v29 = 0LL;
  *(_QWORD *)&v131[200] = 0LL;
  v30 = ((unsigned __int8)v27 ^ (unsigned __int8)(32 * v28)) & 0x20 ^ v27;
  *(_DWORD *)&v131[316] = v30;
  *(_OWORD *)&v131[320] = *(_OWORD *)&v131[288];
  if ( !*(_QWORD *)&v131[152] )
  {
    v84 = *(__m128i *)&v131[240];
    *(_OWORD *)&v131[208] = *(_OWORD *)&v131[240];
LABEL_72:
    v85 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v84, 8));
    if ( (_DWORD)v85 )
    {
      v113 = _mm_cvtsi128_si32(_mm_srli_si128(v84, 12));
      if ( v113 )
      {
        if ( (v30 & 0x80u) == 0 )
        {
          v116 = 1000 * v85;
          v85 = *(_QWORD *)&v131[160];
          *(_DWORD *)(*(_QWORD *)&v131[160] + 8LL) = v116;
          *(_DWORD *)(v85 + 12) = 1000 * v113;
        }
        else
        {
          v114 = 1000 * v113;
          v115 = *(_QWORD *)&v131[160];
          *(_DWORD *)(*(_QWORD *)&v131[160] + 8LL) = v114;
          *(_DWORD *)(v115 + 12) = 1000 * v85;
        }
      }
    }
    if ( (v30 & 2) == 0
      || (v117 = (const struct _DPI_SCALE_FACTOR_COLLECTION *)(unsigned int)_mm_cvtsi128_si32(
                                                                              _mm_srli_si128(
                                                                                _mm_load_si128((const __m128i *)&v131[304]),
                                                                                4)),
          (_DWORD)v117 == 1234568) )
    {
      v86 = *(_DWORD *)&v131[232];
    }
    else
    {
      v86 = DpiInternal::AdjustDesktopScaleFactorForOverride(
              (DpiInternal *)0x64,
              *(int *)&v131[256],
              (struct tagSIZE)&v131[344],
              v117);
      *(_DWORD *)&v131[232] = v86;
    }
    if ( v21 )
    {
      v86 = v21;
      *(_DWORD *)&v131[308] = 1234567;
      *(_DWORD *)&v131[232] = v21;
    }
    if ( !v86 )
    {
      v118 = WdLogNewEntry5_WdAssertion(v85);
      *(_QWORD *)(v118 + 24) = 2457LL;
      WdLogEvent5_WdAssertion(v118);
    }
    v87 = *(_OWORD *)&v131[272];
    *(_DWORD *)&v131[224] = 100;
    *(_DWORD *)&v131[228] = 100;
    *(_OWORD *)v6 = *(_OWORD *)&v131[224];
    *((_OWORD *)v6 + 1) = *(_OWORD *)&v131[208];
    *((_OWORD *)v6 + 2) = *(_OWORD *)&v131[256];
    v88 = *(_OWORD *)&v131[320];
    *((_OWORD *)v6 + 3) = v87;
    *((_OWORD *)v6 + 4) = v88;
    *((_OWORD *)v6 + 5) = *(_OWORD *)&v131[304];
    if ( v131[40] )
      (*(void (__fastcall **)(_QWORD, DpiInternal *, _QWORD))&v131[56])(*(_QWORD *)&v131[64], v14, 0LL);
    return 0LL;
  }
  *(_OWORD *)&v131[208] = *(_OWORD *)&v131[240];
  while ( 1 )
  {
    *(_DWORD *)&v125[2] = -1;
    v124 = 0;
    v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _BYTE *))(*(_QWORD *)&v131[88] + 8LL))(
            *(_QWORD *)&v131[8],
            (unsigned int)v8,
            v29,
            &v125[2]);
    v33 = v31;
    if ( v31 < 0 )
    {
      v111 = (_QWORD *)WdLogNewEntry5_WdError(v32);
      v112 = (unsigned int)v8;
      v111[3] = v29;
      goto LABEL_136;
    }
    EdidBaseBlockPtr = 0LL;
    v34 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct _LUID *))(*(_QWORD *)&v131[88] + 24LL);
    memset(&v131[120], 0, 28);
    v131[112] = 0;
    v35 = v34(*(_QWORD *)&v131[8], (unsigned int)v8, *(unsigned int *)&v125[2], &EdidBaseBlockPtr);
    v33 = v35;
    if ( v35 < 0 )
    {
      v111 = (_QWORD *)WdLogNewEntry5_WdError(v36);
      v111[3] = (unsigned int)v8;
      v112 = *(unsigned int *)&v125[2];
LABEL_136:
      v111[4] = v112;
      v111[5] = v33;
      WdLogEvent5_WdError(v111);
      v110 = v131[40] == 0;
      goto LABEL_137;
    }
    v37 = (__int64)EdidBaseBlockPtr;
    if ( !*(_QWORD *)&EdidBaseBlockPtr )
    {
      v97 = WdLogNewEntry5_WdAssertion(v36);
      *(_QWORD *)(v97 + 24) = 2081LL;
      WdLogEvent5_WdAssertion(v97);
      v37 = (__int64)EdidBaseBlockPtr;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)&v131[112],
      v37,
      *(_QWORD *)(*(_QWORD *)&v131[88] + 32LL),
      *(__int64 *)&v131[8]);
    v38 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)(*(_QWORD *)&v131[120] + 20LL));
    v126 = -2;
    v123 = 0;
    v39 = v38;
    VideoOutputTechnology = DmmGetVideoOutputTechnology((DXGADAPTER *)v7, *(unsigned int *)&v125[2], &v126, 0LL);
    v42 = VideoOutputTechnology;
    if ( VideoOutputTechnology < 0 )
    {
      v98 = (_QWORD *)WdLogNewEntry5_WdError(v41);
      v98[3] = v7;
      v98[4] = *(unsigned int *)&v125[2];
      v98[5] = v42;
      WdLogEvent5_WdError(v98);
      v43 = 0;
    }
    else
    {
      v43 = IsInternalVideoOutput(v126);
      v123 = v43;
    }
    v44 = 0;
    v129.cx = 0;
    v45 = 0;
    *(_DWORD *)&v131[180] = v43;
    v128 = 0LL;
    v46 = ((unsigned __int8)v30 ^ (unsigned __int8)(v30 | (4 * v43))) & 4 ^ v30;
    EdidBaseBlockPtr = (struct _LUID)MonitorGetEdidBaseBlockPtr((DXGADAPTER *)v7, *(unsigned int *)&v125[2]);
    NativeResolution = DpiInternal::GetNativeResolution(*(DpiInternal **)&EdidBaseBlockPtr, v47);
    v49 = (unsigned int)(v39 - 2);
    v130 = NativeResolution;
    if ( (v49 & 0xFFFFFFFD) != 0 )
    {
      cy = v130.cy;
      cx = v130.cx;
    }
    else
    {
      cy = v130.cx;
      cx = v130.cy;
      v130.cx = v130.cy;
      v130.cy = cy;
    }
    *(_DWORD *)&v131[96] = cy;
    if ( EdidBaseBlockPtr )
    {
      if ( (int)EDID_V1_GetPhysicalSize(
                  v49,
                  *(unsigned __int8 **)&EdidBaseBlockPtr,
                  (unsigned int *)&v131[100],
                  (unsigned int *)&v131[168]) < 0 )
      {
        v99 = WdLogNewEntry5_WdAssertion(0LL);
        *(_QWORD *)(v99 + 24) = 2126LL;
        WdLogEvent5_WdAssertion(v99);
      }
      v44 = *(_DWORD *)&v131[100];
      v45 = *(_DWORD *)&v131[168];
      v128.cx = *(_DWORD *)&v131[100];
      v128.cy = *(_DWORD *)&v131[168];
      if ( ((v39 - 2) & 0xFFFFFFFD) == 0 )
      {
        v44 = *(_DWORD *)&v131[168];
        v128.cx = *(_DWORD *)&v131[168];
        v45 = *(_DWORD *)&v131[100];
        v128.cy = *(_DWORD *)&v131[100];
      }
      if ( !v44 || !v45 )
      {
        v45 = 0;
        v128 = 0LL;
        v44 = 0;
LABEL_33:
        if ( v44 )
          goto LABEL_35;
        goto LABEL_34;
      }
      if ( v44 * v45 > 16000 || v43 )
        goto LABEL_33;
      v46 |= 0x40u;
      v129.cx = 1;
      v45 = 0;
      v128 = 0LL;
      v44 = 0;
    }
    else
    {
      v46 |= 8u;
      *(_DWORD *)&v131[256] = *(_DWORD *)(*(_QWORD *)&v131[160] + 16LL);
      *(_DWORD *)&v131[260] = *(_DWORD *)(*(_QWORD *)&v131[160] + 20LL);
    }
LABEL_34:
    v124 = (*(_BYTE *)(*(_QWORD *)&v131[184] + 284LL) & 0x20) != 0;
LABEL_35:
    LODWORD(v33) = DpiInternal::GetCurrentSourceResolution(
                     v14,
                     *(struct D3DKMDT_HVIDPN__ *const *)&v131[104],
                     *(const struct _DXGDMM_VIDPN_INTERFACE **)&v131[120],
                     (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v131[16],
                     v119);
    if ( (int)v33 < 0 )
      break;
    v125[0] = 0;
    CurrentTargetResolution = DpiInternal::GetCurrentTargetResolution(
                                v14,
                                *(struct D3DKMDT_HVIDPN__ *const *)&v131[104],
                                *(const struct _DXGDMM_VIDPN_INTERFACE **)&v131[120],
                                (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)v131,
                                (struct _D3DKMDT_2DREGION *)v125,
                                v121);
    v52 = 0LL;
    LODWORD(v33) = CurrentTargetResolution;
    if ( CurrentTargetResolution < 0 )
    {
      if ( v131[112] )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))&v131[128])(*(_QWORD *)&v131[136], *(_QWORD *)&v131[120], 0LL);
        v52 = 0LL;
      }
      v110 = v131[40] == 0;
      goto LABEL_137;
    }
    v54 = *(_DWORD *)&v131[4];
    if ( ((v39 - 2) & 0xFFFFFFFD) != 0 )
    {
      v126 = *(_DWORD *)&v131[4];
      v54 = *(_DWORD *)v131;
    }
    else
    {
      v126 = *(_DWORD *)v131;
      *(_DWORD *)v131 = *(_DWORD *)&v131[4];
      *(_DWORD *)&v131[4] = v126;
    }
    *(_DWORD *)&v125[6] = v54;
    if ( (v46 & 1) != 0 && cx && *(_DWORD *)&v131[96] )
    {
      v55 = *(_DWORD *)&v131[20];
      if ( v125[0] )
      {
        v55 = *(_DWORD *)&v131[20] >> 1;
        *(_DWORD *)&v131[20] >>= 1;
      }
      if ( *(_DWORD *)&v131[16] >= (unsigned int)(2 * cx) || (v100 = 0, v55 >= 2 * *(_DWORD *)&v131[96]) )
        v100 = 1;
      v46 ^= ((unsigned __int8)v46 ^ (unsigned __int8)(v46 | (2 * v100))) & 2;
      if ( v125[0] )
      {
        v55 *= 2;
        *(_DWORD *)&v131[20] = v55;
      }
    }
    else
    {
      v55 = *(_DWORD *)&v131[20];
    }
    memset(v132, 0, sizeof(v132));
    v56 = *(_QWORD *)&v131[120];
    DWORD1(v132[5]) = *(_DWORD *)&v131[172];
    v57 = *(_DWORD *)(*(_QWORD *)&v131[120] + 20LL);
    if ( (unsigned int)(v57 - 5) <= 0xB )
      v57 = (v57 - 1) % 4 + 1;
    v58 = 0;
    v59 = *(_DWORD *)(*(_QWORD *)&v131[192] + 8LL) - **(_DWORD **)&v131[192];
    LODWORD(v132[2]) = v59;
    v60 = ((unsigned __int8)v46 ^ (unsigned __int8)((((v57 - 2) & 0xFFFFFFFD) == 0) << 7)) & 0x80 ^ v46;
    v61 = (unsigned int)(*(_DWORD *)(*(_QWORD *)&v131[192] + 12LL) - *(_DWORD *)(*(_QWORD *)&v131[192] + 4LL));
    DWORD1(v132[2]) = *(_DWORD *)(*(_QWORD *)&v131[192] + 12LL) - *(_DWORD *)(*(_QWORD *)&v131[192] + 4LL);
    if ( ((v57 - 2) & 0xFFFFFFFD) == 0 )
      *(_QWORD *)&v132[2] = __PAIR64__(v59, v61);
    v62 = *(_DWORD *)(*(_QWORD *)&v131[120] + 12LL);
    if ( v62 <= 0 )
      goto LABEL_113;
    if ( v62 <= 2 )
      goto LABEL_47;
    switch ( v62 )
    {
      case 3:
        v65 = (unsigned int *)*(unsigned int *)&v125[6];
        v66 = v126;
        v63 = (unsigned int)(*(_DWORD *)&v125[6] * (*(_DWORD *)&v131[32] - *(_DWORD *)&v131[24])) / *(_DWORD *)&v131[16];
        v104 = v126 * (*(_DWORD *)&v131[36] - *(_DWORD *)&v131[28]);
        break;
      case 4:
        v66 = v126;
        v65 = (unsigned int *)*(unsigned int *)&v125[6];
        if ( v55 * *(_DWORD *)&v125[6] <= *(_DWORD *)&v131[16] * v126 )
        {
          v103 = *(_DWORD *)&v125[6];
          v102 = v55 * *(_DWORD *)&v125[6] / *(_DWORD *)&v131[16];
        }
        else
        {
          v102 = v126;
          v103 = *(_DWORD *)&v131[16] * v126 / v55;
        }
        v63 = v103 * (*(_DWORD *)&v131[32] - *(_DWORD *)&v131[24]) / *(_DWORD *)&v131[16];
        v104 = v102 * (*(_DWORD *)&v131[36] - *(_DWORD *)&v131[28]);
        break;
      case 5:
        goto LABEL_114;
      default:
        if ( v62 != 255 )
        {
LABEL_113:
          v101 = WdLogNewEntry5_WdAssertion(v61);
          *(_QWORD *)(v101 + 24) = *(int *)(v56 + 12);
          WdLogEvent5_WdAssertion(v101);
          v58 = 0;
LABEL_114:
          v60 |= 0x100u;
        }
LABEL_47:
        v63 = *(_DWORD *)&v131[32] - *(_DWORD *)&v131[24];
        v64 = *(_DWORD *)&v131[36] - *(_DWORD *)&v131[28];
        v65 = (unsigned int *)*(unsigned int *)&v125[6];
        v66 = v126;
        goto LABEL_48;
    }
    v64 = v104 / v55;
LABEL_48:
    v67 = (unsigned __int8 *)EdidBaseBlockPtr;
    v68 = v45 * v64;
    DWORD2(v132[1]) = v44 * v63 / (unsigned int)v65;
    v69 = (struct tagSIZE)(v68 % v66);
    HIDWORD(v132[1]) = v68 / v66;
    if ( v124
      || v129.cx
      || !*(_QWORD *)&EdidBaseBlockPtr
      || !(unsigned __int8)DpiInternal::HasValidPreferredDetailedTimingDescriptor(
                             *(DpiInternal **)&EdidBaseBlockPtr,
                             *(const void **)&v69) )
    {
      v7 = *(char **)&v131[184];
      LODWORD(v132[4]) = v58;
    }
    else
    {
      v7 = *(char **)&v131[184];
      v70 = DetermineViewDistance(
              *(void *const *)&v131[184],
              &v128,
              *(int *)&v131[180],
              &v130,
              (unsigned int *)&v132[4]);
      v58 = 0;
      v60 ^= ((unsigned __int8)v60 ^ (unsigned __int8)(16 * v70)) & 0x10;
      if ( !LODWORD(v132[4]) )
      {
        v105 = WdLogNewEntry5_WdAssertion(v71);
        *(_QWORD *)(v105 + 24) = 2353LL;
        WdLogEvent5_WdAssertion(v105);
        v58 = 0;
      }
    }
    *(_DWORD *)&v125[6] = v58;
    if ( v123
      && (PnpRegistryValue = DpiReadPnpRegistryValue(*((_QWORD *)v7 + 22), L"PreferredScaleFactor", &v125[6], 4u, 2u),
          v58 = 0,
          PnpRegistryValue >= 0) )
    {
      v72 = *(_DWORD *)&v125[6];
      v73 = 1;
    }
    else
    {
      v72 = v58;
      *(_DWORD *)&v125[6] = v58;
      v73 = v58;
    }
    v30 = (v60 ^ (v73 << 12)) & 0x1000 ^ v60;
    *(_DWORD *)&v131[316] = v30;
    if ( (v30 & 0x1000) == 0 )
    {
      PreferredScaleFactorForMonitor = DpiInternal::GetPreferredScaleFactorForMonitor(
                                         (DpiInternal *)v7,
                                         (void *const)*(unsigned int *)&v125[2],
                                         (unsigned int)&v125[6],
                                         v65);
      v72 = *(_DWORD *)&v125[6];
      v30 ^= ((unsigned __int16)v30 ^ (PreferredScaleFactorForMonitor << 11)) & 0x800;
      *(_DWORD *)&v131[316] = v30;
    }
    if ( v124 && v123 && !v72 )
    {
      DpiInternal::HeuristicallyPickScaleFactorsForInternalEdidlessBdd(
        *(DpiInternal **)&v132[2],
        v69,
        (__int64)&v131[344],
        (const struct _DPI_SCALE_FACTOR_COLLECTION *)v132);
      DpiInternal::FillOverridesAndAdjustedScaleFactor(
        (DpiInternal *)v129.cy,
        v107,
        (int *)&v131[344],
        (const struct _DPI_SCALE_FACTOR_COLLECTION *)v132);
      v30 |= 0x400u;
      *(_DWORD *)&v131[316] = v30;
    }
    else
    {
      LODWORD(v120) = v129.cy;
      FillDpiInfo(
        (const struct tagSIZE *)&v132[1] + 1,
        (struct tagSIZE *)&v132[2],
        (const struct tagSIZE *)&v131[344],
        (DpiInternal *)LODWORD(v132[4]),
        v120,
        v72,
        v122,
        (struct _DPI_INFORMATION *)v132);
    }
    if ( HIDWORD(v132[5]) )
    {
      v108 = WdLogNewEntry5_WdAssertion(v75);
      *(_QWORD *)(v108 + 24) = 2383LL;
      WdLogEvent5_WdAssertion(v108);
    }
    HIDWORD(v132[5]) = v30;
    SqmDpiInfoStream((const struct _DPI_INFORMATION *)v132, v7, *(unsigned int *)&v125[2], v67);
    SqmDpiCommon((const struct _DPI_INFORMATION *)v132, v128, v130);
    if ( v123
      || (v30 & 4) == 0
      && (DpiInternal::AvgXY(*((DpiInternal **)&v132[3] + 1), v76),
          v78 = DpiInternal::AvgXY(*(DpiInternal **)&v131[280], v77),
          v78 <= v79) )
    {
      *(_OWORD *)&v131[224] = v132[0];
      *(_OWORD *)&v131[208] = v132[1];
      *(_OWORD *)&v131[256] = v132[2];
      *(_OWORD *)&v131[320] = v132[4];
      *(_OWORD *)&v131[304] = v132[5];
      v30 = HIDWORD(v132[5]);
      *(_OWORD *)&v131[272] = v132[3];
    }
    memset(v133, 0, sizeof(v133));
    MonitorDeviceInterfaceName = MonitorGetMonitorDeviceInterfaceName((DXGADAPTER *)v7, *(unsigned int *)&v125[2]);
    v83 = MonitorDeviceInterfaceName;
    if ( MonitorDeviceInterfaceName < 0 )
    {
      v109 = (_QWORD *)WdLogNewEntry5_WdError(v81);
      v109[3] = v7;
      v109[4] = *(unsigned int *)&v125[2];
      v109[5] = v83;
      WdLogEvent5_WdError(v109);
      v133[0] = 0;
    }
    else
    {
      v133[1] = 92;
      ScaleOverrideTestHook((DpiInternal *)v133, (unsigned __int16 *)&v131[80], v82);
    }
    LODWORD(v8) = *(_DWORD *)&v131[176];
    EdidBaseBlockPtr = *(struct _LUID *)(v7 + 252);
    TraceLogDpiInfo((struct _DPI_INFORMATION *)v132, v133, &EdidBaseBlockPtr, *(unsigned int *)&v131[176], v72);
    LogScaleFactor(v8, v129.cy, (struct _DPI_INFORMATION *)v132);
    if ( v131[112] )
      (*(void (__fastcall **)(_QWORD, _QWORD))&v131[128])(*(_QWORD *)&v131[136], *(_QWORD *)&v131[120]);
    v29 = *(_QWORD *)&v131[200] + 1LL;
    *(_QWORD *)&v131[200] = v29;
    if ( v29 >= *(_QWORD *)&v131[152] )
    {
      v21 = *(_DWORD *)&v131[80];
      v84 = *(__m128i *)&v131[208];
      v6 = *(struct _DPI_INFORMATION **)&v131[336];
      goto LABEL_72;
    }
  }
  if ( v131[112] )
    (*(void (__fastcall **)(_QWORD, _QWORD))&v131[128])(*(_QWORD *)&v131[136], *(_QWORD *)&v131[120]);
  v110 = v131[40] == 0;
LABEL_137:
  if ( !v110 )
    (*(void (__fastcall **)(_QWORD, DpiInternal *, __int64))&v131[56])(*(_QWORD *)&v131[64], v14, v52);
  return (unsigned int)v33;
}
