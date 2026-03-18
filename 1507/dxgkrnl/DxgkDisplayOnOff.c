/*
 * XREFs of DxgkDisplayOnOff @ 0x1C00BA1C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00010D0 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001B68 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0004D18 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0004D38 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000A708 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1C000A740 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000A784 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C005E564 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C008AC40 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C008EFF4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C008F008 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z @ 0x1C008F0B8 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093F2C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0094550 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0095C98 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DmmRemovePresentPathFromVidPnSourceInActiveVidPn @ 0x1C00BA068 (DmmRemovePresentPathFromVidPnSourceInActiveVidPn.c)
 *     DmmRestorePresentPathFromVidPnSourceToActiveVidPn @ 0x1C00BA110 (DmmRestorePresentPathFromVidPnSourceToActiveVidPn.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0156B24 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 */

__int64 __fastcall DxgkDisplayOnOff(struct _LUID *a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v4; // rbx
  __int64 v6; // r15
  DXGGLOBAL *Global; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v12; // rcx
  DXGSESSIONDATA *v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v17; // rcx
  struct DXGFASTMUTEX *const *v18; // r13
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  DXGSESSIONDATA **SessionViewFromSource; // rax
  __int64 v23; // rcx
  SESSION_VIEW *v24; // r12
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rsi
  __int64 v26; // r14
  __int64 v27; // rdi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // r9
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r15
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // r15
  __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  char v52; // [rsp+30h] [rbp-A9h] BYREF
  char v53; // [rsp+31h] [rbp-A8h]
  unsigned __int8 v54; // [rsp+32h] [rbp-A7h]
  struct DXGDEVICE *v55; // [rsp+38h] [rbp-A1h] BYREF
  _BYTE v56[8]; // [rsp+40h] [rbp-99h] BYREF
  char v57; // [rsp+48h] [rbp-91h]
  __int64 v58; // [rsp+50h] [rbp-89h] BYREF
  struct _LUID v59; // [rsp+58h] [rbp-81h] BYREF
  struct _LUID v60; // [rsp+60h] [rbp-79h] BYREF
  _BYTE v61[80]; // [rsp+70h] [rbp-69h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C0h] [rbp-19h] BYREF
  char v63; // [rsp+F0h] [rbp+17h]

  v4 = 0LL;
  v54 = a4;
  v55 = 0LL;
  v53 = a3;
  v6 = (unsigned int)a2;
  v63 = 0;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2, a3, a4);
  SessionData = DXGGLOBAL::GetSessionData(Global, v8, v9, v10);
  v13 = SessionData;
  LODWORD(v14) = -1073741811;
  if ( !SessionData )
  {
    v41 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v41 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v43, v42, v44, v45);
    v46 = v41;
    *(_QWORD *)(v41 + 32) = -1073741811LL;
LABEL_30:
    WdLogEvent5_WdError(v46);
    goto LABEL_26;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionData + 2321));
  Current = DXGPROCESS::GetCurrent(v15);
  v18 = (struct DXGFASTMUTEX *const *)Current;
  if ( !Current )
  {
    v46 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v46 + 24) = 30960LL;
    goto LABEL_30;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 10) + 224LL))(0LL) )
  {
    v47 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v47 + 24) = v18;
    WdLogEvent5_WdError(v47);
    LODWORD(v14) = -1073741790;
  }
  else
  {
    v52 = 0;
    v20 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v52, 1);
    v14 = v20;
    if ( v20 < 0 )
    {
      v48 = WdLogNewEntry5_WdError(v21);
      *(_QWORD *)(v48 + 24) = v14;
      WdLogEvent5_WdError(v48);
    }
    else
    {
      SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(v13, a1, v6);
      v24 = (SESSION_VIEW *)SessionViewFromSource;
      if ( SessionViewFromSource )
      {
        PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
        if ( PrimaryDisplaySource )
        {
          while ( 1 )
          {
            v26 = *((unsigned int *)PrimaryDisplaySource + 4);
            v27 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
            if ( v4 )
            {
              v60 = *(struct _LUID *)(v27 + 252);
              DxgkDestroyCddDeviceAndContextForCurrentSession(&v60, (struct DXGDEVICE *)v4);
              if ( _InterlockedExchangeAdd64(v4 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v55 + 2), v55);
              v55 = 0LL;
            }
            v59 = *(struct _LUID *)(v27 + 252);
            CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(&v59, &v55, 0LL);
            v30 = CddDeviceAndContextForCurrentSession;
            if ( CddDeviceAndContextForCurrentSession < 0 )
            {
              v50 = (_QWORD *)WdLogNewEntry5_WdError(v29);
              v50[3] = (int)HIDWORD(*(_QWORD *)(v27 + 252));
              v50[4] = *(unsigned int *)(v27 + 252);
              v50[5] = v30;
              WdLogEvent5_WdError(v50);
              goto LABEL_21;
            }
            v4 = (volatile signed __int64 *)v55;
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
              (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v58,
              v55);
            DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v56, v18);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v56);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v61, (__int64)v4, 1, v31, 0);
            v32 = COREDEVICEACCESS::AcquireExclusive((__int64)v61);
            v35 = v32;
            if ( v32 == -1073741130 )
            {
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
              if ( v57 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v56);
              ExReleaseResourceLite(*(PERESOURCE *)(v58 + 80));
              KeLeaveCriticalRegion();
              goto LABEL_23;
            }
            if ( v32 < 0 )
              break;
            v36 = *(_QWORD *)(v27 + 1984);
            if ( v36 )
              ADAPTER_RENDER::FlushScheduler(v36, 8, v26, 0);
            if ( v53 )
            {
              LOBYTE(v34) = v54;
              if ( (int)DmmRestorePresentPathFromVidPnSourceToActiveVidPn(
                          (struct DXGDEVICE *)v4,
                          (unsigned int)v26,
                          v34,
                          (struct COREDEVICEACCESS *)v61) < 0 )
                goto LABEL_16;
              v37 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(*(DXGADAPTER ***)(v27 + 1976), v26);
              v39 = v37;
              if ( v37 >= 0 )
                goto LABEL_16;
              v51 = (_QWORD *)WdLogNewEntry5_WdError(v38);
              v51[3] = v26;
              v51[4] = (int)HIDWORD(*(_QWORD *)(v27 + 252));
              v51[5] = *(unsigned int *)(v27 + 252);
              v51[6] = v39;
              goto LABEL_43;
            }
            DmmRemovePresentPathFromVidPnSourceInActiveVidPn((struct DXGDEVICE *)v4, (unsigned int)v26, 0LL, 0LL);
LABEL_16:
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
            if ( v57 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v56);
            ExReleaseResourceLite(*(PERESOURCE *)(v58 + 80));
            KeLeaveCriticalRegion();
            if ( !v4 )
              goto LABEL_22;
            if ( _InterlockedExchangeAdd64(v4 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v55 + 2), v55);
LABEL_21:
            v4 = 0LL;
            v55 = 0LL;
LABEL_22:
            PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v24, PrimaryDisplaySource);
LABEL_23:
            if ( !PrimaryDisplaySource )
              goto LABEL_24;
          }
          v51 = (_QWORD *)WdLogNewEntry5_WdError(v33);
          v51[3] = (int)HIDWORD(*(_QWORD *)(v27 + 252));
          v51[4] = *(unsigned int *)(v27 + 252);
          v51[5] = v35;
LABEL_43:
          WdLogEvent5_WdError(v51);
          goto LABEL_16;
        }
LABEL_24:
        LODWORD(v14) = 0;
      }
      else
      {
        v49 = (_QWORD *)WdLogNewEntry5_WdError(v23);
        v49[3] = v6;
        v49[4] = a1->HighPart;
        v49[5] = a1->LowPart;
        WdLogEvent5_WdError(v49);
        LODWORD(v14) = -1073741811;
      }
    }
    DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v52);
  }
LABEL_26:
  CPROCESSATTACHHELPER::Detach(&ApcState);
  return (unsigned int)v14;
}
