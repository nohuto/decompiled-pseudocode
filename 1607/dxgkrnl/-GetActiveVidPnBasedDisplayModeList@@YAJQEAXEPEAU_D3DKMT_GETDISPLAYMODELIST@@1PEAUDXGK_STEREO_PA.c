/*
 * XREFs of ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00C5804
 * Callers:
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C0086D44 (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@PEAUDXGK_STEREO_PARAMS@@@.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000AC00 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     Template_xxqqqqqqqqx @ 0x1C000BBA8 (Template_xxqqqqqqqqx.c)
 *     ??0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z @ 0x1C000BCBC (--0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z.c)
 *     ??1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ @ 0x1C000BCE8 (--1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C007AC74 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C007AC88 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z @ 0x1C0081A50 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C0088C0C (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C00C4FF0 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 *     DxgkQueryDmmInterface @ 0x1C00C5D40 (DxgkQueryDmmInterface.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C00D1C00 (DxgkQueryMonitorTypeLockHeld.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C016253C (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     _CombineModeList @ 0x1C01639B8 (_CombineModeList.c)
 *     ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1C017FF84 (-IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C01A029C (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
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
  int DmmInterface; // eax
  __int64 v12; // rcx
  __int64 v13; // rdi
  struct _DXGDMM_INTERFACE *v14; // r13
  struct D3DKMDT_HVIDPN__ *v15; // r15
  __int64 (__fastcall *v16)(DXGADAPTER *, __int64 *, struct _DXGDMM_VIDPN_INTERFACE **); // rax
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  ADAPTER_DISPLAY *v21; // rcx
  unsigned __int64 v22; // rdi
  char v23; // r13
  int **SessionViewOwner; // rax
  SESSION_VIEW *v25; // r12
  int v26; // r11d
  unsigned int *v27; // rdi
  struct _DXGDMM_VIDPN_INTERFACE *v28; // r9
  __int64 i; // rcx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // r14
  unsigned int *v33; // r8
  void **v34; // rdx
  struct _D3DKMT_GETDISPLAYMODELIST *v35; // r12
  bool v36; // zf
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  struct DXGGLOBAL *v42; // rdi
  __int64 v43; // rcx
  struct DXGGLOBAL *v44; // rbx
  __int64 v45; // rcx
  struct DXGGLOBAL *v46; // rsi
  __int64 v47; // rcx
  struct DXGGLOBAL *v48; // r14
  __int64 v49; // rcx
  struct DXGGLOBAL *v50; // r15
  __int64 v51; // rcx
  struct DXGGLOBAL *v52; // r13
  __int64 v53; // rcx
  struct DXGGLOBAL *v54; // r12
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  struct DXGGLOBAL *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // r8
  _QWORD *v63; // rax
  _QWORD *v64; // rax
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r14
  char v66; // r13
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  unsigned __int64 v71; // rcx
  __int64 v72; // rax
  int v73; // eax
  __int64 v74; // rcx
  __int64 v75; // r14
  __int64 v76; // rax
  _QWORD *v77; // rax
  unsigned int v78; // r14d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v79; // eax
  __int64 v80; // r12
  __int64 v81; // r15
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  _QWORD *v86; // rax
  void *v87; // r15
  __int64 v88; // r13
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v93; // [rsp+28h] [rbp-D8h]
  unsigned int v94[2]; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v95[8]; // [rsp+38h] [rbp-C8h]
  unsigned __int8 v96[8]; // [rsp+40h] [rbp-C0h]
  __int64 v97; // [rsp+48h] [rbp-B8h]
  unsigned __int64 *v98; // [rsp+50h] [rbp-B0h]
  unsigned int *v99; // [rsp+58h] [rbp-A8h]
  __int64 v100; // [rsp+60h] [rbp-A0h]
  char v101; // [rsp+70h] [rbp-90h] BYREF
  int v102; // [rsp+74h] [rbp-8Ch] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v103; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v104; // [rsp+80h] [rbp-80h] BYREF
  struct _D3DKMT_GETDISPLAYMODELIST *v105; // [rsp+88h] [rbp-78h]
  bool *v106; // [rsp+90h] [rbp-70h]
  struct _DXGDMM_INTERFACE *v107; // [rsp+98h] [rbp-68h]
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v108; // [rsp+A0h] [rbp-60h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v109; // [rsp+A8h] [rbp-58h] BYREF
  struct DXGGLOBAL *v110; // [rsp+B0h] [rbp-50h]
  struct DXGGLOBAL *v111; // [rsp+B8h] [rbp-48h]
  __int64 v112; // [rsp+C0h] [rbp-40h] BYREF
  void *v113; // [rsp+C8h] [rbp-38h] BYREF
  char v114[8]; // [rsp+D0h] [rbp-30h] BYREF
  struct D3DKMDT_HVIDPN__ *v115; // [rsp+D8h] [rbp-28h]
  void (__fastcall *v116)(__int64, struct D3DKMDT_HVIDPN__ *); // [rsp+E0h] [rbp-20h]
  __int64 v117; // [rsp+E8h] [rbp-18h]
  int v118; // [rsp+F0h] [rbp-10h]
  DXGADAPTER *v119; // [rsp+F8h] [rbp-8h] BYREF
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v120; // [rsp+100h] [rbp+0h]
  int v121; // [rsp+104h] [rbp+4h]
  __int64 v122; // [rsp+108h] [rbp+8h]
  void *v123; // [rsp+110h] [rbp+10h]
  __int64 v124; // [rsp+118h] [rbp+18h]
  int v125; // [rsp+120h] [rbp+20h]
  _QWORD v126[5]; // [rsp+128h] [rbp+28h] BYREF
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v127; // [rsp+150h] [rbp+50h]
  bool v128; // [rsp+154h] [rbp+54h]
  int v129; // [rsp+158h] [rbp+58h]
  int v130; // [rsp+15Ch] [rbp+5Ch]
  char v131; // [rsp+160h] [rbp+60h]
  __int64 v132; // [rsp+168h] [rbp+68h]
  void *v133; // [rsp+170h] [rbp+70h]
  __int64 v134; // [rsp+178h] [rbp+78h]
  int v135; // [rsp+180h] [rbp+80h]
  __int64 v136; // [rsp+188h] [rbp+88h]
  void *v137; // [rsp+190h] [rbp+90h]
  __int64 v138; // [rsp+198h] [rbp+98h]
  int v139; // [rsp+1A0h] [rbp+A0h]
  _BYTE v140[24]; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v141[16]; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int v142[16]; // [rsp+200h] [rbp+100h] BYREF

  v106 = (bool *)a5;
  v111 = (struct DXGGLOBAL *)a4;
  v105 = a3;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::COUNT_TICKS_IN_SCOPE(
    (DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v140,
    (union _LARGE_INTEGER *)Global + 10);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::~COUNT_TICKS_IN_SCOPE((DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v140);
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal(v9) + 6);
  VidPnSourceId = a3->VidPnSourceId;
  v107 = 0LL;
  DmmInterface = DxgkQueryDmmInterface(a1);
  v13 = DmmInterface;
  if ( DmmInterface < 0 )
  {
    v63 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v63[3] = v13;
    v63[4] = a3->hAdapter;
    v63[5] = a1;
    v63[6] = VidPnSourceId;
    WdLogEvent5_WdError(v63);
    return (unsigned int)v13;
  }
  v103 = 0LL;
  v14 = v107;
  v15 = 0LL;
  v112 = 0LL;
  v116 = 0LL;
  v16 = (__int64 (__fastcall *)(DXGADAPTER *, __int64 *, struct _DXGDMM_VIDPN_INTERFACE **))*((_QWORD *)v107 + 6);
  v117 = 0LL;
  v118 = 0;
  v115 = 0LL;
  v114[0] = 0;
  v17 = v16(a1, &v112, &v103);
  v13 = v17;
  if ( v17 < 0 )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v64[3] = a1;
    v64[4] = v13;
    goto LABEL_51;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v114,
    v112,
    *((_QWORD *)v14 + 8),
    (__int64)a1);
  v108 = 0LL;
  v109 = 0LL;
  v15 = v115;
  v19 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, struct D3DKMDT_HVIDPNTOPOLOGY__ **, struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **))v103)(
          v115,
          &v108,
          &v109);
  v13 = v19;
  if ( v19 < 0 )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v64[3] = v13;
    v64[4] = v15;
    v64[5] = a1;
    v64[6] = VidPnSourceId;
    v64[7] = v103;
    goto LABEL_51;
  }
  v21 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 266);
  v22 = 0LL;
  v104 = 0LL;
  v23 = 0;
  SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v21, VidPnSourceId);
  v25 = (SESSION_VIEW *)SessionViewOwner;
  v26 = -1;
  if ( !SessionViewOwner
    || *((_DWORD *)SessionViewOwner + 10) <= 1u
    || SESSION_VIEW::IsCrossAdapterView((SESSION_VIEW *)SessionViewOwner)
    || a2
    || (PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v25),
        PrimaryDisplaySource != (struct DISPLAY_SOURCE *)(*(_QWORD *)(*((_QWORD *)a1 + 266) + 112LL)
                                                        + 1016 * VidPnSourceId)) )
  {
LABEL_6:
    v27 = v141;
    v28 = v103;
    for ( i = 16LL; i; --i )
      *v27++ = v26;
    v30 = PrepareUnpinnedPathsFromSource(
            v107,
            a1,
            v15,
            v28,
            v108,
            v109,
            VidPnSourceId,
            1u,
            1u,
            1u,
            &v104,
            (unsigned int (*)[16])v141,
            0LL);
    v13 = v30;
    LODWORD(v32) = -1071774925;
    if ( v30 == -1071774925 || (LODWORD(v32) = -1071774886, v30 == -1071774886) )
    {
      v76 = WdLogNewEntry5_WdDmmEvent(v31);
      *(_QWORD *)(v76 + 24) = VidPnSourceId;
      *(_QWORD *)(v76 + 32) = a1;
      WdLogEvent5_WdDmmEvent(v76);
LABEL_55:
      LODWORD(v13) = v32;
      goto LABEL_22;
    }
    if ( v30 >= 0 )
    {
      v22 = v104;
      goto LABEL_13;
    }
    v64 = (_QWORD *)WdLogNewEntry5_WdError(v31);
    v64[3] = VidPnSourceId;
    v64[5] = v13;
LABEL_50:
    v64[4] = a1;
LABEL_51:
    WdLogEvent5_WdError(v64);
    goto LABEL_22;
  }
  v66 = 0;
  do
  {
    v67 = *((_QWORD *)PrimaryDisplaySource + 1);
    v101 = 0;
    if ( *(DXGADAPTER **)(v67 + 16) != a1 )
    {
      v68 = WdLogNewEntry5_WdAssertion(v67);
      *(_QWORD *)(v68 + 24) = 4533LL;
      WdLogEvent5_WdAssertion(v68);
    }
    if ( (int)DxgkQueryMonitorTypeLockHeld(a1, 0LL, (__int64)&v101, 0LL, 0LL, 0LL) < 0 )
    {
      v70 = WdLogNewEntry5_WdAssertion(v69);
      *(_QWORD *)(v70 + 24) = 4547LL;
      WdLogEvent5_WdAssertion(v70);
    }
    if ( v22 )
    {
      if ( v66 != v101 )
        goto LABEL_43;
      v71 = *(unsigned int *)(*((_QWORD *)a1 + 266) + 80LL);
      if ( v22 >= v71 )
      {
        v72 = WdLogNewEntry5_WdAssertion(v71);
        *(_QWORD *)(v72 + 24) = 4558LL;
        WdLogEvent5_WdAssertion(v72);
      }
      v141[v22++] = *((_DWORD *)PrimaryDisplaySource + 4);
    }
    else
    {
      v22 = 1LL;
      v66 = v101;
      v142[0] = *((_DWORD *)PrimaryDisplaySource + 241);
      v141[0] = *((_DWORD *)PrimaryDisplaySource + 4);
    }
    v104 = v22;
LABEL_43:
    PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v25, PrimaryDisplaySource);
  }
  while ( PrimaryDisplaySource );
  if ( v22 <= 1 )
  {
    v23 = 0;
    v26 = -1;
    goto LABEL_6;
  }
  v23 = 1;
  v73 = DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource(a1, v141, v22, v15, v142);
  v75 = v73;
  if ( v73 < 0 )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdError(v74);
    LODWORD(v13) = -1071775483;
    v64[3] = VidPnSourceId;
    v64[5] = v75;
    v64[6] = -1071775483LL;
    goto LABEL_50;
  }
LABEL_13:
  if ( v111 )
    v33 = (unsigned int *)((char *)v111 + 16);
  else
    v33 = 0LL;
  if ( v111 )
    v34 = (void **)((char *)v111 + 8);
  else
    v34 = 0LL;
  v35 = v105;
  v36 = *((_QWORD *)a1 + 267) == 0LL;
  v126[2] = v103;
  v126[3] = v108;
  v126[4] = v109;
  v127 = v105->VidPnSourceId;
  v128 = v36;
  v129 = -1;
  v130 = 0;
  v131 = 0;
  v135 = 0;
  v139 = 0;
  v132 = 0LL;
  v133 = 0LL;
  v134 = 0LL;
  v136 = 0LL;
  v137 = 0LL;
  v138 = 0LL;
  v126[0] = a1;
  v126[1] = v15;
  v32 = (int)OBTAIN_MODES_ON_SOURCE::operator()(v126, &v105->pModeList, &v105->ModeCount, v106, v34, v33);
  operator delete(v137);
  operator delete(v133);
  if ( (int)v32 < 0 )
  {
    v77 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v39, v40);
    v77[3] = v32;
    v77[4] = v15;
    v77[5] = a1;
    v77[6] = VidPnSourceId;
    v77[7] = v22;
    WdLogEvent5_WdWarning(v77);
    goto LABEL_55;
  }
  if ( v23 )
  {
    if ( !v106 )
    {
      v78 = 0;
      if ( v22 )
      {
        v38 = 0LL;
        do
        {
          v79 = v35->VidPnSourceId;
          v80 = v142[v38];
          v113 = 0LL;
          v102 = 0;
          v120 = v79;
          v125 = 0;
          v122 = 0LL;
          v123 = 0LL;
          v124 = 0LL;
          v119 = a1;
          v121 = v80;
          v81 = (int)OBTAIN_PREFERRED_MODES_ON_PATH::operator()(&v119, &v113, &v102);
          operator delete(v123);
          if ( (int)v81 >= 0 )
          {
            v87 = v113;
            if ( !v113 )
              goto LABEL_65;
            v88 = (int)CombineModeList((int)v105 + 16, (int)v105 + 8, v102, (_DWORD)v113, 0);
            operator delete(v87);
            if ( (int)v88 >= 0 )
              goto LABEL_65;
            v86 = (_QWORD *)WdLogNewEntry5_WdWarning(v90, v89, v91, v92);
            v86[6] = v88;
          }
          else
          {
            v86 = (_QWORD *)WdLogNewEntry5_WdWarning(v83, v82, v84, v85);
            v86[6] = v81;
          }
          v86[3] = VidPnSourceId;
          v86[4] = v80;
          v86[5] = a1;
          WdLogEvent5_WdWarning(v86);
LABEL_65:
          v35 = v105;
          v38 = ++v78;
        }
        while ( v78 < v22 );
      }
    }
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)DXGGLOBAL::GetGlobal(v38) + 1, v35->ModeCount);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 8) != 0 )
  {
    v42 = DXGGLOBAL::GetGlobal(v41);
    v44 = DXGGLOBAL::GetGlobal(v43);
    v46 = DXGGLOBAL::GetGlobal(v45);
    v48 = DXGGLOBAL::GetGlobal(v47);
    v50 = DXGGLOBAL::GetGlobal(v49);
    v52 = DXGGLOBAL::GetGlobal(v51);
    v54 = DXGGLOBAL::GetGlobal(v53);
    v111 = DXGGLOBAL::GetGlobal(v55);
    v110 = DXGGLOBAL::GetGlobal(v56);
    v106 = (bool *)DXGGLOBAL::GetGlobal(v57);
    v59 = DXGGLOBAL::GetGlobal(v58);
    LODWORD(v100) = *((_DWORD *)v44 + 19);
    LODWORD(v99) = *((_DWORD *)v46 + 18);
    LODWORD(v98) = *((_DWORD *)v48 + 15);
    LODWORD(v97) = *((_DWORD *)v50 + 14);
    *(_DWORD *)v96 = *((_DWORD *)v52 + 11);
    *(_DWORD *)v95 = *((_DWORD *)v54 + 10);
    v94[0] = *((_DWORD *)v111 + 9);
    LODWORD(v93) = *((_DWORD *)v110 + 6);
    Template_xxqqqqqqqqx(
      *(unsigned int *)v95,
      v60,
      v61,
      *((_QWORD *)v59 + 1),
      *((_QWORD *)v106 + 2),
      v93,
      *(_QWORD *)v94,
      *(_QWORD *)v95,
      *(_QWORD *)v96,
      v97,
      v98,
      v99,
      v100,
      *((_QWORD *)v42 + 10));
  }
  v15 = v115;
  LODWORD(v13) = 0;
LABEL_22:
  if ( v114[0] )
    v116(v117, v15);
  return (unsigned int)v13;
}
