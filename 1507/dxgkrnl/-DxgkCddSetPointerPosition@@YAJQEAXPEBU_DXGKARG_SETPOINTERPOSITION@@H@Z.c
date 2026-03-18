/*
 * XREFs of ?DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C00AC6F0
 * Callers:
 *     DxgkWin32kSetPointerPosition @ 0x1C0146FC0 (DxgkWin32kSetPointerPosition.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0001AF8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0004D30 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0004D38 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHH@Z @ 0x1C000646C (-SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHH@Z.c)
 *     ?IsPrimaryVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0006930 (-IsPrimaryVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C000E2E4 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     Template_pdqqq @ 0x1C0028238 (Template_pdqqq.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C008AC40 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008CBD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C008D39C (MonitorIsMonitorVirtualModeDisabled.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C008D638 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C008E350 (-ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C008EFF4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C008F008 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z @ 0x1C008F0B8 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C00956F8 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C009585C (-DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2@@@SAJPEAVDXGADAPTER@@IP8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z1P6AJPEAV3@21@Z@Z @ 0x1C00AD274 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2.c)
 *     ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@XZ @ 0x1C01264B4 (-GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@XZ.c)
 *     ?GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@XZ @ 0x1C01266E0 (-GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@XZ.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAU_CURSOR_CLIP_PARAMS@@@Z @ 0x1C0145BDC (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAU_CURSOR_CLIP_PARAMS@@@Z.c)
 *     ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAU_CURSOR_CLIP_PARAMS@@@Z @ 0x1C01460D8 (-FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOS.c)
 */

__int64 __fastcall DxgkCddSetPointerPosition(
        struct DXGADAPTER *a1,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // ebx
  struct DXGADAPTER *v6; // r14
  __int64 v7; // rsi
  int PairingAdapters; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  struct _LUID v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  DXGGLOBAL *Global; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  DXGSESSIONDATA *SessionData; // rdi
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  DXGSESSIONDATA **SessionViewFromSource; // rax
  __int64 v41; // rcx
  DXGSESSIONDATA **v42; // r13
  _QWORD *v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  struct DISPLAY_SOURCE *i; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // rsi
  _QWORD *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  int IsMonitorVirtualModeDisabled; // eax
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rsi
  _QWORD *v69; // rax
  __int64 CurrentOrientation; // r14
  __int64 v71; // rdx
  __int64 v72; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *SavedCursor; // rsi
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rax
  int LowPart; // r11d
  __int64 v78; // r8
  int v79; // r12d
  int v80; // ecx
  int v81; // r10d
  INT X; // eax
  __int64 v83; // r9
  int v84; // eax
  __int64 v85; // rdx
  int v86; // r10d
  __int64 v87; // rax
  INT Y; // r8d
  INT v89; // edx
  UINT v90; // r8d
  signed int v91; // r9d
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  struct _DXGKARG_SETPOINTERSHAPE *ClippedCursor; // r14
  __int64 v97; // rax
  __int64 v98; // r8
  int v99; // eax
  __int64 v100; // rcx
  __int64 v101; // rsi
  _QWORD *v102; // rax
  int v103; // eax
  __int64 v104; // rcx
  __int64 v105; // rsi
  _QWORD *v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rax
  _QWORD *v112; // rcx
  __int64 v113; // rax
  __int64 v114; // r8
  struct DISPLAY_SOURCE *v115; // rbx
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  __int64 v117; // r9
  int v119[2]; // [rsp+20h] [rbp-79h]
  __int64 v120; // [rsp+28h] [rbp-71h]
  __int64 v121; // [rsp+30h] [rbp-69h]
  __int64 v122; // [rsp+38h] [rbp-61h]
  char v123; // [rsp+40h] [rbp-59h] BYREF
  char v124[7]; // [rsp+41h] [rbp-58h] BYREF
  struct _LUID v125; // [rsp+48h] [rbp-51h] BYREF
  struct DXGADAPTER *v126; // [rsp+50h] [rbp-49h]
  _BYTE v127[20]; // [rsp+58h] [rbp-41h] BYREF
  int v128; // [rsp+6Ch] [rbp-2Dh]
  _BYTE v129[56]; // [rsp+70h] [rbp-29h] BYREF
  _DXGKARG_SETPOINTERPOSITION v130; // [rsp+A8h] [rbp+Fh] BYREF

  v4 = a3;
  v126 = a1;
  v6 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3011);
  if ( !a2 )
  {
    LODWORD(v7) = -1073741811;
    goto LABEL_78;
  }
  v130 = *a2;
  if ( !v4 )
  {
    PairingAdapters = DxgkpGetPairingAdapters(v6, v130.VidPnSourceId, 0LL, (struct DXGADAPTER **)&v125);
    v13 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdEvent(v10, v9, v11, v12);
      v14[3] = v6;
      v14[4] = v130.VidPnSourceId;
      v14[5] = v13;
      WdLogEvent5_WdEvent(v14);
      LODWORD(v7) = v13;
      goto LABEL_78;
    }
    v15 = (_QWORD *)v125;
    if ( !*(_QWORD *)&v125 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
      *(_QWORD *)(v16 + 24) = 1400LL;
      WdLogEvent5_WdAssertion(v16);
    }
    if ( !v15[247] )
    {
      v17 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
      *(_QWORD *)(v17 + 24) = 1401LL;
      WdLogEvent5_WdAssertion(v17);
    }
    v18 = *(struct _LUID *)((char *)v15 + 252);
    v125 = v18;
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v15);
    Global = DXGGLOBAL::GetGlobal(v20, v19, v21, v22);
    SessionData = DXGGLOBAL::GetSessionData(Global, v24, v25, v26);
    if ( !SessionData )
    {
      v29 = WdLogNewEntry5_WdError(v27);
      LODWORD(v7) = -1073741811;
      *(_QWORD *)(v29 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v31, v30, v32, v33);
      *(_QWORD *)(v29 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v29);
      goto LABEL_78;
    }
    v123 = 0;
    v34 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v123, 0);
    v7 = v34;
    if ( v34 < 0 )
    {
      v39 = WdLogNewEntry5_WdEvent(v36, v35, v37, v38);
      *(_QWORD *)(v39 + 24) = v7;
      WdLogEvent5_WdEvent(v39);
LABEL_19:
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v123);
      goto LABEL_78;
    }
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionData, &v125, v130.VidPnSourceId);
    v42 = SessionViewFromSource;
    if ( !SessionViewFromSource )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdError(v41);
      v43[3] = v130.VidPnSourceId;
      v43[4] = v125.HighPart;
      v43[5] = v18.LowPart;
      LODWORD(v7) = -1073741811;
      v43[6] = (unsigned int)PsGetCurrentProcessSessionId(v45, v44, v46, v47);
      v43[7] = -1073741811LL;
      WdLogEvent5_WdError(v43);
      goto LABEL_19;
    }
    for ( i = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
          ;
          i = SESSION_VIEW::GetNextDisplaySource((SESSION_VIEW *)v42, v115) )
    {
      v115 = i;
      if ( !i )
      {
        DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v123);
        goto LABEL_77;
      }
      v53 = *(_QWORD *)(*((_QWORD *)i + 1) + 16LL);
      if ( !v53 )
      {
        v54 = WdLogNewEntry5_WdAssertion(v50, v49, v51, v52);
        *(_QWORD *)(v54 + 24) = 1449LL;
        WdLogEvent5_WdAssertion(v54);
      }
      if ( !*(_QWORD *)(v53 + 1976) )
      {
        v55 = WdLogNewEntry5_WdAssertion(v50, v49, v51, v52);
        *(_QWORD *)(v55 + 24) = 1450LL;
        WdLogEvent5_WdAssertion(v55);
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v129, (struct DXGADAPTER *const)v53, 0LL);
      v56 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v129);
      v58 = v56;
      if ( v56 < 0 )
      {
        v59 = (_QWORD *)WdLogNewEntry5_WdError(v57);
        v59[3] = (int)HIDWORD(*(_QWORD *)(v53 + 252));
        v59[4] = *(unsigned int *)(v53 + 252);
        v59[5] = v58;
        WdLogEvent5_WdError(v59);
        goto LABEL_72;
      }
      v130.VidPnSourceId = *((_DWORD *)v115 + 4);
      if ( ADAPTER_DISPLAY::IsPrimaryVisible(*(ADAPTER_DISPLAY **)(v53 + 1976), *((_DWORD *)v115 + 4)) )
        break;
      v112 = (_QWORD *)WdLogNewEntry5_WdTrace(v61, v60, v62, v63);
      v112[3] = -1073741823LL;
      v112[4] = v130.VidPnSourceId;
      v113 = *(_BYTE *)&v130.Flags.0 & 1;
      v112[6] = v6;
      v112[5] = v113;
LABEL_70:
      ADAPTER_DISPLAY::SavePointerInfo(
        *(ADAPTER_DISPLAY **)(v53 + 1976),
        v130.VidPnSourceId,
        *(_BYTE *)&v130.Flags.0 & 1,
        v130.X,
        v130.Y);
      if ( v115 == SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)v42) )
      {
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v129);
        OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *),_DXGKARG_SETPOINTERPOSITION const *>::RunForAdapter(
          v53,
          a2->VidPnSourceId,
          v114,
          a2,
          lambda_583f3b8fb6078070d78b41847def9946_::_helper_func_cdecl_);
      }
LABEL_72:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v129);
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      LODWORD(v122) = v130.Flags.0;
      LODWORD(v121) = v130.Y;
      LODWORD(v120) = v130.X;
      v119[0] = v130.VidPnSourceId;
      Template_pdqqq(v61, &EventSetPointerPosition, v62, v6, *(_QWORD *)v119, v120, v121, v122);
    }
    v64 = *((unsigned int *)v115 + 239);
    v124[0] = 1;
    IsMonitorVirtualModeDisabled = MonitorIsMonitorVirtualModeDisabled(v53, v64, (__int64)v124, v63);
    v68 = IsMonitorVirtualModeDisabled;
    if ( IsMonitorVirtualModeDisabled < 0 )
    {
      v69 = (_QWORD *)WdLogNewEntry5_WdError(v66);
      v69[3] = *((unsigned int *)v115 + 4);
      v69[4] = (int)HIDWORD(*(_QWORD *)(v53 + 252));
      v69[5] = *(unsigned int *)(v53 + 252);
      v69[6] = v68;
      WdLogEvent5_WdError(v69);
    }
    if ( v124[0] || (*(_BYTE *)&v130.Flags.0 & 1) == 0 )
    {
LABEL_67:
      if ( (int)ADAPTER_DISPLAY::DdiSetPointerPosition(*(ADAPTER_DISPLAY **)(v53 + 1976), &v130, v67) < 0 )
      {
        v111 = WdLogNewEntry5_WdAssertion(v108, v107, v109, v110);
        *(_QWORD *)(v111 + 24) = 1558LL;
        WdLogEvent5_WdAssertion(v111);
      }
      goto LABEL_70;
    }
    CurrentOrientation = (int)ADAPTER_DISPLAY::GetCurrentOrientation(*((_QWORD *)v115 + 1), *((_DWORD *)v115 + 4), 0);
    SavedCursor = DISPLAY_SOURCE::GetSavedCursor(v115);
    if ( !SavedCursor->pPixels )
    {
      v76 = WdLogNewEntry5_WdAssertion(v72, v71, v74, v75);
      *(_QWORD *)(v76 + 24) = 1500LL;
      WdLogEvent5_WdAssertion(v76);
    }
    LowPart = *((_DWORD *)v115 + 166) - *((_DWORD *)v115 + 164);
    v78 = *((unsigned int *)v115 + 163);
    v79 = *((_DWORD *)v115 + 165) - v78;
    v80 = *((_DWORD *)v42 + 8) - *((_DWORD *)v42 + 6);
    v81 = *((_DWORD *)v42 + 9) - *((_DWORD *)v42 + 7);
    v125.LowPart = LowPart;
    X = a2->X;
    if ( (((_DWORD)CurrentOrientation - 1) & 0xFFFFFFFD) != 0 )
    {
      v83 = (unsigned int)(LowPart * X / v80);
      v84 = v79 * a2->Y;
    }
    else
    {
      v83 = (unsigned int)(v79 * X / v80);
      v84 = LowPart * a2->Y;
    }
    v85 = (unsigned int)(v84 >> 31);
    LODWORD(v85) = v84 % v81;
    v86 = v84 / v81;
    switch ( (_DWORD)CurrentOrientation )
    {
      case 1:
        v89 = v83 + v78;
        v130.X = v83 + v78;
        Y = v86 + *((_DWORD *)v115 + 164);
        goto LABEL_50;
      case 2:
        v89 = v86 + v78;
        v130.X = v86 + v78;
        v90 = *((_DWORD *)v115 + 164) - SavedCursor->Height - v83;
        break;
      case 3:
        v89 = v78 + v79 - SavedCursor->Width - v83;
        v130.X = v89;
        v90 = *((_DWORD *)v115 + 164) - SavedCursor->Height - v86;
        break;
      case 4:
        v89 = v78 + v79 - SavedCursor->Width - v86;
        v130.X = v89;
        Y = v83 + *((_DWORD *)v115 + 164);
LABEL_50:
        v130.Y = Y;
LABEL_51:
        v91 = *((_DWORD *)v115 + 163);
        if ( (signed int)(v89 + SavedCursor->Width) < v91
          || v89 > *((_DWORD *)v115 + 165)
          || (signed int)(Y + SavedCursor->Height) < *((_DWORD *)v115 + 164)
          || Y > *((_DWORD *)v115 + 166) )
        {
          v130.X = v91 + v79 / 2;
          v130.Y = *((_DWORD *)v115 + 164) + LowPart / 2;
        }
        FillClipParams(SavedCursor, v115, &v130, (struct _CURSOR_CLIP_PARAMS *)v127);
        if ( v128 )
        {
          ClippedCursor = DISPLAY_SOURCE::GetClippedCursor(v115);
          if ( !ClippedCursor->pPixels )
          {
            v97 = WdLogNewEntry5_WdAssertion(v93, v92, v94, v95);
            *(_QWORD *)(v97 + 24) = 1513LL;
            WdLogEvent5_WdAssertion(v97);
          }
          ClipCurrentCursor(SavedCursor, ClippedCursor, (struct _CURSOR_CLIP_PARAMS *)v127);
          v99 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v53 + 1976), ClippedCursor, v98);
          v101 = v99;
          if ( v99 < 0 )
          {
            v102 = (_QWORD *)WdLogNewEntry5_WdError(v100);
            v102[3] = *((unsigned int *)v115 + 4);
            v102[4] = (int)HIDWORD(*(_QWORD *)(v53 + 252));
            v102[5] = *(unsigned int *)(v53 + 252);
            v102[6] = v101;
            WdLogEvent5_WdError(v102);
          }
          *((_BYTE *)v115 + 701) = 1;
        }
        else if ( *((_BYTE *)v115 + 701) )
        {
          v103 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v53 + 1976), SavedCursor, v67);
          v105 = v103;
          if ( v103 < 0 )
          {
            v106 = (_QWORD *)WdLogNewEntry5_WdError(v104);
            v106[3] = *((unsigned int *)v115 + 4);
            v106[4] = (int)HIDWORD(*(_QWORD *)(v53 + 252));
            v106[5] = *(unsigned int *)(v53 + 252);
            v106[6] = v105;
            WdLogEvent5_WdError(v106);
          }
          *((_BYTE *)v115 + 701) = 0;
        }
        v6 = v126;
        goto LABEL_67;
      default:
        v87 = WdLogNewEntry5_WdAssertion((unsigned int)(CurrentOrientation - 3), v85, v78, v83);
        *(_QWORD *)(v87 + 24) = CurrentOrientation;
        WdLogEvent5_WdAssertion(v87);
        Y = v130.Y;
        v89 = v130.X;
        LowPart = v125.LowPart;
        goto LABEL_51;
    }
    Y = LowPart + v90;
    goto LABEL_50;
  }
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr((__int64)a1, (__int64)a2, a3, a4);
  if ( RemoteOutputDuplMgr )
    OUTPUTDUPL_MGR::ProcessPointerPositionChange(RemoteOutputDuplMgr, a2, a3, v117);
LABEL_77:
  LODWORD(v7) = 0;
LABEL_78:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerExit, a3, 3011);
  return (unsigned int)v7;
}
