/*
 * XREFs of ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C013EEBC
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C0140988 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PA.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000A5E8 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_TARGET_MODE@@Q6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@0@Z1@Z @ 0x1C000C8BC (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C00A0F70 (-BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00AA170 (DmmGetVideoOutputTechnology.c)
 *     DxgkQueryDmmInterface @ 0x1C00AD984 (DxgkQueryDmmInterface.c)
 *     ?AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00B8780 (-AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z @ 0x1C00B8870 (-FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00BD198 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C00CD3F0 (-GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     sub_1C00E43EC @ 0x1C00E43EC (sub_1C00E43EC.c)
 *     sub_1C0141EC4 @ 0x1C0141EC4 (sub_1C0141EC4.c)
 */

__int64 __fastcall OBTAIN_PREFERRED_MODES_ON_PATH::operator()(
        __int64 a1,
        struct _D3DKMT_DISPLAYMODE **a2,
        unsigned int *a3)
{
  unsigned int *v3; // r12
  unsigned int v4; // edx
  DXGADAPTER *v6; // rcx
  int PreferredMonitorSourceModeOnTarget; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  _QWORD *v13; // rax
  DXGADAPTER *v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  const struct _DXGDMM_INTERFACE *v20; // rbx
  DXGADAPTER *v21; // rcx
  __int64 v22; // r13
  __int64 (__fastcall *v23)(DXGADAPTER *, __int64 *, __int64 *); // rax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  int VideoOutputTechnology; // eax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 (__fastcall *v37)(__int64, __int64, const struct _DXGDMM_INTERFACE **, __int64 *); // rax
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // r15
  __int64 (__fastcall *v41)(__int64, const struct _DXGDMM_INTERFACE **); // rax
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // r8
  unsigned int *v46; // r14
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  unsigned int v49; // edx
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rbx
  _QWORD *v56; // rax
  __int64 v57; // rdx
  __int64 (__fastcall *v58)(__int64, __int64, __int64 *, const struct _DXGDMM_INTERFACE **); // rax
  int v59; // eax
  __int64 v60; // rcx
  __int64 v61; // r15
  __int64 (__fastcall *v62)(__int64, __int64 *); // rax
  int v63; // eax
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // r8
  int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rbx
  _QWORD *v73; // rax
  int v74; // eax
  __int64 v75; // rcx
  __int64 v76; // r8
  unsigned int *v77; // r12
  int v78; // eax
  __int64 v79; // rcx
  unsigned int v80; // eax
  SIZE_T v81; // rax
  unsigned __int64 v82; // kr00_8
  struct _D3DKMT_DISPLAYMODE *v83; // rax
  __int64 v84; // rdx
  __int64 v85; // r8
  __int64 v86; // r9
  struct _D3DKMT_DISPLAYMODE **v87; // rbx
  __int64 v88; // rax
  __int64 v89; // r8
  __int64 v90; // rdx
  int v91; // eax
  __int64 v92; // rcx
  int v93; // ebx
  int v94; // eax
  __int64 v95; // r8
  __int64 v96; // rdx
  int v97; // eax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT v98; // ebx
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v99; // edi
  struct _D3DKMT_DISPLAYMODE *Mode; // rax
  int v101; // eax
  _QWORD *v102; // rax
  _QWORD *v103; // rax
  int UniqueModes; // eax
  __int64 v105; // rcx
  __int64 v106; // rbx
  __int64 v107; // rax
  int v108; // [rsp+20h] [rbp-E0h]
  __int64 v109; // [rsp+50h] [rbp-B0h] BYREF
  char v110; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int8 v111[7]; // [rsp+59h] [rbp-A7h] BYREF
  const struct _DXGDMM_INTERFACE *v112; // [rsp+60h] [rbp-A0h] BYREF
  bool v113; // [rsp+68h] [rbp-98h]
  __int64 v114; // [rsp+70h] [rbp-90h] BYREF
  __int64 v115; // [rsp+78h] [rbp-88h] BYREF
  __int64 v116; // [rsp+80h] [rbp-80h] BYREF
  __int64 v117; // [rsp+88h] [rbp-78h] BYREF
  char v118[8]; // [rsp+90h] [rbp-70h] BYREF
  int v119[2]; // [rsp+98h] [rbp-68h]
  void (__fastcall *v120)(__int64, unsigned int *); // [rsp+A0h] [rbp-60h]
  __int64 v121; // [rsp+A8h] [rbp-58h]
  int v122; // [rsp+B0h] [rbp-50h]
  char v123[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v124; // [rsp+C0h] [rbp-40h]
  void (__fastcall *v125)(__int64, __int64); // [rsp+C8h] [rbp-38h]
  __int64 v126; // [rsp+D0h] [rbp-30h]
  int v127; // [rsp+D8h] [rbp-28h]
  char v128[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v129; // [rsp+E8h] [rbp-18h]
  void (__fastcall *v130)(__int64, __int64); // [rsp+F0h] [rbp-10h]
  __int64 v131; // [rsp+F8h] [rbp-8h]
  int v132; // [rsp+100h] [rbp+0h]
  char v133[8]; // [rsp+108h] [rbp+8h] BYREF
  int v134[2]; // [rsp+110h] [rbp+10h]
  void (__fastcall *v135)(__int64, unsigned int *); // [rsp+118h] [rbp+18h]
  __int64 v136; // [rsp+120h] [rbp+20h]
  int v137; // [rsp+128h] [rbp+28h]
  char v138[8]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v139; // [rsp+138h] [rbp+38h]
  void (__fastcall *v140)(__int64, __int64); // [rsp+140h] [rbp+40h]
  __int64 v141; // [rsp+148h] [rbp+48h]
  int v142; // [rsp+150h] [rbp+50h]
  struct _D3DKMT_DISPLAYMODE **v143; // [rsp+158h] [rbp+58h]
  unsigned int *v144; // [rsp+160h] [rbp+60h]
  struct _D3DKMT_DISPLAYMODE v145; // [rsp+168h] [rbp+68h] BYREF
  struct _D3DKMDT_MONITOR_SOURCE_MODE v146; // [rsp+1A0h] [rbp+A0h] BYREF

  v143 = a2;
  v3 = a3;
  v4 = *(_DWORD *)(a1 + 12);
  v6 = *(DXGADAPTER **)a1;
  v144 = a3;
  PreferredMonitorSourceModeOnTarget = DmmGetPreferredMonitorSourceModeOnTarget(v6, v4, &v146);
  v12 = PreferredMonitorSourceModeOnTarget;
  if ( PreferredMonitorSourceModeOnTarget < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    v13[3] = *(_QWORD *)a1;
    v13[4] = *(unsigned int *)(a1 + 12);
    v13[5] = v12;
    WdLogEvent5_WdWarning(v13);
    return 0LL;
  }
  v15 = *(DXGADAPTER **)a1;
  v112 = 0LL;
  v16 = DxgkQueryDmmInterface(v15, v8, &v112);
  v18 = v16;
  if ( v16 < 0 )
  {
    v19 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v19 + 24) = *(_QWORD *)a1;
    *(_QWORD *)(v19 + 32) = v18;
    WdLogEvent5_WdError(v19);
    return (unsigned int)v18;
  }
  v20 = v112;
  v21 = *(DXGADAPTER **)a1;
  v117 = 0LL;
  v22 = 0LL;
  v109 = 0LL;
  v23 = (__int64 (__fastcall *)(DXGADAPTER *, __int64 *, __int64 *))*((_QWORD *)v112 + 5);
  v139 = 0LL;
  v140 = 0LL;
  v141 = 0LL;
  v142 = 0;
  v138[0] = 0;
  v24 = v23(v21, &v109, &v117);
  v26 = v24;
  if ( v24 >= 0 )
  {
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v138,
      v109,
      *((_QWORD *)v20 + 8),
      *(_QWORD *)a1);
    v22 = v139;
    v115 = 0LL;
    v114 = 0LL;
    v28 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))v117)(v139, &v115, &v114);
    v26 = v28;
    if ( v28 < 0 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdError(v29);
      v30[3] = v22;
      v31 = *(_QWORD *)a1;
LABEL_16:
      v30[4] = v31;
      v30[5] = v26;
      goto LABEL_13;
    }
    v32 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _WORD, int))(v114 + 40))(
            v115,
            *(unsigned int *)(a1 + 8),
            *(unsigned int *)(a1 + 12),
            1LL,
            0,
            2);
    v26 = v32;
    if ( v32 < 0 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdError(v33);
      v30[3] = *(unsigned int *)(a1 + 8);
      v30[4] = *(unsigned int *)(a1 + 12);
      v30[5] = v22;
      v30[6] = v26;
LABEL_13:
      WdLogEvent5_WdError(v30);
      goto LABEL_85;
    }
    VideoOutputTechnology = DmmGetVideoOutputTechnology(*(DXGADAPTER **)a1, *(_DWORD *)(a1 + 12), 0LL, &v109);
    v26 = VideoOutputTechnology;
    if ( VideoOutputTechnology < 0 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdError(v35);
      v30[3] = v26;
      goto LABEL_13;
    }
    v36 = *(unsigned int *)(a1 + 8);
    v116 = 0LL;
    v113 = (_DWORD)v109 == 15;
    v112 = 0LL;
    v37 = *(__int64 (__fastcall **)(__int64, __int64, const struct _DXGDMM_INTERFACE **, __int64 *))(v117 + 8);
    v124 = 0LL;
    v125 = 0LL;
    v126 = 0LL;
    v127 = 0;
    v123[0] = 0;
    v38 = v37(v22, v36, &v112, &v116);
    v26 = v38;
    if ( v38 < 0 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdError(v39);
      v30[3] = v22;
      v31 = *(unsigned int *)(a1 + 8);
      goto LABEL_16;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v123,
      (__int64)v112,
      *(_QWORD *)(v117 + 16),
      v22);
    v40 = v124;
    v112 = 0LL;
    *(_QWORD *)v134 = 0LL;
    v41 = *(__int64 (__fastcall **)(__int64, const struct _DXGDMM_INTERFACE **))(v116 + 8);
    v135 = 0LL;
    v136 = 0LL;
    v137 = 0;
    v133[0] = 0;
    v42 = v41(v124, &v112);
    v26 = v42;
    if ( v42 < 0 )
    {
      v44 = WdLogNewEntry5_WdError(v43);
      *(_QWORD *)(v44 + 24) = v40;
      *(_QWORD *)(v44 + 32) = v26;
      WdLogEvent5_WdError(v44);
LABEL_83:
      if ( v123[0] )
        v125(v126, v40);
      goto LABEL_85;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
      (__int64)v133,
      (__int64)v112,
      *(_QWORD *)(v116 + 32),
      v40);
    v46 = *(unsigned int **)v134;
    if ( !*(_QWORD *)v134 )
      goto LABEL_49;
    while ( 1 )
    {
      v47 = v46[1];
      if ( ((v47 - 1) & 0xFFFFFFFC) != 0 )
        goto LABEL_46;
      if ( v47 == 2 )
        goto LABEL_46;
      v48 = v46[2];
      if ( v48 != v46[4] )
        goto LABEL_46;
      v49 = v46[3];
      if ( v49 != v46[5]
        || v46[7] - 21 > 1
        || v48 != v146.VideoSignalInfo.ActiveSize.cx
        || v49 != v146.VideoSignalInfo.ActiveSize.cy )
      {
        goto LABEL_46;
      }
      LOBYTE(v45) = 1;
      v50 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v116 + 40))(v40, *v46, v45);
      v55 = v50;
      if ( v50 < 0 )
      {
        v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v52, v51, v53, v54);
        v56[3] = *v46;
        v56[4] = v40;
        v56[5] = v55;
        WdLogEvent5_WdWarning(v56);
        goto LABEL_46;
      }
      v57 = *(unsigned int *)(a1 + 12);
      v112 = 0LL;
      v109 = 0LL;
      v58 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, const struct _DXGDMM_INTERFACE **))(v117 + 24);
      v129 = 0LL;
      v130 = 0LL;
      v131 = 0LL;
      v132 = 0;
      v128[0] = 0;
      v59 = v58(v22, v57, &v109, &v112);
      v26 = v59;
      if ( v59 < 0 )
      {
        v103 = (_QWORD *)WdLogNewEntry5_WdError(v60);
        v103[3] = v22;
        v103[4] = *(unsigned int *)(a1 + 12);
        v103[5] = v26;
LABEL_76:
        WdLogEvent5_WdError(v103);
        goto LABEL_81;
      }
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
        (__int64)v128,
        v109,
        *(_QWORD *)(v117 + 32),
        v22);
      v61 = v129;
      v109 = 0LL;
      *(_QWORD *)v119 = 0LL;
      v62 = (__int64 (__fastcall *)(__int64, __int64 *))*((_QWORD *)v112 + 1);
      v120 = 0LL;
      v121 = 0LL;
      v122 = 0;
      v118[0] = 0;
      v63 = v62(v129, &v109);
      v26 = v63;
      if ( v63 < 0 )
      {
        v65 = WdLogNewEntry5_WdError(v64);
        *(_QWORD *)(v65 + 24) = v61;
        *(_QWORD *)(v65 + 32) = v26;
        WdLogEvent5_WdError(v65);
LABEL_32:
        if ( v128[0] )
          v130(v131, v61);
        v40 = v124;
        goto LABEL_81;
      }
      while ( 1 )
      {
        DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
          (__int64)v118,
          v109,
          *((_QWORD *)v112 + 4),
          v61);
        v77 = *(unsigned int **)v119;
        if ( !*(_QWORD *)v119 )
          break;
        LOBYTE(v76) = v113;
        v110 = 0;
        if ( (*((int (__fastcall **)(_QWORD, struct _D3DKMDT_MONITOR_SOURCE_MODE *, __int64, char *))v112 + 10))(
               *(_QWORD *)v119,
               &v146,
               v76,
               &v110) >= 0
          && v110 )
        {
          LOBYTE(v66) = 1;
          v67 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))v112 + 6))(v61, *v77, v66);
          v72 = v67;
          if ( v67 < 0 )
          {
            v73 = (_QWORD *)WdLogNewEntry5_WdWarning(v69, v68, v70, v71);
            v73[3] = *v77;
            v73[4] = v61;
            v73[5] = v72;
            WdLogEvent5_WdWarning(v73);
            goto LABEL_39;
          }
          v89 = *(unsigned int *)(a1 + 12);
          v90 = *(unsigned int *)(a1 + 8);
          v109 = 0LL;
          v91 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(v114 + 24))(v115, v90, v89, &v109);
          v26 = v91;
          if ( v91 < 0 )
            goto LABEL_70;
          v93 = *(_DWORD *)(v109 + 16);
          (*(void (__fastcall **)(__int64))(v114 + 32))(v115);
          if ( (v93 & 1) != 0 )
          {
            LOBYTE(v108) = 1;
            v94 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int))(v114 + 64))(
                    v115,
                    *(unsigned int *)(a1 + 8),
                    *(unsigned int *)(a1 + 12),
                    1LL,
                    v108);
            v26 = v94;
            if ( v94 >= 0 )
            {
              v95 = *(unsigned int *)(a1 + 12);
              v96 = *(unsigned int *)(a1 + 8);
              v109 = 0LL;
              v97 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(v114 + 24))(v115, v96, v95, &v109);
              v26 = v97;
              if ( v97 >= 0 )
              {
                v98 = *(struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)(v109 + 24);
                (*(void (__fastcall **)(__int64))(v114 + 32))(v115);
                v99 = D3DKMDT_VPPR_IDENTITY;
                LODWORD(v109) = 1;
                while ( 1 )
                {
                  if ( BmlIsSupportedPathRotation(v99, v98) )
                  {
                    sub_1C00E43EC(v46, v77, 1u, v99, 1u, 1, 0, 2, (struct _D3DDDI_RATIONAL *)&v145, v111);
                    Mode = MODE_UNION_LIST::FindMode((MODE_UNION_LIST *)(a1 + 16), &v145);
                    if ( !Mode )
                    {
                      LODWORD(v26) = MODE_UNION_LIST::AddMode((MODE_UNION_LIST *)(a1 + 16), &v145);
                      if ( (int)v26 < 0 )
                        goto LABEL_73;
                      v99 = (int)v109;
LABEL_65:
                      if ( v111[0] )
                      {
                        ++v145.IntegerRefreshRate;
                        *(_DWORD *)&v145.Flags |= 2u;
                        LODWORD(v26) = MODE_UNION_LIST::AddMode((MODE_UNION_LIST *)(a1 + 16), &v145);
                        if ( (int)v26 < 0 )
                          goto LABEL_73;
                        v99 = (int)v109;
                      }
                      goto LABEL_68;
                    }
                    sub_1C0141EC4(Mode, &v145);
                    if ( v111[0] )
                      goto LABEL_65;
                  }
LABEL_68:
                  LODWORD(v109) = ++v99;
                  if ( v99 > D3DKMDT_VPPR_ROTATE270 )
                  {
                    v101 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(v114 + 72))(
                             v115,
                             *(unsigned int *)(a1 + 8),
                             *(unsigned int *)(a1 + 12),
                             0LL);
                    v26 = v101;
                    if ( v101 < 0 )
                      break;
                    goto LABEL_39;
                  }
                }
              }
            }
LABEL_70:
            v102 = (_QWORD *)WdLogNewEntry5_WdError(v92);
            v102[3] = *(unsigned int *)(a1 + 8);
            v102[4] = *(unsigned int *)(a1 + 12);
            v102[5] = v26;
LABEL_71:
            WdLogEvent5_WdError(v102);
LABEL_73:
            if ( v118[0] )
              v120(v121, v77);
            goto LABEL_32;
          }
        }
LABEL_39:
        v109 = 0LL;
        v74 = (*((__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))v112 + 2))(v61, v77, &v109);
        v26 = v74;
        if ( v74 < 0 )
        {
          v102 = (_QWORD *)WdLogNewEntry5_WdError(v75);
          v102[3] = v61;
          v102[4] = v26;
          goto LABEL_71;
        }
      }
      (*((void (__fastcall **)(__int64, _QWORD))v112 + 7))(v61, 0LL);
      if ( v118[0] )
        v120(v121, 0LL);
      if ( v128[0] )
        v130(v131, v61);
      v40 = v124;
LABEL_46:
      v112 = 0LL;
      v78 = (*(__int64 (__fastcall **)(__int64, unsigned int *, const struct _DXGDMM_INTERFACE **))(v116 + 16))(
              v40,
              v46,
              &v112);
      v26 = v78;
      if ( v78 < 0 )
      {
        v103 = (_QWORD *)WdLogNewEntry5_WdError(v79);
        v103[3] = v40;
        v103[4] = v26;
        goto LABEL_76;
      }
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
        (__int64)v133,
        (__int64)v112,
        *(_QWORD *)(v116 + 32),
        v40);
      v46 = *(unsigned int **)v134;
      if ( !*(_QWORD *)v134 )
      {
        v3 = v144;
LABEL_49:
        v80 = *(_DWORD *)(a1 + 32);
        if ( v80 )
        {
          v82 = v80;
          v81 = 44LL * v80;
          if ( !is_mul_ok(v82, 0x2CuLL) )
            v81 = -1LL;
          v83 = (struct _D3DKMT_DISPLAYMODE *)operator new[](v81, 0x4B677844u, PagedPool);
          v87 = v143;
          *v143 = v83;
          if ( !v83 )
          {
            v88 = WdLogNewEntry5_WdLowResource(0LL, v84, v85, v86);
            *(_QWORD *)(v88 + 24) = 1610LL;
            WdLogEvent5_WdLowResource(v88);
            LODWORD(v26) = -1073741801;
            goto LABEL_81;
          }
          memset(v83, 0, 44LL * *(unsigned int *)(a1 + 32));
          UniqueModes = MODE_UNION_LIST::GetUniqueModes(
                          (MODE_UNION_LIST *)(a1 + 16),
                          *(unsigned int *)(a1 + 32),
                          *v87,
                          v3);
          v106 = UniqueModes;
          if ( UniqueModes < 0 )
          {
            v107 = WdLogNewEntry5_WdAssertion(v105);
            *(_QWORD *)(v107 + 24) = v106;
            WdLogEvent5_WdAssertion(v107);
          }
        }
        else
        {
          *v3 = 0;
        }
        LODWORD(v26) = 0;
LABEL_81:
        if ( v133[0] )
          v135(v136, v46);
        goto LABEL_83;
      }
    }
  }
  v27 = WdLogNewEntry5_WdError(v25);
  *(_QWORD *)(v27 + 24) = *(_QWORD *)a1;
  *(_QWORD *)(v27 + 32) = v26;
  WdLogEvent5_WdError(v27);
LABEL_85:
  if ( v138[0] )
    v140(v141, v22);
  return (unsigned int)v26;
}
