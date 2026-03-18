/*
 * XREFs of ?DxgkCddDisable@@YAJIII@Z @ 0x1C005F540
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00010D0 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001BC4 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0004D18 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0004D38 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00065E0 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C0006668 (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C00066BC (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C00084E0 (DxgkLogCodePointPacket.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C000ADEC (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C000AF88 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C005E564 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C008AC40 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C008EFF4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C008F008 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z @ 0x1C008F0B8 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093F2C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0094550 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DmmCacheDisplayModeChangeRequest @ 0x1C00B8C08 (DmmCacheDisplayModeChangeRequest.c)
 *     DmmRemovePresentPathFromVidPnSourceInActiveVidPn @ 0x1C00BA068 (DmmRemovePresentPathFromVidPnSourceInActiveVidPn.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00BDA68 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C00BDF98 (DxgkRemoveSessionViewForCurrentSession.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C01268B0 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 */

__int64 __fastcall DxgkCddDisable(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  struct DXGPROCESS *v8; // r14
  char *v9; // rsi
  unsigned int v10; // edx
  __int64 v11; // r9
  int v12; // r8d
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  _BYTE *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  DXGGLOBAL *Global; // rax
  __int64 v34; // rcx
  DXGSESSIONDATA *SessionData; // rsi
  int v36; // eax
  __int64 v37; // rcx
  SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v39; // rcx
  SESSION_VIEW *v40; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r15
  SESSION_VIEW *v42; // r12
  __int64 v43; // rcx
  __int64 v44; // rsi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v46; // rcx
  __int64 v47; // r9
  __int64 v48; // rcx
  unsigned int v49; // edi
  unsigned __int8 v50; // r9
  struct DXGDEVICE *v51; // rsi
  int v52; // eax
  ADAPTER_DISPLAY *v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rbx
  _QWORD *v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rax
  _BYTE v63[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v64; // [rsp+44h] [rbp-BCh]
  struct DXGDEVICE *v65; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v66; // [rsp+50h] [rbp-B0h] BYREF
  int v67; // [rsp+58h] [rbp-A8h]
  struct _LUID v68; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGDEVICE *v69; // [rsp+68h] [rbp-98h]
  struct _LUID v70; // [rsp+70h] [rbp-90h] BYREF
  struct _LUID v71; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v72[16]; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT v73; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v74[16]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v75[80]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v76[80]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v77; // [rsp+180h] [rbp+80h] BYREF

  v4 = (unsigned int)a3;
  v67 = a3;
  v5 = (unsigned int)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 3003);
  Current = DXGPROCESS::GetCurrent();
  v8 = Current;
  if ( !Current )
  {
    LODWORD(v19) = -1073741811;
    v56 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v56 + 24) = -1073741811LL;
    *(_QWORD *)(v56 + 32) = PsGetCurrentProcess();
LABEL_60:
    v57 = (_QWORD *)v56;
    goto LABEL_61;
  }
  v9 = (char *)Current + 192;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 192));
  v10 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( v10 < *((_DWORD *)v8 + 58)
    && (v11 = *((_QWORD *)v8 + 27),
        v12 = *(_DWORD *)(v11 + 16LL * v10 + 8),
        (((unsigned int)v5 >> 26) & 0x30) == (*(_BYTE *)(v11 + 16LL * v10 + 8) & 0x30))
    && (v12 & 0x1000) == 0
    && (v12 & 0xF) != 0
    && (*(_BYTE *)(v11 + 16LL * v10 + 8) & 0xF) == 3 )
  {
    v13 = *(_QWORD *)(v11 + 16LL * v10);
  }
  else
  {
    v13 = 0LL;
  }
  ExReleasePushLockSharedEx(v9, 0LL);
  KeLeaveCriticalRegion();
  v65 = (struct DXGDEVICE *)v13;
  if ( !v13 )
  {
    LODWORD(v19) = -1073741811;
    v57 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v57[3] = -1073741811LL;
    v57[4] = v5;
    v57[5] = v8;
LABEL_61:
    WdLogEvent5_WdError(v57);
    goto LABEL_25;
  }
  v18 = *(_QWORD *)(v13 + 18704);
  if ( !v18 || !*(_QWORD *)(v18 + 1976) )
  {
    v55 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
    *(_QWORD *)(v55 + 24) = 560LL;
    WdLogEvent5_WdAssertion(v55);
  }
  if ( (a2 & 0x40000000) != 0 )
  {
    if ( ((a2 - 0x40000000) & 0xFFFFFFFB) != 0 )
    {
      v58 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
      *(_QWORD *)(v58 + 24) = 601LL;
      WdLogEvent5_WdAssertion(v58);
    }
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global);
    if ( SessionData )
    {
      v63[0] = 0;
      v36 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v63, 1);
      v19 = v36;
      if ( v36 < 0 )
      {
        v59 = WdLogNewEntry5_WdError(v37);
        *(_QWORD *)(v59 + 24) = v19;
        WdLogEvent5_WdError(v59);
      }
      else
      {
        v71 = *(struct _LUID *)(v18 + 252);
        SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionData, &v71, v4);
        if ( SessionViewFromSource )
        {
          PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
          if ( PrimaryDisplaySource )
          {
            v42 = v40;
            do
            {
              v43 = *((_QWORD *)PrimaryDisplaySource + 1);
              v64 = *((_DWORD *)PrimaryDisplaySource + 4);
              v44 = *(_QWORD *)(v43 + 16);
              PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v42, PrimaryDisplaySource);
              v68 = *(struct _LUID *)(v44 + 252);
              CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(&v68, &v65, 0LL);
              v19 = CddDeviceAndContextForCurrentSession;
              if ( CddDeviceAndContextForCurrentSession < 0 )
              {
                v61 = (_QWORD *)WdLogNewEntry5_WdError(v46);
                v61[3] = (int)HIDWORD(*(_QWORD *)(v44 + 252));
                v61[4] = *(unsigned int *)(v44 + 252);
                v61[5] = v19;
                WdLogEvent5_WdError(v61);
              }
              else
              {
                DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
                  (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v66,
                  v65);
                COREDEVICEACCESS::COREDEVICEACCESS((__int64)v75, (__int64)v65, 1, v47, 0);
                COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v75);
                if ( *(_DWORD *)(v44 + 160) != 1 && *((_DWORD *)v65 + 88) == 4
                  || *(_DWORD *)(v44 + 160) == 4
                  || (v69 = v65, *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v65 + 2) + 16LL) + 160LL) == 4) )
                {
                  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v75);
                  ExReleaseResourceLite(*(PERESOURCE *)(v66 + 80));
                  KeLeaveCriticalRegion();
                }
                else
                {
                  v48 = *(_QWORD *)(v44 + 1984);
                  v49 = v64;
                  if ( v48 )
                    ADAPTER_RENDER::FlushScheduler(v48, 8LL, v64, 0LL);
                  if ( !*(_BYTE *)(v18 + 1909)
                    || !*(_BYTE *)(v18 + 1848)
                    || (v50 = 1, !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v18 + 176) + 64LL) + 1056LL)) )
                  {
                    v50 = 0;
                  }
                  v51 = v65;
                  v52 = DmmRemovePresentPathFromVidPnSourceInActiveVidPn(v65, v49, a2 != 1073741828, v50);
                  memset(v74, 0, 56);
                  LODWORD(v19) = v52;
                  ADAPTER_DISPLAY::SetPartOfDesktop(*(PERESOURCE ***)(v18 + 1976), v64, 0);
                  ADAPTER_DISPLAY::SetDisplayModeInfo(
                    *(PERESOURCE ***)(v18 + 1976),
                    v64,
                    (const struct _DXGK_DISPLAYMODE_INFO *const)v74);
                  ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v18 + 1976), v64, 0);
                  v53 = *(ADAPTER_DISPLAY **)(v18 + 1976);
                  v73 = 0LL;
                  ADAPTER_DISPLAY::SetContentRect(v53, v64, &v73);
                  ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v18 + 1976), v64, 0LL);
                  v77 = *(_OWORD *)PsGetProcessImageFileName(*((_QWORD *)v8 + 7));
                  v64 = DmmCacheDisplayModeChangeRequest(v18, v64, (unsigned int)v74, 1, v19, 2, (__int64)&v77);
                  if ( (v64 & 0x80000000) != 0 )
                  {
                    v62 = WdLogNewEntry5_WdError(v54);
                    *(_QWORD *)(v62 + 24) = (int)v64;
                    WdLogEvent5_WdError(v62);
                  }
                  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v75);
                  ExReleaseResourceLite(*(PERESOURCE *)(v66 + 80));
                  KeLeaveCriticalRegion();
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v51 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v69 + 2), v65);
                }
              }
            }
            while ( PrimaryDisplaySource );
            LODWORD(v4) = v67;
          }
          if ( ((a2 - 0x40000000) & 0xFFFFFFFB) == 0 )
          {
            v70 = *(struct _LUID *)(v18 + 252);
            DxgkRemoveSessionViewForCurrentSession(&v70, v4, 1u);
          }
          DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)v63);
          goto LABEL_17;
        }
        v60 = (_QWORD *)WdLogNewEntry5_WdError(v39);
        v60[3] = v4;
        v60[4] = (int)HIDWORD(*(_QWORD *)(v18 + 252));
        v60[5] = *(unsigned int *)(v18 + 252);
        WdLogEvent5_WdError(v60);
        LODWORD(v19) = 0;
      }
      DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)v63);
      goto LABEL_25;
    }
    v56 = WdLogNewEntry5_WdError(v34);
    LODWORD(v19) = -1073741811;
    *(_QWORD *)(v56 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    *(_QWORD *)(v56 + 32) = -1073741811LL;
    goto LABEL_60;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v76, v13, 1, v17, 0);
  COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v76);
  if ( a2 == 1 && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v18 + 1976)) )
    ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(
      *(ADAPTER_DISPLAY **)(v18 + 1976),
      *(struct ADAPTER_RENDER **)(v13 + 16));
  if ( *(_DWORD *)(v18 + 160) == 1 )
    ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v18 + 1976), v4, 0LL);
  LODWORD(v19) = 0;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v76);
LABEL_17:
  v22 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 113);
  if ( *(_BYTE *)v22 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, v20, v23, v24) + 24) = 178LL;
  }
  else
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v72, *(struct DXGFASTMUTEX *const *)(v22 + 8));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v72);
    v28 = (_BYTE *)(v22 + 16);
    v29 = 10LL;
    do
    {
      *v28 = 0;
      v28 += 48;
      --v29;
    }
    while ( v29 );
    ++*(_DWORD *)(v22 + 496);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v25, v26, v27) + 24) = 200LL;
    if ( v72[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v72);
  }
  if ( (int)v19 < 0 )
    DxgkLogCodePointPacket(0x41u, *(_DWORD *)(v18 + 252), v4, v19);
  LODWORD(v19) = 0;
LABEL_25:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v30, &EventProfilerExit, v31, 3003);
  return (unsigned int)v19;
}
