/*
 * XREFs of ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C00D34A0
 * Callers:
 *     ?DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C00D3450 (-DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     DxgkWin32kSetPointerPosition @ 0x1C01700E0 (DxgkWin32kSetPointerPosition.c)
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
 *     Template_pdqqq @ 0x1C002ECC4 (Template_pdqqq.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2@@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z2P6AJPEAV3@32@Z@Z @ 0x1C00742FC (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2.c)
 *     ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0078300 (-ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0078654 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C007A348 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C007AC74 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C007AC88 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C007C090 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C007C954 (-FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOS.c)
 *     ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C007CACC (-GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C007CB88 (-GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C0082A44 (IsVirtualizationDisabledForTarget.c)
 *     ?DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C0085BFC (-DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C008637C (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C0086898 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00A3E48 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C016EFDC (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z.c)
 */

__int64 __fastcall DxgkSetPointerPosition(
        struct DXGADAPTER *a1,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        __int64 a3)
{
  struct DXGADAPTER *v3; // r14
  __int64 v4; // rcx
  int v5; // ebx
  int PairingAdapters; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  DXGADAPTER *v10; // rdi
  struct _LUID v11; // rbx
  __int64 v12; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v14; // rcx
  DXGSESSIONDATA *SessionData; // rdi
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rsi
  DXGSESSIONDATA **SessionViewFromSource; // rax
  __int64 v20; // rcx
  DXGADAPTER *v21; // r12
  struct DISPLAY_SOURCE *i; // rax
  __int64 v23; // rcx
  struct DISPLAY_SOURCE *v24; // rbx
  __int64 v25; // rdi
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned int v33; // edx
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rsi
  bool v38; // si
  int CurrentOrientation; // r13d
  struct _DXGKARG_SETPOINTERSHAPE *SavedCursor; // rax
  __int64 v41; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *v42; // r14
  UINT Width; // r9d
  int LowPart; // r11d
  int v45; // r8d
  int v46; // edx
  int v47; // ecx
  int v48; // r10d
  INT X; // eax
  int v50; // esi
  int v51; // eax
  int v52; // r12d
  INT v53; // r8d
  INT v54; // edx
  int v55; // r10d
  signed int v56; // r9d
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // r9
  __int64 v61; // rax
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rax
  _QWORD *v71; // rdi
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rax
  _QWORD *v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // rax
  __int64 v80; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *ClippedCursor; // rsi
  __int64 v82; // r8
  int v83; // eax
  __int64 v84; // rcx
  __int64 v85; // rsi
  _QWORD *v86; // rax
  int v87; // eax
  __int64 v88; // rcx
  __int64 v89; // rsi
  _QWORD *v90; // rax
  __int64 v91; // rax
  _QWORD *v92; // rcx
  __int64 v93; // rax
  _QWORD *v94; // rcx
  const void *pPixels; // rax
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  __int64 v97; // r9
  struct DXGADAPTER **v98; // [rsp+20h] [rbp-A9h]
  unsigned __int64 *v99; // [rsp+28h] [rbp-A1h]
  __int64 v100; // [rsp+30h] [rbp-99h]
  __int64 v101; // [rsp+38h] [rbp-91h]
  char v102; // [rsp+40h] [rbp-89h] BYREF
  char v103; // [rsp+41h] [rbp-88h] BYREF
  char v104; // [rsp+42h] [rbp-87h] BYREF
  int v105; // [rsp+44h] [rbp-85h]
  struct _LUID v106; // [rsp+48h] [rbp-81h] BYREF
  DXGADAPTER *v107; // [rsp+50h] [rbp-79h] BYREF
  BOOL v108; // [rsp+58h] [rbp-71h]
  struct DXGADAPTER *v109; // [rsp+60h] [rbp-69h]
  _BYTE v110[20]; // [rsp+68h] [rbp-61h] BYREF
  int v111; // [rsp+7Ch] [rbp-4Dh]
  _BYTE v112[80]; // [rsp+80h] [rbp-49h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v113; // [rsp+D0h] [rbp+7h] BYREF

  v3 = a1;
  v109 = a1;
  v4 = 2LL;
  v5 = a3;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(2LL, &EventProfilerEnter, a3, 3011);
  if ( !a2 )
  {
    LODWORD(v18) = -1073741811;
    goto LABEL_54;
  }
  if ( v5 )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    if ( RemoteOutputDuplMgr )
      OUTPUTDUPL_MGR::ProcessPointerPositionChange(RemoteOutputDuplMgr, a2, a3, v97);
LABEL_53:
    LODWORD(v18) = 0;
    goto LABEL_54;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v3, a2->VidPnSourceId, 0LL, 0LL, &v107, (unsigned __int64 *)&v106);
  v9 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v63 = (_QWORD *)WdLogNewEntry5_WdEvent(v8);
    v63[3] = v3;
    v63[4] = a2->VidPnSourceId;
    v63[5] = v9;
    WdLogEvent5_WdEvent(v63);
    LODWORD(v18) = v9;
    goto LABEL_54;
  }
  v10 = v107;
  if ( !v107 )
  {
    v64 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v64 + 24) = 1467LL;
    WdLogEvent5_WdAssertion(v64);
  }
  if ( !*((_QWORD *)v10 + 266) )
  {
    v61 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v61 + 24) = 1468LL;
    WdLogEvent5_WdAssertion(v61);
  }
  v11 = *(struct _LUID *)((char *)v10 + 268);
  v106 = v11;
  DXGADAPTER::ReleaseReference(v10);
  Global = DXGGLOBAL::GetGlobal(v12);
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    v65 = WdLogNewEntry5_WdError(v14);
    LODWORD(v18) = -1073741811;
    *(_QWORD *)(v65 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v67, v66, v68, v69);
    *(_QWORD *)(v65 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v65);
    goto LABEL_54;
  }
  v102 = 0;
  v16 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v102, 0);
  v18 = v16;
  if ( v16 < 0 )
  {
    v70 = WdLogNewEntry5_WdEvent(v17);
    *(_QWORD *)(v70 + 24) = v18;
    WdLogEvent5_WdEvent(v70);
    goto LABEL_87;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionData, &v106, a2->VidPnSourceId);
  v107 = (DXGADAPTER *)SessionViewFromSource;
  v21 = (DXGADAPTER *)SessionViewFromSource;
  if ( !SessionViewFromSource )
  {
    v71 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v71[3] = a2->VidPnSourceId;
    v71[4] = v106.HighPart;
    v71[5] = v11.LowPart;
    LODWORD(v18) = -1073741811;
    v71[6] = (unsigned int)PsGetCurrentProcessSessionId(v73, v72, v74, v75);
    v71[7] = -1073741811LL;
    WdLogEvent5_WdError(v71);
    goto LABEL_87;
  }
  for ( i = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
        ;
        i = SESSION_VIEW::GetNextDisplaySource(v21, v24) )
  {
    v24 = i;
    if ( !i )
    {
      DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v102);
      goto LABEL_53;
    }
    v25 = *(_QWORD *)(*((_QWORD *)i + 1) + 16LL);
    if ( !v25 )
    {
      v76 = WdLogNewEntry5_WdAssertion(v23);
      *(_QWORD *)(v76 + 24) = 1516LL;
      WdLogEvent5_WdAssertion(v76);
    }
    if ( !*(_QWORD *)(v25 + 2128) )
    {
      v62 = WdLogNewEntry5_WdAssertion(v23);
      *(_QWORD *)(v62 + 24) = 1517LL;
      WdLogEvent5_WdAssertion(v62);
    }
    v113 = *a2;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v112, (struct DXGADAPTER *const)v25, 0LL);
    v26 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v112);
    v28 = v26;
    if ( v26 < 0 )
    {
      v77 = (_QWORD *)WdLogNewEntry5_WdError(v27);
      v77[3] = *(int *)(v25 + 272);
      v77[4] = *(unsigned int *)(v25 + 268);
      v77[5] = v28;
      WdLogEvent5_WdError(v77);
      goto LABEL_51;
    }
    if ( (*(_DWORD *)(v25 + 300) & 0x100) != 0 || (*(_DWORD *)(v25 + 3708) & 8) == 0 )
      break;
LABEL_51:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v112);
  }
  v113.VidPnSourceId = *((_DWORD *)v24 + 4);
  if ( !ADAPTER_DISPLAY::IsPrimaryVisible(*(ADAPTER_DISPLAY **)(v25 + 2128), *((_DWORD *)v24 + 4)) )
  {
    v92 = (_QWORD *)WdLogNewEntry5_WdTrace(v30, v29, v31, v32);
    v92[3] = -1073741823LL;
    v92[4] = v113.VidPnSourceId;
    v93 = *(_BYTE *)&v113.Flags.0 & 1;
    v92[6] = v3;
    v92[5] = v93;
LABEL_49:
    ADAPTER_DISPLAY::SavePointerInfo(
      *(ADAPTER_DISPLAY **)(v25 + 2128),
      v113.VidPnSourceId,
      *(_BYTE *)&v113.Flags.0 & 1,
      v113.X,
      v113.Y);
    if ( v24 == SESSION_VIEW::GetPrimaryDisplaySource(v21) )
    {
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v112);
      OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *),_DXGKARG_SETPOINTERPOSITION const *>::RunForAdapter(
        (struct DXGADAPTER *)v25,
        v58,
        a2->VidPnSourceId,
        v59,
        (__int64)a2,
        (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, void (__fastcall *)(OUTPUTDUPL_MGR *__hidden, const struct _DXGKARG_SETPOINTERPOSITION *), __int64))lambda_eb72620180147af09faaee397ad33fb2_::_lambda_invoker_cdecl_);
    }
    goto LABEL_51;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v101) = v113.Flags.0;
    LODWORD(v100) = v113.Y;
    LODWORD(v99) = v113.X;
    LODWORD(v98) = v113.VidPnSourceId;
    Template_pdqqq(v30, &EventSetPointerPosition, v31, v3, v98, v99, v100, v101);
  }
  v33 = *((_DWORD *)v24 + 241);
  v103 = 1;
  v104 = 1;
  v34 = IsVirtualizationDisabledForTarget(v25, v33, (bool *)&v103, (bool *)&v104);
  v37 = v34;
  if ( v34 < 0 )
  {
    v78 = (_QWORD *)WdLogNewEntry5_WdError(v35);
    v78[3] = *((unsigned int *)v24 + 4);
    v78[4] = *(int *)(v25 + 272);
    v78[5] = *(unsigned int *)(v25 + 268);
    v78[6] = v37;
    WdLogEvent5_WdError(v78);
  }
  v38 = v103;
  if ( v103 && v104 || (*(_BYTE *)&v113.Flags.0 & 1) == 0 )
  {
LABEL_47:
    if ( (int)ADAPTER_DISPLAY::DdiSetPointerPosition(*(ADAPTER_DISPLAY **)(v25 + 2128), &v113, v36) < 0 )
    {
      v91 = WdLogNewEntry5_WdAssertion(v57);
      *(_QWORD *)(v91 + 24) = 1670LL;
      WdLogEvent5_WdAssertion(v91);
    }
    goto LABEL_49;
  }
  CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(*((_QWORD *)v24 + 1), *((_DWORD *)v24 + 4), v103 != 0);
  SavedCursor = DISPLAY_SOURCE::GetSavedCursor(v24, 0);
  v42 = SavedCursor;
  if ( SavedCursor->pPixels )
  {
    Width = SavedCursor->Width;
    if ( Width <= *(_DWORD *)(v25 + 1480) && SavedCursor->Height <= *(_DWORD *)(v25 + 1484) )
    {
      LowPart = *((_DWORD *)v24 + 166) - *((_DWORD *)v24 + 164);
      v45 = *((_DWORD *)v24 + 163);
      v46 = *((_DWORD *)v24 + 165) - v45;
      v47 = *((_DWORD *)v21 + 8) - *((_DWORD *)v21 + 6);
      v48 = *((_DWORD *)v21 + 9) - *((_DWORD *)v21 + 7);
      v108 = v38;
      v105 = v46;
      X = a2->X;
      v106.LowPart = LowPart;
      if ( ((CurrentOrientation - 1) & 0xFFFFFFFD) != 0 )
      {
        v50 = LowPart * X / v47;
        v51 = v105 * a2->Y;
      }
      else
      {
        v50 = v46 * X / v47;
        v51 = LowPart * a2->Y;
      }
      v52 = v51 / v48;
      if ( v108 )
      {
        v113.X = v45 + v50;
        v113.Y = v52 + *((_DWORD *)v24 + 164);
LABEL_44:
        FillClipParams(v42, v24, &v113, (struct CURSOR_CLIP_PARAMS *)v110);
        if ( v111 )
        {
          ClippedCursor = DISPLAY_SOURCE::GetClippedCursor(v24, 0);
          if ( !ClippedCursor->pPixels
            || ClippedCursor->Width > *(_DWORD *)(v25 + 1480)
            || ClippedCursor->Height > *(_DWORD *)(v25 + 1484) )
          {
            v94 = (_QWORD *)WdLogNewEntry5_WdError(v80);
            v94[3] = ClippedCursor->Width;
            v94[4] = ClippedCursor->Height;
            pPixels = ClippedCursor->pPixels;
            goto LABEL_86;
          }
          ClipCurrentCursor(v42, ClippedCursor, (struct CURSOR_CLIP_PARAMS *)v110);
          ClippedCursor->VidPnSourceId = *((_DWORD *)v24 + 4);
          v83 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v25 + 2128), ClippedCursor, v82);
          v85 = v83;
          if ( v83 < 0 )
          {
            v86 = (_QWORD *)WdLogNewEntry5_WdError(v84);
            v86[3] = *((unsigned int *)v24 + 4);
            v86[4] = *(int *)(v25 + 272);
            v86[5] = *(unsigned int *)(v25 + 268);
            v86[6] = v85;
            WdLogEvent5_WdError(v86);
          }
          *((_BYTE *)v24 + 709) = 1;
        }
        else if ( *((_BYTE *)v24 + 709) )
        {
          v87 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v25 + 2128), v42, v36);
          v89 = v87;
          if ( v87 < 0 )
          {
            v90 = (_QWORD *)WdLogNewEntry5_WdError(v88);
            v90[3] = *((unsigned int *)v24 + 4);
            v90[4] = *(int *)(v25 + 272);
            v90[5] = *(unsigned int *)(v25 + 268);
            v90[6] = v89;
            WdLogEvent5_WdError(v90);
          }
          *((_BYTE *)v24 + 709) = 0;
        }
        v21 = v107;
        v3 = v109;
        goto LABEL_47;
      }
      switch ( CurrentOrientation )
      {
        case 2:
          v53 = v52 + v45;
          v113.X = v53;
          v54 = *((_DWORD *)v24 + 164) + LowPart - v50 - v42->Height;
          break;
        case 3:
          v55 = v105;
          v53 = v105 + v45 - Width - v50;
          v113.X = v53;
          v54 = *((_DWORD *)v24 + 164) + LowPart - v52 - v42->Height;
          goto LABEL_40;
        case 4:
          v55 = v105;
          v53 = v105 + v45 - Width - v52;
          v113.X = v53;
          v54 = v50 + *((_DWORD *)v24 + 164);
          goto LABEL_40;
        default:
          if ( CurrentOrientation != 1 )
          {
            v79 = WdLogNewEntry5_WdAssertion((unsigned int)(CurrentOrientation - 3));
            *(_QWORD *)(v79 + 24) = 645LL;
            WdLogEvent5_WdAssertion(v79);
            LowPart = v106.LowPart;
          }
          v53 = v50 + *((_DWORD *)v24 + 163);
          v113.X = v53;
          v54 = v52 + *((_DWORD *)v24 + 164);
          break;
      }
      v55 = v105;
LABEL_40:
      v113.Y = v54;
      v56 = *((_DWORD *)v24 + 163);
      if ( (signed int)(v53 + v42->Width) < v56
        || v53 > *((_DWORD *)v24 + 165)
        || (signed int)(v54 + v42->Height) < *((_DWORD *)v24 + 164)
        || v54 > *((_DWORD *)v24 + 166) )
      {
        v113.X = v56 + v55 / 2;
        v113.Y = *((_DWORD *)v24 + 164) + LowPart / 2;
      }
      goto LABEL_44;
    }
  }
  v94 = (_QWORD *)WdLogNewEntry5_WdError(v41);
  v94[3] = v42->Width;
  v94[4] = v42->Height;
  pPixels = v42->pPixels;
LABEL_86:
  v94[5] = pPixels;
  WdLogEvent5_WdError(v94);
  LODWORD(v18) = -1073741811;
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v112);
LABEL_87:
  DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v102);
LABEL_54:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v4, &EventProfilerExit, a3, 3011);
  return (unsigned int)v18;
}
