/*
 * XREFs of ?DxgkCddDisable@@YAJIII@Z @ 0x1C00C3DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0001480 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00014CC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C00017E4 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00017FC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00062E8 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C0006370 (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C00063C4 (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C00064BC (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0006874 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00082DC (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogCodePointPacket @ 0x1C000AF10 (DxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DmmRemovePresentPathFromVidPnSourceInActiveVidPn @ 0x1C0070918 (DmmRemovePresentPathFromVidPnSourceInActiveVidPn.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0073DD0 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C007AC74 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C007AC88 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C007C090 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C008698C (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00936AC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093CF8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00A3E48 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C00C5F04 (DxgkRemoveSessionViewForCurrentSession.c)
 *     DmmCacheDisplayModeChangeRequest @ 0x1C00C5F78 (DmmCacheDisplayModeChangeRequest.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00E1E90 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DxgkCddDisable(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rsi
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 v11; // rdi
  unsigned int v12; // edx
  __int64 v13; // r9
  int v14; // r8d
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  _BYTE *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned int v33; // edi
  __int64 v35; // rax
  DXGGLOBAL *Global; // rax
  __int64 v37; // rcx
  DXGSESSIONDATA *SessionData; // rsi
  int v39; // eax
  __int64 v40; // rcx
  DXGSESSIONDATA **SessionViewFromSource; // rax
  __int64 v42; // rcx
  SESSION_VIEW *v43; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r14
  SESSION_VIEW *v45; // rdi
  __int64 v46; // rcx
  __int64 v47; // rsi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v49; // rcx
  __int64 v50; // r9
  __int64 v51; // rcx
  unsigned int v52; // ebx
  unsigned __int8 v53; // r9
  ADAPTER_DISPLAY *v54; // rcx
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rsi
  __int64 v58; // rbx
  __int64 v59; // rcx
  _QWORD *v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  _QWORD *v67; // rax
  _QWORD *v68; // rax
  __int64 v69; // rax
  _BYTE v70[8]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v71; // [rsp+48h] [rbp-B8h]
  struct DXGDEVICE *v72; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v73; // [rsp+58h] [rbp-A8h]
  struct DXGDEVICE *v74; // [rsp+60h] [rbp-A0h]
  __int64 v75; // [rsp+68h] [rbp-98h]
  _BYTE v76[16]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v77[16]; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT v78; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v79[96]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v80[64]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v81[96]; // [rsp+140h] [rbp+40h] BYREF
  __int128 v82; // [rsp+1A0h] [rbp+A0h] BYREF

  v4 = (unsigned int)a3;
  v5 = (unsigned int)a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 3003);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v7);
  v10 = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v33 = -1073741811;
    v58 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v58 + 24) = -1073741811LL;
    *(_QWORD *)(v58 + 32) = PsGetCurrentProcess(v59);
LABEL_60:
    v60 = (_QWORD *)v58;
    goto LABEL_61;
  }
  v11 = ProcessDxgProcess + 184;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(ProcessDxgProcess + 184));
  v12 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( v12 < *(_DWORD *)(v10 + 224)
    && (v13 = *(_QWORD *)(v10 + 208),
        v14 = *(_DWORD *)(v13 + 16LL * v12 + 8),
        (((unsigned int)v5 >> 26) & 0x30) == (*(_BYTE *)(v13 + 16LL * v12 + 8) & 0x30))
    && (v14 & 0x1000) == 0
    && (v14 & 0xF) != 0
    && (*(_BYTE *)(v13 + 16LL * v12 + 8) & 0xF) == 3 )
  {
    v15 = *(_QWORD *)(v13 + 16LL * v12);
  }
  else
  {
    v15 = 0LL;
  }
  ExReleasePushLockSharedEx(v11, 0LL);
  KeLeaveCriticalRegion();
  v72 = (struct DXGDEVICE *)v15;
  if ( !v15 )
  {
    v33 = -1073741811;
    v60 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v60[3] = -1073741811LL;
    v60[4] = v5;
    v60[5] = v10;
LABEL_61:
    WdLogEvent5_WdError(v60);
    goto LABEL_25;
  }
  v18 = *(_QWORD *)(v15 + 2856);
  v75 = v18;
  if ( !v18 || !*(_QWORD *)(v18 + 2128) )
  {
    v35 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v35 + 24) = 557LL;
    WdLogEvent5_WdAssertion(v35);
  }
  if ( (a2 & 0x40000000) != 0 )
  {
    if ( ((a2 - 0x40000000) & 0xFFFFFFFB) != 0 )
    {
      v61 = WdLogNewEntry5_WdAssertion(v16);
      *(_QWORD *)(v61 + 24) = 598LL;
      WdLogEvent5_WdAssertion(v61);
    }
    Global = DXGGLOBAL::GetGlobal(v16);
    SessionData = DXGGLOBAL::GetSessionData(Global);
    if ( SessionData )
    {
      v70[0] = 0;
      v39 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v70, 1);
      v19 = v39;
      if ( v39 < 0 )
      {
        v66 = WdLogNewEntry5_WdError(v40);
        *(_QWORD *)(v66 + 24) = v19;
        WdLogEvent5_WdError(v66);
      }
      else
      {
        SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                                  SessionData,
                                  (const struct _LUID *)(v18 + 268),
                                  v4);
        if ( SessionViewFromSource )
        {
          PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
          if ( PrimaryDisplaySource )
          {
            v45 = v43;
            do
            {
              v46 = *((_QWORD *)PrimaryDisplaySource + 1);
              v71 = *((_DWORD *)PrimaryDisplaySource + 4);
              v47 = *(_QWORD *)(v46 + 16);
              PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v45, PrimaryDisplaySource);
              CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                                       (struct _LUID *)(v47 + 268),
                                                       &v72,
                                                       0LL);
              v19 = CddDeviceAndContextForCurrentSession;
              if ( CddDeviceAndContextForCurrentSession < 0 )
              {
                v68 = (_QWORD *)WdLogNewEntry5_WdError(v49);
                v68[3] = *(int *)(v47 + 272);
                v68[4] = *(unsigned int *)(v47 + 268);
                v68[5] = v19;
                WdLogEvent5_WdError(v68);
              }
              else
              {
                DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
                  (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v76,
                  v72);
                COREDEVICEACCESS::COREDEVICEACCESS((__int64)v79, (__int64)v72, 1, v50, 0);
                COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v79);
                if ( *(_DWORD *)(v47 + 176) != 1 && *((_DWORD *)v72 + 94) == 4
                  || *(_DWORD *)(v47 + 176) == 4
                  || (v74 = v72, *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v72 + 2) + 16LL) + 176LL) == 4) )
                {
                  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v79);
                  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v76);
                }
                else
                {
                  v51 = *(_QWORD *)(v47 + 2136);
                  v52 = v71;
                  if ( v51 )
                    ADAPTER_RENDER::FlushScheduler(v51, 8, v71, 0);
                  v53 = *(_BYTE *)(v47 + 2053)
                     && *(_BYTE *)(v47 + 1992)
                     && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v47 + 192) + 64LL) + 1136LL);
                  v73 = v72;
                  LODWORD(v19) = DmmRemovePresentPathFromVidPnSourceInActiveVidPn(v72, v52, a2 != 1073741828, v53);
                  memset(v80, 0, 0x38uLL);
                  ADAPTER_DISPLAY::SetPartOfDesktop(*(DXGADAPTER ***)(v47 + 2128), v71, 0);
                  ADAPTER_DISPLAY::SetDisplayModeInfo(
                    *(DXGADAPTER ***)(v47 + 2128),
                    v71,
                    (const struct _DXGK_DISPLAYMODE_INFO *const)v80);
                  ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(DXGADAPTER ***)(v47 + 2128), v71, 0);
                  v54 = *(ADAPTER_DISPLAY **)(v47 + 2128);
                  v78 = 0LL;
                  ADAPTER_DISPLAY::SetContentRect(v54, v71, &v78);
                  ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v47 + 2128), v71, 0LL);
                  v82 = *(_OWORD *)PsGetProcessImageFileName(*(_QWORD *)(v10 + 48));
                  v55 = DmmCacheDisplayModeChangeRequest(v47, v71, (unsigned int)v80, 1, v19, 2, (__int64)&v82);
                  v57 = v55;
                  if ( v55 < 0 )
                  {
                    v69 = WdLogNewEntry5_WdError(v56);
                    *(_QWORD *)(v69 + 24) = v57;
                    WdLogEvent5_WdError(v69);
                  }
                  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v79);
                  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v76);
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v73 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v74 + 2), v72);
                }
              }
            }
            while ( PrimaryDisplaySource );
            v18 = v75;
          }
          if ( ((a2 - 0x40000000) & 0xFFFFFFFB) == 0 )
            DxgkRemoveSessionViewForCurrentSession((struct _LUID *)(v18 + 268), v4, 1u);
          DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)v70);
          goto LABEL_17;
        }
        v67 = (_QWORD *)WdLogNewEntry5_WdError(v42);
        v67[3] = v4;
        v67[4] = *(int *)(v18 + 272);
        v67[5] = *(unsigned int *)(v18 + 268);
        WdLogEvent5_WdError(v67);
        LODWORD(v19) = 0;
      }
      DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)v70);
      v33 = v19;
      goto LABEL_25;
    }
    v58 = WdLogNewEntry5_WdError(v37);
    v33 = -1073741811;
    *(_QWORD *)(v58 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v63, v62, v64, v65);
    *(_QWORD *)(v58 + 32) = -1073741811LL;
    goto LABEL_60;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v81, v15, 1, v17, 0);
  COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v81);
  if ( a2 == 1 && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(DXGADAPTER ***)(v18 + 2128)) )
    ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(
      *(ADAPTER_DISPLAY **)(v18 + 2128),
      *(struct ADAPTER_RENDER **)(v15 + 16));
  if ( *(_DWORD *)(v18 + 176) == 1 )
    ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v18 + 2128), v4, 0LL);
  LODWORD(v19) = 0;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v81);
LABEL_17:
  v23 = *((_QWORD *)DXGGLOBAL::GetGlobal(v20) + 111);
  if ( *(_BYTE *)v23 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v22, v21, v24, v25) + 24) = 200LL;
  }
  else
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v77, *(struct DXGFASTMUTEX *const *)(v23 + 8));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v77);
    v29 = (_BYTE *)(v23 + 16);
    v30 = 18LL;
    do
    {
      *v29 = 0;
      v29 += 48;
      --v30;
    }
    while ( v30 );
    ++*(_DWORD *)(v23 + 880);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v26, v27, v28) + 24) = 222LL;
    if ( v77[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v77);
  }
  if ( (int)v19 < 0 )
    DxgkLogCodePointPacket(0x41u, *(_DWORD *)(v18 + 268), v4, v19);
  v33 = 0;
LABEL_25:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v31, &EventProfilerExit, v32, 3003);
  return v33;
}
