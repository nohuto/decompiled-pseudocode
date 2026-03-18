/*
 * XREFs of ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C00D2CA4
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C00D28D8 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0007520 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0009E4C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ??9@YA_NAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0@Z @ 0x1C000A270 (--9@YA_NAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_TARGET_MODE@@Q6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@0@Z1@Z @ 0x1C000E77C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C009B3D4 (-BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_P.c)
 *     ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C009B430 (-BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT.c)
 *     ?AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00D3468 (-AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C00D3560 (-GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ?FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z @ 0x1C00D36D0 (-FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z.c)
 *     _PopulateDisplayModeFromPresentPath @ 0x1C00D3740 (_PopulateDisplayModeFromPresentPath.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00D388C (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     _UpgradeDispModeFlags @ 0x1C013BA98 (_UpgradeDispModeFlags.c)
 */

__int64 __fastcall OBTAIN_MODES_ON_SOURCE::operator()(
        __int64 a1,
        struct _D3DKMT_DISPLAYMODE **a2,
        unsigned int *a3,
        void **a4,
        unsigned int *a5)
{
  unsigned int v5; // r12d
  unsigned int v6; // ebx
  void **v7; // r15
  struct _D3DKMT_DISPLAYMODE **v8; // r13
  int v10; // r14d
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 (__fastcall *v22)(__int64, __int64, __int64 *, __int64 *); // rax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r14
  __int64 (__fastcall *v26)(__int64, __int64 *); // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r8
  unsigned int *v31; // r15
  unsigned int v32; // ecx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 (__fastcall *v41)(__int64, _QWORD, __int64 *, __int64 *); // rax
  int v42; // eax
  __int64 v43; // rcx
  __int64 (__fastcall *v44)(__int64, __int64 *); // rax
  int v45; // eax
  __int64 v46; // rcx
  __int64 i; // rdx
  __int64 v48; // rbx
  __int64 v49; // r8
  __int64 v50; // r9
  int *v51; // rcx
  int v52; // eax
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // r8
  unsigned int *v57; // r13
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rbx
  int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  int v72; // eax
  unsigned int v73; // edi
  int v74; // eax
  __int64 v75; // rcx
  __int64 v76; // rax
  int v77; // eax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT v78; // ebx
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v79; // eax
  char v80; // cl
  struct _D3DKMT_DISPLAYMODE *v81; // rcx
  __int64 v82; // rdx
  int v83; // eax
  unsigned int v84; // eax
  SIZE_T v85; // rax
  unsigned __int64 v86; // kr00_8
  struct _D3DKMT_DISPLAYMODE *v87; // rax
  int UniqueModes; // eax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rbx
  __int64 v95; // rdx
  int v96; // eax
  __int64 v97; // rcx
  _QWORD *v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  int v105; // eax
  __int64 v106; // rcx
  bool v107; // sf
  int v108; // eax
  __int64 v109; // rcx
  _QWORD *v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rcx
  SIZE_T v116; // rax
  PVOID v117; // rax
  __int64 v118; // rax
  int v119; // eax
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rbx
  __int64 v125; // rax
  _QWORD *v126; // rax
  int v127; // [rsp+28h] [rbp-E0h]
  char v128[8]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v129; // [rsp+60h] [rbp-A8h] BYREF
  int v130[2]; // [rsp+68h] [rbp-A0h] BYREF
  int v131[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v132; // [rsp+78h] [rbp-90h] BYREF
  __int64 v133; // [rsp+80h] [rbp-88h] BYREF
  int v134; // [rsp+88h] [rbp-80h] BYREF
  void **v135; // [rsp+90h] [rbp-78h]
  char v136[8]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v137; // [rsp+A0h] [rbp-68h]
  void (__fastcall *v138)(__int64, __int64); // [rsp+A8h] [rbp-60h]
  __int64 v139; // [rsp+B0h] [rbp-58h]
  int v140; // [rsp+B8h] [rbp-50h]
  char v141[8]; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v142; // [rsp+C8h] [rbp-40h]
  void (__fastcall *v143)(__int64, __int64); // [rsp+D0h] [rbp-38h]
  __int64 v144; // [rsp+D8h] [rbp-30h]
  int v145; // [rsp+E0h] [rbp-28h]
  char *v146; // [rsp+E8h] [rbp-20h]
  __int64 v147; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v148; // [rsp+F8h] [rbp-10h] BYREF
  char v149[8]; // [rsp+100h] [rbp-8h] BYREF
  unsigned int *v150; // [rsp+108h] [rbp+0h]
  void (__fastcall *v151)(__int64, unsigned int *); // [rsp+110h] [rbp+8h]
  __int64 v152; // [rsp+118h] [rbp+10h]
  int v153; // [rsp+120h] [rbp+18h]
  char v154[8]; // [rsp+128h] [rbp+20h] BYREF
  unsigned int *v155; // [rsp+130h] [rbp+28h]
  void (__fastcall *v156)(__int64, unsigned int *); // [rsp+138h] [rbp+30h]
  __int64 v157; // [rsp+140h] [rbp+38h]
  int v158; // [rsp+148h] [rbp+40h]
  struct _D3DKMT_DISPLAYMODE v159; // [rsp+150h] [rbp+48h] BYREF
  struct _D3DKMT_DISPLAYMODE *Mode; // [rsp+180h] [rbp+78h]
  unsigned int *v161; // [rsp+188h] [rbp+80h]
  struct _D3DKMT_DISPLAYMODE **v162; // [rsp+190h] [rbp+88h]
  struct _D3DKMDT_MONITOR_SOURCE_MODE v163; // [rsp+198h] [rbp+90h] BYREF

  v5 = -1;
  v135 = a4;
  v6 = 0;
  v161 = a3;
  v7 = a4;
  v162 = a2;
  v8 = a2;
  v10 = 255;
  while ( 1 )
  {
    v11 = *(_QWORD *)(a1 + 32);
    v131[0] = -1;
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *))(v11 + 8))(
            *(_QWORD *)(a1 + 24),
            *(unsigned int *)(a1 + 40),
            v6,
            v131);
    v17 = v12;
    if ( v12 < 0 )
    {
      v126 = (_QWORD *)WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
      v126[3] = v17;
      v126[4] = *(unsigned int *)(a1 + 40);
      v126[5] = v6;
      WdLogEvent5_WdAssertion(v126);
      return (unsigned int)v17;
    }
    v18 = (unsigned int)v131[0];
    if ( v131[0] == -1 )
      break;
    ++*(_DWORD *)(a1 + 52);
    v130[0] = 0;
    v95 = *(unsigned int *)(a1 + 40);
    *(_WORD *)&v128[4] = -1;
    v96 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, int *, char *))(*(_QWORD *)(a1 + 32) + 120LL))(
            *(_QWORD *)(a1 + 24),
            v95,
            v18,
            v130,
            &v128[4]);
    v17 = v96;
    if ( v96 < 0 )
    {
      v98 = (_QWORD *)WdLogNewEntry5_WdError(v97);
      v98[4] = v5;
      v98[3] = v17;
      v98[5] = *(unsigned int *)(a1 + 40);
      WdLogEvent5_WdError(v98);
      return (unsigned int)v17;
    }
    if ( v5 == -1 || v130[0] < v10 )
    {
      v5 = v131[0];
      v10 = v130[0];
      *(_DWORD *)(a1 + 48) = v6;
    }
    ++v6;
  }
  if ( v5 == -1 )
  {
    if ( *(_DWORD *)(a1 + 52) )
    {
      v99 = WdLogNewEntry5_WdAssertion(v14, v13, (unsigned int)v131[0], v16);
      *(_QWORD *)(v99 + 24) = 561LL;
      WdLogEvent5_WdAssertion(v99);
    }
  }
  else
  {
    if ( DmmGetPreferredMonitorSourceModeOnTarget(*(void **)a1, v5, &v163) < 0 )
      memset(&v163, 0, sizeof(v163));
    v19 = *(_QWORD *)(a1 + 16);
    v20 = *(unsigned int *)(a1 + 40);
    v21 = *(_QWORD *)(a1 + 8);
    v133 = 0LL;
    v129 = 0LL;
    v22 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *))(v19 + 8);
    v142 = 0LL;
    v143 = 0LL;
    v144 = 0LL;
    v145 = 0;
    v141[0] = 0;
    v23 = v22(v21, v20, &v129, &v133);
    v25 = v23;
    if ( v23 < 0 )
    {
      v100 = WdLogNewEntry5_WdError(v24);
      *(_QWORD *)(v100 + 24) = v25;
      WdLogEvent5_WdError(v100);
      return (unsigned int)v25;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v141,
      v129,
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
      *(_QWORD *)(a1 + 8));
    v129 = 0LL;
    v155 = 0LL;
    v26 = *(__int64 (__fastcall **)(__int64, __int64 *))(v133 + 8);
    v156 = 0LL;
    v157 = 0LL;
    v158 = 0;
    v154[0] = 0;
    v27 = v26(v142, &v129);
    v25 = v27;
    if ( v27 < 0 )
    {
      v101 = WdLogNewEntry5_WdError(v28);
      *(_QWORD *)(v101 + 24) = v25;
      WdLogEvent5_WdError(v101);
      goto LABEL_117;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
      (__int64)v154,
      v129,
      *(_QWORD *)(v133 + 32),
      v142);
    v29 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*(_QWORD *)(a1 + 8));
    v31 = v155;
    *(_BYTE *)(v29 + 296) = 1;
    if ( v31 )
    {
      do
      {
        v32 = v31[1];
        if ( ((v32 - 1) & 0xFFFFFFFC) == 0 && v32 != 2 && v31[2] == v31[4] && v31[3] == v31[5] )
        {
          LOBYTE(v30) = 1;
          v33 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v133 + 40))(v142, *v31, v30);
          v38 = v33;
          if ( v33 < 0 )
          {
            v102 = WdLogNewEntry5_WdWarning(v35, v34, v36, v37);
            *(_QWORD *)(v102 + 24) = v38;
            *(_QWORD *)(v102 + 32) = *v31;
            WdLogEvent5_WdWarning(v102);
          }
          else
          {
            v39 = *(_QWORD *)(a1 + 16);
            v40 = *(_QWORD *)(a1 + 8);
            v129 = 0LL;
            v132 = 0LL;
            v41 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, __int64 *))(v39 + 24);
            v137 = 0LL;
            v138 = 0LL;
            v139 = 0LL;
            v140 = 0;
            v136[0] = 0;
            v42 = v41(v40, v5, &v132, &v129);
            v25 = v42;
            if ( v42 < 0 )
              goto LABEL_114;
            DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
              (__int64)v136,
              v132,
              *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL),
              *(_QWORD *)(a1 + 8));
            v132 = 0LL;
            v150 = 0LL;
            v44 = *(__int64 (__fastcall **)(__int64, __int64 *))(v129 + 8);
            v151 = 0LL;
            v152 = 0LL;
            v153 = 0;
            v149[0] = 0;
            v45 = v44(v137, &v132);
            v25 = v45;
            if ( v45 < 0 )
            {
              v111 = WdLogNewEntry5_WdError(v46);
              *(_QWORD *)(v111 + 24) = v25;
              WdLogEvent5_WdError(v111);
              goto LABEL_112;
            }
            for ( i = v132; ; i = v148 )
            {
              DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
                (__int64)v149,
                i,
                *(_QWORD *)(v129 + 32),
                v137);
              v57 = v150;
              if ( !v150 )
                break;
              LOBYTE(v56) = 1;
              v58 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v129 + 48))(v137, *v150, v56);
              v63 = v58;
              if ( v58 >= 0 )
              {
                if ( v31[1] - 3 <= 1 )
                {
                  v128[1] = 1;
                  v134 = 0;
                }
                else
                {
                  v64 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, int *))(v129 + 64))(
                          v137,
                          *v57,
                          &v128[1],
                          &v134);
                  v25 = v64;
                  if ( v64 == -1071774920 )
                  {
                    v104 = WdLogNewEntry5_WdTrace(v66, v65, v67, v68);
                    *(_QWORD *)(v104 + 24) = v5;
                    *(_QWORD *)(v104 + 32) = *(unsigned int *)(a1 + 40);
                  }
                  else if ( v64 < 0 )
                  {
                    v110 = (_QWORD *)WdLogNewEntry5_WdError(v66);
                    v110[3] = v25;
                    v110[4] = v57;
                    goto LABEL_110;
                  }
                }
                if ( operator!=((__int64)(v57 + 2), (__int64)&v163.VideoSignalInfo)
                  || v163.VideoSignalInfo.ActiveSize.cx != v31[2]
                  || (v128[0] = 1, v163.VideoSignalInfo.ActiveSize.cy != v31[3]) )
                {
                  v128[0] = 0;
                }
                v69 = *(_QWORD *)(a1 + 32);
                v70 = *(unsigned int *)(a1 + 40);
                v71 = *(_QWORD *)(a1 + 24);
                v132 = 0LL;
                v72 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(v69 + 24))(v71, v70, v5, &v132);
                v25 = v72;
                if ( v72 < 0 )
                {
LABEL_107:
                  v110 = (_QWORD *)WdLogNewEntry5_WdError(v55);
                  v110[3] = v25;
                  goto LABEL_110;
                }
                v73 = *(_DWORD *)(v132 + 16);
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 32) + 32LL))(*(_QWORD *)(a1 + 24));
                LODWORD(v132) = 0;
                v51 = (int *)&unk_1C002FA08;
                v146 = (char *)&unk_1C002FA08;
                while ( 2 )
                {
                  v48 = *v51;
                  v130[0] = v48;
                  if ( !BmlIsSupportedPathScaling((unsigned int)v48, v73, v49, v50) )
                    goto LABEL_19;
                  LOBYTE(v127) = 1;
                  v74 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)(a1 + 32) + 64LL))(
                          *(_QWORD *)(a1 + 24),
                          *(unsigned int *)(a1 + 40),
                          v5,
                          (unsigned int)v48,
                          v127);
                  v25 = v74;
                  if ( v74 < 0 )
                  {
                    v110 = (_QWORD *)WdLogNewEntry5_WdError(v75);
                    v110[3] = v25;
                    v110[4] = *(unsigned int *)(a1 + 40);
                    v110[5] = v5;
                    v110[6] = *(_QWORD *)(a1 + 24);
                    v110[7] = v48;
                    goto LABEL_110;
                  }
                  v76 = *(_QWORD *)(a1 + 32);
                  *(_QWORD *)v131 = 0LL;
                  v77 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *))(v76 + 24))(
                          *(_QWORD *)(a1 + 24),
                          *(unsigned int *)(a1 + 40),
                          v5,
                          v131);
                  v25 = v77;
                  if ( v77 < 0 )
                    goto LABEL_107;
                  v78 = *(struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)(*(_QWORD *)v131 + 24LL);
                  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 32) + 32LL))(*(_QWORD *)(a1 + 24));
                  v79 = D3DKMDT_VPPR_IDENTITY;
                  v131[0] = 1;
LABEL_35:
                  if ( BmlIsSupportedPathRotation(v79, v78) )
                  {
                    v80 = v128[0] && v130[0] == 1;
                    PopulateDisplayModeFromPresentPath(
                      (int)v31,
                      (int)v57,
                      v130[0],
                      v131[0],
                      v128[1],
                      v80,
                      1,
                      v134,
                      (__int64)&v159,
                      (unsigned __int8 *)&v128[4]);
                    Mode = MODE_UNION_LIST::FindMode((MODE_UNION_LIST *)(a1 + 64), &v159);
                    v81 = Mode;
                    if ( !Mode || (UpgradeDispModeFlags(Mode, &v159), v128[4]) )
                    {
                      if ( *(_DWORD *)(a1 + 52) > 1u )
                      {
                        LOBYTE(v127) = 0;
                        v105 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)(a1 + 32)
                                                                                              + 80LL))(
                                 *(_QWORD *)(a1 + 24),
                                 *(unsigned int *)(a1 + 40),
                                 v5,
                                 (unsigned int)v131[0],
                                 v127);
                        v25 = v105;
                        if ( v105 < 0 )
                        {
                          v110 = (_QWORD *)WdLogNewEntry5_WdError(v106);
                          v110[3] = v25;
                          v110[4] = *(unsigned int *)(a1 + 40);
                          v110[5] = v5;
                          v110[6] = *(_QWORD *)(a1 + 24);
                          v110[7] = v131[0];
                          goto LABEL_110;
                        }
                        v81 = Mode;
                      }
                      if ( v159.Format != D3DDDIFMT_A8R8G8B8 && *(_BYTE *)(a1 + 44)
                        || v159.Format <= (unsigned int)D3DDDIFMT_P8
                        && (v82 = 0x20003900000LL, _bittest64(&v82, v159.Format)) )
                      {
                        if ( !v135 )
                          goto LABEL_47;
                        MODE_UNION_LIST::AddMode((MODE_UNION_LIST *)(a1 + 96), &v159);
                        v107 = (int)v25 < 0;
                      }
                      else
                      {
                        if ( !v81 )
                        {
                          LODWORD(v25) = MODE_UNION_LIST::AddMode((MODE_UNION_LIST *)(a1 + 64), &v159);
                          if ( (int)v25 < 0 )
                            goto LABEL_100;
                        }
                        if ( !v128[4] )
                          goto LABEL_47;
                        ++v159.IntegerRefreshRate;
                        *(_DWORD *)&v159.Flags |= 2u;
                        LODWORD(v25) = MODE_UNION_LIST::AddMode((MODE_UNION_LIST *)(a1 + 64), &v159);
                        v107 = (int)v25 < 0;
                      }
                      if ( v107 )
                        goto LABEL_100;
                    }
                  }
LABEL_47:
                  v79 = v131[0] + 1;
                  v131[0] = v79;
                  if ( v79 > D3DKMDT_VPPR_ROTATE270 )
                  {
                    if ( *(_DWORD *)(a1 + 52) > 1u )
                    {
                      v108 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(a1 + 32) + 88LL))(
                               *(_QWORD *)(a1 + 24),
                               *(unsigned int *)(a1 + 40),
                               v5,
                               0LL);
                      v25 = v108;
                      if ( v108 < 0 )
                      {
                        v110 = (_QWORD *)WdLogNewEntry5_WdError(v109);
                        v110[3] = v25;
                        v110[4] = *(_QWORD *)(a1 + 24);
                        v110[5] = *(unsigned int *)(a1 + 40);
                        v110[6] = v5;
                        goto LABEL_110;
                      }
                    }
LABEL_19:
                    v51 = (int *)(v146 + 4);
                    LODWORD(v132) = v132 + 1;
                    v146 += 4;
                    if ( (unsigned int)v132 >= 5 )
                    {
                      v52 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(a1 + 32) + 72LL))(
                              *(_QWORD *)(a1 + 24),
                              *(unsigned int *)(a1 + 40),
                              v5,
                              0LL);
                      v25 = v52;
                      if ( v52 >= 0 )
                        goto LABEL_21;
                      v110 = (_QWORD *)WdLogNewEntry5_WdError(v53);
                      v110[3] = v25;
                      v110[4] = *(unsigned int *)(a1 + 40);
                      v110[5] = *(_QWORD *)(a1 + 24);
                      v110[6] = v5;
LABEL_110:
                      WdLogEvent5_WdError(v110);
LABEL_100:
                      if ( v149[0] )
                        v151(v152, v57);
LABEL_112:
                      if ( v136[0] )
                        v138(v139, v137);
LABEL_115:
                      if ( v154[0] )
                        v156(v157, v31);
LABEL_117:
                      if ( v141[0] )
                        v143(v144, v142);
                      return (unsigned int)v25;
                    }
                    continue;
                  }
                  goto LABEL_35;
                }
              }
              v103 = WdLogNewEntry5_WdWarning(v60, v59, v61, v62);
              *(_QWORD *)(v103 + 24) = v63;
              *(_QWORD *)(v103 + 32) = *v57;
              WdLogEvent5_WdWarning(v103);
LABEL_21:
              v148 = 0LL;
              v54 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v129 + 16))(v137, v57, &v148);
              v25 = v54;
              if ( v54 < 0 )
                goto LABEL_107;
            }
            (*(void (__fastcall **)(__int64, _QWORD))(v129 + 56))(v137, 0LL);
            if ( v149[0] )
              v151(v152, 0LL);
            if ( v136[0] )
              v138(v139, v137);
          }
        }
        v147 = 0LL;
        v83 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v133 + 16))(v142, v31, &v147);
        v25 = v83;
        if ( v83 < 0 )
        {
LABEL_114:
          v112 = WdLogNewEntry5_WdError(v43);
          *(_QWORD *)(v112 + 24) = v25;
          WdLogEvent5_WdError(v112);
          goto LABEL_115;
        }
        DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
          (__int64)v154,
          v147,
          *(_QWORD *)(v133 + 32),
          v142);
        v31 = v155;
      }
      while ( v155 );
      v8 = v162;
    }
    (*(void (__fastcall **)(__int64, _QWORD))(v133 + 48))(v142, 0LL);
    *(_BYTE *)(ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*(_QWORD *)(a1 + 8)) + 296) = 0;
    if ( v154[0] )
      v156(v157, v31);
    if ( v141[0] )
      v143(v144, v142);
    v7 = v135;
  }
  if ( !*v8 )
  {
    v84 = *(_DWORD *)(a1 + 80);
    if ( v84 )
    {
      v86 = v84;
      v85 = 44LL * v84;
      if ( !is_mul_ok(v86, 0x2CuLL) )
        v85 = -1LL;
      v87 = (struct _D3DKMT_DISPLAYMODE *)operator new[](v85, 0x4B677844u, PagedPool);
      *v8 = v87;
      if ( !v87 )
      {
        v113 = WdLogNewEntry5_WdLowResource(0LL);
        *(_QWORD *)(v113 + 24) = 1029LL;
        WdLogEvent5_WdLowResource(v113);
        return 3221225495LL;
      }
      memset(v87, 0, 44LL * *(unsigned int *)(a1 + 80));
    }
  }
  UniqueModes = MODE_UNION_LIST::GetUniqueModes((MODE_UNION_LIST *)(a1 + 64), *(unsigned int *)(a1 + 80), *v8, v161);
  v93 = UniqueModes;
  if ( UniqueModes < 0 )
  {
    v114 = WdLogNewEntry5_WdAssertion(v90, v89, v91, v92);
    *(_QWORD *)(v114 + 24) = v93;
    WdLogEvent5_WdAssertion(v114);
  }
  if ( v7 )
  {
    if ( *v7 )
    {
      operator delete(*v7);
      *v7 = 0LL;
    }
    v115 = *(unsigned int *)(a1 + 112);
    if ( (_DWORD)v115 )
    {
      v116 = 44 * v115;
      if ( !is_mul_ok(*(unsigned int *)(a1 + 112), 0x2CuLL) )
        v116 = -1LL;
      v117 = operator new[](v116, 0x4B677844u, PagedPool);
      *v7 = v117;
      if ( v117 )
      {
        memset(v117, 0, 44LL * *(unsigned int *)(a1 + 112));
        v119 = MODE_UNION_LIST::GetUniqueModes(
                 (MODE_UNION_LIST *)(a1 + 96),
                 *(unsigned int *)(a1 + 112),
                 (struct _D3DKMT_DISPLAYMODE *)*v7,
                 a5);
        v124 = v119;
        if ( v119 < 0 )
        {
          v125 = WdLogNewEntry5_WdAssertion(v121, v120, v122, v123);
          *(_QWORD *)(v125 + 24) = v124;
          WdLogEvent5_WdAssertion(v125);
        }
      }
      else
      {
        v118 = WdLogNewEntry5_WdLowResource(0LL);
        *(_QWORD *)(v118 + 24) = 1061LL;
        WdLogEvent5_WdLowResource(v118);
      }
    }
  }
  return 0LL;
}
