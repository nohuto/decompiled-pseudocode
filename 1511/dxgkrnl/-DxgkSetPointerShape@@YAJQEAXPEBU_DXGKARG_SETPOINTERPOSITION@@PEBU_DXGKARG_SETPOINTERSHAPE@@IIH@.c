/*
 * XREFs of ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C009D4F8
 * Callers:
 *     ?DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C009FBD0 (-DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@I.c)
 *     DxgkWin32kSetPointerShape @ 0x1C014AE20 (DxgkWin32kSetPointerShape.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0003B48 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0007070 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007098 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHH@Z @ 0x1C00074A8 (-SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHH@Z.c)
 *     ?IsPrimaryVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007EC4 (-IsPrimaryVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     Template_pdqqq @ 0x1C0028DF0 (Template_pdqqq.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008A660 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C0097258 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0099628 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C009978C (-DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C0099E74 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C009DB50 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C009DB64 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z @ 0x1C009ED20 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@IP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z12IIP6AJPEAV3@312II@Z@Z @ 0x1C009FC40 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DX.c)
 *     ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C009FDD8 (-FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOS.c)
 *     ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@4PEBU_DXGK_DRIVERCAPS@@AEAH@Z @ 0x1C009FED0 (-ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SE.c)
 *     ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@XZ @ 0x1C009FF50 (-GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@XZ.c)
 *     ?GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@XZ @ 0x1C009FFF4 (-GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@XZ.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00A16BC (IsVirtualizationDisabledForTarget.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C012CA58 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C0149C48 (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z.c)
 *     ?RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGK_DRIVERCAPS@@@Z @ 0x1C014A340 (-RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATIO.c)
 *     OutputDuplProcessRemoteSessionSetPointerShape @ 0x1C015AA10 (OutputDuplProcessRemoteSessionSetPointerShape.c)
 */

__int64 __fastcall DxgkSetPointerShape(
        struct DXGADAPTER *a1,
        struct _DXGKARG_SETPOINTERPOSITION *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  unsigned int v6; // r11d
  _DXGKARG_SETPOINTERPOSITION *v8; // r10
  struct _DXGKARG_SETPOINTERSHAPE *v10; // rsi
  int PairingAdapters; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rdi
  struct _LUID v17; // rbx
  __int64 v18; // r13
  __int64 v19; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v21; // rcx
  DXGSESSIONDATA *SessionData; // rdi
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v29; // rcx
  SESSION_VIEW *v30; // r12
  struct DISPLAY_SOURCE *i; // rax
  struct DISPLAY_SOURCE *v32; // r15
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdi
  int v43; // r8d
  struct _DXGKARG_SETPOINTERSHAPE *SavedCursor; // rax
  __int64 v45; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *v46; // rdi
  __int64 v47; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *ClippedCursor; // r12
  void *v49; // rcx
  size_t v50; // r8
  UINT YHot; // eax
  _DWORD *v52; // rsi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v53; // r9d
  int v54; // ecx
  int v55; // r10d
  int v56; // r11d
  int v57; // r8d
  int v58; // edx
  INT X; // eax
  int v60; // r12d
  int v61; // eax
  int v62; // edx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v63; // r9d
  INT v64; // r8d
  INT v65; // r9d
  int v66; // r12d
  __int64 v67; // r8
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r8
  __int64 v72; // rax
  __int64 v73; // rax
  _QWORD *v74; // rax
  _QWORD *v75; // rax
  __int64 v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // rax
  __int64 v79; // rbx
  __int64 v80; // rax
  _QWORD *v81; // rdi
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  const struct _DXGKARG_SETPOINTERSHAPE *v85; // rcx
  void *pPixels; // rcx
  size_t v87; // r8
  __int64 v88; // rax
  UINT v89; // r8d
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // r8
  __int64 v93; // rax
  struct DISPLAY_SOURCE *j; // rax
  __int64 v95; // rcx
  ADAPTER_DISPLAY **v96; // r14
  __int64 v97; // rax
  __int64 v98; // rax
  int v99; // eax
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r15
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v103; // eax
  _QWORD *v104; // rax
  struct DISPLAY_SOURCE *v105; // rdi
  struct _DXGKARG_SETPOINTERSHAPE *v106; // [rsp+20h] [rbp-C9h]
  struct _DXGKARG_SETPOINTERSHAPE *v107; // [rsp+28h] [rbp-C1h]
  struct _DXGK_DRIVERCAPS *v108; // [rsp+30h] [rbp-B9h]
  int *v109; // [rsp+38h] [rbp-B1h]
  char v110; // [rsp+40h] [rbp-A9h] BYREF
  char v111; // [rsp+41h] [rbp-A8h] BYREF
  char v112; // [rsp+42h] [rbp-A7h] BYREF
  char v113; // [rsp+43h] [rbp-A6h]
  int v114; // [rsp+44h] [rbp-A5h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // [rsp+48h] [rbp-A1h]
  const struct _DXGKARG_SETPOINTERPOSITION *v116; // [rsp+50h] [rbp-99h]
  struct _LUID v117; // [rsp+58h] [rbp-91h] BYREF
  unsigned int v118; // [rsp+60h] [rbp-89h]
  SESSION_VIEW *v119; // [rsp+68h] [rbp-81h]
  int v120; // [rsp+70h] [rbp-79h]
  struct DXGADAPTER *v121; // [rsp+78h] [rbp-71h]
  _BYTE v122[56]; // [rsp+80h] [rbp-69h] BYREF
  _BYTE v123[20]; // [rsp+B8h] [rbp-31h] BYREF
  int v124; // [rsp+CCh] [rbp-1Dh]
  _DXGKARG_SETPOINTERPOSITION v125; // [rsp+D0h] [rbp-19h] BYREF

  v118 = a4;
  v6 = a4;
  v116 = a2;
  v8 = a2;
  v121 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
  {
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3012);
    v8 = (_DXGKARG_SETPOINTERPOSITION *)v116;
    v6 = v118;
  }
  LODWORD(v10) = 0;
  if ( !a3 || !v8 )
    goto LABEL_78;
  v125 = *v8;
  if ( a6 )
  {
    OutputDuplProcessRemoteSessionSetPointerShape(v8, a3, v6, a5);
    goto LABEL_68;
  }
  if ( (a3->Flags.Value & 0xFFFFFFF8) != 0 )
  {
    v76 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v76 + 24) = a3->Flags.Value;
    *(_QWORD *)(v76 + 32) = a1;
    WdLogEvent5_WdError(v76);
LABEL_78:
    LODWORD(v10) = -1073741811;
    goto LABEL_68;
  }
  PairingAdapters = DxgkpGetPairingAdapters(a1, a3->VidPnSourceId, 0LL, (struct DXGADAPTER **)&v117);
  v10 = (struct _DXGKARG_SETPOINTERSHAPE *)PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v77 = (_QWORD *)WdLogNewEntry5_WdEvent(v13, v12, v14, v15);
    v77[3] = a1;
    v77[4] = a3->VidPnSourceId;
    v77[5] = v10;
    WdLogEvent5_WdEvent(v77);
    goto LABEL_68;
  }
  v16 = (_QWORD *)v117;
  if ( !*(_QWORD *)&v117 )
  {
    v78 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v78 + 24) = 1037LL;
    WdLogEvent5_WdAssertion(v78);
  }
  if ( !v16[248] )
  {
    v72 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v72 + 24) = 1038LL;
    WdLogEvent5_WdAssertion(v72);
  }
  v17 = *(struct _LUID *)((char *)v16 + 252);
  v117 = v17;
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v16);
  v18 = 0LL;
  Global = DXGGLOBAL::GetGlobal(v19);
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    v79 = WdLogNewEntry5_WdError(v21);
    LODWORD(v10) = -1073741811;
    *(_QWORD *)(v79 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    *(_QWORD *)(v79 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v79);
    goto LABEL_68;
  }
  v111 = 0;
  v23 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v111, 0);
  v10 = (struct _DXGKARG_SETPOINTERSHAPE *)v23;
  if ( v23 < 0 )
  {
    v80 = WdLogNewEntry5_WdEvent(v25, v24, v26, v27);
    *(_QWORD *)(v80 + 24) = v10;
    WdLogEvent5_WdEvent(v80);
LABEL_83:
    DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v111);
    goto LABEL_68;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionData, &v117, a3->VidPnSourceId);
  v119 = SessionViewFromSource;
  v30 = SessionViewFromSource;
  if ( !SessionViewFromSource )
  {
    v81 = (_QWORD *)WdLogNewEntry5_WdError(v29);
    v81[3] = a3->VidPnSourceId;
    v81[4] = v117.HighPart;
    v81[5] = v17.LowPart;
    LODWORD(v10) = -1073741811;
    v81[6] = (unsigned int)PsGetCurrentProcessSessionId();
    v81[7] = -1073741811LL;
    WdLogEvent5_WdError(v81);
    goto LABEL_83;
  }
  for ( i = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource); ; i = SESSION_VIEW::GetNextDisplaySource(
                                                                                  v30,
                                                                                  v32) )
  {
    v32 = i;
    if ( !i )
      break;
    v33 = *((_QWORD *)i + 1);
    v18 = *(_QWORD *)(v33 + 16);
    if ( !v18 )
    {
      v82 = WdLogNewEntry5_WdAssertion(v33);
      *(_QWORD *)(v82 + 24) = 1086LL;
      WdLogEvent5_WdAssertion(v82);
    }
    if ( !*(_QWORD *)(v18 + 1984) )
    {
      v73 = WdLogNewEntry5_WdAssertion(v33);
      *(_QWORD *)(v73 + 24) = 1087LL;
      WdLogEvent5_WdAssertion(v73);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v122, (struct DXGADAPTER *const)v18, 0LL);
    v113 = 0;
    LODWORD(v10) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v122);
    if ( (int)v10 < 0 )
      goto LABEL_111;
    v125.VidPnSourceId = *((_DWORD *)v32 + 4);
    if ( !ADAPTER_DISPLAY::IsPrimaryVisible(*(ADAPTER_DISPLAY **)(v18 + 1984), *((_DWORD *)v32 + 4)) )
    {
      v75 = (_QWORD *)WdLogNewEntry5_WdTrace(v35, v34, v36, v37);
      v75[3] = -1073741823LL;
      v75[4] = *((unsigned int *)v32 + 4);
      v75[5] = a3->Flags.Value;
      v75[6] = v121;
      goto LABEL_63;
    }
    if ( (*(_DWORD *)(v18 + 284) & 0x20) != 0
      && !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v18 + 1984)) )
    {
      LODWORD(v10) = -1073741823;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v122);
      goto LABEL_113;
    }
    v38 = *((unsigned int *)v32 + 239);
    v110 = 1;
    v112 = 1;
    v39 = IsVirtualizationDisabledForTarget(v18, v38, &v110, &v112);
    v42 = v39;
    if ( v39 < 0 )
    {
      v74 = (_QWORD *)WdLogNewEntry5_WdError(v40);
      v74[3] = *((unsigned int *)v32 + 4);
      v74[4] = (int)HIDWORD(*(_QWORD *)(v18 + 252));
      v74[5] = *(unsigned int *)(v18 + 252);
      v74[6] = v42;
      WdLogEvent5_WdError(v74);
    }
    if ( !v110 )
    {
      v43 = 0;
LABEL_27:
      CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(
                                           *((_QWORD *)v32 + 1),
                                           *((_DWORD *)v32 + 4),
                                           v43);
      if ( a3->Width > *(_DWORD *)(v18 + 1344) || a3->Height > *(_DWORD *)(v18 + 1348) )
      {
        LODWORD(v10) = -1073741823;
LABEL_111:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v122);
        break;
      }
      SavedCursor = DISPLAY_SOURCE::GetSavedCursor(v32);
      v46 = SavedCursor;
      if ( !SavedCursor || !SavedCursor->pPixels )
      {
        v83 = WdLogNewEntry5_WdAssertion(v45);
        *(_QWORD *)(v83 + 24) = 1171LL;
        WdLogEvent5_WdAssertion(v83);
      }
      memset(
        (void *)v46->pPixels,
        0,
        4 * *(unsigned int *)(v18 + 1348) * (unsigned __int64)*(unsigned int *)(v18 + 1344));
      ClippedCursor = DISPLAY_SOURCE::GetClippedCursor(v32);
      if ( !ClippedCursor->pPixels )
      {
        v84 = WdLogNewEntry5_WdAssertion(v47);
        *(_QWORD *)(v84 + 24) = 1178LL;
        WdLogEvent5_WdAssertion(v84);
      }
      v114 = 0;
      LODWORD(v10) = ScaleCursorShape(
                       (const struct tagRECT *)((char *)v32 + 652),
                       (const struct tagRECT *)((char *)v119 + 24),
                       CurrentOrientation,
                       a3,
                       ClippedCursor,
                       v46,
                       (const struct _DXGK_DRIVERCAPS *)(v18 + 1320),
                       &v114);
      if ( (int)v10 < 0 )
        goto LABEL_111;
      if ( v114 )
      {
        if ( CurrentOrientation != D3DKMDT_VPPR_IDENTITY && !v110 )
        {
          v85 = ClippedCursor;
          goto LABEL_97;
        }
        pPixels = (void *)v46->pPixels;
        v46->Flags.Value = ClippedCursor->Flags.Value;
        v46->Width = ClippedCursor->Width;
        v46->Height = ClippedCursor->Height;
        v46->Pitch = ClippedCursor->Pitch;
        if ( (ClippedCursor->Flags.Value & 1) != 0 )
          v87 = 2 * ClippedCursor->Height * ClippedCursor->Pitch;
        else
          v87 = ClippedCursor->Height * ClippedCursor->Pitch;
        memmove(pPixels, ClippedCursor->pPixels, v87);
        v46->XHot = ClippedCursor->XHot;
        YHot = ClippedCursor->YHot;
      }
      else
      {
        if ( CurrentOrientation != D3DKMDT_VPPR_IDENTITY && !v110 )
        {
          v85 = a3;
LABEL_97:
          RotateCursorShape(v85, v46, CurrentOrientation, (const struct _DXGK_DRIVERCAPS *)(v18 + 1320));
LABEL_40:
          v52 = (_DWORD *)((char *)v32 + 652);
          v53 = CurrentOrientation;
          v54 = *((_DWORD *)v119 + 8) - *((_DWORD *)v119 + 6);
          v55 = *((_DWORD *)v119 + 9) - *((_DWORD *)v119 + 7);
          v56 = *((_DWORD *)v32 + 166) - *((_DWORD *)v32 + 164);
          v57 = *((_DWORD *)v32 + 163);
          v58 = *((_DWORD *)v32 + 165) - v57;
          v114 = v58;
          v120 = v56;
          X = v116->X;
          if ( ((CurrentOrientation - 1) & 0xFFFFFFFD) != 0 )
          {
            v60 = v56 * X / v54;
            v61 = v114 * v116->Y;
          }
          else
          {
            v60 = v58 * X / v54;
            v61 = v56 * v116->Y;
          }
          v62 = v61 / v55;
          CurrentOrientation = v61 / v55;
          if ( v110 )
          {
            v125.X = v57 + v60;
            v125.Y = v62 + *((_DWORD *)v32 + 164);
          }
          else
          {
            if ( v53 == D3DKMDT_VPPR_ROTATE90 )
            {
              v64 = v62 + v57;
              v125.X = v64;
              v63 = v56 - v46->Height - v60;
              goto LABEL_49;
            }
            if ( v53 == D3DKMDT_VPPR_ROTATE180 )
            {
              v89 = v57 - v46->Width - v60;
              v66 = v114;
              v64 = v114 + v89;
              v125.X = v64;
              v65 = *((_DWORD *)v32 + 164) + v56 - v46->Height - v62;
            }
            else
            {
              if ( v53 == D3DKMDT_VPPR_ROTATE270 )
              {
                v64 = v114 + v57 - v46->Width - v62;
                v125.X = v64;
                v65 = v60 + *((_DWORD *)v32 + 164);
              }
              else
              {
                if ( v53 != D3DKMDT_VPPR_IDENTITY )
                {
                  v88 = WdLogNewEntry5_WdAssertion((unsigned int)(v53 - 3));
                  *(_QWORD *)(v88 + 24) = 645LL;
                  WdLogEvent5_WdAssertion(v88);
                  v56 = v120;
                }
                v63 = CurrentOrientation;
                v64 = v60 + *v52;
                v125.X = v64;
LABEL_49:
                v65 = *((_DWORD *)v32 + 164) + v63;
              }
              v66 = v114;
            }
            v125.Y = v65;
            if ( (signed int)(v64 + v46->Width) < *v52
              || v64 > *((_DWORD *)v32 + 165)
              || (signed int)(v65 + v46->Height) < *((_DWORD *)v32 + 164)
              || v65 > *((_DWORD *)v32 + 166) )
            {
              v125.X = *v52 + v66 / 2;
              v125.Y = *((_DWORD *)v32 + 164) + v56 / 2;
            }
          }
          FillClipParams(v46, v32, &v125, (struct CURSOR_CLIP_PARAMS *)v123);
          if ( v124 )
          {
            v10 = DISPLAY_SOURCE::GetClippedCursor(v32);
            if ( !v10->pPixels )
            {
              v91 = WdLogNewEntry5_WdAssertion(v90);
              *(_QWORD *)(v91 + 24) = 1223LL;
              WdLogEvent5_WdAssertion(v91);
            }
            ClipCurrentCursor(v46, v10, (struct CURSOR_CLIP_PARAMS *)v123);
            v10->VidPnSourceId = *((_DWORD *)v32 + 4);
            LODWORD(v10) = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v18 + 1984), v10, v92);
            if ( (int)v10 < 0 )
              goto LABEL_111;
            *((_BYTE *)v32 + 701) = 1;
          }
          else
          {
            v46->VidPnSourceId = *((_DWORD *)v32 + 4);
            LODWORD(v10) = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v18 + 1984), v46, v67);
            if ( (int)v10 < 0 )
              goto LABEL_111;
            *((_BYTE *)v32 + 701) = 0;
          }
          v30 = v119;
          goto LABEL_59;
        }
        v49 = (void *)v46->pPixels;
        v46->Flags.Value = a3->Flags.Value;
        v46->Width = a3->Width;
        v46->Height = a3->Height;
        v46->Pitch = a3->Pitch;
        if ( (a3->Flags.Value & 1) != 0 )
          v50 = 2 * a3->Height * a3->Pitch;
        else
          v50 = a3->Height * a3->Pitch;
        memmove(v49, a3->pPixels, v50);
        v46->XHot = a3->XHot;
        YHot = a3->YHot;
      }
      v46->YHot = YHot;
      goto LABEL_40;
    }
    if ( !v112 )
    {
      v43 = 1;
      goto LABEL_27;
    }
    LODWORD(v10) = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v18 + 1984), a3, v41);
    if ( (int)v10 < 0 )
      goto LABEL_111;
LABEL_59:
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      LODWORD(v109) = v125.Flags.0;
      LODWORD(v108) = v125.Y;
      LODWORD(v107) = v125.X;
      LODWORD(v106) = v125.VidPnSourceId;
      Template_pdqqq(v68, &EventSetPointerPosition, v69, v121, v106, v107, v108, v109);
    }
    LODWORD(v10) = ADAPTER_DISPLAY::DdiSetPointerPosition(*(ADAPTER_DISPLAY **)(v18 + 1984), &v125, v69);
    if ( (int)v10 < 0 )
      goto LABEL_111;
    if ( v32 == SESSION_VIEW::GetPrimaryDisplaySource(v30) )
      v113 = 1;
LABEL_63:
    ADAPTER_DISPLAY::SavePointerInfo(
      *(ADAPTER_DISPLAY **)(v18 + 1984),
      v125.VidPnSourceId,
      *(_BYTE *)&v125.Flags.0 & 1,
      v125.X,
      v125.Y);
    if ( v113 )
    {
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v122);
      OutputDuplThunks<long (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int),_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int>::RunForAdapter(
        v18,
        v116->VidPnSourceId,
        v70,
        v116,
        a3,
        v118,
        a5,
        sub_1C00BFDA0);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v122);
  }
  if ( (int)v10 >= 0 )
    goto LABEL_67;
  v30 = v119;
LABEL_113:
  v93 = *(_QWORD *)(v18 + 1984);
  if ( *(_BYTE *)(v93 + 157) || *(_BYTE *)(v93 + 158) )
  {
    for ( j = SESSION_VIEW::GetPrimaryDisplaySource(v30); ; j = SESSION_VIEW::GetNextDisplaySource(v30, v105) )
    {
      v105 = j;
      if ( !j )
        break;
      v95 = *((_QWORD *)j + 1);
      v96 = *(ADAPTER_DISPLAY ***)(v95 + 16);
      if ( !v96 )
      {
        v97 = WdLogNewEntry5_WdAssertion(v95);
        *(_QWORD *)(v97 + 24) = 1303LL;
        WdLogEvent5_WdAssertion(v97);
      }
      if ( !v96[248] )
      {
        v98 = WdLogNewEntry5_WdAssertion(v95);
        *(_QWORD *)(v98 + 24) = 1304LL;
        WdLogEvent5_WdAssertion(v98);
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v122, (struct DXGADAPTER *const)v96, 0LL);
      v99 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v122);
      v102 = v99;
      if ( v99 < 0 )
      {
        v104 = (_QWORD *)WdLogNewEntry5_WdError(v100);
        v104[3] = v117.HighPart;
        v104[4] = v17.LowPart;
        v104[5] = v102;
        WdLogEvent5_WdError(v104);
      }
      else
      {
        v103 = *((_DWORD *)v105 + 4);
        v125.Flags.Value &= ~1u;
        v125.VidPnSourceId = v103;
        *(_QWORD *)&v125.X = 0LL;
        ADAPTER_DISPLAY::DdiSetPointerPosition(v96[248], &v125, v101);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v122);
    }
  }
LABEL_67:
  DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v111);
LABEL_68:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerExit, (__int64)a3, 3012);
  return (unsigned int)v10;
}
