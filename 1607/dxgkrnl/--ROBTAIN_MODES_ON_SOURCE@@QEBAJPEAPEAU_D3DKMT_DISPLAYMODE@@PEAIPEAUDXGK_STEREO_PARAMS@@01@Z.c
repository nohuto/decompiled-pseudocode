/*
 * XREFs of ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z @ 0x1C0081A50
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00C5804 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PA.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C0005D38 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C0005D54 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0006BF4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_TARGET_MODE@@Q6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@0@Z1@Z @ 0x1C000AB7C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000AC00 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000ADA0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C008236C (-AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C0082460 (-GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ?FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z @ 0x1C00825D0 (-FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z.c)
 *     _PopulateDisplayModeFromPresentPath @ 0x1C0082640 (_PopulateDisplayModeFromPresentPath.c)
 *     ?BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C00829E8 (-BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_P.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00C219C (DmmGetVideoOutputTechnology.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00D7FD4 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     _UpgradeDispModeFlags @ 0x1C0163D70 (_UpgradeDispModeFlags.c)
 */

__int64 __fastcall OBTAIN_MODES_ON_SOURCE::operator()(
        _QWORD *a1,
        struct _D3DKMT_DISPLAYMODE **a2,
        unsigned int *a3,
        bool *a4,
        void **a5,
        unsigned int *a6)
{
  void **v6; // r15
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v8; // r12d
  unsigned int v9; // ebx
  int v10; // esi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // r8
  BOOL v18; // ebx
  int v19; // edi
  int VideoOutputTechnology; // eax
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 (__fastcall *v26)(__int64, __int64, __int64 *, __int64 *); // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 (__fastcall *v30)(__int64, __int64 *); // rax
  __int64 v31; // rbx
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned int *v35; // r15
  __int64 v36; // rdx
  unsigned int v37; // ecx
  _BOOL8 v38; // r8
  unsigned int v39; // eax
  unsigned int v40; // ecx
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 (__fastcall *v49)(__int64, _QWORD, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **, __int64 *); // rax
  int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rdi
  unsigned int *v53; // r13
  __int64 (__fastcall *v54)(__int64, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **); // rax
  int v55; // eax
  __int64 v56; // rcx
  __int64 i; // rdx
  __int64 v58; // rbx
  int *v59; // rcx
  int v60; // eax
  __int64 v61; // rcx
  int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // r8
  int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rbx
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r9
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  int v78; // eax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT v79; // edi
  int v80; // eax
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // rcx
  int v84; // eax
  unsigned int v85; // ebx
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v86; // eax
  __int32 v87; // eax
  __int64 v88; // rcx
  __int32 v89; // eax
  __int32 v90; // eax
  bool v91; // zf
  __int32 v92; // eax
  int v93; // r8d
  unsigned int v94; // eax
  char v95; // cl
  struct _D3DKMT_DISPLAYMODE *Mode; // rax
  __int64 v97; // r8
  struct _D3DKMT_DISPLAYMODE *v98; // rcx
  __int64 v99; // rdx
  int v100; // eax
  __int64 v101; // rcx
  int v102; // eax
  __int64 v103; // rcx
  int v104; // eax
  __int64 v105; // rcx
  struct _D3DKMT_DISPLAYMODE **v106; // rbx
  unsigned int v107; // eax
  SIZE_T v108; // rax
  unsigned __int64 v109; // kr00_8
  struct _D3DKMT_DISPLAYMODE *v110; // rax
  int UniqueModes; // eax
  __int64 v112; // rcx
  __int64 v113; // rbx
  int v115; // eax
  char v116; // cl
  __int64 v117; // rdx
  int v118; // eax
  __int64 v119; // rcx
  _QWORD *v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  __int32 v126; // eax
  __int32 v127; // eax
  int v128; // eax
  __int64 v129; // rcx
  int v130; // eax
  __int64 v131; // rcx
  _QWORD *v132; // rax
  __int64 v133; // rcx
  _QWORD *v134; // rax
  bool *v135; // rcx
  bool v136; // al
  __int64 v137; // rcx
  _QWORD *v138; // rdx
  __int64 v139; // rax
  __int64 v140; // rcx
  _QWORD *v141; // rdx
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rax
  unsigned __int64 v147; // rcx
  SIZE_T v148; // rax
  PVOID v149; // rax
  __int64 v150; // rax
  int v151; // eax
  __int64 v152; // rcx
  __int64 v153; // rbx
  __int64 v154; // rax
  _QWORD *v155; // rax
  int v156; // [rsp+20h] [rbp-E0h]
  char v157; // [rsp+50h] [rbp-B0h] BYREF
  char v158; // [rsp+51h] [rbp-AFh]
  char v159[2]; // [rsp+52h] [rbp-AEh] BYREF
  _WORD v160[2]; // [rsp+54h] [rbp-ACh] BYREF
  int v161; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v162; // [rsp+60h] [rbp-A0h] BYREF
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION Rotation[2]; // [rsp+68h] [rbp-98h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *v164; // [rsp+70h] [rbp-90h] BYREF
  __int64 v165; // [rsp+78h] [rbp-88h] BYREF
  int v166; // [rsp+80h] [rbp-80h] BYREF
  int v167; // [rsp+84h] [rbp-7Ch]
  int v168; // [rsp+88h] [rbp-78h] BYREF
  __int64 v169; // [rsp+90h] [rbp-70h]
  _BOOL8 v170; // [rsp+98h] [rbp-68h]
  char v171[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v172; // [rsp+A8h] [rbp-58h]
  void (__fastcall *v173)(__int64, __int64); // [rsp+B0h] [rbp-50h]
  __int64 v174; // [rsp+B8h] [rbp-48h]
  int v175; // [rsp+C0h] [rbp-40h]
  char *v176; // [rsp+C8h] [rbp-38h]
  __int64 v177; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v178; // [rsp+D8h] [rbp-28h] BYREF
  bool *v179; // [rsp+E0h] [rbp-20h]
  char v180[8]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int *v181; // [rsp+F0h] [rbp-10h]
  void (__fastcall *v182)(__int64, unsigned int *); // [rsp+F8h] [rbp-8h]
  __int64 v183; // [rsp+100h] [rbp+0h]
  int v184; // [rsp+108h] [rbp+8h]
  char v185[8]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v186; // [rsp+118h] [rbp+18h]
  void (__fastcall *v187)(__int64, __int64); // [rsp+120h] [rbp+20h]
  __int64 v188; // [rsp+128h] [rbp+28h]
  int v189; // [rsp+130h] [rbp+30h]
  char v190[8]; // [rsp+138h] [rbp+38h] BYREF
  unsigned int *v191; // [rsp+140h] [rbp+40h]
  void (__fastcall *v192)(__int64, unsigned int *); // [rsp+148h] [rbp+48h]
  __int64 v193; // [rsp+150h] [rbp+50h]
  int v194; // [rsp+158h] [rbp+58h]
  struct _D3DKMT_DISPLAYMODE v195; // [rsp+160h] [rbp+60h] BYREF
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // [rsp+190h] [rbp+90h]
  struct _D3DKMT_DISPLAYMODE *v197; // [rsp+198h] [rbp+98h]
  __int64 v198; // [rsp+1A0h] [rbp+A0h]
  struct _D3DKMT_DISPLAYMODE **v199; // [rsp+1A8h] [rbp+A8h]
  unsigned int *v200; // [rsp+1B0h] [rbp+B0h]
  unsigned int *v201; // [rsp+1B8h] [rbp+B8h]
  struct _D3DKMDT_MONITOR_SOURCE_MODE v202; // [rsp+1C0h] [rbp+C0h] BYREF

  v6 = a5;
  v201 = a6;
  v8 = -1;
  v179 = a4;
  v9 = 0;
  v200 = a3;
  v199 = a2;
  v10 = 255;
  v169 = (__int64)a5;
  while ( 1 )
  {
    v11 = a1[4];
    v12 = *((unsigned int *)a1 + 10);
    v13 = a1[3];
    Rotation[0] = -1;
    v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *))(v11 + 8))(
            v13,
            v12,
            v9,
            Rotation);
    v16 = v14;
    if ( v14 < 0 )
    {
      v155 = (_QWORD *)WdLogNewEntry5_WdAssertion(v15);
      v155[3] = v16;
      v155[4] = *((unsigned int *)a1 + 10);
      v155[5] = v9;
      WdLogEvent5_WdAssertion(v155);
      return (unsigned int)v16;
    }
    v17 = (unsigned int)Rotation[0];
    if ( Rotation[0] == -1 )
      break;
    ++*((_DWORD *)a1 + 13);
    v117 = *((unsigned int *)a1 + 10);
    v161 = 0;
    v160[0] = -1;
    v118 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, int *, _WORD *))(a1[4] + 120LL))(
             a1[3],
             v117,
             v17,
             &v161,
             v160);
    v16 = v118;
    if ( v118 < 0 )
    {
      v120 = (_QWORD *)WdLogNewEntry5_WdError(v119);
      v120[4] = (unsigned int)v8;
      v120[3] = v16;
      v120[5] = *((unsigned int *)a1 + 10);
      WdLogEvent5_WdError(v120);
      return (unsigned int)v16;
    }
    if ( v8 == -1 || v161 < v10 )
    {
      v8 = Rotation[0];
      v10 = v161;
      *((_DWORD *)a1 + 12) = v9;
    }
    ++v9;
  }
  if ( v8 == -1 && *((_DWORD *)a1 + 13) )
  {
    v121 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v121 + 24) = 566LL;
    WdLogEvent5_WdAssertion(v121);
  }
  v18 = v179 != 0LL;
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(*a1 + 2128LL), *((_DWORD *)a1 + 10));
  v170 = v18;
  v19 = v18 + 1;
  v161 = v19;
  if ( v19 > 0 )
  {
    while ( v8 != -1 )
    {
      VideoOutputTechnology = DmmGetVideoOutputTechnology(*a1, (unsigned int)v8, 0LL, &v166);
      v22 = VideoOutputTechnology;
      if ( VideoOutputTechnology < 0 )
      {
        v144 = WdLogNewEntry5_WdError(v21);
        *(_QWORD *)(v144 + 24) = v22;
        WdLogEvent5_WdError(v144);
        return (unsigned int)v22;
      }
      if ( v166 < 15 || (v158 = 1, v166 > 16) )
        v158 = 0;
      if ( DmmGetPreferredMonitorSourceModeOnTarget((void *)*a1, v8, &v202) < 0 )
        memset(&v202, 0, sizeof(v202));
      v23 = a1[2];
      v24 = *((unsigned int *)a1 + 10);
      v25 = a1[1];
      v165 = 0LL;
      v162 = 0LL;
      v26 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *))(v23 + 8);
      v172 = 0LL;
      v173 = 0LL;
      v174 = 0LL;
      v175 = 0;
      v171[0] = 0;
      v27 = v26(v25, v24, &v162, &v165);
      v29 = v27;
      if ( v27 < 0 )
      {
        v143 = WdLogNewEntry5_WdError(v28);
        *(_QWORD *)(v143 + 24) = v29;
        WdLogEvent5_WdError(v143);
        return (unsigned int)v29;
      }
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
        (__int64)v171,
        v162,
        *(_QWORD *)(a1[2] + 16LL),
        a1[1]);
      v162 = 0LL;
      v191 = 0LL;
      v192 = 0LL;
      v30 = *(__int64 (__fastcall **)(__int64, __int64 *))(v165 + 8);
      v193 = 0LL;
      v194 = 0;
      v190[0] = 0;
      v31 = v172;
      v32 = v30(v172, &v162);
      v29 = v32;
      if ( v32 < 0 )
      {
        v142 = WdLogNewEntry5_WdError(v33);
        *(_QWORD *)(v142 + 24) = v29;
        WdLogEvent5_WdError(v142);
        goto LABEL_166;
      }
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
        (__int64)v190,
        v162,
        *(_QWORD *)(v165 + 32),
        v31);
      v34 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a1[1]);
      v35 = v191;
      *(_BYTE *)(v34 + 296) = 1;
      if ( v35 )
      {
        v36 = v19;
        v198 = v19;
        while ( 1 )
        {
          v37 = v35[1];
          v38 = v170;
          if ( v37 - 3 <= 1 || !v170 && v37 == 1 )
          {
            v39 = v35[2];
            if ( v39 == v35[4] )
            {
              v40 = v35[3];
              if ( v40 == v35[5]
                && (!v170
                 || v36 != 2
                 || *(_DWORD *)DisplayModeInfo == v39
                 && *((_DWORD *)DisplayModeInfo + 1) == v40
                 && *((_DWORD *)DisplayModeInfo + 2) == v35[7]) )
              {
                LOBYTE(v38) = 1;
                v41 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BOOL8))(v165 + 40))(v31, *v35, v38);
                v46 = v41;
                if ( v41 < 0 )
                {
                  v122 = WdLogNewEntry5_WdWarning(v43, v42, v44, v45);
                  *(_QWORD *)(v122 + 24) = v46;
                  *(_QWORD *)(v122 + 32) = *v35;
                  WdLogEvent5_WdWarning(v122);
                }
                else
                {
                  v47 = a1[2];
                  v48 = a1[1];
                  v162 = 0LL;
                  v164 = 0LL;
                  v49 = *(__int64 (__fastcall **)(__int64, _QWORD, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **, __int64 *))(v47 + 24);
                  v186 = 0LL;
                  v187 = 0LL;
                  v188 = 0LL;
                  v189 = 0;
                  v185[0] = 0;
                  v50 = v49(v48, (unsigned int)v8, &v164, &v162);
                  v29 = v50;
                  if ( v50 < 0 )
                  {
                    v139 = WdLogNewEntry5_WdError(v51);
                    *(_QWORD *)(v139 + 24) = v29;
                    WdLogEvent5_WdError(v139);
                    goto LABEL_159;
                  }
                  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
                    (__int64)v185,
                    (__int64)v164,
                    *(_QWORD *)(a1[2] + 32LL),
                    a1[1]);
                  v52 = v186;
                  v53 = 0LL;
                  v164 = 0LL;
                  v181 = 0LL;
                  v54 = *(__int64 (__fastcall **)(__int64, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **))(v162 + 8);
                  v182 = 0LL;
                  v183 = 0LL;
                  v184 = 0;
                  v180[0] = 0;
                  v55 = v54(v186, &v164);
                  v29 = v55;
                  if ( v55 < 0 )
                    goto LABEL_150;
                  for ( i = (__int64)v164; ; i = v177 )
                  {
                    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
                      (__int64)v180,
                      i,
                      *(_QWORD *)(v162 + 32),
                      v52);
                    v53 = v181;
                    if ( !v181 )
                      break;
                    LOBYTE(v64) = 1;
                    v65 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v162 + 48))(v52, *v181, v64);
                    v70 = v65;
                    if ( v65 >= 0 )
                    {
                      if ( v35[1] - 3 <= 1 )
                      {
                        v159[0] = 1;
                        v168 = 0;
                        goto LABEL_37;
                      }
                      v71 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, int *))(v162 + 64))(
                              v52,
                              *v53,
                              v159,
                              &v168);
                      v29 = v71;
                      if ( v71 == -1071774920 )
                      {
                        v124 = WdLogNewEntry5_WdTrace(v73, v72, v68, v74);
                        *(_QWORD *)(v124 + 24) = (unsigned int)v8;
                        *(_QWORD *)(v124 + 32) = *((unsigned int *)a1 + 10);
                        goto LABEL_37;
                      }
                      if ( v71 < 0 )
                      {
                        v134 = (_QWORD *)WdLogNewEntry5_WdError(v73);
                        v134[4] = v53;
                      }
                      else
                      {
LABEL_37:
                        v157 = 0;
                        if ( v202.VideoSignalInfo.ActiveSize.cx == v35[2]
                          && v202.VideoSignalInfo.ActiveSize.cy == v35[3] )
                        {
                          LOBYTE(v68) = v158;
                          v115 = (*(__int64 (__fastcall **)(unsigned int *, struct _D3DKMDT_MONITOR_SOURCE_MODE *, __int64, char *))(v162 + 80))(
                                   v53,
                                   &v202,
                                   v68,
                                   &v157);
                          v116 = v157;
                          if ( v115 < 0 )
                            v116 = 0;
                          v157 = v116;
                        }
                        v75 = a1[4];
                        v76 = *((unsigned int *)a1 + 10);
                        v77 = a1[3];
                        v164 = 0LL;
                        v78 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **))(v75 + 24))(
                                v77,
                                v76,
                                (unsigned int)v8,
                                &v164);
                        v29 = v78;
                        if ( v78 >= 0 )
                        {
                          v79 = v164[4];
                          (*(void (__fastcall **)(_QWORD))(a1[4] + 32LL))(a1[3]);
                          v59 = (int *)&unk_1C0038D30;
                          LODWORD(v164) = 0;
                          v176 = (char *)&unk_1C0038D30;
                          while ( 1 )
                          {
                            v58 = *v59;
                            v167 = v58;
                            if ( !BmlIsSupportedPathScaling((enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v58, v79) )
                              goto LABEL_27;
                            LOBYTE(v156) = 1;
                            v80 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(a1[4] + 64LL))(
                                    a1[3],
                                    *((unsigned int *)a1 + 10),
                                    (unsigned int)v8,
                                    (unsigned int)v58,
                                    v156);
                            v29 = v80;
                            if ( v80 < 0 )
                            {
                              v134 = (_QWORD *)WdLogNewEntry5_WdError(v81);
                              v134[3] = v29;
                              v134[4] = *((unsigned int *)a1 + 10);
                              v134[5] = (unsigned int)v8;
                              v134[6] = a1[3];
                              v134[7] = v58;
LABEL_152:
                              WdLogEvent5_WdError(v134);
                              goto LABEL_153;
                            }
                            v82 = *((unsigned int *)a1 + 10);
                            v83 = a1[3];
                            *(_QWORD *)Rotation = 0LL;
                            v84 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *))(a1[4] + 24LL))(
                                    v83,
                                    v82,
                                    (unsigned int)v8,
                                    Rotation);
                            v29 = v84;
                            if ( v84 < 0 )
                              break;
                            v85 = *(_DWORD *)(*(_QWORD *)Rotation + 24LL);
                            (*(void (__fastcall **)(_QWORD))(a1[4] + 32LL))(a1[3]);
                            v86 = D3DKMDT_VPPR_IDENTITY;
                            Rotation[0] = D3DKMDT_VPPR_IDENTITY;
                            do
                            {
                              v87 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(v86) - 1;
                              if ( v87 )
                              {
                                v89 = v87 - 1;
                                if ( v89 )
                                {
                                  v90 = v89 - 1;
                                  if ( v90 )
                                  {
                                    if ( v90 != 1 )
                                      goto LABEL_123;
                                    v91 = (v85 & 8) == 0;
                                  }
                                  else
                                  {
                                    v91 = (v85 & 4) == 0;
                                  }
                                }
                                else
                                {
                                  v91 = (v85 & 2) == 0;
                                }
                                if ( v91 )
                                  goto LABEL_63;
                              }
                              else if ( (v85 & 1) == 0 )
                              {
                                goto LABEL_63;
                              }
                              v92 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(Rotation[0]) - 1;
                              if ( v92 )
                              {
                                v126 = v92 - 1;
                                if ( v126 )
                                {
                                  v127 = v126 - 1;
                                  if ( v127 )
                                  {
                                    if ( v127 != 1 )
                                    {
LABEL_123:
                                      v125 = WdLogNewEntry5_WdAssertion(v88);
                                      *(_QWORD *)(v125 + 24) = Rotation[0];
                                      WdLogEvent5_WdAssertion(v125);
                                      goto LABEL_63;
                                    }
                                    v94 = v85 >> 7;
                                  }
                                  else
                                  {
                                    v94 = v85 >> 6;
                                  }
                                }
                                else
                                {
                                  v94 = v85 >> 5;
                                }
                              }
                              else
                              {
                                v94 = v85 >> 4;
                              }
                              if ( (v94 & 1) != 0 )
                              {
                                if ( !v157 || (v95 = 1, v167 != 1) )
                                  v95 = 0;
                                PopulateDisplayModeFromPresentPath(
                                  (_DWORD)v35,
                                  (_DWORD)v53,
                                  v167,
                                  v93,
                                  v159[0],
                                  v95,
                                  1,
                                  v168,
                                  (__int64)&v195,
                                  (__int64)v160);
                                Mode = MODE_UNION_LIST::FindMode((MODE_UNION_LIST *)(a1 + 8), &v195);
                                v197 = Mode;
                                v98 = Mode;
                                if ( !Mode || (UpgradeDispModeFlags(Mode, &v195, v97, 0LL), LOBYTE(v160[0])) )
                                {
                                  if ( *((_DWORD *)a1 + 13) > 1u )
                                  {
                                    LOBYTE(v156) = 0;
                                    v128 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(a1[4] + 80LL))(
                                             a1[3],
                                             *((unsigned int *)a1 + 10),
                                             (unsigned int)v8,
                                             (unsigned int)Rotation[0],
                                             v156);
                                    v29 = v128;
                                    if ( v128 < 0 )
                                    {
                                      v134 = (_QWORD *)WdLogNewEntry5_WdError(v129);
                                      v134[3] = v29;
                                      v134[4] = *((unsigned int *)a1 + 10);
                                      v134[5] = (unsigned int)v8;
                                      v134[6] = a1[3];
                                      v134[7] = Rotation[0];
                                      goto LABEL_152;
                                    }
                                    v98 = v197;
                                  }
                                  if ( v170 )
                                  {
                                    v135 = v179;
                                    LODWORD(v29) = 0;
                                    v136 = v161 == 2;
                                    v179[1] = 1;
                                    *v135 = v136;
                                    goto LABEL_153;
                                  }
                                  if ( v195.Format != D3DDDIFMT_A8R8G8B8 && *((_BYTE *)a1 + 44)
                                    || v195.Format <= (unsigned int)D3DDDIFMT_P8
                                    && (v99 = 0x20003900000LL, _bittest64(&v99, v195.Format)) )
                                  {
                                    if ( !v169 )
                                      goto LABEL_63;
                                    MODE_UNION_LIST::AddMode((MODE_UNION_LIST *)(a1 + 12), &v195);
                                    goto LABEL_137;
                                  }
                                  if ( !v98 )
                                  {
                                    LODWORD(v29) = MODE_UNION_LIST::AddMode((MODE_UNION_LIST *)(a1 + 8), &v195);
                                    if ( (int)v29 < 0 )
                                      goto LABEL_153;
                                  }
                                  if ( LOBYTE(v160[0]) )
                                  {
                                    ++v195.IntegerRefreshRate;
                                    *(_DWORD *)&v195.Flags |= 2u;
                                    LODWORD(v29) = MODE_UNION_LIST::AddMode((MODE_UNION_LIST *)(a1 + 8), &v195);
LABEL_137:
                                    if ( (int)v29 < 0 )
                                      goto LABEL_153;
                                  }
                                }
                              }
LABEL_63:
                              v86 = Rotation[0] + 1;
                              Rotation[0] = v86;
                            }
                            while ( v86 <= D3DKMDT_VPPR_ROTATE270 );
                            if ( *((_DWORD *)a1 + 13) > 1u )
                            {
                              v130 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(a1[4] + 88LL))(
                                       a1[3],
                                       *((unsigned int *)a1 + 10),
                                       (unsigned int)v8,
                                       0LL);
                              v29 = v130;
                              if ( v130 < 0 )
                              {
                                v132 = (_QWORD *)WdLogNewEntry5_WdError(v131);
                                v132[3] = v29;
                                v132[4] = a1[3];
                                v133 = *((unsigned int *)a1 + 10);
                                goto LABEL_147;
                              }
                            }
LABEL_27:
                            v59 = (int *)(v176 + 4);
                            LODWORD(v164) = (_DWORD)v164 + 1;
                            v176 += 4;
                            if ( (unsigned int)v164 >= 5 )
                            {
                              v60 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(a1[4] + 72LL))(
                                      a1[3],
                                      *((unsigned int *)a1 + 10),
                                      (unsigned int)v8,
                                      0LL);
                              v29 = v60;
                              if ( v60 >= 0 )
                              {
                                v52 = v186;
                                goto LABEL_30;
                              }
                              v132 = (_QWORD *)WdLogNewEntry5_WdError(v61);
                              v132[3] = v29;
                              v132[4] = *((unsigned int *)a1 + 10);
                              v133 = a1[3];
LABEL_147:
                              v132[5] = v133;
                              v132[6] = (unsigned int)v8;
                              WdLogEvent5_WdError(v132);
LABEL_153:
                              v52 = v186;
LABEL_154:
                              if ( v180[0] )
                                v182(v183, v53);
                              if ( v185[0] )
                                v187(v188, v52);
LABEL_159:
                              v31 = v172;
LABEL_163:
                              if ( v190[0] )
                                v192(v193, v35);
LABEL_166:
                              if ( v171[0] )
                                v173(v174, v31);
                              return (unsigned int)v29;
                            }
                          }
                        }
LABEL_150:
                        v134 = (_QWORD *)WdLogNewEntry5_WdError(v56);
                      }
                      v134[3] = v29;
                      goto LABEL_152;
                    }
                    v123 = WdLogNewEntry5_WdWarning(v67, v66, v68, v69);
                    *(_QWORD *)(v123 + 24) = v70;
                    *(_QWORD *)(v123 + 32) = *v53;
                    WdLogEvent5_WdWarning(v123);
LABEL_30:
                    v177 = 0LL;
                    v62 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v162 + 16))(v52, v53, &v177);
                    v29 = v62;
                    if ( v62 < 0 )
                    {
                      v137 = WdLogNewEntry5_WdError(v63);
                      *(_QWORD *)(v137 + 24) = v29;
LABEL_149:
                      WdLogEvent5_WdError(v137);
                      goto LABEL_154;
                    }
                  }
                  v100 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v162 + 56))(v52, 0LL);
                  v29 = v100;
                  if ( v100 < 0 )
                  {
                    v138 = (_QWORD *)WdLogNewEntry5_WdError(v101);
                    v138[3] = v29;
                    v138[4] = v52;
                    v138[5] = 0xFFFFFFFFLL;
                    v137 = (__int64)v138;
                    goto LABEL_149;
                  }
                  if ( v180[0] )
                    v182(v183, 0LL);
                  if ( v185[0] )
                    v187(v188, v52);
                }
                v31 = v172;
              }
            }
          }
          v178 = 0LL;
          v102 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v165 + 16))(v31, v35, &v178);
          v29 = v102;
          if ( v102 < 0 )
          {
            v140 = WdLogNewEntry5_WdError(v103);
            *(_QWORD *)(v140 + 24) = v29;
LABEL_162:
            WdLogEvent5_WdError(v140);
            goto LABEL_163;
          }
          DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
            (__int64)v190,
            v178,
            *(_QWORD *)(v165 + 32),
            v31);
          v35 = v191;
          v36 = v198;
          if ( !v191 )
          {
            v19 = v161;
            break;
          }
        }
      }
      v104 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v165 + 48))(v31, 0LL);
      v29 = v104;
      if ( v104 < 0 )
      {
        v141 = (_QWORD *)WdLogNewEntry5_WdError(v105);
        v141[3] = v29;
        v141[4] = v31;
        v140 = (__int64)v141;
        v141[5] = 0xFFFFFFFFLL;
        goto LABEL_162;
      }
      *(_BYTE *)(ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a1[1]) + 296) = 0;
      if ( v190[0] )
        v192(v193, v35);
      if ( v171[0] )
        v173(v174, v31);
      v161 = --v19;
      if ( v19 <= 0 )
        break;
    }
    v6 = (void **)v169;
  }
  v106 = v199;
  if ( !*v199 )
  {
    v107 = *((_DWORD *)a1 + 20);
    if ( v107 )
    {
      v109 = v107;
      v108 = 44LL * v107;
      if ( !is_mul_ok(v109, 0x2CuLL) )
        v108 = -1LL;
      v110 = (struct _D3DKMT_DISPLAYMODE *)operator new(v108, 0x4B677844u, PagedPool);
      *v106 = v110;
      if ( !v110 )
      {
        v145 = WdLogNewEntry5_WdLowResource(0LL);
        *(_QWORD *)(v145 + 24) = 1083LL;
        WdLogEvent5_WdLowResource(v145);
        return 3221225495LL;
      }
      memset(v110, 0, 44LL * *((unsigned int *)a1 + 20));
    }
  }
  UniqueModes = MODE_UNION_LIST::GetUniqueModes((MODE_UNION_LIST *)(a1 + 8), *((unsigned int *)a1 + 20), *v106, v200);
  v113 = UniqueModes;
  if ( UniqueModes < 0 )
  {
    v146 = WdLogNewEntry5_WdAssertion(v112);
    *(_QWORD *)(v146 + 24) = v113;
    WdLogEvent5_WdAssertion(v146);
  }
  if ( v6 )
  {
    if ( *v6 )
    {
      operator delete(*v6);
      *v6 = 0LL;
    }
    v147 = *((unsigned int *)a1 + 28);
    if ( (_DWORD)v147 )
    {
      v148 = 44 * v147;
      if ( !is_mul_ok(v147, 0x2CuLL) )
        v148 = -1LL;
      v149 = operator new(v148, 0x4B677844u, PagedPool);
      *v6 = v149;
      if ( v149 )
      {
        memset(v149, 0, 44LL * *((unsigned int *)a1 + 28));
        v151 = MODE_UNION_LIST::GetUniqueModes(
                 (MODE_UNION_LIST *)(a1 + 12),
                 *((unsigned int *)a1 + 28),
                 (struct _D3DKMT_DISPLAYMODE *)*v6,
                 v201);
        v153 = v151;
        if ( v151 < 0 )
        {
          v154 = WdLogNewEntry5_WdAssertion(v152);
          *(_QWORD *)(v154 + 24) = v153;
          WdLogEvent5_WdAssertion(v154);
        }
      }
      else
      {
        v150 = WdLogNewEntry5_WdLowResource(0LL);
        *(_QWORD *)(v150 + 24) = 1115LL;
        WdLogEvent5_WdLowResource(v150);
      }
    }
  }
  return 0LL;
}
