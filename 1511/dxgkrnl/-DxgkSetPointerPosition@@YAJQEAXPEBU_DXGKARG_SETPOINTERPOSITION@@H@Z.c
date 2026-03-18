/*
 * XREFs of ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C00BE950
 * Callers:
 *     ?DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C00BE900 (-DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     DxgkWin32kSetPointerPosition @ 0x1C014AD40 (DxgkWin32kSetPointerPosition.c)
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
 *     Template_pdqqq @ 0x1C0028DF0 (Template_pdqqq.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008A660 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C0097258 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0099628 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C009978C (-DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C0099E74 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C009DB50 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C009DB64 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C009EC60 (-ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z @ 0x1C009ED20 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z.c)
 *     ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C009FDD8 (-FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOS.c)
 *     ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@XZ @ 0x1C009FF50 (-GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@XZ.c)
 *     ?GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@XZ @ 0x1C009FFF4 (-GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@XZ.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00A16BC (IsVirtualizationDisabledForTarget.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00BBF70 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2@@@SAJPEAVDXGADAPTER@@IP8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z1P6AJPEAV3@21@Z@Z @ 0x1C00C04E8 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C0149C48 (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z.c)
 */

__int64 __fastcall DxgkSetPointerPosition(
        struct DXGADAPTER *a1,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        __int64 a3)
{
  int v3; // ebx
  struct DXGADAPTER *v5; // r15
  int PairingAdapters; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  DXGADAPTER *v12; // rdi
  struct _LUID v13; // rbx
  __int64 v14; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v16; // rcx
  DXGSESSIONDATA *SessionData; // rdi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rsi
  DXGSESSIONDATA **SessionViewFromSource; // rax
  __int64 v25; // rcx
  DXGADAPTER *v26; // r13
  __int64 v27; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rbx
  __int64 v29; // rdi
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned int v37; // edx
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rsi
  bool v42; // r12
  __int64 v43; // rcx
  __int64 v44; // r8
  int CurrentOrientation; // r15d
  __int64 v47; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *SavedCursor; // rsi
  int LowPart; // r11d
  int v50; // r8d
  int v51; // r10d
  int v52; // ecx
  int v53; // r9d
  INT X; // eax
  int v55; // r12d
  int v56; // eax
  int v57; // r13d
  INT v58; // edx
  INT v59; // r8d
  signed int v60; // r9d
  __int64 v61; // rax
  __int64 v62; // rax
  _QWORD *v63; // rcx
  __int64 v64; // rax
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rax
  __int64 v68; // rbx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  _QWORD *v74; // rdi
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  UINT v83; // r8d
  __int64 v84; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *ClippedCursor; // r15
  __int64 v86; // rax
  __int64 v87; // r8
  int v88; // eax
  __int64 v89; // rcx
  __int64 v90; // rsi
  _QWORD *v91; // rax
  int v92; // eax
  __int64 v93; // rcx
  __int64 v94; // rsi
  _QWORD *v95; // rax
  __int64 v96; // rax
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  __int64 v98; // r9
  int v99[2]; // [rsp+20h] [rbp-89h]
  __int64 v100; // [rsp+28h] [rbp-81h]
  __int64 v101; // [rsp+30h] [rbp-79h]
  __int64 v102; // [rsp+38h] [rbp-71h]
  char v103; // [rsp+40h] [rbp-69h] BYREF
  char v104; // [rsp+41h] [rbp-68h] BYREF
  char v105; // [rsp+42h] [rbp-67h] BYREF
  DXGADAPTER *v106; // [rsp+48h] [rbp-61h] BYREF
  struct _LUID v107; // [rsp+50h] [rbp-59h] BYREF
  struct DXGADAPTER *v108; // [rsp+58h] [rbp-51h]
  BOOL v109; // [rsp+60h] [rbp-49h]
  int v110; // [rsp+64h] [rbp-45h]
  _BYTE v111[20]; // [rsp+68h] [rbp-41h] BYREF
  int v112; // [rsp+7Ch] [rbp-2Dh]
  _BYTE v113[56]; // [rsp+80h] [rbp-29h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v114; // [rsp+B8h] [rbp+Fh] BYREF

  v108 = a1;
  v3 = a3;
  v5 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3011);
  if ( !a2 )
  {
    LODWORD(v23) = -1073741811;
    goto LABEL_31;
  }
  if ( !v3 )
  {
    PairingAdapters = DxgkpGetPairingAdapters(v5, a2->VidPnSourceId, 0LL, &v106);
    v11 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v66 = (_QWORD *)WdLogNewEntry5_WdEvent(v8, v7, v9, v10);
      v66[3] = v5;
      v66[4] = a2->VidPnSourceId;
      v66[5] = v11;
      WdLogEvent5_WdEvent(v66);
      LODWORD(v23) = v11;
      goto LABEL_31;
    }
    v12 = v106;
    if ( !v106 )
    {
      v67 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v67 + 24) = 1447LL;
      WdLogEvent5_WdAssertion(v67);
    }
    if ( !*((_QWORD *)v12 + 248) )
    {
      v61 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v61 + 24) = 1448LL;
      WdLogEvent5_WdAssertion(v61);
    }
    v13 = *(struct _LUID *)((char *)v12 + 252);
    v107 = v13;
    DXGADAPTER::ReleaseReference(v12);
    Global = DXGGLOBAL::GetGlobal(v14);
    SessionData = DXGGLOBAL::GetSessionData(Global);
    if ( !SessionData )
    {
      v68 = WdLogNewEntry5_WdError(v16);
      LODWORD(v23) = -1073741811;
      *(_QWORD *)(v68 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v70, v69, v71, v72);
      *(_QWORD *)(v68 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v68);
      goto LABEL_31;
    }
    v103 = 0;
    v18 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v103, 0);
    v23 = v18;
    if ( v18 < 0 )
    {
      v73 = WdLogNewEntry5_WdEvent(v20, v19, v21, v22);
      *(_QWORD *)(v73 + 24) = v23;
      WdLogEvent5_WdEvent(v73);
    }
    else
    {
      SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionData, &v107, a2->VidPnSourceId);
      v106 = (DXGADAPTER *)SessionViewFromSource;
      v26 = (DXGADAPTER *)SessionViewFromSource;
      if ( SessionViewFromSource )
      {
        PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
        if ( PrimaryDisplaySource )
        {
          while ( 1 )
          {
            v29 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
            if ( !v29 )
            {
              v79 = WdLogNewEntry5_WdAssertion(v27);
              *(_QWORD *)(v79 + 24) = 1496LL;
              WdLogEvent5_WdAssertion(v79);
            }
            if ( !*(_QWORD *)(v29 + 1984) )
            {
              v62 = WdLogNewEntry5_WdAssertion(v27);
              *(_QWORD *)(v62 + 24) = 1497LL;
              WdLogEvent5_WdAssertion(v62);
            }
            v114 = *a2;
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v113, (struct DXGADAPTER *const)v29, 0LL);
            v30 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v113);
            v32 = v30;
            if ( v30 >= 0 )
              break;
            v80 = (_QWORD *)WdLogNewEntry5_WdError(v31);
            v80[3] = (int)HIDWORD(*(_QWORD *)(v29 + 252));
            v80[4] = *(unsigned int *)(v29 + 252);
            v80[5] = v32;
            WdLogEvent5_WdError(v80);
LABEL_28:
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v113);
            PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v26, PrimaryDisplaySource);
            if ( !PrimaryDisplaySource )
              goto LABEL_29;
          }
          v114.VidPnSourceId = *((_DWORD *)PrimaryDisplaySource + 4);
          if ( !ADAPTER_DISPLAY::IsPrimaryVisible(
                  *(ADAPTER_DISPLAY **)(v29 + 1984),
                  *((_DWORD *)PrimaryDisplaySource + 4)) )
          {
            v63 = (_QWORD *)WdLogNewEntry5_WdTrace(v34, v33, v35, v36);
            v63[3] = -1073741823LL;
            v63[4] = v114.VidPnSourceId;
            v64 = *(_BYTE *)&v114.Flags.0 & 1;
            v63[6] = v5;
            v63[5] = v64;
LABEL_26:
            ADAPTER_DISPLAY::SavePointerInfo(
              *(ADAPTER_DISPLAY **)(v29 + 1984),
              v114.VidPnSourceId,
              *(_BYTE *)&v114.Flags.0 & 1,
              v114.X,
              v114.Y);
            if ( PrimaryDisplaySource == SESSION_VIEW::GetPrimaryDisplaySource(v26) )
            {
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)v113);
              OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *),_DXGKARG_SETPOINTERPOSITION const *>::RunForAdapter(
                v29,
                a2->VidPnSourceId,
                v44,
                a2,
                sub_1C00C54F0);
            }
            goto LABEL_28;
          }
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          {
            LODWORD(v102) = v114.Flags.0;
            LODWORD(v101) = v114.Y;
            LODWORD(v100) = v114.X;
            v99[0] = v114.VidPnSourceId;
            Template_pdqqq(v34, &EventSetPointerPosition, v35, v5, *(_QWORD *)v99, v100, v101, v102);
          }
          v37 = *((_DWORD *)PrimaryDisplaySource + 239);
          v104 = 1;
          v105 = 1;
          v38 = IsVirtualizationDisabledForTarget((DXGADAPTER *)v29, v37, (bool *)&v104, (bool *)&v105);
          v41 = v38;
          if ( v38 < 0 )
          {
            v65 = (_QWORD *)WdLogNewEntry5_WdError(v39);
            v65[3] = *((unsigned int *)PrimaryDisplaySource + 4);
            v65[4] = (int)HIDWORD(*(_QWORD *)(v29 + 252));
            v65[5] = *(unsigned int *)(v29 + 252);
            v65[6] = v41;
            WdLogEvent5_WdError(v65);
          }
          v42 = v104;
          if ( v104 && v105 || (*(_BYTE *)&v114.Flags.0 & 1) == 0 )
          {
LABEL_24:
            if ( (int)ADAPTER_DISPLAY::DdiSetPointerPosition(*(ADAPTER_DISPLAY **)(v29 + 1984), &v114, v40) < 0 )
            {
              v96 = WdLogNewEntry5_WdAssertion(v43);
              *(_QWORD *)(v96 + 24) = 1633LL;
              WdLogEvent5_WdAssertion(v96);
            }
            goto LABEL_26;
          }
          CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(
                                 *((_QWORD *)PrimaryDisplaySource + 1),
                                 *((_DWORD *)PrimaryDisplaySource + 4),
                                 v104 != 0);
          SavedCursor = DISPLAY_SOURCE::GetSavedCursor(PrimaryDisplaySource);
          if ( !SavedCursor->pPixels )
          {
            v81 = WdLogNewEntry5_WdAssertion(v47);
            *(_QWORD *)(v81 + 24) = 1575LL;
            WdLogEvent5_WdAssertion(v81);
          }
          LowPart = *((_DWORD *)PrimaryDisplaySource + 166) - *((_DWORD *)PrimaryDisplaySource + 164);
          v50 = *((_DWORD *)PrimaryDisplaySource + 163);
          v51 = *((_DWORD *)PrimaryDisplaySource + 165) - v50;
          v52 = *((_DWORD *)v26 + 8) - *((_DWORD *)v26 + 6);
          v53 = *((_DWORD *)v26 + 9) - *((_DWORD *)v26 + 7);
          v109 = v42;
          v110 = v51;
          X = a2->X;
          v107.LowPart = LowPart;
          if ( ((CurrentOrientation - 1) & 0xFFFFFFFD) != 0 )
          {
            v55 = LowPart * X / v52;
            v56 = v51 * a2->Y;
          }
          else
          {
            v55 = v51 * X / v52;
            v56 = LowPart * a2->Y;
          }
          v57 = v56 / v53;
          if ( v109 )
          {
            v114.X = v55 + v50;
            v114.Y = v57 + *((_DWORD *)PrimaryDisplaySource + 164);
LABEL_48:
            FillClipParams(SavedCursor, PrimaryDisplaySource, &v114, (struct CURSOR_CLIP_PARAMS *)v111);
            if ( v112 )
            {
              ClippedCursor = DISPLAY_SOURCE::GetClippedCursor(PrimaryDisplaySource);
              if ( !ClippedCursor->pPixels )
              {
                v86 = WdLogNewEntry5_WdAssertion(v84);
                *(_QWORD *)(v86 + 24) = 1588LL;
                WdLogEvent5_WdAssertion(v86);
              }
              ClipCurrentCursor(SavedCursor, ClippedCursor, (struct CURSOR_CLIP_PARAMS *)v111);
              ClippedCursor->VidPnSourceId = *((_DWORD *)PrimaryDisplaySource + 4);
              v88 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v29 + 1984), ClippedCursor, v87);
              v90 = v88;
              if ( v88 < 0 )
              {
                v91 = (_QWORD *)WdLogNewEntry5_WdError(v89);
                v91[3] = *((unsigned int *)PrimaryDisplaySource + 4);
                v91[4] = (int)HIDWORD(*(_QWORD *)(v29 + 252));
                v91[5] = *(unsigned int *)(v29 + 252);
                v91[6] = v90;
                WdLogEvent5_WdError(v91);
              }
              *((_BYTE *)PrimaryDisplaySource + 701) = 1;
            }
            else if ( *((_BYTE *)PrimaryDisplaySource + 701) )
            {
              v92 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v29 + 1984), SavedCursor, v40);
              v94 = v92;
              if ( v92 < 0 )
              {
                v95 = (_QWORD *)WdLogNewEntry5_WdError(v93);
                v95[3] = *((unsigned int *)PrimaryDisplaySource + 4);
                v95[4] = (int)HIDWORD(*(_QWORD *)(v29 + 252));
                v95[5] = *(unsigned int *)(v29 + 252);
                v95[6] = v94;
                WdLogEvent5_WdError(v95);
              }
              *((_BYTE *)PrimaryDisplaySource + 701) = 0;
            }
            v26 = v106;
            v5 = v108;
            goto LABEL_24;
          }
          if ( CurrentOrientation == 2 )
          {
            v58 = v50 + v57;
            v114.X = v50 + v57;
            v83 = *((_DWORD *)PrimaryDisplaySource + 164) - SavedCursor->Height - v55;
          }
          else
          {
            if ( CurrentOrientation != 3 )
            {
              if ( CurrentOrientation == 4 )
              {
                v58 = v50 + v51 - SavedCursor->Width - v57;
                v114.X = v58;
                v59 = v55 + *((_DWORD *)PrimaryDisplaySource + 164);
              }
              else
              {
                if ( CurrentOrientation != 1 )
                {
                  v82 = WdLogNewEntry5_WdAssertion((unsigned int)(CurrentOrientation - 3));
                  *(_QWORD *)(v82 + 24) = 645LL;
                  WdLogEvent5_WdAssertion(v82);
                  v51 = v110;
                  LowPart = v107.LowPart;
                }
                v58 = v55 + *((_DWORD *)PrimaryDisplaySource + 163);
                v114.X = v58;
                v59 = v57 + *((_DWORD *)PrimaryDisplaySource + 164);
              }
              goto LABEL_44;
            }
            v58 = v50 + v51 - SavedCursor->Width - v55;
            v114.X = v58;
            v83 = *((_DWORD *)PrimaryDisplaySource + 164) - SavedCursor->Height - v57;
          }
          v59 = LowPart + v83;
LABEL_44:
          v114.Y = v59;
          v60 = *((_DWORD *)PrimaryDisplaySource + 163);
          if ( (signed int)(v58 + SavedCursor->Width) < v60
            || v58 > *((_DWORD *)PrimaryDisplaySource + 165)
            || (signed int)(v59 + SavedCursor->Height) < *((_DWORD *)PrimaryDisplaySource + 164)
            || v59 > *((_DWORD *)PrimaryDisplaySource + 166) )
          {
            v114.X = v60 + v51 / 2;
            v114.Y = *((_DWORD *)PrimaryDisplaySource + 164) + LowPart / 2;
          }
          goto LABEL_48;
        }
LABEL_29:
        DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v103);
        goto LABEL_30;
      }
      v74 = (_QWORD *)WdLogNewEntry5_WdError(v25);
      v74[3] = a2->VidPnSourceId;
      v74[4] = v107.HighPart;
      v74[5] = v13.LowPart;
      LODWORD(v23) = -1073741811;
      v74[6] = (unsigned int)PsGetCurrentProcessSessionId(v76, v75, v77, v78);
      v74[7] = -1073741811LL;
      WdLogEvent5_WdError(v74);
    }
    DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v103);
    goto LABEL_31;
  }
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr((__int64)a1);
  if ( RemoteOutputDuplMgr )
    OUTPUTDUPL_MGR::ProcessPointerPositionChange(RemoteOutputDuplMgr, a2, a3, v98);
LABEL_30:
  LODWORD(v23) = 0;
LABEL_31:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerExit, a3, 3011);
  return (unsigned int)v23;
}
