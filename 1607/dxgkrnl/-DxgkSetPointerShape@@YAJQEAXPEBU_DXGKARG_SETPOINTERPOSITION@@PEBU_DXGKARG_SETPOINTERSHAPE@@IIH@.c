/*
 * XREFs of ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C007A500
 * Callers:
 *     ?DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C0078BC0 (-DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@I.c)
 *     DxgkWin32kSetPointerShape @ 0x1C01701C0 (DxgkWin32kSetPointerShape.c)
 * Callees:
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C00017E4 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00017FC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHH@Z @ 0x1C0006038 (-SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHH@Z.c)
 *     ?IsPrimaryVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0006BBC (-IsPrimaryVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00080C8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     Template_pdqqq @ 0x1C002ECC4 (Template_pdqqq.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z23IIP6AJPEAV3@423II@Z@Z @ 0x1C0078A64 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DX.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C007A348 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C007AC74 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C007AC88 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C007C090 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C007C954 (-FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOS.c)
 *     ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@4PEBU_DXGK_DRIVERCAPS@@AEAH@Z @ 0x1C007CA4C (-ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SE.c)
 *     ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C007CACC (-GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C007CB88 (-GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C0082A44 (IsVirtualizationDisabledForTarget.c)
 *     ?DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C0085BFC (-DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C008637C (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C0086898 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C008698C (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00A3E48 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C016EFDC (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z.c)
 *     ?RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGK_DRIVERCAPS@@@Z @ 0x1C016F6CC (-RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATIO.c)
 *     OutputDuplProcessRemoteSessionSetPointerShape @ 0x1C017FA08 (OutputDuplProcessRemoteSessionSetPointerShape.c)
 */

__int64 __fastcall DxgkSetPointerShape(
        struct DXGADAPTER *a1,
        struct _DXGKARG_SETPOINTERPOSITION *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3,
        int a4,
        unsigned int a5,
        int a6)
{
  unsigned int v6; // r10d
  _DXGKARG_SETPOINTERPOSITION *v8; // r12
  const struct _DXGKARG_SETPOINTERSHAPE *v10; // rsi
  int PairingAdapters; // eax
  __int64 v12; // rcx
  _QWORD *v13; // rdi
  struct _LUID v14; // rbx
  DXGGLOBAL *Global; // rax
  __int64 v16; // rcx
  DXGSESSIONDATA *SessionData; // rdi
  int v18; // eax
  SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v20; // rcx
  struct DISPLAY_SOURCE *i; // rax
  struct DISPLAY_SOURCE *v22; // r15
  __int64 v23; // rcx
  __int64 v24; // r13
  __int64 v25; // rcx
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdi
  char v30; // di
  __int64 v31; // r8
  struct _DXGKARG_SETPOINTERSHAPE *SavedCursor; // rdi
  void *pPixels; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *ClippedCursor; // r12
  void *v35; // rcx
  size_t v36; // r8
  UINT YHot; // eax
  _DWORD *v38; // rsi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v39; // r9d
  int v40; // ecx
  int v41; // r10d
  int v42; // r12d
  int v43; // r8d
  int v44; // edx
  INT X; // eax
  int v46; // r12d
  int v47; // eax
  int v48; // edx
  INT v49; // r8d
  int v50; // r12d
  INT v51; // r9d
  int v52; // r11d
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rdx
  __int64 v57; // r9
  _QWORD *v58; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  SESSION_VIEW *v62; // r13
  struct DISPLAY_SOURCE *j; // rax
  unsigned int *v64; // rdi
  __int64 v65; // rcx
  ADAPTER_DISPLAY **v66; // r14
  int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // r15
  __int64 v70; // rax
  __int64 v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rax
  __int64 v74; // rbx
  __int64 v75; // rax
  _QWORD *v76; // rdi
  __int64 v77; // rax
  _QWORD *v78; // rax
  const struct _DXGKARG_SETPOINTERSHAPE *v79; // rcx
  void *v80; // rcx
  size_t v81; // r8
  __int64 v82; // rax
  UINT v83; // r8d
  UINT v84; // r9d
  struct _DXGKARG_SETPOINTERSHAPE *v85; // rax
  __int64 v86; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v87; // eax
  _QWORD *v88; // rax
  struct _DXGKARG_SETPOINTERSHAPE *v89; // [rsp+20h] [rbp-E0h]
  struct _DXGKARG_SETPOINTERSHAPE *v90; // [rsp+28h] [rbp-D8h]
  struct _DXGK_DRIVERCAPS *v91; // [rsp+30h] [rbp-D0h]
  int *v92; // [rsp+38h] [rbp-C8h]
  char v93; // [rsp+50h] [rbp-B0h] BYREF
  char v94; // [rsp+51h] [rbp-AFh] BYREF
  char v95[2]; // [rsp+52h] [rbp-AEh] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // [rsp+54h] [rbp-ACh]
  int v97; // [rsp+58h] [rbp-A8h] BYREF
  int v98; // [rsp+5Ch] [rbp-A4h]
  const struct _DXGKARG_SETPOINTERPOSITION *v99; // [rsp+60h] [rbp-A0h]
  SESSION_VIEW *v100; // [rsp+68h] [rbp-98h] BYREF
  int v101; // [rsp+70h] [rbp-90h]
  struct _LUID v102; // [rsp+78h] [rbp-88h] BYREF
  struct DXGADAPTER *v103; // [rsp+80h] [rbp-80h]
  _BYTE v104[80]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v105[20]; // [rsp+E0h] [rbp-20h] BYREF
  int v106; // [rsp+F4h] [rbp-Ch]
  _DXGKARG_SETPOINTERPOSITION v107; // [rsp+F8h] [rbp-8h] BYREF

  v101 = a4;
  v6 = a4;
  v99 = a2;
  v8 = a2;
  v103 = a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
  {
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3012);
    v6 = v101;
  }
  LODWORD(v10) = 0;
  if ( !a3 || !v8 )
    goto LABEL_85;
  v107 = *v8;
  if ( a6 )
  {
    OutputDuplProcessRemoteSessionSetPointerShape(v8, a3, v6, a5);
    goto LABEL_69;
  }
  if ( (a3->Flags.Value & 0xFFFFFFF8) != 0 )
  {
    v71 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v71 + 24) = a3->Flags.Value;
    *(_QWORD *)(v71 + 32) = a1;
    WdLogEvent5_WdError(v71);
LABEL_85:
    LODWORD(v10) = -1073741811;
    goto LABEL_69;
  }
  PairingAdapters = DxgkpGetPairingAdapters(
                      a1,
                      a3->VidPnSourceId,
                      0LL,
                      0LL,
                      (struct DXGADAPTER **)&v102,
                      (unsigned __int64 *)&v100);
  v10 = (const struct _DXGKARG_SETPOINTERSHAPE *)PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v72 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v72[3] = a1;
    v72[4] = a3->VidPnSourceId;
    v72[5] = v10;
    WdLogEvent5_WdEvent(v72);
    goto LABEL_69;
  }
  v13 = (_QWORD *)v102;
  if ( !*(_QWORD *)&v102 )
  {
    v73 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v73 + 24) = 1039LL;
    WdLogEvent5_WdAssertion(v73);
  }
  if ( !v13[266] )
  {
    v60 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v60 + 24) = 1040LL;
    WdLogEvent5_WdAssertion(v60);
  }
  v14 = *(struct _LUID *)((char *)v13 + 268);
  v102 = v14;
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v13);
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    v74 = WdLogNewEntry5_WdError(v16);
    LODWORD(v10) = -1073741811;
    *(_QWORD *)(v74 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    *(_QWORD *)(v74 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v74);
    goto LABEL_69;
  }
  v94 = 0;
  v18 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v94, 0);
  v10 = (const struct _DXGKARG_SETPOINTERSHAPE *)v18;
  if ( v18 < 0 )
  {
    v75 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v75 + 24) = v10;
    WdLogEvent5_WdEvent(v75);
LABEL_90:
    DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v94);
    goto LABEL_69;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionData, &v102, a3->VidPnSourceId);
  v100 = SessionViewFromSource;
  if ( !SessionViewFromSource )
  {
    v76 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v76[3] = a3->VidPnSourceId;
    v76[4] = v102.HighPart;
    v76[5] = v14.LowPart;
    LODWORD(v10) = -1073741811;
    v76[6] = (unsigned int)PsGetCurrentProcessSessionId();
    v76[7] = -1073741811LL;
    WdLogEvent5_WdError(v76);
    goto LABEL_90;
  }
  for ( i = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
        ;
        i = SESSION_VIEW::GetNextDisplaySource(v100, v22) )
  {
    v22 = i;
    if ( !i )
      goto LABEL_67;
    v23 = *((_QWORD *)i + 1);
    v24 = *(_QWORD *)(v23 + 16);
    if ( !v24 )
    {
      v77 = WdLogNewEntry5_WdAssertion(v23);
      *(_QWORD *)(v77 + 24) = 1088LL;
      WdLogEvent5_WdAssertion(v77);
    }
    if ( !*(_QWORD *)(v24 + 2128) )
    {
      v61 = WdLogNewEntry5_WdAssertion(v23);
      *(_QWORD *)(v61 + 24) = 1089LL;
      WdLogEvent5_WdAssertion(v61);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v104, (struct DXGADAPTER *const)v24, 0LL);
    LODWORD(v10) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v104);
    if ( (int)v10 < 0 )
      goto LABEL_66;
    if ( (*(_DWORD *)(v24 + 300) & 0x100) == 0 && (*(_DWORD *)(v24 + 3708) & 8) != 0 )
    {
LABEL_92:
      LODWORD(v10) = -1073741823;
LABEL_119:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v104);
      goto LABEL_72;
    }
    v107.VidPnSourceId = *((_DWORD *)v22 + 4);
    if ( !ADAPTER_DISPLAY::IsPrimaryVisible(*(ADAPTER_DISPLAY **)(v24 + 2128), *((_DWORD *)v22 + 4)) )
      break;
    if ( (*(_DWORD *)(v24 + 300) & 0x20) != 0
      && !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v24 + 2128)) )
    {
      goto LABEL_92;
    }
    v26 = *((unsigned int *)v22 + 241);
    v93 = 1;
    v95[0] = 1;
    v27 = IsVirtualizationDisabledForTarget(v24, v26, &v93, v95);
    v29 = v27;
    if ( v27 < 0 )
    {
      v78 = (_QWORD *)WdLogNewEntry5_WdError(v28);
      v78[3] = *((unsigned int *)v22 + 4);
      v78[4] = *(int *)(v24 + 272);
      v78[5] = *(unsigned int *)(v24 + 268);
      v78[6] = v29;
      WdLogEvent5_WdError(v78);
    }
    v30 = 0;
    if ( v93 )
    {
      if ( v95[0] )
      {
        LODWORD(v10) = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v24 + 2128), a3);
        if ( (int)v10 < 0 )
          goto LABEL_66;
        goto LABEL_58;
      }
      v31 = 1LL;
    }
    else
    {
      v31 = 0LL;
    }
    CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(
                                         *((_QWORD *)v22 + 1),
                                         *((unsigned int *)v22 + 4),
                                         v31);
    if ( a3->Width > *(_DWORD *)(v24 + 1480) || a3->Height > *(_DWORD *)(v24 + 1484) )
      goto LABEL_92;
    SavedCursor = DISPLAY_SOURCE::GetSavedCursor(v22, 1);
    pPixels = (void *)SavedCursor->pPixels;
    if ( !pPixels
      || (memset(pPixels, 0, 4 * *(unsigned int *)(v24 + 1484) * (unsigned __int64)*(unsigned int *)(v24 + 1480)),
          ClippedCursor = DISPLAY_SOURCE::GetClippedCursor(v22, 1),
          !ClippedCursor->pPixels) )
    {
LABEL_118:
      LODWORD(v10) = -1073741801;
      goto LABEL_119;
    }
    v97 = 0;
    LODWORD(v10) = ScaleCursorShape(
                     (const struct tagRECT *)((char *)v22 + 652),
                     (const struct tagRECT *)((char *)v100 + 24),
                     CurrentOrientation,
                     a3,
                     ClippedCursor,
                     SavedCursor,
                     (const struct _DXGK_DRIVERCAPS *)(v24 + 1456),
                     &v97);
    if ( (int)v10 < 0 )
      goto LABEL_66;
    if ( v97 )
    {
      if ( CurrentOrientation == D3DKMDT_VPPR_IDENTITY || v93 )
      {
        v80 = (void *)SavedCursor->pPixels;
        SavedCursor->Flags.Value = ClippedCursor->Flags.Value;
        SavedCursor->Width = ClippedCursor->Width;
        SavedCursor->Height = ClippedCursor->Height;
        SavedCursor->Pitch = ClippedCursor->Pitch;
        if ( (ClippedCursor->Flags.Value & 1) != 0 )
          v81 = 2 * ClippedCursor->Height * ClippedCursor->Pitch;
        else
          v81 = ClippedCursor->Height * ClippedCursor->Pitch;
        memmove(v80, ClippedCursor->pPixels, v81);
        SavedCursor->XHot = ClippedCursor->XHot;
        YHot = ClippedCursor->YHot;
        goto LABEL_39;
      }
      v79 = ClippedCursor;
    }
    else
    {
      if ( CurrentOrientation == D3DKMDT_VPPR_IDENTITY || v93 )
      {
        v35 = (void *)SavedCursor->pPixels;
        SavedCursor->Flags.Value = a3->Flags.Value;
        SavedCursor->Width = a3->Width;
        SavedCursor->Height = a3->Height;
        SavedCursor->Pitch = a3->Pitch;
        if ( (a3->Flags.Value & 1) != 0 )
          v36 = 2 * a3->Height * a3->Pitch;
        else
          v36 = a3->Height * a3->Pitch;
        memmove(v35, a3->pPixels, v36);
        SavedCursor->XHot = a3->XHot;
        YHot = a3->YHot;
LABEL_39:
        SavedCursor->YHot = YHot;
        goto LABEL_40;
      }
      v79 = a3;
    }
    RotateCursorShape(v79, SavedCursor, CurrentOrientation, (const struct _DXGK_DRIVERCAPS *)(v24 + 1456));
LABEL_40:
    v38 = (_DWORD *)((char *)v22 + 652);
    v39 = CurrentOrientation;
    v40 = *((_DWORD *)v100 + 8) - *((_DWORD *)v100 + 6);
    v41 = *((_DWORD *)v100 + 9) - *((_DWORD *)v100 + 7);
    v42 = *((_DWORD *)v22 + 166) - *((_DWORD *)v22 + 164);
    v43 = *((_DWORD *)v22 + 163);
    v44 = *((_DWORD *)v22 + 165) - v43;
    v97 = v44;
    v98 = v42;
    X = v99->X;
    if ( ((CurrentOrientation - 1) & 0xFFFFFFFD) != 0 )
    {
      v46 = v42 * X / v40;
      v47 = v97 * v99->Y;
    }
    else
    {
      v46 = v44 * X / v40;
      v47 = v98 * v99->Y;
    }
    CurrentOrientation = v47 / v41;
    v48 = v47 / v41;
    if ( !v93 )
    {
      if ( v39 != D3DKMDT_VPPR_ROTATE90 )
      {
        if ( v39 == D3DKMDT_VPPR_ROTATE180 )
        {
          v52 = v97;
          v83 = v43 - SavedCursor->Width - v46;
          v50 = v98;
          v49 = v97 + v83;
          v107.X = v49;
          v51 = v98 + *((_DWORD *)v22 + 164) - SavedCursor->Height - v48;
        }
        else if ( v39 == D3DKMDT_VPPR_ROTATE270 )
        {
          v52 = v97;
          v49 = v97 + v43 - SavedCursor->Width - v48;
          v107.X = v49;
          v51 = v46 + *((_DWORD *)v22 + 164);
          v50 = v98;
        }
        else
        {
          if ( v39 != D3DKMDT_VPPR_IDENTITY )
          {
            v82 = WdLogNewEntry5_WdAssertion((unsigned int)(v39 - 3));
            *(_QWORD *)(v82 + 24) = 645LL;
            WdLogEvent5_WdAssertion(v82);
          }
          v49 = v46 + *v38;
          v50 = v98;
          v107.X = v49;
          v51 = *((_DWORD *)v22 + 164) + CurrentOrientation;
LABEL_49:
          v52 = v97;
        }
        v107.Y = v51;
        if ( (signed int)(v49 + SavedCursor->Width) < *v38
          || v49 > *((_DWORD *)v22 + 165)
          || (signed int)(v51 + SavedCursor->Height) < *((_DWORD *)v22 + 164)
          || v51 > *((_DWORD *)v22 + 166) )
        {
          v107.X = *v38 + v52 / 2;
          v107.Y = *((_DWORD *)v22 + 164) + v50 / 2;
        }
        goto LABEL_54;
      }
      v49 = v48 + v43;
      v107.X = v49;
      v84 = *((_DWORD *)v22 + 164) - SavedCursor->Height - v46;
      v50 = v98;
      v51 = v98 + v84;
      goto LABEL_49;
    }
    v107.X = v43 + v46;
    v107.Y = v48 + *((_DWORD *)v22 + 164);
LABEL_54:
    FillClipParams(SavedCursor, v22, &v107, (struct CURSOR_CLIP_PARAMS *)v105);
    if ( v106 )
    {
      v85 = DISPLAY_SOURCE::GetClippedCursor(v22, 1);
      v10 = v85;
      if ( !v85->pPixels )
        goto LABEL_118;
      ClipCurrentCursor(SavedCursor, v85, (struct CURSOR_CLIP_PARAMS *)v105);
      v10->VidPnSourceId = *((_DWORD *)v22 + 4);
      v30 = 0;
      LODWORD(v10) = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v24 + 2128), v10);
      if ( (int)v10 < 0 )
        goto LABEL_66;
      *((_BYTE *)v22 + 709) = 1;
    }
    else
    {
      SavedCursor->VidPnSourceId = *((_DWORD *)v22 + 4);
      v53 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v24 + 2128), SavedCursor);
      v30 = 0;
      LODWORD(v10) = v53;
      if ( v53 < 0 )
        goto LABEL_66;
      *((_BYTE *)v22 + 709) = 0;
    }
    v8 = (_DXGKARG_SETPOINTERPOSITION *)v99;
LABEL_58:
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v92) = v107.Flags.0;
      LODWORD(v91) = v107.Y;
      LODWORD(v90) = v107.X;
      LODWORD(v89) = v107.VidPnSourceId;
      Template_pdqqq(v54, &EventSetPointerPosition, v55, v103, v89, v90, v91, v92);
    }
    LODWORD(v10) = ADAPTER_DISPLAY::DdiSetPointerPosition(*(ADAPTER_DISPLAY **)(v24 + 2128), &v107);
    if ( (int)v10 < 0 )
      goto LABEL_66;
    if ( v22 == SESSION_VIEW::GetPrimaryDisplaySource(v100) )
      v30 = 1;
    ADAPTER_DISPLAY::SavePointerInfo(
      *(ADAPTER_DISPLAY **)(v24 + 2128),
      v107.VidPnSourceId,
      *(_BYTE *)&v107.Flags.0 & 1,
      v107.X,
      v107.Y);
    if ( v30 )
    {
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v104);
      OutputDuplThunks<long (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int),_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int>::RunForAdapter(
        (struct DXGADAPTER *)v24,
        v56,
        v8->VidPnSourceId,
        v57,
        (__int64)v8,
        (__int64)a3,
        v101,
        a5,
        (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64 (__fastcall *)(OUTPUTDUPL_MGR *, const struct _DXGKARG_SETPOINTERPOSITION *, const struct _DXGKARG_SETPOINTERSHAPE *, __int64, UINT), __int64, __int64, int, int))lambda_a0b6a2c68ac68a3ec6fe6563bf8a6539_::_lambda_invoker_cdecl_);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v104);
  }
  LODWORD(v10) = -1073741823;
  v58 = (_QWORD *)WdLogNewEntry5_WdError(v25);
  v58[3] = -1073741823LL;
  v58[4] = *((unsigned int *)v22 + 4);
  v58[5] = a3->Flags.Value;
  v58[6] = v103;
  WdLogEvent5_WdError(v58);
LABEL_66:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v104);
LABEL_67:
  if ( (int)v10 >= 0 )
    goto LABEL_68;
LABEL_72:
  v62 = v100;
  for ( j = SESSION_VIEW::GetPrimaryDisplaySource(v100);
        ;
        j = SESSION_VIEW::GetNextDisplaySource(v62, (const struct DISPLAY_SOURCE *)v64) )
  {
    v64 = (unsigned int *)j;
    if ( !j )
      break;
    v65 = *((_QWORD *)j + 1);
    v66 = *(ADAPTER_DISPLAY ***)(v65 + 16);
    if ( !v66 )
    {
      v86 = WdLogNewEntry5_WdAssertion(v65);
      *(_QWORD *)(v86 + 24) = 1316LL;
      WdLogEvent5_WdAssertion(v86);
    }
    if ( !v66[266] )
    {
      v70 = WdLogNewEntry5_WdAssertion(v65);
      *(_QWORD *)(v70 + 24) = 1317LL;
      WdLogEvent5_WdAssertion(v70);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v104, (struct DXGADAPTER *const)v66, 0LL);
    v67 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v104);
    v69 = v67;
    if ( v67 < 0 )
    {
      v88 = (_QWORD *)WdLogNewEntry5_WdError(v68);
      v88[3] = v102.HighPart;
      v88[4] = v14.LowPart;
      v88[5] = v69;
      WdLogEvent5_WdError(v88);
    }
    else if ( ADAPTER_DISPLAY::IsPrimaryVisible(v66[266], v64[4]) )
    {
      v87 = v64[4];
      v107.Flags.Value &= ~1u;
      v107.VidPnSourceId = v87;
      *(_QWORD *)&v107.X = 0LL;
      ADAPTER_DISPLAY::DdiSetPointerPosition(v66[266], &v107);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v104);
  }
LABEL_68:
  DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v94);
LABEL_69:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerExit, (__int64)a3, 3012);
  return (unsigned int)v10;
}
