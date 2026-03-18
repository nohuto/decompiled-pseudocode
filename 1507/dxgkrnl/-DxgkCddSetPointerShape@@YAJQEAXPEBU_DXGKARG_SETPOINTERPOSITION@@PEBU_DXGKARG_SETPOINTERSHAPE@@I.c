/*
 * XREFs of ?DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C008EBC0
 * Callers:
 *     DxgkWin32kSetPointerShape @ 0x1C01470A0 (DxgkWin32kSetPointerShape.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0001AF8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001E60 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002490 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0004D18 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0004D38 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHH@Z @ 0x1C000646C (-SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHH@Z.c)
 *     ?IsPrimaryVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0006930 (-IsPrimaryVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C000E2E4 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     Template_pdqqq @ 0x1C0028238 (Template_pdqqq.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C008AC40 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008CBD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C008D39C (MonitorIsMonitorVirtualModeDisabled.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C008EFF4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C008F008 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z @ 0x1C008F0B8 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@IP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z12IIP6AJPEAV3@312II@Z@Z @ 0x1C008F594 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DX.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C00956F8 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C009585C (-DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@XZ @ 0x1C01264B4 (-GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@XZ.c)
 *     ?GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@XZ @ 0x1C01266E0 (-GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@XZ.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C01268B0 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAU_CURSOR_CLIP_PARAMS@@@Z @ 0x1C0145BDC (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAU_CURSOR_CLIP_PARAMS@@@Z.c)
 *     ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAU_CURSOR_CLIP_PARAMS@@@Z @ 0x1C01460D8 (-FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOS.c)
 *     ?RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGK_DRIVERCAPS@@@Z @ 0x1C0146350 (-RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATIO.c)
 *     ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@PEBU_DXGK_DRIVERCAPS@@HAEAH@Z @ 0x1C014672C (-ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SE.c)
 *     OutputDuplProcessRemoteSessionSetPointerShape @ 0x1C01566FC (OutputDuplProcessRemoteSessionSetPointerShape.c)
 */

__int64 __fastcall DxgkCddSetPointerShape(
        struct DXGADAPTER *a1,
        struct _DXGKARG_SETPOINTERPOSITION *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  unsigned int v6; // r11d
  struct _DXGKARG_SETPOINTERPOSITION *v8; // r10
  struct _DXGKARG_SETPOINTERSHAPE *v10; // rsi
  int PairingAdapters; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rdi
  struct _LUID v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  DXGGLOBAL *Global; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  DXGSESSIONDATA *SessionData; // r14
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v35; // rcx
  SESSION_VIEW *v36; // r12
  struct DISPLAY_SOURCE *i; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  const struct DISPLAY_SOURCE *v41; // r14
  struct DISPLAY_SOURCE *j; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  struct DISPLAY_SOURCE *v46; // r13
  __int64 v47; // rcx
  char v48; // r14
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  int IsMonitorVirtualModeDisabled; // eax
  __int64 v55; // rcx
  __int64 v56; // rsi
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r8
  __int64 v60; // rcx
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rbx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  _QWORD *v74; // rdi
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  struct _DXGKARG_SETPOINTERSHAPE *SavedCursor; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  struct _DXGKARG_SETPOINTERSHAPE *v87; // r14
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  struct _DXGKARG_SETPOINTERSHAPE *ClippedCursor; // r12
  __int64 v94; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v95; // r12d
  void *pPixels; // rcx
  size_t v97; // r8
  UINT YHot; // eax
  void *v99; // rcx
  size_t v100; // r8
  _DWORD *v101; // rsi
  int v102; // edx
  int v103; // r11d
  int v104; // ecx
  __int64 v105; // r8
  __int64 v106; // r9
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v107; // edx
  INT X; // eax
  int v109; // r10d
  __int32 v110; // eax
  __int64 v111; // rdx
  int v112; // r11d
  __int64 v113; // rax
  INT Y; // r9d
  INT v115; // r8d
  int v116; // r8d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v117; // r11d
  int v118; // r12d
  UINT v119; // r9d
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rax
  struct DISPLAY_SOURCE *k; // rax
  __int64 v126; // rdx
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 v129; // rcx
  ADAPTER_DISPLAY **v130; // r14
  __int64 v131; // rax
  __int64 v132; // rax
  int v133; // eax
  __int64 v134; // rcx
  __int64 v135; // r15
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v136; // eax
  _QWORD *v137; // rax
  struct DISPLAY_SOURCE *v138; // rdi
  struct _DXGKARG_SETPOINTERSHAPE *v139; // [rsp+20h] [rbp-B9h]
  struct _DXGK_DRIVERCAPS *v140; // [rsp+28h] [rbp-B1h]
  __int64 v141; // [rsp+30h] [rbp-A9h]
  int *v142; // [rsp+38h] [rbp-A1h]
  _BYTE v143[4]; // [rsp+40h] [rbp-99h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // [rsp+44h] [rbp-95h]
  char v145; // [rsp+48h] [rbp-91h]
  char v146; // [rsp+49h] [rbp-90h] BYREF
  unsigned __int8 v147; // [rsp+4Ah] [rbp-8Fh]
  int v148; // [rsp+4Ch] [rbp-8Dh] BYREF
  const struct _DXGKARG_SETPOINTERPOSITION *v149; // [rsp+50h] [rbp-89h]
  unsigned int v150; // [rsp+58h] [rbp-81h]
  struct _LUID v151; // [rsp+60h] [rbp-79h] BYREF
  SESSION_VIEW *v152; // [rsp+68h] [rbp-71h]
  _BYTE v153[8]; // [rsp+70h] [rbp-69h] BYREF
  _BYTE v154[8]; // [rsp+78h] [rbp-61h] BYREF
  __int64 v155; // [rsp+80h] [rbp-59h]
  char v156; // [rsp+88h] [rbp-51h]
  _BYTE v157[8]; // [rsp+90h] [rbp-49h] BYREF
  __int64 v158; // [rsp+98h] [rbp-41h]
  char v159; // [rsp+A0h] [rbp-39h]
  struct DXGADAPTER *v160; // [rsp+A8h] [rbp-31h]
  _BYTE v161[20]; // [rsp+B0h] [rbp-29h] BYREF
  int v162; // [rsp+C4h] [rbp-15h]
  struct _DXGKARG_SETPOINTERPOSITION v163; // [rsp+C8h] [rbp-11h] BYREF

  v150 = a4;
  v6 = a4;
  v149 = a2;
  v8 = a2;
  v160 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
  {
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3012);
    v8 = (struct _DXGKARG_SETPOINTERPOSITION *)v149;
    v6 = v150;
  }
  LODWORD(v10) = 0;
  if ( !a3 || !v8 )
    goto LABEL_51;
  v163 = *v8;
  if ( a6 )
  {
    OutputDuplProcessRemoteSessionSetPointerShape(v8, a3, v6, a5);
    goto LABEL_45;
  }
  if ( (a3->Flags.Value & 0xFFFFFFF8) != 0 )
  {
    v64 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v64 + 24) = a3->Flags.Value;
    *(_QWORD *)(v64 + 32) = a1;
    WdLogEvent5_WdError(v64);
LABEL_51:
    LODWORD(v10) = -1073741811;
    goto LABEL_45;
  }
  PairingAdapters = DxgkpGetPairingAdapters(a1, a3->VidPnSourceId, 0LL, (struct DXGADAPTER **)&v151);
  v10 = (struct _DXGKARG_SETPOINTERSHAPE *)PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v65 = (_QWORD *)WdLogNewEntry5_WdEvent(v13, v12, v14, v15);
    v65[3] = a1;
    v65[4] = a3->VidPnSourceId;
    v65[5] = v10;
    WdLogEvent5_WdEvent(v65);
    goto LABEL_45;
  }
  v16 = (_QWORD *)v151;
  if ( !*(_QWORD *)&v151 )
  {
    v66 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v66 + 24) = 1010LL;
    WdLogEvent5_WdAssertion(v66);
  }
  if ( !v16[247] )
  {
    v67 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v67 + 24) = 1011LL;
    WdLogEvent5_WdAssertion(v67);
  }
  v17 = *(struct _LUID *)((char *)v16 + 252);
  v151 = v17;
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v16);
  v18 = 0LL;
  Global = DXGGLOBAL::GetGlobal(v20, v19, v21, v22);
  SessionData = DXGGLOBAL::GetSessionData(Global, v24, v25, v26);
  if ( !SessionData )
  {
    v68 = WdLogNewEntry5_WdError(v27);
    LODWORD(v10) = -1073741811;
    *(_QWORD *)(v68 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v70, v69, v71, v72);
    *(_QWORD *)(v68 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v68);
    goto LABEL_45;
  }
  v143[0] = 0;
  v29 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v143, 0);
  v10 = (struct _DXGKARG_SETPOINTERSHAPE *)v29;
  if ( v29 < 0 )
  {
    v73 = WdLogNewEntry5_WdEvent(v31, v30, v32, v33);
    *(_QWORD *)(v73 + 24) = v10;
    WdLogEvent5_WdEvent(v73);
    goto LABEL_44;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionData, &v151, a3->VidPnSourceId);
  v152 = SessionViewFromSource;
  v36 = SessionViewFromSource;
  if ( !SessionViewFromSource )
  {
    v74 = (_QWORD *)WdLogNewEntry5_WdError(v35);
    v74[3] = a3->VidPnSourceId;
    v74[4] = v151.HighPart;
    v74[5] = v17.LowPart;
    LODWORD(v10) = -1073741811;
    v74[6] = (unsigned int)PsGetCurrentProcessSessionId(v17.LowPart, v75, v76, v77);
    v74[7] = -1073741811LL;
    WdLogEvent5_WdError(v74);
    goto LABEL_44;
  }
  v147 = 0;
  for ( i = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource); ; i = SESSION_VIEW::GetNextDisplaySource(
                                                                                  v36,
                                                                                  v41) )
  {
    v41 = i;
    if ( !i )
      break;
    v60 = *((_QWORD *)i + 1);
    v18 = *(_QWORD *)(v60 + 16);
    if ( !v18 )
    {
      v78 = WdLogNewEntry5_WdAssertion(v60, v38, v39, v40);
      *(_QWORD *)(v78 + 24) = 1060LL;
      WdLogEvent5_WdAssertion(v78);
    }
    if ( !*(_QWORD *)(v18 + 1976) )
    {
      v79 = WdLogNewEntry5_WdAssertion(v60, v38, v39, v40);
      *(_QWORD *)(v79 + 24) = 1061LL;
      WdLogEvent5_WdAssertion(v79);
    }
    v155 = v18;
    v156 = 0;
    DXGADAPTER::AcquireReference((DXGADAPTER *)v18);
    v158 = v18;
    v159 = 0;
    DXGADAPTER::AcquireReference((DXGADAPTER *)v18);
    LODWORD(v10) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v153);
    if ( (int)v10 < 0 )
      goto LABEL_57;
    if ( (*(_DWORD *)(v18 + 284) & 0x80u) != 0 )
    {
      v147 = 1;
LABEL_57:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v153);
      break;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v157);
    COREACCESS::~COREACCESS((COREACCESS *)v154);
  }
  for ( j = SESSION_VIEW::GetPrimaryDisplaySource(v36); ; j = SESSION_VIEW::GetNextDisplaySource(v36, v46) )
  {
    v46 = j;
    if ( !j )
      break;
    v47 = *((_QWORD *)j + 1);
    v18 = *(_QWORD *)(v47 + 16);
    if ( !v18 )
    {
      v80 = WdLogNewEntry5_WdAssertion(v47, v43, v44, v45);
      *(_QWORD *)(v80 + 24) = 1083LL;
      WdLogEvent5_WdAssertion(v80);
    }
    if ( !*(_QWORD *)(v18 + 1976) )
    {
      v81 = WdLogNewEntry5_WdAssertion(v47, v43, v44, v45);
      *(_QWORD *)(v81 + 24) = 1084LL;
      WdLogEvent5_WdAssertion(v81);
    }
    v155 = v18;
    v156 = 0;
    DXGADAPTER::AcquireReference((DXGADAPTER *)v18);
    v158 = v18;
    v159 = 0;
    DXGADAPTER::AcquireReference((DXGADAPTER *)v18);
    v48 = 0;
    v145 = 0;
    LODWORD(v10) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v153);
    if ( (int)v10 < 0 )
      goto LABEL_112;
    v163.VidPnSourceId = *((_DWORD *)v46 + 4);
    if ( !ADAPTER_DISPLAY::IsPrimaryVisible(*(ADAPTER_DISPLAY **)(v18 + 1976), *((_DWORD *)v46 + 4)) )
    {
      v63 = (_QWORD *)WdLogNewEntry5_WdTrace(v50, v49, v51, v52);
      v63[3] = -1073741823LL;
      v63[4] = *((unsigned int *)v46 + 4);
      v63[5] = a3->Flags.Value;
      v63[6] = v160;
      goto LABEL_33;
    }
    if ( (*(_DWORD *)(v18 + 284) & 0x10) != 0
      && !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v18 + 1976)) )
    {
LABEL_59:
      LODWORD(v10) = -1073741823;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v153);
      goto LABEL_114;
    }
    v53 = *((unsigned int *)v46 + 239);
    v146 = 1;
    IsMonitorVirtualModeDisabled = MonitorIsMonitorVirtualModeDisabled(v18, v53, (__int64)&v146, v52);
    v56 = IsMonitorVirtualModeDisabled;
    if ( IsMonitorVirtualModeDisabled < 0 )
    {
      v62 = (_QWORD *)WdLogNewEntry5_WdError(v55);
      v62[3] = *((unsigned int *)v46 + 4);
      v62[4] = (int)HIDWORD(*(_QWORD *)(v18 + 252));
      v62[5] = *(unsigned int *)(v18 + 252);
      v62[6] = v56;
      WdLogEvent5_WdError(v62);
    }
    if ( !v146 )
    {
      CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(
                                           *((_QWORD *)v46 + 1),
                                           *((_DWORD *)v46 + 4),
                                           0);
      if ( a3->Width > *(_DWORD *)(v18 + 1336) || a3->Height > *(_DWORD *)(v18 + 1340) )
        goto LABEL_59;
      SavedCursor = DISPLAY_SOURCE::GetSavedCursor(v46);
      v87 = SavedCursor;
      if ( !SavedCursor || !SavedCursor->pPixels )
      {
        v88 = WdLogNewEntry5_WdAssertion(v84, v83, v85, v86);
        *(_QWORD *)(v88 + 24) = 1144LL;
        WdLogEvent5_WdAssertion(v88);
      }
      memset(
        (void *)v87->pPixels,
        0,
        4 * *(unsigned int *)(v18 + 1340) * (unsigned __int64)*(unsigned int *)(v18 + 1336));
      ClippedCursor = DISPLAY_SOURCE::GetClippedCursor(v46);
      if ( !ClippedCursor->pPixels )
      {
        v94 = WdLogNewEntry5_WdAssertion(v90, v89, v91, v92);
        *(_QWORD *)(v94 + 24) = 1151LL;
        WdLogEvent5_WdAssertion(v94);
      }
      v148 = 0;
      LODWORD(v10) = ScaleCursorShape(
                       (const struct tagRECT *)((char *)v46 + 652),
                       (const struct tagRECT *)((char *)v152 + 24),
                       CurrentOrientation,
                       a3,
                       ClippedCursor,
                       (const struct _DXGK_DRIVERCAPS *)(v18 + 1312),
                       v147,
                       &v148);
      if ( (int)v10 < 0 )
      {
LABEL_112:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v153);
        break;
      }
      if ( v148 )
      {
        if ( CurrentOrientation != D3DKMDT_VPPR_IDENTITY )
        {
          RotateCursorShape(ClippedCursor, v87, CurrentOrientation, (const struct _DXGK_DRIVERCAPS *)(v18 + 1312));
          v95 = CurrentOrientation;
          goto LABEL_82;
        }
        pPixels = (void *)v87->pPixels;
        v87->Flags.Value = ClippedCursor->Flags.Value;
        v87->Width = ClippedCursor->Width;
        v87->Height = ClippedCursor->Height;
        v87->Pitch = ClippedCursor->Pitch;
        if ( (ClippedCursor->Flags.Value & 1) != 0 )
          v97 = 2 * ClippedCursor->Pitch * ClippedCursor->Height;
        else
          v97 = ClippedCursor->Pitch * ClippedCursor->Height;
        memmove(pPixels, ClippedCursor->pPixels, v97);
        v87->XHot = ClippedCursor->XHot;
        YHot = ClippedCursor->YHot;
        v95 = CurrentOrientation;
LABEL_81:
        v87->YHot = YHot;
      }
      else
      {
        v95 = CurrentOrientation;
        if ( CurrentOrientation == D3DKMDT_VPPR_IDENTITY )
        {
          v99 = (void *)v87->pPixels;
          v87->Flags.Value = a3->Flags.Value;
          v87->Width = a3->Width;
          v87->Height = a3->Height;
          v87->Pitch = a3->Pitch;
          if ( (a3->Flags.Value & 1) != 0 )
            v100 = 2 * a3->Pitch * a3->Height;
          else
            v100 = a3->Pitch * a3->Height;
          memmove(v99, a3->pPixels, v100);
          v87->XHot = a3->XHot;
          YHot = a3->YHot;
          goto LABEL_81;
        }
        RotateCursorShape(a3, v87, CurrentOrientation, (const struct _DXGK_DRIVERCAPS *)(v18 + 1312));
      }
LABEL_82:
      v101 = (_DWORD *)((char *)v46 + 652);
      v102 = *((_DWORD *)v46 + 165);
      v103 = *((_DWORD *)v46 + 166) - *((_DWORD *)v46 + 164);
      v104 = *((_DWORD *)v152 + 8) - *((_DWORD *)v152 + 6);
      v105 = *((unsigned int *)v46 + 163);
      v106 = (unsigned int)(*((_DWORD *)v152 + 9) - *((_DWORD *)v152 + 7));
      v148 = v103;
      v107 = v102 - v105;
      CurrentOrientation = v107;
      X = v149->X;
      if ( ((v95 - 1) & 0xFFFFFFFD) != 0 )
      {
        v109 = v103 * X / v104;
        v110 = CurrentOrientation * v149->Y;
      }
      else
      {
        v109 = v107 * X / v104;
        v110 = v103 * v149->Y;
      }
      v111 = (unsigned int)(v110 >> 31);
      v112 = v110 / (int)v106;
      switch ( v95 )
      {
        case D3DKMDT_VPPR_IDENTITY:
          v115 = v109 + v105;
          v163.X = v115;
          Y = v112 + *((_DWORD *)v46 + 164);
          v163.Y = Y;
LABEL_95:
          v117 = CurrentOrientation;
          goto LABEL_96;
        case D3DKMDT_VPPR_ROTATE90:
          v118 = v148;
          v115 = v112 + v105;
          v163.X = v115;
          v119 = v148 - v87->Height - v109;
          break;
        case D3DKMDT_VPPR_ROTATE180:
          v118 = v148;
          v115 = CurrentOrientation + v105 - v87->Width - v109;
          v163.X = v115;
          v119 = v148 - v87->Height - v112;
          break;
        case D3DKMDT_VPPR_ROTATE270:
          v116 = v105 - v87->Width - v112;
          v117 = CurrentOrientation;
          v115 = CurrentOrientation + v116;
          v163.X = v115;
          Y = v109 + *((_DWORD *)v46 + 164);
          v163.Y = Y;
LABEL_96:
          v118 = v148;
LABEL_97:
          if ( (signed int)(v115 + v87->Width) < *v101
            || v115 > *((_DWORD *)v46 + 165)
            || (signed int)(Y + v87->Height) < *((_DWORD *)v46 + 164)
            || Y > *((_DWORD *)v46 + 166) )
          {
            v163.X = *v101 + v117 / 2;
            v163.Y = *((_DWORD *)v46 + 164) + v118 / 2;
          }
          FillClipParams(v87, v46, &v163, (struct _CURSOR_CLIP_PARAMS *)v161);
          if ( v162 )
          {
            v10 = DISPLAY_SOURCE::GetClippedCursor(v46);
            if ( !v10->pPixels )
            {
              v124 = WdLogNewEntry5_WdAssertion(v121, v120, v122, v123);
              *(_QWORD *)(v124 + 24) = 1196LL;
              WdLogEvent5_WdAssertion(v124);
            }
            ClipCurrentCursor(v87, v10, (struct _CURSOR_CLIP_PARAMS *)v161);
            LODWORD(v10) = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v18 + 1976), v10);
            if ( (int)v10 < 0 )
              goto LABEL_112;
            *((_BYTE *)v46 + 701) = 1;
          }
          else
          {
            LODWORD(v10) = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v18 + 1976), v87);
            if ( (int)v10 < 0 )
              goto LABEL_112;
            *((_BYTE *)v46 + 701) = 0;
          }
          v36 = v152;
          v48 = v145;
          goto LABEL_29;
        default:
          LODWORD(v111) = v110 % (int)v106;
          v113 = WdLogNewEntry5_WdAssertion((unsigned int)(v95 - 3), v111, v105, v106);
          *(_QWORD *)(v113 + 24) = v95;
          WdLogEvent5_WdAssertion(v113);
          Y = v163.Y;
          v115 = v163.X;
          goto LABEL_95;
      }
      Y = *((_DWORD *)v46 + 164) + v119;
      v117 = CurrentOrientation;
      v163.Y = Y;
      goto LABEL_97;
    }
    LODWORD(v10) = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v18 + 1976), a3);
    if ( (int)v10 < 0 )
      goto LABEL_112;
LABEL_29:
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      LODWORD(v142) = v163.Flags.0;
      LODWORD(v141) = v163.Y;
      LODWORD(v140) = v163.X;
      LODWORD(v139) = v163.VidPnSourceId;
      Template_pdqqq(v57, &EventSetPointerPosition, v58, v160, v139, v140, v141, v142);
    }
    LODWORD(v10) = ADAPTER_DISPLAY::DdiSetPointerPosition(*(ADAPTER_DISPLAY **)(v18 + 1976), &v163);
    if ( (int)v10 < 0 )
      goto LABEL_112;
    if ( v46 == SESSION_VIEW::GetPrimaryDisplaySource(v36) )
      v48 = 1;
LABEL_33:
    ADAPTER_DISPLAY::SavePointerInfo(
      *(ADAPTER_DISPLAY **)(v18 + 1976),
      v163.VidPnSourceId,
      *(_BYTE *)&v163.Flags.0 & 1,
      v163.X,
      v163.Y);
    if ( v48 )
    {
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v153);
      OutputDuplThunks<long (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int),_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int>::RunForAdapter(
        v18,
        v149->VidPnSourceId,
        v59,
        v149,
        a3,
        v150,
        a5,
        lambda_f489dca7fabaa54ed96ac3ad5186218c_::_helper_func_cdecl_);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v157);
    COREACCESS::~COREACCESS((COREACCESS *)v154);
  }
  if ( (int)v10 >= 0 )
    goto LABEL_44;
  v36 = v152;
LABEL_114:
  if ( *(_BYTE *)(*(_QWORD *)(v18 + 1976) + 133LL) )
  {
    for ( k = SESSION_VIEW::GetPrimaryDisplaySource(v36); ; k = SESSION_VIEW::GetNextDisplaySource(v36, v138) )
    {
      v138 = k;
      if ( !k )
        break;
      v129 = *((_QWORD *)k + 1);
      v130 = *(ADAPTER_DISPLAY ***)(v129 + 16);
      if ( !v130 )
      {
        v131 = WdLogNewEntry5_WdAssertion(v129, v126, v127, v128);
        *(_QWORD *)(v131 + 24) = 1275LL;
        WdLogEvent5_WdAssertion(v131);
      }
      if ( !v130[247] )
      {
        v132 = WdLogNewEntry5_WdAssertion(v129, v126, v127, v128);
        *(_QWORD *)(v132 + 24) = 1276LL;
        WdLogEvent5_WdAssertion(v132);
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v153, (struct DXGADAPTER *const)v130, 0LL);
      v133 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v153);
      v135 = v133;
      if ( v133 < 0 )
      {
        v137 = (_QWORD *)WdLogNewEntry5_WdError(v134);
        v137[3] = v151.HighPart;
        v137[4] = v17.LowPart;
        v137[5] = v135;
        WdLogEvent5_WdError(v137);
      }
      else
      {
        v136 = *((_DWORD *)v138 + 4);
        v163.X = 0;
        v163.Y = 0;
        v163.Flags.Value &= ~1u;
        v163.VidPnSourceId = v136;
        ADAPTER_DISPLAY::DdiSetPointerPosition(v130[247], &v163);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v153);
    }
  }
LABEL_44:
  DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)v143);
LABEL_45:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerExit, (__int64)a3, 3012);
  return (unsigned int)v10;
}
