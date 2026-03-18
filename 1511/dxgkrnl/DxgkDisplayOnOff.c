/*
 * XREFs of DxgkDisplayOnOff @ 0x1C00AF0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0003638 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0007070 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007098 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000AE8C (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C000AEAC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000AED8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000B054 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1C000B08C (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C006A8E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C006AE24 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C0097258 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C009A798 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C009DB50 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C009DB64 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z @ 0x1C009ED20 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00B0870 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     DmmRestorePresentPathFromVidPnSourceToActiveVidPn @ 0x1C00B1740 (DmmRestorePresentPathFromVidPnSourceToActiveVidPn.c)
 *     DmmRemovePresentPathFromVidPnSourceInActiveVidPn @ 0x1C00B17E8 (DmmRemovePresentPathFromVidPnSourceInActiveVidPn.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C015AE3C (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 */

__int64 __fastcall DxgkDisplayOnOff(struct _LUID *a1, unsigned int a2, char a3, unsigned __int8 a4)
{
  volatile signed __int64 *v4; // rbx
  __int64 v6; // r15
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v9; // rcx
  DXGSESSIONDATA *v10; // r14
  __int64 v11; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v13; // rcx
  struct DXGFASTMUTEX *const *v14; // r13
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  DXGSESSIONDATA **SessionViewFromSource; // rax
  __int64 v19; // rcx
  SESSION_VIEW *v20; // r12
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rsi
  __int64 v22; // r14
  __int64 v23; // rdi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r15
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r15
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  char v47; // [rsp+30h] [rbp-D0h] BYREF
  char v48; // [rsp+31h] [rbp-CFh]
  unsigned __int8 v49; // [rsp+32h] [rbp-CEh]
  struct DXGDEVICE *v50; // [rsp+38h] [rbp-C8h] BYREF
  struct _LUID v51; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v52[8]; // [rsp+48h] [rbp-B8h] BYREF
  char v53; // [rsp+50h] [rbp-B0h]
  struct _LUID v54; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v55[32]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v56[80]; // [rsp+80h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+D0h] [rbp-30h] BYREF
  char v58; // [rsp+100h] [rbp+0h]

  v4 = 0LL;
  v49 = a4;
  v50 = 0LL;
  v48 = a3;
  v6 = a2;
  v58 = 0;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  SessionData = DXGGLOBAL::GetSessionData(Global);
  v10 = SessionData;
  LODWORD(v11) = -1073741811;
  if ( !SessionData )
  {
    v36 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v36 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v38, v37, v39, v40);
    v41 = v36;
    *(_QWORD *)(v36 + 32) = -1073741811LL;
LABEL_30:
    WdLogEvent5_WdError(v41);
    goto LABEL_26;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionData + 2324));
  Current = DXGPROCESS::GetCurrent();
  v14 = (struct DXGFASTMUTEX *const *)Current;
  if ( !Current )
  {
    v41 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v41 + 24) = 31663LL;
    goto LABEL_30;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 10) + 224LL))(0LL) )
  {
    v42 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v42 + 24) = v14;
    WdLogEvent5_WdError(v42);
    LODWORD(v11) = -1073741790;
  }
  else
  {
    v47 = 0;
    v16 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v47, 1);
    v11 = v16;
    if ( v16 < 0 )
    {
      v43 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v43 + 24) = v11;
      WdLogEvent5_WdError(v43);
    }
    else
    {
      SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(v10, a1, v6);
      v20 = (SESSION_VIEW *)SessionViewFromSource;
      if ( SessionViewFromSource )
      {
        PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
        if ( PrimaryDisplaySource )
        {
          while ( 1 )
          {
            v22 = *((unsigned int *)PrimaryDisplaySource + 4);
            v23 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
            if ( v4 )
            {
              v54 = *(struct _LUID *)(v23 + 252);
              DxgkDestroyCddDeviceAndContextForCurrentSession(&v54, (struct DXGDEVICE *)v4);
              if ( _InterlockedExchangeAdd64(v4 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
              v50 = 0LL;
            }
            v51 = *(struct _LUID *)(v23 + 252);
            CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(&v51, &v50, 0LL);
            v26 = CddDeviceAndContextForCurrentSession;
            if ( CddDeviceAndContextForCurrentSession < 0 )
            {
              v45 = (_QWORD *)WdLogNewEntry5_WdError(v25);
              v45[3] = (int)HIDWORD(*(_QWORD *)(v23 + 252));
              v45[4] = *(unsigned int *)(v23 + 252);
              v45[5] = v26;
              WdLogEvent5_WdError(v45);
              goto LABEL_21;
            }
            v4 = (volatile signed __int64 *)v50;
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
              (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v55,
              v50);
            DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v52, v14);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v52);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v56, (__int64)v4, 1, v27, 0);
            v28 = COREDEVICEACCESS::AcquireExclusive((__int64)v56);
            v30 = v28;
            if ( v28 == -1073741130 )
            {
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v56);
              if ( v53 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v52);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v55);
              goto LABEL_23;
            }
            if ( v28 < 0 )
              break;
            v31 = *(_QWORD *)(v23 + 1992);
            if ( v31 )
              ADAPTER_RENDER::FlushScheduler(v31, 8, v22, 0);
            if ( v48 )
            {
              if ( (int)DmmRestorePresentPathFromVidPnSourceToActiveVidPn(
                          (struct DXGDEVICE *)v4,
                          v22,
                          v49,
                          (struct COREDEVICEACCESS *)v56) < 0 )
                goto LABEL_16;
              v32 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(*(DXGADAPTER ***)(v23 + 1984), v22);
              v34 = v32;
              if ( v32 >= 0 )
                goto LABEL_16;
              v46 = (_QWORD *)WdLogNewEntry5_WdError(v33);
              v46[3] = v22;
              v46[4] = (int)HIDWORD(*(_QWORD *)(v23 + 252));
              v46[5] = *(unsigned int *)(v23 + 252);
              v46[6] = v34;
              goto LABEL_43;
            }
            DmmRemovePresentPathFromVidPnSourceInActiveVidPn((struct DXGDEVICE *)v4, v22, 0, 0);
LABEL_16:
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v56);
            if ( v53 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v52);
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v55);
            if ( !v4 )
              goto LABEL_22;
            if ( _InterlockedExchangeAdd64(v4 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
LABEL_21:
            v4 = 0LL;
            v50 = 0LL;
LABEL_22:
            PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v20, PrimaryDisplaySource);
LABEL_23:
            if ( !PrimaryDisplaySource )
              goto LABEL_24;
          }
          v46 = (_QWORD *)WdLogNewEntry5_WdError(v29);
          v46[3] = (int)HIDWORD(*(_QWORD *)(v23 + 252));
          v46[4] = *(unsigned int *)(v23 + 252);
          v46[5] = v30;
LABEL_43:
          WdLogEvent5_WdError(v46);
          goto LABEL_16;
        }
LABEL_24:
        LODWORD(v11) = 0;
      }
      else
      {
        v44 = (_QWORD *)WdLogNewEntry5_WdError(v19);
        v44[3] = v6;
        v44[4] = a1->HighPart;
        v44[5] = a1->LowPart;
        WdLogEvent5_WdError(v44);
        LODWORD(v11) = -1073741811;
      }
    }
    DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v47);
  }
LABEL_26:
  CPROCESSATTACHHELPER::Detach(&ApcState);
  return (unsigned int)v11;
}
