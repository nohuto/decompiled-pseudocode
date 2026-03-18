/*
 * XREFs of ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C0139878
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C00D28D8 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0009E4C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ??9@YA_NAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0@Z @ 0x1C000A270 (--9@YA_NAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_TARGET_MODE@@Q6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@0@Z1@Z @ 0x1C000E77C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C009B430 (-BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT.c)
 *     DxgkQueryDmmInterface @ 0x1C00AC588 (DxgkQueryDmmInterface.c)
 *     ?AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00D3468 (-AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C00D3560 (-GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ?FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z @ 0x1C00D36D0 (-FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z.c)
 *     _PopulateDisplayModeFromPresentPath @ 0x1C00D3740 (_PopulateDisplayModeFromPresentPath.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00D388C (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     _UpgradeDispModeFlags @ 0x1C013BA98 (_UpgradeDispModeFlags.c)
 */

__int64 __fastcall OBTAIN_PREFERRED_MODES_ON_PATH::operator()(
        __int64 a1,
        struct _D3DKMT_DISPLAYMODE **a2,
        unsigned int *a3)
{
  unsigned int *v3; // r13
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
  __int64 v22; // r12
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
  __int64 v34; // rdx
  __int64 (__fastcall *v35)(__int64, __int64, const struct _DXGDMM_INTERFACE **, __int64 *); // rax
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // r15
  __int64 (__fastcall *v39)(__int64, const struct _DXGDMM_INTERFACE **); // rax
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // r8
  unsigned int *v44; // r14
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  unsigned int v47; // edx
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rbx
  _QWORD *v54; // rax
  __int64 v55; // rdx
  __int64 (__fastcall *v56)(__int64, __int64, __int64 *, const struct _DXGDMM_INTERFACE **); // rax
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // r15
  __int64 (__fastcall *v60)(__int64, __int64 *); // rax
  int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // r8
  int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rbx
  _QWORD *v71; // rax
  int v72; // eax
  __int64 v73; // rcx
  unsigned int *v74; // r13
  int v75; // eax
  __int64 v76; // rcx
  unsigned int v77; // eax
  SIZE_T v78; // rax
  unsigned __int64 v79; // kr00_8
  __int64 v80; // rcx
  struct _D3DKMT_DISPLAYMODE *v81; // rbx
  __int64 v82; // rax
  __int64 v83; // r8
  __int64 v84; // rdx
  int v85; // eax
  __int64 v86; // rcx
  int v87; // ebx
  int v88; // eax
  __int64 v89; // r8
  __int64 v90; // rdx
  int v91; // eax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT v92; // ebx
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v93; // edi
  struct _D3DKMT_DISPLAYMODE *Mode; // rax
  int v95; // eax
  _QWORD *v96; // rax
  _QWORD *v97; // rax
  int UniqueModes; // eax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rbx
  __int64 v104; // rax
  char v105[4]; // [rsp+28h] [rbp-E0h]
  unsigned __int8 v106[8]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v107; // [rsp+60h] [rbp-A8h] BYREF
  const struct _DXGDMM_INTERFACE *v108; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v109; // [rsp+70h] [rbp-98h] BYREF
  __int64 v110; // [rsp+78h] [rbp-90h] BYREF
  __int64 v111; // [rsp+80h] [rbp-88h] BYREF
  __int64 v112; // [rsp+88h] [rbp-80h] BYREF
  char v113[8]; // [rsp+90h] [rbp-78h] BYREF
  int v114[2]; // [rsp+98h] [rbp-70h]
  void (__fastcall *v115)(__int64, unsigned int *); // [rsp+A0h] [rbp-68h]
  __int64 v116; // [rsp+A8h] [rbp-60h]
  int v117; // [rsp+B0h] [rbp-58h]
  char v118[8]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v119; // [rsp+C0h] [rbp-48h]
  void (__fastcall *v120)(__int64, __int64); // [rsp+C8h] [rbp-40h]
  __int64 v121; // [rsp+D0h] [rbp-38h]
  int v122; // [rsp+D8h] [rbp-30h]
  char v123[8]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v124; // [rsp+E8h] [rbp-20h]
  void (__fastcall *v125)(__int64, __int64); // [rsp+F0h] [rbp-18h]
  __int64 v126; // [rsp+F8h] [rbp-10h]
  int v127; // [rsp+100h] [rbp-8h]
  char v128[8]; // [rsp+108h] [rbp+0h] BYREF
  int v129[2]; // [rsp+110h] [rbp+8h]
  void (__fastcall *v130)(__int64, unsigned int *); // [rsp+118h] [rbp+10h]
  __int64 v131; // [rsp+120h] [rbp+18h]
  int v132; // [rsp+128h] [rbp+20h]
  unsigned int *v133; // [rsp+130h] [rbp+28h]
  char v134[8]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v135; // [rsp+140h] [rbp+38h]
  void (__fastcall *v136)(__int64, __int64); // [rsp+148h] [rbp+40h]
  __int64 v137; // [rsp+150h] [rbp+48h]
  int v138; // [rsp+158h] [rbp+50h]
  struct _D3DKMT_DISPLAYMODE **v139; // [rsp+160h] [rbp+58h]
  struct _D3DKMT_DISPLAYMODE v140; // [rsp+168h] [rbp+60h] BYREF
  struct _D3DKMDT_MONITOR_SOURCE_MODE v141; // [rsp+198h] [rbp+90h] BYREF

  v139 = a2;
  v3 = a3;
  v4 = *(_DWORD *)(a1 + 12);
  v6 = *(DXGADAPTER **)a1;
  v133 = a3;
  PreferredMonitorSourceModeOnTarget = DmmGetPreferredMonitorSourceModeOnTarget(v6, v4, &v141);
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
  v108 = 0LL;
  v16 = DxgkQueryDmmInterface(v15, v8, &v108, v11);
  v18 = v16;
  if ( v16 < 0 )
  {
    v19 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v19 + 24) = *(_QWORD *)a1;
    *(_QWORD *)(v19 + 32) = v18;
    WdLogEvent5_WdError(v19);
    return (unsigned int)v18;
  }
  v20 = v108;
  v21 = *(DXGADAPTER **)a1;
  v111 = 0LL;
  v22 = 0LL;
  v107 = 0LL;
  v23 = (__int64 (__fastcall *)(DXGADAPTER *, __int64 *, __int64 *))*((_QWORD *)v108 + 5);
  v135 = 0LL;
  v136 = 0LL;
  v137 = 0LL;
  v138 = 0;
  v134[0] = 0;
  v24 = v23(v21, &v107, &v111);
  v26 = v24;
  if ( v24 >= 0 )
  {
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v134,
      v107,
      *((_QWORD *)v20 + 8),
      *(_QWORD *)a1);
    v22 = v135;
    v110 = 0LL;
    v109 = 0LL;
    v28 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))v111)(v135, &v110, &v109);
    v26 = v28;
    if ( v28 < 0 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdError(v29);
      v30[3] = v22;
      v31 = *(_QWORD *)a1;
LABEL_9:
      v30[5] = v26;
LABEL_12:
      v30[4] = v31;
      WdLogEvent5_WdError(v30);
      goto LABEL_82;
    }
    v32 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _WORD, int))(v109 + 40))(
            v110,
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
      v31 = *(unsigned int *)(a1 + 12);
      v30[5] = v22;
      v30[6] = v26;
      goto LABEL_12;
    }
    v34 = *(unsigned int *)(a1 + 8);
    v112 = 0LL;
    v108 = 0LL;
    v35 = *(__int64 (__fastcall **)(__int64, __int64, const struct _DXGDMM_INTERFACE **, __int64 *))(v111 + 8);
    v119 = 0LL;
    v120 = 0LL;
    v121 = 0LL;
    v122 = 0;
    v118[0] = 0;
    v36 = v35(v22, v34, &v108, &v112);
    v26 = v36;
    if ( v36 < 0 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdError(v37);
      v30[3] = v22;
      v31 = *(unsigned int *)(a1 + 8);
      goto LABEL_9;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v118,
      (__int64)v108,
      *(_QWORD *)(v111 + 16),
      v22);
    v38 = v119;
    v108 = 0LL;
    *(_QWORD *)v129 = 0LL;
    v39 = *(__int64 (__fastcall **)(__int64, const struct _DXGDMM_INTERFACE **))(v112 + 8);
    v130 = 0LL;
    v131 = 0LL;
    v132 = 0;
    v128[0] = 0;
    v40 = v39(v119, &v108);
    v26 = v40;
    if ( v40 < 0 )
    {
      v42 = WdLogNewEntry5_WdError(v41);
      *(_QWORD *)(v42 + 24) = v38;
      *(_QWORD *)(v42 + 32) = v26;
      WdLogEvent5_WdError(v42);
LABEL_80:
      if ( v118[0] )
        v120(v121, v38);
      goto LABEL_82;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
      (__int64)v128,
      (__int64)v108,
      *(_QWORD *)(v112 + 32),
      v38);
    v44 = *(unsigned int **)v129;
    if ( !*(_QWORD *)v129 )
      goto LABEL_46;
    while ( 1 )
    {
      v45 = v44[1];
      if ( ((v45 - 1) & 0xFFFFFFFC) != 0 )
        goto LABEL_43;
      if ( v45 == 2 )
        goto LABEL_43;
      v46 = v44[2];
      if ( v46 != v44[4] )
        goto LABEL_43;
      v47 = v44[3];
      if ( v47 != v44[5]
        || v44[7] - 21 > 1
        || v46 != v141.VideoSignalInfo.ActiveSize.cx
        || v47 != v141.VideoSignalInfo.ActiveSize.cy )
      {
        goto LABEL_43;
      }
      LOBYTE(v43) = 1;
      v48 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v112 + 40))(v38, *v44, v43);
      v53 = v48;
      if ( v48 < 0 )
      {
        v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v49, v51, v52);
        v54[3] = *v44;
        v54[4] = v38;
        v54[5] = v53;
        WdLogEvent5_WdWarning(v54);
        goto LABEL_43;
      }
      v55 = *(unsigned int *)(a1 + 12);
      v108 = 0LL;
      v107 = 0LL;
      v56 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, const struct _DXGDMM_INTERFACE **))(v111 + 24);
      v124 = 0LL;
      v125 = 0LL;
      v126 = 0LL;
      v127 = 0;
      v123[0] = 0;
      v57 = v56(v22, v55, &v107, &v108);
      v26 = v57;
      if ( v57 < 0 )
      {
        v97 = (_QWORD *)WdLogNewEntry5_WdError(v58);
        v97[3] = v22;
        v97[4] = *(unsigned int *)(a1 + 12);
        v97[5] = v26;
LABEL_73:
        WdLogEvent5_WdError(v97);
        goto LABEL_78;
      }
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
        (__int64)v123,
        v107,
        *(_QWORD *)(v111 + 32),
        v22);
      v59 = v124;
      v107 = 0LL;
      *(_QWORD *)v114 = 0LL;
      v60 = (__int64 (__fastcall *)(__int64, __int64 *))*((_QWORD *)v108 + 1);
      v115 = 0LL;
      v116 = 0LL;
      v117 = 0;
      v113[0] = 0;
      v61 = v60(v124, &v107);
      v26 = v61;
      if ( v61 < 0 )
      {
        v63 = WdLogNewEntry5_WdError(v62);
        *(_QWORD *)(v63 + 24) = v59;
        *(_QWORD *)(v63 + 32) = v26;
        WdLogEvent5_WdError(v63);
LABEL_30:
        if ( v123[0] )
          v125(v126, v59);
        v38 = v119;
        goto LABEL_78;
      }
      while ( 1 )
      {
        DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
          (__int64)v113,
          v107,
          *((_QWORD *)v108 + 4),
          v59);
        v74 = *(unsigned int **)v114;
        if ( !*(_QWORD *)v114 )
          break;
        if ( operator!=(*(_QWORD *)v114 + 8LL, (__int64)&v141.VideoSignalInfo) )
          goto LABEL_36;
        LOBYTE(v64) = 1;
        v65 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))v108 + 6))(v59, *v74, v64);
        v70 = v65;
        if ( v65 < 0 )
        {
          v71 = (_QWORD *)WdLogNewEntry5_WdWarning(v67, v66, v68, v69);
          v71[3] = *v74;
          v71[4] = v59;
          v71[5] = v70;
          WdLogEvent5_WdWarning(v71);
          goto LABEL_36;
        }
        v83 = *(unsigned int *)(a1 + 12);
        v84 = *(unsigned int *)(a1 + 8);
        v107 = 0LL;
        v85 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(v109 + 24))(v110, v84, v83, &v107);
        v26 = v85;
        if ( v85 < 0 )
          goto LABEL_67;
        v87 = *(_DWORD *)(v107 + 16);
        (*(void (__fastcall **)(__int64))(v109 + 32))(v110);
        if ( (v87 & 1) != 0 )
        {
          v105[0] = 1;
          v88 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _DWORD))(v109 + 64))(
                  v110,
                  *(unsigned int *)(a1 + 8),
                  *(unsigned int *)(a1 + 12),
                  1LL,
                  *(_DWORD *)v105);
          v26 = v88;
          if ( v88 >= 0 )
          {
            v89 = *(unsigned int *)(a1 + 12);
            v90 = *(unsigned int *)(a1 + 8);
            v107 = 0LL;
            v91 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(v109 + 24))(v110, v90, v89, &v107);
            v26 = v91;
            if ( v91 >= 0 )
            {
              v92 = *(struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)(v107 + 24);
              (*(void (__fastcall **)(__int64))(v109 + 32))(v110);
              v93 = D3DKMDT_VPPR_IDENTITY;
              LODWORD(v107) = 1;
              while ( 1 )
              {
                if ( BmlIsSupportedPathRotation(v93, v92) )
                {
                  PopulateDisplayModeFromPresentPath(
                    v44,
                    v74,
                    1u,
                    v93,
                    1u,
                    1,
                    0,
                    2,
                    (struct _D3DDDI_RATIONAL *)&v140,
                    v106);
                  Mode = MODE_UNION_LIST::FindMode((MODE_UNION_LIST *)(a1 + 16), &v140);
                  if ( !Mode )
                  {
                    LODWORD(v26) = MODE_UNION_LIST::AddMode((MODE_UNION_LIST *)(a1 + 16), &v140);
                    if ( (int)v26 < 0 )
                      goto LABEL_70;
                    v93 = (int)v107;
LABEL_62:
                    if ( v106[0] )
                    {
                      ++v140.IntegerRefreshRate;
                      *(_DWORD *)&v140.Flags |= 2u;
                      LODWORD(v26) = MODE_UNION_LIST::AddMode((MODE_UNION_LIST *)(a1 + 16), &v140);
                      if ( (int)v26 < 0 )
                        goto LABEL_70;
                      v93 = (int)v107;
                    }
                    goto LABEL_65;
                  }
                  UpgradeDispModeFlags(Mode, &v140);
                  if ( v106[0] )
                    goto LABEL_62;
                }
LABEL_65:
                LODWORD(v107) = ++v93;
                if ( v93 > D3DKMDT_VPPR_ROTATE270 )
                {
                  v95 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(v109 + 72))(
                          v110,
                          *(unsigned int *)(a1 + 8),
                          *(unsigned int *)(a1 + 12),
                          0LL);
                  v26 = v95;
                  if ( v95 < 0 )
                    break;
                  goto LABEL_36;
                }
              }
            }
          }
LABEL_67:
          v96 = (_QWORD *)WdLogNewEntry5_WdError(v86);
          v96[3] = *(unsigned int *)(a1 + 8);
          v96[4] = *(unsigned int *)(a1 + 12);
          v96[5] = v26;
LABEL_68:
          WdLogEvent5_WdError(v96);
LABEL_70:
          if ( v113[0] )
            v115(v116, v74);
          goto LABEL_30;
        }
LABEL_36:
        v107 = 0LL;
        v72 = (*((__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))v108 + 2))(v59, v74, &v107);
        v26 = v72;
        if ( v72 < 0 )
        {
          v96 = (_QWORD *)WdLogNewEntry5_WdError(v73);
          v96[3] = v59;
          v96[4] = v26;
          goto LABEL_68;
        }
      }
      (*((void (__fastcall **)(__int64, _QWORD))v108 + 7))(v59, 0LL);
      if ( v113[0] )
        v115(v116, 0LL);
      if ( v123[0] )
        v125(v126, v59);
      v38 = v119;
LABEL_43:
      v108 = 0LL;
      v75 = (*(__int64 (__fastcall **)(__int64, unsigned int *, const struct _DXGDMM_INTERFACE **))(v112 + 16))(
              v38,
              v44,
              &v108);
      v26 = v75;
      if ( v75 < 0 )
      {
        v97 = (_QWORD *)WdLogNewEntry5_WdError(v76);
        v97[3] = v38;
        v97[4] = v26;
        goto LABEL_73;
      }
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
        (__int64)v128,
        (__int64)v108,
        *(_QWORD *)(v112 + 32),
        v38);
      v44 = *(unsigned int **)v129;
      if ( !*(_QWORD *)v129 )
      {
        v3 = v133;
LABEL_46:
        v77 = *(_DWORD *)(a1 + 32);
        if ( v77 )
        {
          v79 = v77;
          v78 = 44LL * v77;
          if ( !is_mul_ok(v79, 0x2CuLL) )
            v78 = -1LL;
          v81 = (struct _D3DKMT_DISPLAYMODE *)operator new[](v78, 0x4B677844u, PagedPool);
          *v139 = v81;
          if ( !v81 )
          {
            v82 = WdLogNewEntry5_WdLowResource(v80);
            *(_QWORD *)(v82 + 24) = 1540LL;
            WdLogEvent5_WdLowResource(v82);
            LODWORD(v26) = -1073741801;
            goto LABEL_78;
          }
          memset(v81, 0, 44LL * *(unsigned int *)(a1 + 32));
          UniqueModes = MODE_UNION_LIST::GetUniqueModes(
                          (MODE_UNION_LIST *)(a1 + 16),
                          *(unsigned int *)(a1 + 32),
                          v81,
                          v3);
          v103 = UniqueModes;
          if ( UniqueModes < 0 )
          {
            v104 = WdLogNewEntry5_WdAssertion(v100, v99, v101, v102);
            *(_QWORD *)(v104 + 24) = v103;
            WdLogEvent5_WdAssertion(v104);
          }
        }
        else
        {
          *v3 = 0;
        }
        LODWORD(v26) = 0;
LABEL_78:
        if ( v128[0] )
          v130(v131, v44);
        goto LABEL_80;
      }
    }
  }
  v27 = WdLogNewEntry5_WdError(v25);
  *(_QWORD *)(v27 + 24) = *(_QWORD *)a1;
  *(_QWORD *)(v27 + 32) = v26;
  WdLogEvent5_WdError(v27);
LABEL_82:
  if ( v134[0] )
    v136(v137, v22);
  return (unsigned int)v26;
}
