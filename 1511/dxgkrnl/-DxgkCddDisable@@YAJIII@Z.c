/*
 * XREFs of ?DxgkCddDisable@@YAJIII@Z @ 0x1C00AE440
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0003694 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0007070 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007098 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0007630 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C00076BC (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C0007710 (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C0007810 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0007BDC (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000A1C4 (DxgkLogCodePointPacket.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C000AEAC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000AED8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C006A8E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C006AE24 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C0097258 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C009DB50 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C009DB64 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z @ 0x1C009ED20 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C00AE93C (DxgkRemoveSessionViewForCurrentSession.c)
 *     DmmCacheDisplayModeChangeRequest @ 0x1C00AE9B0 (DmmCacheDisplayModeChangeRequest.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00B0870 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     DmmRemovePresentPathFromVidPnSourceInActiveVidPn @ 0x1C00B17E8 (DmmRemovePresentPathFromVidPnSourceInActiveVidPn.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00CC714 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C012CA58 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
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
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  _BYTE *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v32; // rax
  DXGGLOBAL *Global; // rax
  __int64 v34; // rcx
  DXGSESSIONDATA *SessionData; // rsi
  int v36; // eax
  __int64 v37; // rcx
  DXGSESSIONDATA **SessionViewFromSource; // rax
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
  __int64 v55; // rbx
  _QWORD *v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rax
  _QWORD *v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // rax
  _BYTE v66[8]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v67; // [rsp+48h] [rbp-B8h]
  struct DXGDEVICE *v68; // [rsp+50h] [rbp-B0h] BYREF
  int v69; // [rsp+58h] [rbp-A8h]
  struct _LUID v70; // [rsp+60h] [rbp-A0h] BYREF
  struct _LUID v71; // [rsp+68h] [rbp-98h] BYREF
  struct _LUID v72; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v73[16]; // [rsp+78h] [rbp-88h] BYREF
  struct DXGDEVICE *v74; // [rsp+88h] [rbp-78h]
  _BYTE v75[16]; // [rsp+90h] [rbp-70h] BYREF
  struct tagRECT v76; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v77[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v78[80]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v79[80]; // [rsp+140h] [rbp+40h] BYREF
  __int128 v80; // [rsp+190h] [rbp+90h] BYREF

  v4 = (unsigned int)a3;
  v69 = a3;
  v5 = (unsigned int)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 3003);
  Current = DXGPROCESS::GetCurrent();
  v8 = Current;
  if ( !Current )
  {
    LODWORD(v17) = -1073741811;
    v55 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v55 + 24) = -1073741811LL;
    *(_QWORD *)(v55 + 32) = PsGetCurrentProcess();
LABEL_60:
    v56 = (_QWORD *)v55;
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
  v68 = (struct DXGDEVICE *)v13;
  if ( !v13 )
  {
    LODWORD(v17) = -1073741811;
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v56[3] = -1073741811LL;
    v56[4] = v5;
    v56[5] = v8;
LABEL_61:
    WdLogEvent5_WdError(v56);
    goto LABEL_25;
  }
  v16 = *(_QWORD *)(v13 + 2832);
  if ( !v16 || !*(_QWORD *)(v16 + 1984) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v32 + 24) = 566LL;
    WdLogEvent5_WdAssertion(v32);
  }
  if ( (a2 & 0x40000000) != 0 )
  {
    if ( ((a2 - 0x40000000) & 0xFFFFFFFB) != 0 )
    {
      v57 = WdLogNewEntry5_WdAssertion(v14);
      *(_QWORD *)(v57 + 24) = 607LL;
      WdLogEvent5_WdAssertion(v57);
    }
    Global = DXGGLOBAL::GetGlobal(v14);
    SessionData = DXGGLOBAL::GetSessionData(Global);
    if ( SessionData )
    {
      v66[0] = 0;
      v36 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v66, 1);
      v17 = v36;
      if ( v36 < 0 )
      {
        v62 = WdLogNewEntry5_WdError(v37);
        *(_QWORD *)(v62 + 24) = v17;
        WdLogEvent5_WdError(v62);
      }
      else
      {
        v72 = *(struct _LUID *)(v16 + 252);
        SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionData, &v72, v4);
        if ( SessionViewFromSource )
        {
          PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
          if ( PrimaryDisplaySource )
          {
            v42 = v40;
            do
            {
              v43 = *((_QWORD *)PrimaryDisplaySource + 1);
              v67 = *((_DWORD *)PrimaryDisplaySource + 4);
              v44 = *(_QWORD *)(v43 + 16);
              PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v42, PrimaryDisplaySource);
              v70 = *(struct _LUID *)(v44 + 252);
              CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(&v70, &v68, 0LL);
              v17 = CddDeviceAndContextForCurrentSession;
              if ( CddDeviceAndContextForCurrentSession < 0 )
              {
                v64 = (_QWORD *)WdLogNewEntry5_WdError(v46);
                v64[3] = (int)HIDWORD(*(_QWORD *)(v44 + 252));
                v64[4] = *(unsigned int *)(v44 + 252);
                v64[5] = v17;
                WdLogEvent5_WdError(v64);
              }
              else
              {
                DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
                  (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v73,
                  v68);
                COREDEVICEACCESS::COREDEVICEACCESS((__int64)v78, (__int64)v68, 1, v47, 0);
                COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v78);
                if ( *(_DWORD *)(v44 + 160) != 1 && *((_DWORD *)v68 + 88) == 4
                  || *(_DWORD *)(v44 + 160) == 4
                  || (v74 = v68, *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v68 + 2) + 16LL) + 160LL) == 4) )
                {
                  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v78);
                  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v73);
                }
                else
                {
                  v48 = *(_QWORD *)(v44 + 1992);
                  v49 = v67;
                  if ( v48 )
                    ADAPTER_RENDER::FlushScheduler(v48, 8, v67, 0);
                  if ( !*(_BYTE *)(v16 + 1917)
                    || !*(_BYTE *)(v16 + 1856)
                    || (v50 = 1, !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 176) + 64LL) + 1088LL)) )
                  {
                    v50 = 0;
                  }
                  v51 = v68;
                  v52 = DmmRemovePresentPathFromVidPnSourceInActiveVidPn(v68, v49, a2 != 1073741828, v50);
                  memset(v77, 0, 56);
                  LODWORD(v17) = v52;
                  ADAPTER_DISPLAY::SetPartOfDesktop(*(PERESOURCE ***)(v16 + 1984), v67, 0);
                  ADAPTER_DISPLAY::SetDisplayModeInfo(
                    *(PERESOURCE ***)(v16 + 1984),
                    v67,
                    (const struct _DXGK_DISPLAYMODE_INFO *const)v77);
                  ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v16 + 1984), v67, 0);
                  v53 = *(ADAPTER_DISPLAY **)(v16 + 1984);
                  v76 = 0LL;
                  ADAPTER_DISPLAY::SetContentRect(v53, v67, &v76);
                  ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v16 + 1984), v67, 0LL);
                  v80 = *(_OWORD *)PsGetProcessImageFileName(*((_QWORD *)v8 + 7));
                  v67 = DmmCacheDisplayModeChangeRequest(v16, v67, (unsigned int)v77, 1, v17, 2, (__int64)&v80);
                  if ( (v67 & 0x80000000) != 0 )
                  {
                    v65 = WdLogNewEntry5_WdError(v54);
                    *(_QWORD *)(v65 + 24) = (int)v67;
                    WdLogEvent5_WdError(v65);
                  }
                  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v78);
                  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v73);
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v51 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v74 + 2), v68);
                }
              }
            }
            while ( PrimaryDisplaySource );
            LODWORD(v4) = v69;
          }
          if ( ((a2 - 0x40000000) & 0xFFFFFFFB) == 0 )
          {
            v71 = *(struct _LUID *)(v16 + 252);
            DxgkRemoveSessionViewForCurrentSession(&v71, v4, 1u);
          }
          DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)v66);
          goto LABEL_17;
        }
        v63 = (_QWORD *)WdLogNewEntry5_WdError(v39);
        v63[3] = v4;
        v63[4] = (int)HIDWORD(*(_QWORD *)(v16 + 252));
        v63[5] = *(unsigned int *)(v16 + 252);
        WdLogEvent5_WdError(v63);
        LODWORD(v17) = 0;
      }
      DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)v66);
      goto LABEL_25;
    }
    v55 = WdLogNewEntry5_WdError(v34);
    LODWORD(v17) = -1073741811;
    *(_QWORD *)(v55 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v59, v58, v60, v61);
    *(_QWORD *)(v55 + 32) = -1073741811LL;
    goto LABEL_60;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v79, v13, 1, v15, 0);
  COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v79);
  if ( a2 == 1 && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v16 + 1984)) )
    ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(
      *(ADAPTER_DISPLAY **)(v16 + 1984),
      *(struct ADAPTER_RENDER **)(v13 + 16));
  if ( *(_DWORD *)(v16 + 160) == 1 )
    ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v16 + 1984), v4, 0LL);
  LODWORD(v17) = 0;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v79);
LABEL_17:
  v21 = *((_QWORD *)DXGGLOBAL::GetGlobal(v18) + 134);
  if ( *(_BYTE *)v21 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v20, v19, v22, v23) + 24) = 193LL;
  }
  else
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v75, *(struct DXGFASTMUTEX *const *)(v21 + 8));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v75);
    v27 = (_BYTE *)(v21 + 16);
    v28 = 18LL;
    do
    {
      *v27 = 0;
      v27 += 48;
      --v28;
    }
    while ( v28 );
    ++*(_DWORD *)(v21 + 880);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v24, v25, v26) + 24) = 215LL;
    if ( v75[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v75);
  }
  if ( (int)v17 < 0 )
    DxgkLogCodePointPacket(0x41u, *(_DWORD *)(v16 + 252), v4, v17);
  LODWORD(v17) = 0;
LABEL_25:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v29, &EventProfilerExit, v30, 3003);
  return (unsigned int)v17;
}
