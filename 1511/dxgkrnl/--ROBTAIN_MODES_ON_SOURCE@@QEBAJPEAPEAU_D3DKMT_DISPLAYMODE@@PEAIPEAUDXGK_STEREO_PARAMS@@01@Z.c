/*
 * XREFs of ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z @ 0x1C013E230
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C0140988 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PA.c)
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0004F44 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0007A48 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000A5E8 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_TARGET_MODE@@Q6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@0@Z1@Z @ 0x1C000C8BC (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C00A0F70 (-BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT.c)
 *     ?BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C00A7EF4 (-BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_P.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00AA170 (DmmGetVideoOutputTechnology.c)
 *     ?AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00B8780 (-AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z @ 0x1C00B8870 (-FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00BD198 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C00CD3F0 (-GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     sub_1C00E43EC @ 0x1C00E43EC (sub_1C00E43EC.c)
 *     sub_1C0141EC4 @ 0x1C0141EC4 (sub_1C0141EC4.c)
 */

__int64 __fastcall OBTAIN_MODES_ON_SOURCE::operator()(
        __int64 a1,
        struct _D3DKMT_DISPLAYMODE **a2,
        unsigned int *a3,
        bool *a4,
        void **a5,
        unsigned int *a6)
{
  void **v7; // r12
  unsigned int v9; // edi
  __int64 v10; // r8
  unsigned int v11; // r15d
  int v12; // r14d
  __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  BOOL v23; // ebx
  const struct _DXGK_DISPLAYMODE_INFO *v24; // r13
  int v25; // edi
  int VideoOutputTechnology; // eax
  __int64 v27; // rcx
  DXGADAPTER *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 (__fastcall *v32)(__int64, __int64, __int64 *, __int64 *); // rax
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // r14
  __int64 (__fastcall *v36)(__int64, __int64 *); // rax
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned int *v40; // r12
  __int64 v41; // r8
  unsigned int v42; // ecx
  unsigned int v43; // eax
  unsigned int v44; // ecx
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 (__fastcall *v54)(__int64, _QWORD, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **, __int64 *); // rax
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rdi
  unsigned int *v58; // r13
  __int64 (__fastcall *v59)(__int64, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **); // rax
  int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rdx
  int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rbx
  __int64 v69; // rax
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r9
  __int64 v74; // rax
  _QWORD *v75; // rax
  int v76; // eax
  char v77; // cl
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  int v81; // eax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT v82; // edi
  int *v83; // rcx
  __int64 v84; // rbx
  int v85; // eax
  __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rcx
  int v89; // eax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT v90; // ebx
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v91; // eax
  char v92; // cl
  struct _D3DKMT_DISPLAYMODE *Mode; // rax
  struct _D3DKMT_DISPLAYMODE *v94; // rcx
  int v95; // eax
  __int64 v96; // rcx
  bool v97; // sf
  __int64 v98; // rdx
  int v99; // eax
  __int64 v100; // rcx
  _QWORD *v101; // rax
  __int64 v102; // rcx
  int v103; // eax
  __int64 v104; // rcx
  int v105; // eax
  __int64 v106; // rcx
  __int64 v107; // r8
  int v108; // eax
  struct _D3DKMT_DISPLAYMODE **v109; // rbx
  unsigned int v110; // eax
  SIZE_T v111; // rax
  unsigned __int64 v112; // kr00_8
  struct _D3DKMT_DISPLAYMODE *v113; // rax
  __int64 v114; // rdx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rax
  bool *v118; // rcx
  bool v119; // al
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  int UniqueModes; // eax
  __int64 v125; // rcx
  __int64 v126; // rbx
  __int64 v127; // rax
  unsigned __int64 v128; // rcx
  SIZE_T v129; // rax
  PVOID v130; // rax
  __int64 v131; // rdx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // rax
  int v135; // eax
  __int64 v136; // rcx
  __int64 v137; // rbx
  __int64 v138; // rax
  char v139[8]; // [rsp+20h] [rbp-E0h]
  char v140; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v141; // [rsp+51h] [rbp-AFh] BYREF
  char v142[2]; // [rsp+52h] [rbp-AEh] BYREF
  __int16 v143; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v144; // [rsp+58h] [rbp-A8h] BYREF
  int v145; // [rsp+60h] [rbp-A0h] BYREF
  int v146[2]; // [rsp+68h] [rbp-98h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *v147; // [rsp+70h] [rbp-90h] BYREF
  __int64 v148; // [rsp+78h] [rbp-88h] BYREF
  int v149; // [rsp+80h] [rbp-80h] BYREF
  int v150; // [rsp+84h] [rbp-7Ch]
  __int64 v151; // [rsp+88h] [rbp-78h]
  _BOOL8 v152; // [rsp+90h] [rbp-70h]
  char v153[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v154; // [rsp+A0h] [rbp-60h]
  void (__fastcall *v155)(__int64, __int64); // [rsp+A8h] [rbp-58h]
  __int64 v156; // [rsp+B0h] [rbp-50h]
  int v157; // [rsp+B8h] [rbp-48h]
  int v158; // [rsp+C0h] [rbp-40h] BYREF
  char *v159; // [rsp+C8h] [rbp-38h]
  __int64 v160; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v161; // [rsp+D8h] [rbp-28h] BYREF
  char v162[8]; // [rsp+E0h] [rbp-20h] BYREF
  int v163[2]; // [rsp+E8h] [rbp-18h]
  void (__fastcall *v164)(__int64, unsigned int *); // [rsp+F0h] [rbp-10h]
  __int64 v165; // [rsp+F8h] [rbp-8h]
  int v166; // [rsp+100h] [rbp+0h]
  char v167[8]; // [rsp+108h] [rbp+8h] BYREF
  int v168[2]; // [rsp+110h] [rbp+10h]
  void (__fastcall *v169)(__int64, unsigned int *); // [rsp+118h] [rbp+18h]
  __int64 v170; // [rsp+120h] [rbp+20h]
  int v171; // [rsp+128h] [rbp+28h]
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // [rsp+130h] [rbp+30h]
  char v173[8]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v174; // [rsp+140h] [rbp+40h]
  void (__fastcall *v175)(__int64, __int64); // [rsp+148h] [rbp+48h]
  __int64 v176; // [rsp+150h] [rbp+50h]
  int v177; // [rsp+158h] [rbp+58h]
  struct _D3DKMT_DISPLAYMODE v178; // [rsp+160h] [rbp+60h] BYREF
  unsigned int *v179; // [rsp+190h] [rbp+90h]
  struct _D3DKMT_DISPLAYMODE **v180; // [rsp+198h] [rbp+98h]
  struct _D3DKMT_DISPLAYMODE *v181; // [rsp+1A0h] [rbp+A0h]
  bool *v182; // [rsp+1A8h] [rbp+A8h]
  unsigned int *v183; // [rsp+1B0h] [rbp+B0h]
  __int64 v184; // [rsp+1B8h] [rbp+B8h]
  struct _D3DKMDT_MONITOR_SOURCE_MODE v185; // [rsp+1C0h] [rbp+C0h] BYREF

  v7 = a5;
  v183 = a6;
  v179 = a3;
  v9 = 0;
  v182 = a4;
  v10 = 0LL;
  v180 = a2;
  v151 = (__int64)a5;
  v11 = -1;
  v12 = 255;
  v146[0] = -1;
  while ( 1 )
  {
    LODWORD(v17) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, int *))(*(_QWORD *)(a1 + 32) + 8LL))(
                     *(_QWORD *)(a1 + 24),
                     *(unsigned int *)(a1 + 40),
                     v10,
                     v146);
    if ( (int)v17 < 0 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdAssertion(v18);
      v19[3] = (int)v17;
      v19[4] = *(unsigned int *)(a1 + 40);
      v19[5] = v9;
      WdLogEvent5_WdAssertion(v19);
      return (unsigned int)v17;
    }
    v13 = (unsigned int)v146[0];
    if ( v146[0] == -1 )
      break;
    ++*(_DWORD *)(a1 + 52);
    v14 = *(unsigned int *)(a1 + 40);
    v145 = 0;
    v143 = -1;
    v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, int *, __int16 *))(*(_QWORD *)(a1 + 32) + 120LL))(
            *(_QWORD *)(a1 + 24),
            v14,
            v13,
            &v145,
            &v143);
    v17 = v15;
    if ( v15 < 0 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v16);
      v21[3] = v17;
      v21[4] = v11;
      v21[5] = *(unsigned int *)(a1 + 40);
      goto LABEL_12;
    }
    if ( v11 == -1 || v145 < v12 )
    {
      v11 = v146[0];
      v12 = v145;
      *(_DWORD *)(a1 + 48) = v9;
    }
    ++v9;
    v146[0] = -1;
    v10 = v9;
  }
  if ( v11 == -1 && *(_DWORD *)(a1 + 52) )
  {
    v22 = WdLogNewEntry5_WdAssertion(0xFFFFFFFFLL);
    *(_QWORD *)(v22 + 24) = 563LL;
    WdLogEvent5_WdAssertion(v22);
  }
  v23 = a4 != 0LL;
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(*(_QWORD *)a1 + 1984LL), *(_DWORD *)(a1 + 40));
  v24 = DisplayModeInfo;
  v152 = v23;
  v25 = v23 + 1;
  v145 = v25;
  if ( v25 > 0 )
  {
    while ( v11 != -1 )
    {
      VideoOutputTechnology = DmmGetVideoOutputTechnology(*(DXGADAPTER **)a1, v11, 0LL, &v158);
      v17 = VideoOutputTechnology;
      if ( VideoOutputTechnology < 0 )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdError(v27);
        v21[3] = v17;
LABEL_12:
        WdLogEvent5_WdError(v21);
        return (unsigned int)v17;
      }
      v28 = *(DXGADAPTER **)a1;
      LOBYTE(v143) = v158 == 15;
      if ( (int)DmmGetPreferredMonitorSourceModeOnTarget(v28, v11, &v185) < 0 )
        memset(&v185, 0, sizeof(v185));
      v29 = *(_QWORD *)(a1 + 16);
      v30 = *(unsigned int *)(a1 + 40);
      v31 = *(_QWORD *)(a1 + 8);
      v148 = 0LL;
      v144 = 0LL;
      v32 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *))(v29 + 8);
      v154 = 0LL;
      v155 = 0LL;
      v156 = 0LL;
      v157 = 0;
      v153[0] = 0;
      v33 = v32(v31, v30, &v144, &v148);
      v35 = v33;
      if ( v33 < 0 )
      {
        v123 = WdLogNewEntry5_WdError(v34);
        *(_QWORD *)(v123 + 24) = v35;
        WdLogEvent5_WdError(v123);
        return (unsigned int)v35;
      }
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
        (__int64)v153,
        v144,
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
        *(_QWORD *)(a1 + 8));
      v144 = 0LL;
      *(_QWORD *)v163 = 0LL;
      v36 = *(__int64 (__fastcall **)(__int64, __int64 *))(v148 + 8);
      v164 = 0LL;
      v165 = 0LL;
      v166 = 0;
      v162[0] = 0;
      v37 = v36(v154, &v144);
      v35 = v37;
      if ( v37 < 0 )
      {
        v122 = WdLogNewEntry5_WdError(v38);
        *(_QWORD *)(v122 + 24) = v35;
        WdLogEvent5_WdError(v122);
        goto LABEL_128;
      }
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
        (__int64)v162,
        v144,
        *(_QWORD *)(v148 + 32),
        v154);
      v39 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*(_QWORD *)(a1 + 8));
      v40 = *(unsigned int **)v163;
      *(_BYTE *)(v39 + 296) = 1;
      if ( v40 )
      {
        v41 = v25;
        v184 = v25;
        while ( 1 )
        {
          v42 = v40[1];
          if ( v42 - 3 > 1 && (v152 || v42 != 1) )
            goto LABEL_95;
          v43 = v40[2];
          if ( v43 != v40[4] )
            goto LABEL_95;
          v44 = v40[3];
          if ( v44 != v40[5]
            || v152
            && v41 == 2
            && (*(_DWORD *)v24 != v43 || *((_DWORD *)v24 + 1) != v44 || *((_DWORD *)v24 + 2) != v40[7]) )
          {
            goto LABEL_95;
          }
          LOBYTE(v41) = 1;
          v45 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v148 + 40))(v154, *v40, v41);
          v50 = v45;
          if ( v45 >= 0 )
            break;
          v51 = WdLogNewEntry5_WdWarning(v47, v46, v48, v49);
          *(_QWORD *)(v51 + 24) = v50;
          *(_QWORD *)(v51 + 32) = *v40;
          WdLogEvent5_WdWarning(v51);
LABEL_95:
          v161 = 0LL;
          v108 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v148 + 16))(v154, v40, &v161);
          v35 = v108;
          if ( v108 < 0 )
          {
LABEL_124:
            v121 = WdLogNewEntry5_WdError(v56);
            *(_QWORD *)(v121 + 24) = v35;
            WdLogEvent5_WdError(v121);
            goto LABEL_125;
          }
          DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
            (__int64)v162,
            v161,
            *(_QWORD *)(v148 + 32),
            v154);
          v40 = *(unsigned int **)v163;
          v41 = v184;
          if ( !*(_QWORD *)v163 )
          {
            v25 = v145;
            goto LABEL_98;
          }
        }
        v52 = *(_QWORD *)(a1 + 16);
        v53 = *(_QWORD *)(a1 + 8);
        v144 = 0LL;
        v147 = 0LL;
        v54 = *(__int64 (__fastcall **)(__int64, _QWORD, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **, __int64 *))(v52 + 24);
        v174 = 0LL;
        v175 = 0LL;
        v176 = 0LL;
        v177 = 0;
        v173[0] = 0;
        v55 = v54(v53, v11, &v147, &v144);
        v35 = v55;
        if ( v55 < 0 )
          goto LABEL_124;
        DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
          (__int64)v173,
          (__int64)v147,
          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL),
          *(_QWORD *)(a1 + 8));
        v57 = v174;
        v58 = 0LL;
        v147 = 0LL;
        *(_QWORD *)v168 = 0LL;
        v59 = *(__int64 (__fastcall **)(__int64, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **))(v144 + 8);
        v169 = 0LL;
        v170 = 0LL;
        v171 = 0;
        v167[0] = 0;
        v60 = v59(v174, &v147);
        v35 = v60;
        if ( v60 < 0 )
          goto LABEL_116;
        v62 = (__int64)v147;
LABEL_89:
        DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
          (__int64)v167,
          v62,
          *(_QWORD *)(v144 + 32),
          v57);
        v58 = *(unsigned int **)v168;
        if ( !*(_QWORD *)v168 )
        {
          (*(void (__fastcall **)(__int64, _QWORD))(v144 + 56))(v57, 0LL);
          if ( v167[0] )
            v169(v170, 0LL);
          if ( v173[0] )
            v175(v176, v57);
          v24 = DisplayModeInfo;
          goto LABEL_95;
        }
        LOBYTE(v107) = 1;
        v63 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v144 + 48))(
                v57,
                (unsigned int)**(_DWORD **)v168,
                v107);
        v68 = v63;
        if ( v63 < 0 )
        {
          v69 = WdLogNewEntry5_WdWarning(v65, v64, v66, v67);
          *(_QWORD *)(v69 + 24) = v68;
          *(_QWORD *)(v69 + 32) = *v58;
          WdLogEvent5_WdWarning(v69);
          goto LABEL_87;
        }
        if ( v40[1] - 3 <= 1 )
        {
          v142[0] = 1;
          v149 = 0;
          goto LABEL_48;
        }
        v70 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, int *))(v144 + 64))(v57, *v58, v142, &v149);
        v35 = v70;
        if ( v70 == -1071774920 )
        {
          v74 = WdLogNewEntry5_WdTrace(v72, v71, v66, v73);
          *(_QWORD *)(v74 + 24) = v11;
          *(_QWORD *)(v74 + 32) = *(unsigned int *)(a1 + 40);
LABEL_48:
          v140 = 0;
          if ( v185.VideoSignalInfo.ActiveSize.cx == v40[2] && v185.VideoSignalInfo.ActiveSize.cy == v40[3] )
          {
            LOBYTE(v66) = v143;
            v76 = (*(__int64 (__fastcall **)(unsigned int *, struct _D3DKMDT_MONITOR_SOURCE_MODE *, __int64, char *))(v144 + 80))(
                    v58,
                    &v185,
                    v66,
                    &v140);
            v77 = v140;
            if ( v76 < 0 )
              v77 = 0;
            v140 = v77;
          }
          v78 = *(_QWORD *)(a1 + 32);
          v79 = *(unsigned int *)(a1 + 40);
          v80 = *(_QWORD *)(a1 + 24);
          v147 = 0LL;
          v81 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **))(v78 + 24))(
                  v80,
                  v79,
                  v11,
                  &v147);
          v35 = v81;
          if ( v81 >= 0 )
          {
            v82 = v147[4];
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 32) + 32LL))(*(_QWORD *)(a1 + 24));
            v83 = (int *)&unk_1C002F230;
            LODWORD(v147) = 0;
            v159 = (char *)&unk_1C002F230;
            while ( 1 )
            {
              v84 = *v83;
              v150 = v84;
              if ( !BmlIsSupportedPathScaling((unsigned int)v84, v82) )
                goto LABEL_84;
              v139[0] = 1;
              v85 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char *))(*(_QWORD *)(a1 + 32) + 64LL))(
                      *(_QWORD *)(a1 + 24),
                      *(unsigned int *)(a1 + 40),
                      v11,
                      (unsigned int)v84,
                      *(char **)v139);
              v35 = v85;
              if ( v85 < 0 )
              {
                v75 = (_QWORD *)WdLogNewEntry5_WdError(v86);
                v75[3] = v35;
                v75[4] = *(unsigned int *)(a1 + 40);
                v75[5] = v11;
                v75[6] = *(_QWORD *)(a1 + 24);
                v75[7] = v84;
LABEL_118:
                WdLogEvent5_WdError(v75);
                goto LABEL_119;
              }
              v87 = *(unsigned int *)(a1 + 40);
              v88 = *(_QWORD *)(a1 + 24);
              *(_QWORD *)v146 = 0LL;
              v89 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, int *))(*(_QWORD *)(a1 + 32) + 24LL))(
                      v88,
                      v87,
                      v11,
                      v146);
              v35 = v89;
              if ( v89 < 0 )
                break;
              v90 = *(struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)(*(_QWORD *)v146 + 24LL);
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 32) + 32LL))(*(_QWORD *)(a1 + 24));
              v91 = D3DKMDT_VPPR_IDENTITY;
              v146[0] = 1;
              do
              {
                if ( !BmlIsSupportedPathRotation(v91, v90) )
                  goto LABEL_80;
                if ( !v140 || (v92 = 1, v150 != 1) )
                  v92 = 0;
                sub_1C00E43EC(v40, v58, v150, v146[0], v142[0], v92, 1, v149, (struct _D3DDDI_RATIONAL *)&v178, &v141);
                Mode = MODE_UNION_LIST::FindMode((MODE_UNION_LIST *)(a1 + 64), &v178);
                v181 = Mode;
                v94 = Mode;
                if ( Mode )
                {
                  sub_1C0141EC4(Mode, &v178);
                  if ( !v141 )
                    goto LABEL_80;
                }
                if ( *(_DWORD *)(a1 + 52) > 1u )
                {
                  v139[0] = 0;
                  v95 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)(a1 + 32) + 80LL))(
                          *(_QWORD *)(a1 + 24),
                          *(unsigned int *)(a1 + 40),
                          v11,
                          (unsigned int)v146[0],
                          *(_DWORD *)v139);
                  v35 = v95;
                  if ( v95 < 0 )
                  {
                    v75 = (_QWORD *)WdLogNewEntry5_WdError(v96);
                    v75[3] = v35;
                    v75[4] = *(unsigned int *)(a1 + 40);
                    v75[5] = v11;
                    v75[6] = *(_QWORD *)(a1 + 24);
                    v75[7] = v146[0];
                    goto LABEL_118;
                  }
                  v94 = v181;
                }
                if ( v152 )
                {
                  v118 = v182;
                  LODWORD(v35) = 0;
                  v119 = v145 == 2;
                  v182[1] = 1;
                  *v118 = v119;
                  goto LABEL_119;
                }
                if ( v178.Format != D3DDDIFMT_A8R8G8B8 && *(_BYTE *)(a1 + 44)
                  || v178.Format <= (unsigned int)D3DDDIFMT_P8 && (v98 = 0x20003900000LL, _bittest64(&v98, v178.Format)) )
                {
                  if ( !v151 )
                    goto LABEL_80;
                  MODE_UNION_LIST::AddMode((MODE_UNION_LIST *)(a1 + 96), &v178);
                  v97 = (int)v35 < 0;
                  goto LABEL_79;
                }
                if ( !v94 )
                {
                  LODWORD(v35) = MODE_UNION_LIST::AddMode((MODE_UNION_LIST *)(a1 + 64), &v178);
                  if ( (int)v35 < 0 )
                    goto LABEL_119;
                }
                if ( v141 )
                {
                  ++v178.IntegerRefreshRate;
                  *(_DWORD *)&v178.Flags |= 2u;
                  LODWORD(v35) = MODE_UNION_LIST::AddMode((MODE_UNION_LIST *)(a1 + 64), &v178);
                  v97 = (int)v35 < 0;
LABEL_79:
                  if ( v97 )
                    goto LABEL_119;
                }
LABEL_80:
                v91 = v146[0] + 1;
                v146[0] = v91;
              }
              while ( v91 <= D3DKMDT_VPPR_ROTATE270 );
              if ( *(_DWORD *)(a1 + 52) > 1u )
              {
                v99 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(a1 + 32) + 88LL))(
                        *(_QWORD *)(a1 + 24),
                        *(unsigned int *)(a1 + 40),
                        v11,
                        0LL);
                v35 = v99;
                if ( v99 < 0 )
                {
                  v101 = (_QWORD *)WdLogNewEntry5_WdError(v100);
                  v101[3] = v35;
                  v101[4] = *(_QWORD *)(a1 + 24);
                  v102 = *(unsigned int *)(a1 + 40);
                  goto LABEL_115;
                }
              }
LABEL_84:
              v83 = (int *)(v159 + 4);
              LODWORD(v147) = (_DWORD)v147 + 1;
              v159 += 4;
              if ( (unsigned int)v147 >= 5 )
              {
                v103 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(a1 + 32) + 72LL))(
                         *(_QWORD *)(a1 + 24),
                         *(unsigned int *)(a1 + 40),
                         v11,
                         0LL);
                v35 = v103;
                if ( v103 >= 0 )
                {
                  v57 = v174;
LABEL_87:
                  v160 = 0LL;
                  v105 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v144 + 16))(v57, v58, &v160);
                  v35 = v105;
                  if ( v105 >= 0 )
                  {
                    v62 = v160;
                    goto LABEL_89;
                  }
                  v120 = WdLogNewEntry5_WdError(v106);
                  *(_QWORD *)(v120 + 24) = v35;
                  WdLogEvent5_WdError(v120);
LABEL_120:
                  if ( v167[0] )
                    v169(v170, v58);
                  if ( v173[0] )
                    v175(v176, v57);
LABEL_125:
                  if ( v162[0] )
                    v164(v165, v40);
LABEL_128:
                  if ( v153[0] )
                    v155(v156, v154);
                  return (unsigned int)v35;
                }
                v101 = (_QWORD *)WdLogNewEntry5_WdError(v104);
                v101[3] = v35;
                v101[4] = *(unsigned int *)(a1 + 40);
                v102 = *(_QWORD *)(a1 + 24);
LABEL_115:
                v101[5] = v102;
                v101[6] = v11;
                WdLogEvent5_WdError(v101);
LABEL_119:
                v57 = v174;
                goto LABEL_120;
              }
            }
          }
LABEL_116:
          v75 = (_QWORD *)WdLogNewEntry5_WdError(v61);
        }
        else
        {
          if ( v70 >= 0 )
            goto LABEL_48;
          v75 = (_QWORD *)WdLogNewEntry5_WdError(v72);
          v75[4] = v58;
        }
        v75[3] = v35;
        goto LABEL_118;
      }
LABEL_98:
      (*(void (__fastcall **)(__int64, _QWORD))(v148 + 48))(v154, 0LL);
      *(_BYTE *)(ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*(_QWORD *)(a1 + 8)) + 296) = 0;
      if ( v162[0] )
        v164(v165, v40);
      if ( v153[0] )
        v155(v156, v154);
      v145 = --v25;
      if ( v25 <= 0 )
        break;
    }
    v7 = (void **)v151;
  }
  v109 = v180;
  if ( !*v180 )
  {
    v110 = *(_DWORD *)(a1 + 80);
    if ( v110 )
    {
      v112 = v110;
      v111 = 44LL * v110;
      if ( !is_mul_ok(v112, 0x2CuLL) )
        v111 = -1LL;
      v113 = (struct _D3DKMT_DISPLAYMODE *)operator new[](v111, 0x4B677844u, PagedPool);
      *v109 = v113;
      if ( !v113 )
      {
        v117 = WdLogNewEntry5_WdLowResource(0LL, v114, v115, v116);
        *(_QWORD *)(v117 + 24) = 1079LL;
        WdLogEvent5_WdLowResource(v117);
        return 3221225495LL;
      }
      memset(v113, 0, 44LL * *(unsigned int *)(a1 + 80));
    }
  }
  UniqueModes = MODE_UNION_LIST::GetUniqueModes((MODE_UNION_LIST *)(a1 + 64), *(unsigned int *)(a1 + 80), *v109, v179);
  v126 = UniqueModes;
  if ( UniqueModes < 0 )
  {
    v127 = WdLogNewEntry5_WdAssertion(v125);
    *(_QWORD *)(v127 + 24) = v126;
    WdLogEvent5_WdAssertion(v127);
  }
  if ( v7 )
  {
    if ( *v7 )
    {
      operator delete(*v7);
      *v7 = 0LL;
    }
    v128 = *(unsigned int *)(a1 + 112);
    if ( (_DWORD)v128 )
    {
      v129 = 44 * v128;
      if ( !is_mul_ok(v128, 0x2CuLL) )
        v129 = -1LL;
      v130 = operator new[](v129, 0x4B677844u, PagedPool);
      *v7 = v130;
      if ( v130 )
      {
        memset(v130, 0, 44LL * *(unsigned int *)(a1 + 112));
        v135 = MODE_UNION_LIST::GetUniqueModes(
                 (MODE_UNION_LIST *)(a1 + 96),
                 *(unsigned int *)(a1 + 112),
                 (struct _D3DKMT_DISPLAYMODE *)*v7,
                 v183);
        v137 = v135;
        if ( v135 < 0 )
        {
          v138 = WdLogNewEntry5_WdAssertion(v136);
          *(_QWORD *)(v138 + 24) = v137;
          WdLogEvent5_WdAssertion(v138);
        }
      }
      else
      {
        v134 = WdLogNewEntry5_WdLowResource(0LL, v131, v132, v133);
        *(_QWORD *)(v134 + 24) = 1111LL;
        WdLogEvent5_WdLowResource(v134);
      }
    }
  }
  return 0LL;
}
