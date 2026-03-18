/*
 * XREFs of ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C0140988
 * Callers:
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C0126140 (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@PEAUDXGK_STEREO_PARAMS@@@.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000A5E8 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ??0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z @ 0x1C000DA68 (--0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z.c)
 *     ??1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ @ 0x1C000DA94 (--1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ.c)
 *     Template_xxqqqqqqqqx @ 0x1C001012C (Template_xxqqqqqqqqx.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C009C02C (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C009DB50 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C009DB64 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     DxgkQueryDmmInterface @ 0x1C00AD984 (DxgkQueryDmmInterface.c)
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C00E7738 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C00E7F40 (DxgkQueryMonitorTypeLockHeld.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z @ 0x1C013E230 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C013EEBC (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     sub_1C0141B0C @ 0x1C0141B0C (sub_1C0141B0C.c)
 *     ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1C015ACC4 (-IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C01769E4 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 */

__int64 __fastcall GetActiveVidPnBasedDisplayModeList(
        DXGADAPTER *a1,
        char a2,
        struct _D3DKMT_GETDISPLAYMODELIST *a3,
        struct _D3DKMT_GETDISPLAYMODELIST *a4,
        struct DXGK_STEREO_PARAMS *a5)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rcx
  __int64 VidPnSourceId; // rsi
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  _QWORD *v15; // rax
  struct _DXGDMM_INTERFACE *v16; // r13
  struct D3DKMDT_HVIDPN__ *v17; // r14
  __int64 (__fastcall *v18)(DXGADAPTER *, __int64 *, struct _DXGDMM_VIDPN_INTERFACE **); // rax
  int v19; // eax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  ADAPTER_DISPLAY *v24; // rcx
  unsigned __int64 v25; // rdi
  char v26; // r13
  int **SessionViewOwner; // rax
  SESSION_VIEW *v28; // r12
  int v29; // r11d
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r15
  char v31; // r13
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // r15
  unsigned int *v41; // rdi
  struct _DXGDMM_VIDPN_INTERFACE *v42; // r9
  __int64 i; // rcx
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // r15
  __int64 v47; // rax
  unsigned int *v48; // r8
  void **v49; // rdx
  struct _D3DKMT_GETDISPLAYMODELIST *v50; // r12
  bool v51; // zf
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  _QWORD *v56; // rax
  unsigned int v57; // r14d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v58; // eax
  __int64 v59; // r12
  __int64 v60; // r15
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  _QWORD *v65; // rax
  void *v66; // r15
  __int64 v67; // r13
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rcx
  struct DXGGLOBAL *v73; // rdi
  __int64 v74; // rcx
  struct DXGGLOBAL *v75; // rbx
  __int64 v76; // rcx
  struct DXGGLOBAL *v77; // rsi
  __int64 v78; // rcx
  struct DXGGLOBAL *v79; // r14
  __int64 v80; // rcx
  struct DXGGLOBAL *v81; // r15
  __int64 v82; // rcx
  struct DXGGLOBAL *v83; // r13
  __int64 v84; // rcx
  struct DXGGLOBAL *v85; // r12
  __int64 v86; // rcx
  __int64 v87; // rcx
  __int64 v88; // rcx
  __int64 v89; // rcx
  struct DXGGLOBAL *v90; // rax
  __int64 v91; // rdx
  __int64 v92; // r8
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v94; // [rsp+28h] [rbp-D8h]
  unsigned int v95[2]; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v96[8]; // [rsp+38h] [rbp-C8h]
  unsigned __int8 v97[8]; // [rsp+40h] [rbp-C0h]
  __int64 v98; // [rsp+48h] [rbp-B8h]
  unsigned __int64 *v99; // [rsp+50h] [rbp-B0h]
  unsigned int *v100; // [rsp+58h] [rbp-A8h]
  __int64 v101; // [rsp+60h] [rbp-A0h]
  char v102; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v103; // [rsp+74h] [rbp-8Ch] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v104; // [rsp+78h] [rbp-88h] BYREF
  bool *v105; // [rsp+80h] [rbp-80h]
  struct _D3DKMT_GETDISPLAYMODELIST *v106; // [rsp+88h] [rbp-78h]
  unsigned __int64 v107; // [rsp+90h] [rbp-70h] BYREF
  struct DXGGLOBAL *v108; // [rsp+98h] [rbp-68h]
  struct DXGGLOBAL *v109; // [rsp+A0h] [rbp-60h]
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v110; // [rsp+A8h] [rbp-58h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v111; // [rsp+B0h] [rbp-50h] BYREF
  struct _DXGDMM_INTERFACE *v112; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v113; // [rsp+C0h] [rbp-40h] BYREF
  void *v114; // [rsp+C8h] [rbp-38h] BYREF
  char v115[8]; // [rsp+D0h] [rbp-30h] BYREF
  struct D3DKMDT_HVIDPN__ *v116; // [rsp+D8h] [rbp-28h]
  void (__fastcall *v117)(__int64, struct D3DKMDT_HVIDPN__ *); // [rsp+E0h] [rbp-20h]
  __int64 v118; // [rsp+E8h] [rbp-18h]
  int v119; // [rsp+F0h] [rbp-10h]
  DXGADAPTER *v120; // [rsp+F8h] [rbp-8h] BYREF
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v121; // [rsp+100h] [rbp+0h]
  int v122; // [rsp+104h] [rbp+4h]
  __int64 v123; // [rsp+108h] [rbp+8h]
  void *v124; // [rsp+110h] [rbp+10h]
  __int64 v125; // [rsp+118h] [rbp+18h]
  int v126; // [rsp+120h] [rbp+20h]
  _QWORD v127[5]; // [rsp+128h] [rbp+28h] BYREF
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v128; // [rsp+150h] [rbp+50h]
  bool v129; // [rsp+154h] [rbp+54h]
  int v130; // [rsp+158h] [rbp+58h]
  int v131; // [rsp+15Ch] [rbp+5Ch]
  char v132; // [rsp+160h] [rbp+60h]
  __int64 v133; // [rsp+168h] [rbp+68h]
  void *v134; // [rsp+170h] [rbp+70h]
  __int64 v135; // [rsp+178h] [rbp+78h]
  int v136; // [rsp+180h] [rbp+80h]
  __int64 v137; // [rsp+188h] [rbp+88h]
  void *v138; // [rsp+190h] [rbp+90h]
  __int64 v139; // [rsp+198h] [rbp+98h]
  int v140; // [rsp+1A0h] [rbp+A0h]
  _BYTE v141[24]; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v142[16]; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int v143[16]; // [rsp+200h] [rbp+100h] BYREF

  v105 = (bool *)a5;
  v109 = (struct DXGGLOBAL *)a4;
  v106 = a3;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::COUNT_TICKS_IN_SCOPE(
    (DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v141,
    (union _LARGE_INTEGER *)Global + 10);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::~COUNT_TICKS_IN_SCOPE((DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v141);
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal(v9) + 6);
  VidPnSourceId = a3->VidPnSourceId;
  v112 = 0LL;
  v12 = DxgkQueryDmmInterface(a1, v11, &v112);
  v14 = v12;
  if ( v12 < 0 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v15[3] = v14;
    v15[4] = a3->hAdapter;
    v15[5] = a1;
    v15[6] = VidPnSourceId;
    WdLogEvent5_WdError(v15);
    return (unsigned int)v14;
  }
  v104 = 0LL;
  v16 = v112;
  v17 = 0LL;
  v113 = 0LL;
  v117 = 0LL;
  v18 = (__int64 (__fastcall *)(DXGADAPTER *, __int64 *, struct _DXGDMM_VIDPN_INTERFACE **))*((_QWORD *)v112 + 6);
  v118 = 0LL;
  v119 = 0;
  v116 = 0LL;
  v115[0] = 0;
  v19 = v18(a1, &v113, &v104);
  v14 = v19;
  if ( v19 < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v21[3] = a1;
    v21[4] = v14;
LABEL_38:
    WdLogEvent5_WdError(v21);
    goto LABEL_63;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v115,
    v113,
    *((_QWORD *)v16 + 8),
    (__int64)a1);
  v110 = 0LL;
  v111 = 0LL;
  v17 = v116;
  v22 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, struct D3DKMDT_HVIDPNTOPOLOGY__ **, struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **))v104)(
          v116,
          &v110,
          &v111);
  v14 = v22;
  if ( v22 < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v23);
    v21[3] = v14;
    v21[4] = v17;
    v21[5] = a1;
    v21[6] = VidPnSourceId;
    v21[7] = v104;
    goto LABEL_38;
  }
  v24 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 248);
  v25 = 0LL;
  v107 = 0LL;
  v26 = 0;
  SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v24, VidPnSourceId);
  v28 = (SESSION_VIEW *)SessionViewOwner;
  v29 = -1;
  if ( !SessionViewOwner
    || *((_DWORD *)SessionViewOwner + 10) <= 1u
    || SESSION_VIEW::IsCrossAdapterView((SESSION_VIEW *)SessionViewOwner)
    || a2
    || (PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v28),
        PrimaryDisplaySource != (struct DISPLAY_SOURCE *)(*(_QWORD *)(*((_QWORD *)a1 + 248) + 136LL)
                                                        + 1016 * VidPnSourceId)) )
  {
LABEL_29:
    v41 = v142;
    v42 = v104;
    for ( i = 16LL; i; --i )
      *v41++ = v29;
    v44 = PrepareUnpinnedPathsFromSource(
            v112,
            a1,
            v17,
            v42,
            v110,
            v111,
            VidPnSourceId,
            1u,
            1u,
            1u,
            &v107,
            (unsigned int (*)[16])v142,
            0LL);
    v14 = v44;
    LODWORD(v46) = -1071774925;
    if ( v44 == -1071774925 || (LODWORD(v46) = -1071774886, v44 == -1071774886) )
    {
      v47 = WdLogNewEntry5_WdDmmEvent(v45);
      *(_QWORD *)(v47 + 24) = VidPnSourceId;
      *(_QWORD *)(v47 + 32) = a1;
      WdLogEvent5_WdDmmEvent(v47);
      goto LABEL_48;
    }
    if ( v44 >= 0 )
    {
      v25 = v107;
      goto LABEL_40;
    }
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v45);
    v21[3] = VidPnSourceId;
    v21[5] = v14;
LABEL_37:
    v21[4] = a1;
    goto LABEL_38;
  }
  v31 = v102;
  do
  {
    v32 = *((_QWORD *)PrimaryDisplaySource + 1);
    v102 = 0;
    if ( *(DXGADAPTER **)(v32 + 16) != a1 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v32);
      *(_QWORD *)(v33 + 24) = 4528LL;
      WdLogEvent5_WdAssertion(v33);
    }
    if ( (int)DxgkQueryMonitorTypeLockHeld(
                a1,
                *((_DWORD *)PrimaryDisplaySource + 239),
                0LL,
                0LL,
                0LL,
                &v102,
                0LL,
                0LL,
                0LL) < 0 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v34);
      *(_QWORD *)(v35 + 24) = 4542LL;
      WdLogEvent5_WdAssertion(v35);
    }
    if ( v25 )
    {
      if ( v31 != v102 )
        goto LABEL_24;
      v36 = *(unsigned int *)(*((_QWORD *)a1 + 248) + 104LL);
      if ( v25 >= v36 )
      {
        v37 = WdLogNewEntry5_WdAssertion(v36);
        *(_QWORD *)(v37 + 24) = 4553LL;
        WdLogEvent5_WdAssertion(v37);
      }
      v142[v25++] = *((_DWORD *)PrimaryDisplaySource + 4);
    }
    else
    {
      v25 = 1LL;
      v31 = v102;
      v143[0] = *((_DWORD *)PrimaryDisplaySource + 239);
      v142[0] = *((_DWORD *)PrimaryDisplaySource + 4);
    }
    v107 = v25;
LABEL_24:
    PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v28, PrimaryDisplaySource);
  }
  while ( PrimaryDisplaySource );
  if ( v25 <= 1 )
  {
    v26 = 0;
    v29 = -1;
    goto LABEL_29;
  }
  v26 = 1;
  v38 = DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource(a1, v142, v25, v17, v143);
  v40 = v38;
  if ( v38 < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v39);
    LODWORD(v14) = -1071775483;
    v21[3] = VidPnSourceId;
    v21[5] = v40;
    v21[6] = -1071775483LL;
    goto LABEL_37;
  }
LABEL_40:
  if ( v109 )
    v48 = (unsigned int *)((char *)v109 + 16);
  else
    v48 = 0LL;
  if ( v109 )
    v49 = (void **)((char *)v109 + 8);
  else
    v49 = 0LL;
  v50 = v106;
  v51 = *((_QWORD *)a1 + 249) == 0LL;
  v127[2] = v104;
  v127[3] = v110;
  v127[4] = v111;
  v128 = v106->VidPnSourceId;
  v129 = v51;
  v130 = -1;
  v131 = 0;
  v132 = 0;
  v136 = 0;
  v140 = 0;
  v133 = 0LL;
  v134 = 0LL;
  v135 = 0LL;
  v137 = 0LL;
  v138 = 0LL;
  v139 = 0LL;
  v127[0] = a1;
  v127[1] = v17;
  v46 = (int)OBTAIN_MODES_ON_SOURCE::operator()((__int64)v127, &v106->pModeList, &v106->ModeCount, v105, v49, v48);
  operator delete(v138);
  operator delete(v134);
  if ( (int)v46 >= 0 )
  {
    if ( !v26 || v105 || (v57 = 0, !v25) )
    {
LABEL_60:
      _InterlockedExchangeAdd64((volatile signed __int64 *)DXGGLOBAL::GetGlobal(v53) + 1, v50->ModeCount);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10) != 0 )
      {
        v73 = DXGGLOBAL::GetGlobal(v72);
        v75 = DXGGLOBAL::GetGlobal(v74);
        v77 = DXGGLOBAL::GetGlobal(v76);
        v79 = DXGGLOBAL::GetGlobal(v78);
        v81 = DXGGLOBAL::GetGlobal(v80);
        v83 = DXGGLOBAL::GetGlobal(v82);
        v85 = DXGGLOBAL::GetGlobal(v84);
        v109 = DXGGLOBAL::GetGlobal(v86);
        v108 = DXGGLOBAL::GetGlobal(v87);
        v105 = (bool *)DXGGLOBAL::GetGlobal(v88);
        v90 = DXGGLOBAL::GetGlobal(v89);
        LODWORD(v101) = *((_DWORD *)v75 + 19);
        LODWORD(v100) = *((_DWORD *)v77 + 18);
        LODWORD(v99) = *((_DWORD *)v79 + 15);
        LODWORD(v98) = *((_DWORD *)v81 + 14);
        *(_DWORD *)v97 = *((_DWORD *)v83 + 11);
        *(_DWORD *)v96 = *((_DWORD *)v85 + 10);
        v95[0] = *((_DWORD *)v109 + 9);
        LODWORD(v94) = *((_DWORD *)v108 + 6);
        Template_xxqqqqqqqqx(
          *(unsigned int *)v96,
          v91,
          v92,
          *((_QWORD *)v90 + 1),
          *((_QWORD *)v105 + 2),
          v94,
          *(_QWORD *)v95,
          *(_QWORD *)v96,
          *(_QWORD *)v97,
          v98,
          v99,
          v100,
          v101,
          *((_QWORD *)v73 + 10));
      }
      v17 = v116;
      LODWORD(v14) = 0;
      goto LABEL_63;
    }
    v53 = 0LL;
    while ( 1 )
    {
      v58 = v50->VidPnSourceId;
      v59 = v143[v53];
      v114 = 0LL;
      v103 = 0;
      v121 = v58;
      v126 = 0;
      v123 = 0LL;
      v124 = 0LL;
      v125 = 0LL;
      v120 = a1;
      v122 = v59;
      v60 = (int)OBTAIN_PREFERRED_MODES_ON_PATH::operator()((__int64)&v120, (struct _D3DKMT_DISPLAYMODE **)&v114, &v103);
      operator delete(v124);
      if ( (int)v60 >= 0 )
      {
        v66 = v114;
        if ( !v114 )
          goto LABEL_59;
        v67 = (int)sub_1C0141B0C((int)v106 + 16, (int)v106 + 8, v103, (_DWORD)v114, 0);
        operator delete(v66);
        if ( (int)v67 >= 0 )
          goto LABEL_59;
        v65 = (_QWORD *)WdLogNewEntry5_WdWarning(v69, v68, v70, v71);
        v65[6] = v67;
      }
      else
      {
        v65 = (_QWORD *)WdLogNewEntry5_WdWarning(v62, v61, v63, v64);
        v65[6] = v60;
      }
      v65[3] = VidPnSourceId;
      v65[4] = v59;
      v65[5] = a1;
      WdLogEvent5_WdWarning(v65);
LABEL_59:
      v50 = v106;
      v53 = ++v57;
      if ( v57 >= v25 )
        goto LABEL_60;
    }
  }
  v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v53, v52, v54, v55);
  v56[3] = v46;
  v56[4] = v17;
  v56[5] = a1;
  v56[6] = VidPnSourceId;
  v56[7] = v25;
  WdLogEvent5_WdWarning(v56);
LABEL_48:
  LODWORD(v14) = v46;
LABEL_63:
  if ( v115[0] )
    v117(v118, v17);
  return (unsigned int)v14;
}
