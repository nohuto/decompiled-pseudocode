/*
 * XREFs of ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C00D28D8
 * Callers:
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00CF1B0 (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0009E4C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     Template_xxqqqqqqqqx @ 0x1C000E668 (Template_xxqqqqqqqqx.c)
 *     ??0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z @ 0x1C000E800 (--0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z.c)
 *     ??1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ @ 0x1C000E82C (--1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C008EFF4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C008F008 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C0095E00 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     DxgkQueryDmmInterface @ 0x1C00AC588 (DxgkQueryDmmInterface.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C00D2CA4 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY03IPEAE@Z @ 0x1C00D3A7C (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C00DC140 (DxgkQueryMonitorTypeLockHeld.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C0139878 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     _CombineModeList @ 0x1C013B6E0 (_CombineModeList.c)
 *     ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1C01569AC (-IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C0172164 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 */

__int64 __fastcall GetActiveVidPnBasedDisplayModeList(
        DXGADAPTER *a1,
        __int64 a2,
        struct _D3DKMT_GETDISPLAYMODELIST *a3,
        struct _D3DKMT_GETDISPLAYMODELIST *a4)
{
  char v5; // r14
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 VidPnSourceId; // rsi
  __int64 v13; // rdx
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdi
  struct _DXGDMM_INTERFACE *v18; // r13
  struct D3DKMDT_HVIDPN__ *v19; // r15
  __int64 (__fastcall *v20)(DXGADAPTER *, __int64 *, struct _DXGDMM_VIDPN_INTERFACE **); // rax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  ADAPTER_DISPLAY *v27; // rcx
  unsigned __int64 v28; // rdi
  char v29; // r13
  int **SessionViewOwner; // rax
  SESSION_VIEW *v31; // r12
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r14
  unsigned int *v35; // rdx
  int v36; // r9d
  struct DXGGLOBAL *v37; // r12
  bool v38; // zf
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  struct DXGGLOBAL *v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  struct DXGGLOBAL *v53; // rdi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  struct DXGGLOBAL *v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  struct DXGGLOBAL *v63; // r14
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  struct DXGGLOBAL *v68; // r15
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  struct DXGGLOBAL *v73; // r13
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  struct DXGGLOBAL *v78; // r12
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  struct DXGGLOBAL *v95; // rax
  __int64 v96; // rdx
  __int64 v97; // r8
  _QWORD *v99; // rax
  _QWORD *v100; // rax
  __int64 v101; // r8
  __int64 v102; // r9
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r14
  __int64 v104; // rdx
  char v105; // r13
  __int64 v106; // rcx
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rax
  unsigned __int64 v113; // rcx
  __int64 v114; // rax
  int v115; // eax
  __int64 v116; // rcx
  __int64 v117; // r14
  __int64 v118; // rax
  _QWORD *v119; // rax
  unsigned int v120; // r14d
  int v121; // eax
  __int64 v122; // r12
  __int64 v123; // r15
  __int64 v124; // rcx
  _QWORD *v125; // rax
  void *v126; // r15
  __int64 v127; // r13
  __int64 v128; // rcx
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v129; // [rsp+28h] [rbp-D8h]
  unsigned int v130[2]; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v131[8]; // [rsp+38h] [rbp-C8h]
  __int64 v132; // [rsp+40h] [rbp-C0h]
  __int64 v133; // [rsp+48h] [rbp-B8h]
  unsigned __int64 *v134; // [rsp+50h] [rbp-B0h]
  unsigned int *v135; // [rsp+58h] [rbp-A8h]
  __int64 v136; // [rsp+60h] [rbp-A0h]
  __int64 v137; // [rsp+70h] [rbp-90h] BYREF
  struct DXGGLOBAL *v138; // [rsp+78h] [rbp-88h]
  struct _DXGDMM_VIDPN_INTERFACE *v139; // [rsp+80h] [rbp-80h] BYREF
  int v140; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v141; // [rsp+90h] [rbp-70h] BYREF
  struct _DXGDMM_INTERFACE *v142; // [rsp+98h] [rbp-68h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v143; // [rsp+A0h] [rbp-60h] BYREF
  struct DXGGLOBAL *v144; // [rsp+A8h] [rbp-58h]
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v145; // [rsp+B0h] [rbp-50h] BYREF
  struct DXGGLOBAL *v146; // [rsp+B8h] [rbp-48h]
  __int64 v147; // [rsp+C0h] [rbp-40h] BYREF
  void *v148; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v149[8]; // [rsp+D0h] [rbp-30h] BYREF
  struct D3DKMDT_HVIDPN__ *v150; // [rsp+D8h] [rbp-28h]
  void (__fastcall *v151)(__int64, struct D3DKMDT_HVIDPN__ *); // [rsp+E0h] [rbp-20h]
  __int64 v152; // [rsp+E8h] [rbp-18h]
  int v153; // [rsp+F0h] [rbp-10h]
  DXGADAPTER *v154; // [rsp+F8h] [rbp-8h] BYREF
  int v155; // [rsp+100h] [rbp+0h]
  int v156; // [rsp+104h] [rbp+4h]
  __int64 v157; // [rsp+108h] [rbp+8h]
  void *v158; // [rsp+110h] [rbp+10h]
  __int64 v159; // [rsp+118h] [rbp+18h]
  int v160; // [rsp+120h] [rbp+20h]
  int v161[2]; // [rsp+128h] [rbp+28h] BYREF
  struct D3DKMDT_HVIDPN__ *v162; // [rsp+130h] [rbp+30h]
  struct _DXGDMM_VIDPN_INTERFACE *v163; // [rsp+138h] [rbp+38h]
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v164; // [rsp+140h] [rbp+40h]
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v165; // [rsp+148h] [rbp+48h]
  int v166; // [rsp+150h] [rbp+50h]
  bool v167; // [rsp+154h] [rbp+54h]
  int v168; // [rsp+158h] [rbp+58h]
  int v169; // [rsp+15Ch] [rbp+5Ch]
  char v170; // [rsp+160h] [rbp+60h]
  __int64 v171; // [rsp+168h] [rbp+68h]
  void *v172; // [rsp+170h] [rbp+70h]
  __int64 v173; // [rsp+178h] [rbp+78h]
  int v174; // [rsp+180h] [rbp+80h]
  __int64 v175; // [rsp+188h] [rbp+88h]
  void *v176; // [rsp+190h] [rbp+90h]
  __int64 v177; // [rsp+198h] [rbp+98h]
  int v178; // [rsp+1A0h] [rbp+A0h]
  _BYTE v179[16]; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v180[4]; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned int v181[4]; // [rsp+1C8h] [rbp+C8h] BYREF

  v144 = (struct DXGGLOBAL *)a4;
  v138 = (struct DXGGLOBAL *)a3;
  v5 = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2, (__int64)a3, (__int64)a4);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::COUNT_TICKS_IN_SCOPE(
    (DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v179,
    (union _LARGE_INTEGER *)Global + 10);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::~COUNT_TICKS_IN_SCOPE((DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v179);
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal(v9, v8, v10, v11) + 6);
  VidPnSourceId = a3->VidPnSourceId;
  v142 = 0LL;
  v15 = DxgkQueryDmmInterface(a1, v13, &v142, v14);
  v17 = v15;
  if ( v15 < 0 )
  {
    v99 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v99[3] = v17;
    v99[4] = a3->hAdapter;
    v99[5] = a1;
    v99[6] = VidPnSourceId;
    WdLogEvent5_WdError(v99);
    return (unsigned int)v17;
  }
  v139 = 0LL;
  v18 = v142;
  v19 = 0LL;
  v147 = 0LL;
  v151 = 0LL;
  v20 = (__int64 (__fastcall *)(DXGADAPTER *, __int64 *, struct _DXGDMM_VIDPN_INTERFACE **))*((_QWORD *)v142 + 6);
  v152 = 0LL;
  v153 = 0;
  v150 = 0LL;
  v149[0] = 0;
  v21 = v20(a1, &v147, &v139);
  v17 = v21;
  if ( v21 < 0 )
  {
    v100 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    v100[3] = a1;
    v100[4] = v17;
    goto LABEL_48;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v149,
    v147,
    *((_QWORD *)v18 + 8),
    (__int64)a1);
  v145 = 0LL;
  v143 = 0LL;
  v19 = v150;
  v23 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, struct D3DKMDT_HVIDPNTOPOLOGY__ **, struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **))v139)(
          v150,
          &v145,
          &v143);
  v17 = v23;
  if ( v23 < 0 )
  {
    v100 = (_QWORD *)WdLogNewEntry5_WdError(v24);
    v100[3] = v17;
    v100[4] = v19;
    v100[5] = a1;
    v100[6] = VidPnSourceId;
    v100[7] = v139;
    goto LABEL_48;
  }
  v27 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 247);
  v28 = 0LL;
  v141 = 0LL;
  v29 = 0;
  SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v27, (unsigned int)VidPnSourceId, v25, v26);
  v31 = (SESSION_VIEW *)SessionViewOwner;
  if ( !SessionViewOwner
    || *((_DWORD *)SessionViewOwner + 10) <= 1u
    || SESSION_VIEW::IsCrossAdapterView((SESSION_VIEW *)SessionViewOwner)
    || v5
    || (PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v31),
        v104 = *(_QWORD *)(*((_QWORD *)a1 + 247) + 112LL) + 1008 * VidPnSourceId,
        PrimaryDisplaySource != (struct DISPLAY_SOURCE *)v104) )
  {
LABEL_6:
    memset(v180, 255, sizeof(v180));
    v32 = PrepareUnpinnedPathsFromSource(
            v142,
            a1,
            v19,
            v139,
            v145,
            v143,
            VidPnSourceId,
            1u,
            1u,
            1u,
            &v141,
            (unsigned int (*)[4])v180,
            0LL);
    v17 = v32;
    LODWORD(v34) = -1071774925;
    if ( v32 == -1071774925 || (LODWORD(v34) = -1071774886, v32 == -1071774886) )
    {
      v118 = WdLogNewEntry5_WdDmmEvent(v33);
      *(_QWORD *)(v118 + 24) = VidPnSourceId;
      *(_QWORD *)(v118 + 32) = a1;
      WdLogEvent5_WdDmmEvent(v118);
LABEL_52:
      LODWORD(v17) = v34;
      goto LABEL_19;
    }
    if ( v32 >= 0 )
    {
      v28 = v141;
      goto LABEL_10;
    }
    v100 = (_QWORD *)WdLogNewEntry5_WdError(v33);
    v100[3] = VidPnSourceId;
    v100[5] = v17;
LABEL_47:
    v100[4] = a1;
LABEL_48:
    WdLogEvent5_WdError(v100);
    goto LABEL_19;
  }
  v105 = v137;
  do
  {
    v106 = *((_QWORD *)PrimaryDisplaySource + 1);
    LOBYTE(v137) = 0;
    if ( *(DXGADAPTER **)(v106 + 16) != a1 )
    {
      v107 = WdLogNewEntry5_WdAssertion(v106, v104, v101, v102);
      *(_QWORD *)(v107 + 24) = 4450LL;
      WdLogEvent5_WdAssertion(v107);
    }
    if ( (int)DxgkQueryMonitorTypeLockHeld(a1, *((_DWORD *)PrimaryDisplaySource + 239), 0LL, (__int64)&v137, 0LL, 0LL) < 0 )
    {
      v112 = WdLogNewEntry5_WdAssertion(v109, v108, v110, v111);
      *(_QWORD *)(v112 + 24) = 4463LL;
      WdLogEvent5_WdAssertion(v112);
    }
    if ( v28 )
    {
      if ( v105 != (_BYTE)v137 )
        goto LABEL_40;
      v113 = *(unsigned int *)(*((_QWORD *)a1 + 247) + 80LL);
      if ( v28 >= v113 )
      {
        v114 = WdLogNewEntry5_WdAssertion(v113, v108, v110, v111);
        *(_QWORD *)(v114 + 24) = 4474LL;
        WdLogEvent5_WdAssertion(v114);
      }
      v180[v28++] = *((_DWORD *)PrimaryDisplaySource + 4);
    }
    else
    {
      v28 = 1LL;
      v105 = v137;
      v181[0] = *((_DWORD *)PrimaryDisplaySource + 239);
      v180[0] = *((_DWORD *)PrimaryDisplaySource + 4);
    }
    v141 = v28;
LABEL_40:
    PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v31, PrimaryDisplaySource);
  }
  while ( PrimaryDisplaySource );
  if ( v28 <= 1 )
  {
    v29 = 0;
    goto LABEL_6;
  }
  v29 = 1;
  v115 = DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource(a1, v180, v28, v19, v181);
  v117 = v115;
  if ( v115 < 0 )
  {
    v100 = (_QWORD *)WdLogNewEntry5_WdError(v116);
    LODWORD(v17) = -1071775483;
    v100[3] = VidPnSourceId;
    v100[5] = v117;
    v100[6] = -1071775483LL;
    goto LABEL_47;
  }
LABEL_10:
  if ( v144 )
    v35 = (unsigned int *)((char *)v144 + 16);
  else
    v35 = 0LL;
  if ( v144 )
    v36 = (_DWORD)v144 + 8;
  else
    v36 = 0;
  v37 = v138;
  v38 = *((_QWORD *)a1 + 248) == 0LL;
  v163 = v139;
  v168 = -1;
  v164 = v145;
  v165 = v143;
  v39 = *((_DWORD *)v138 + 1);
  v167 = v38;
  v166 = v39;
  v169 = 0;
  v170 = 0;
  v174 = 0;
  v178 = 0;
  v171 = 0LL;
  v172 = 0LL;
  v173 = 0LL;
  v175 = 0LL;
  v176 = 0LL;
  v177 = 0LL;
  *(_QWORD *)v161 = a1;
  v162 = v19;
  v34 = (int)OBTAIN_MODES_ON_SOURCE::operator()((int)v161, (int)v138 + 8, (int)v138 + 16, v36, v35);
  operator delete(v176);
  operator delete(v172);
  if ( (int)v34 < 0 )
  {
    v119 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v40, v42, v43);
    v119[3] = v34;
    v119[4] = v19;
    v119[5] = a1;
    v119[6] = VidPnSourceId;
    v119[7] = v28;
    WdLogEvent5_WdWarning(v119);
    goto LABEL_52;
  }
  if ( v29 )
  {
    v120 = 0;
    if ( v28 )
    {
      v41 = 0LL;
      do
      {
        v121 = *((_DWORD *)v37 + 1);
        v122 = v181[v41];
        v148 = 0LL;
        v140 = 0;
        v155 = v121;
        v160 = 0;
        v157 = 0LL;
        v158 = 0LL;
        v159 = 0LL;
        v154 = a1;
        v156 = v122;
        v123 = (int)OBTAIN_PREFERRED_MODES_ON_PATH::operator()(&v154, &v148, &v140);
        operator delete(v158);
        if ( (int)v123 >= 0 )
        {
          v126 = v148;
          if ( !v148 )
            goto LABEL_61;
          v127 = (int)CombineModeList((int)v138 + 16, (int)v138 + 8, v140, (_DWORD)v148, 0);
          operator delete(v126);
          if ( (int)v127 >= 0 )
            goto LABEL_61;
          v125 = (_QWORD *)WdLogNewEntry5_WdWarning(v128, v40, v42, v43);
          v125[6] = v127;
        }
        else
        {
          v125 = (_QWORD *)WdLogNewEntry5_WdWarning(v124, v40, v42, v43);
          v125[6] = v123;
        }
        v125[3] = VidPnSourceId;
        v125[4] = v122;
        v125[5] = a1;
        WdLogEvent5_WdWarning(v125);
LABEL_61:
        v37 = v138;
        v41 = ++v120;
      }
      while ( v120 < v28 );
    }
  }
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)DXGGLOBAL::GetGlobal(v41, v40, v42, v43) + 1,
    *((unsigned int *)v37 + 4));
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10) != 0 )
  {
    v48 = DXGGLOBAL::GetGlobal(v45, v44, v46, v47);
    v53 = DXGGLOBAL::GetGlobal(v50, v49, v51, v52);
    v58 = DXGGLOBAL::GetGlobal(v55, v54, v56, v57);
    v63 = DXGGLOBAL::GetGlobal(v60, v59, v61, v62);
    v68 = DXGGLOBAL::GetGlobal(v65, v64, v66, v67);
    v73 = DXGGLOBAL::GetGlobal(v70, v69, v71, v72);
    v78 = DXGGLOBAL::GetGlobal(v75, v74, v76, v77);
    v144 = DXGGLOBAL::GetGlobal(v80, v79, v81, v82);
    v146 = DXGGLOBAL::GetGlobal(v84, v83, v85, v86);
    v138 = DXGGLOBAL::GetGlobal(v88, v87, v89, v90);
    v95 = DXGGLOBAL::GetGlobal(v92, v91, v93, v94);
    LODWORD(v136) = *((_DWORD *)v53 + 19);
    LODWORD(v135) = *((_DWORD *)v58 + 18);
    LODWORD(v134) = *((_DWORD *)v63 + 15);
    LODWORD(v133) = *((_DWORD *)v68 + 14);
    LODWORD(v132) = *((_DWORD *)v73 + 11);
    *(_DWORD *)v131 = *((_DWORD *)v78 + 10);
    v130[0] = *((_DWORD *)v144 + 9);
    LODWORD(v129) = *((_DWORD *)v146 + 6);
    Template_xxqqqqqqqqx(
      *(unsigned int *)v131,
      v96,
      v97,
      *((_QWORD *)v95 + 1),
      *((_QWORD *)v138 + 2),
      v129,
      *(_QWORD *)v130,
      *(_QWORD *)v131,
      v132,
      v133,
      v134,
      v135,
      v136,
      *((_QWORD *)v48 + 10));
  }
  v19 = v150;
  LODWORD(v17) = 0;
LABEL_19:
  if ( v149[0] )
    v151(v152, v19);
  return (unsigned int)v17;
}
