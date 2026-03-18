/*
 * XREFs of DxgkDisplayOnOff @ 0x1C0071620
 * Callers:
 *     <none>
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0001388 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1C00013C0 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0001480 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00014CC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001588 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C00017E4 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00017FC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C000838C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DmmRemovePresentPathFromVidPnSourceInActiveVidPn @ 0x1C0070918 (DmmRemovePresentPathFromVidPnSourceInActiveVidPn.c)
 *     DmmRestorePresentPathFromVidPnSourceToActiveVidPn @ 0x1C00709C0 (DmmRestorePresentPathFromVidPnSourceToActiveVidPn.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0073DD0 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C007AC74 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C007AC88 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C007C090 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C008698C (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00871E0 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00936AC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093CF8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00A3E48 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00E1E90 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0180738 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 */

__int64 __fastcall DxgkDisplayOnOff(struct _LUID *a1, unsigned int a2, char a3, unsigned __int8 a4)
{
  __int64 v4; // r15
  struct DXGDEVICE *v6; // rbx
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v9; // rcx
  DXGSESSIONDATA *v10; // r14
  __int64 v11; // rdi
  __int64 CurrentProcess; // rax
  __int64 v13; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v15; // rcx
  struct DXGPROCESS *v16; // r13
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v21; // rcx
  SESSION_VIEW *v22; // r13
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rsi
  __int64 v24; // r14
  __int64 v25; // rdi
  unsigned int *v26; // r12
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v28; // rcx
  __int64 v29; // rbx
  unsigned __int8 v30; // r8
  __int64 v31; // r9
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r15
  __int64 v35; // rcx
  unsigned __int8 v36; // r15
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // r15
  __int64 v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  char v48; // [rsp+30h] [rbp-D0h] BYREF
  char v49; // [rsp+31h] [rbp-CFh]
  unsigned __int8 v50; // [rsp+32h] [rbp-CEh]
  struct DXGDEVICE *v51; // [rsp+38h] [rbp-C8h]
  _BYTE v52[8]; // [rsp+40h] [rbp-C0h] BYREF
  char v53; // [rsp+48h] [rbp-B8h]
  struct DXGPROCESS *v54; // [rsp+50h] [rbp-B0h]
  _BYTE v55[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v56[96]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v57[8]; // [rsp+D0h] [rbp-30h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+110h] [rbp+10h] BYREF
  char v59; // [rsp+140h] [rbp+40h]

  v4 = a2;
  v49 = a3;
  v50 = a4;
  memset(v57, 0, sizeof(v57));
  EtwActivityIdControl(3u, (LPGUID)&v57[1]);
  v6 = 0LL;
  v57[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v57[3]) = 53;
  v59 = 0;
  v51 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  v10 = SessionData;
  LODWORD(v11) = -1073741811;
  if ( !SessionData )
  {
    v41 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v41 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    v42 = v41;
    *(_QWORD *)(v41 + 32) = -1073741811LL;
LABEL_33:
    WdLogEvent5_WdError(v42);
    goto LABEL_29;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionData + 2323));
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v13);
  v54 = ProcessDxgProcess;
  v16 = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v42 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v42 + 24) = 7024LL;
    goto LABEL_33;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)ProcessDxgProcess + 9) + 224LL))(0LL) )
  {
    v43 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v43 + 24) = v16;
    WdLogEvent5_WdError(v43);
    LODWORD(v11) = -1073741790;
  }
  else
  {
    v48 = 0;
    v18 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v48, 1);
    v11 = v18;
    if ( v18 < 0 )
    {
      v44 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v44 + 24) = v11;
      WdLogEvent5_WdError(v44);
    }
    else
    {
      SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(v10, a1, v4);
      v22 = SessionViewFromSource;
      if ( SessionViewFromSource )
      {
        PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
        if ( PrimaryDisplaySource )
        {
          while ( 1 )
          {
            v24 = *((unsigned int *)PrimaryDisplaySource + 4);
            v25 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
            if ( v6 )
            {
              DxgkDestroyCddDeviceAndContextForCurrentSession((struct _LUID *)(v25 + 268), v6);
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v6 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v51 + 2), v51);
              v51 = 0LL;
            }
            v26 = (unsigned int *)(v25 + 268);
            CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession((struct _LUID *)(v25 + 268));
            v29 = CddDeviceAndContextForCurrentSession;
            if ( CddDeviceAndContextForCurrentSession < 0 )
            {
              v46 = (_QWORD *)WdLogNewEntry5_WdError(v28);
              v46[3] = *(int *)(v25 + 272);
              v46[4] = *v26;
              v46[5] = v29;
              WdLogEvent5_WdError(v46);
              goto LABEL_24;
            }
            v6 = v51;
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
              (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v55,
              v51);
            DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX(
              (DXGPROCESSCOPYPROTECTIONMUTEX *)v52,
              (struct DXGFASTMUTEX *const *)v54,
              v30);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v52);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v56, (__int64)v6, 1, v31, 0);
            v32 = COREDEVICEACCESS::AcquireExclusive((__int64)v56);
            v34 = v32;
            if ( v32 == -1073741130 )
            {
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v56);
              if ( v53 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v52);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v55);
              goto LABEL_26;
            }
            if ( v32 < 0 )
              break;
            v35 = *(_QWORD *)(v25 + 2136);
            if ( v35 )
              ADAPTER_RENDER::FlushScheduler(v35, 8LL, (unsigned int)v24);
            if ( v49 )
            {
              v36 = v50;
              if ( v50 && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v25 + 2128)) )
                ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(
                  *(ADAPTER_DISPLAY **)(v25 + 2128),
                  *((struct ADAPTER_RENDER **)v6 + 2));
              if ( (int)DmmRestorePresentPathFromVidPnSourceToActiveVidPn(
                          v6,
                          v24,
                          v36,
                          (struct COREDEVICEACCESS *)v56,
                          (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v57) < 0 )
                goto LABEL_19;
              v37 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(*(ADAPTER_DISPLAY **)(v25 + 2128), v24);
              v39 = v37;
              if ( v37 >= 0 )
                goto LABEL_19;
              v47 = (_QWORD *)WdLogNewEntry5_WdError(v38);
              v47[3] = v24;
              v47[4] = *(int *)(v25 + 272);
              v47[5] = *v26;
              v47[6] = v39;
              goto LABEL_46;
            }
            DmmRemovePresentPathFromVidPnSourceInActiveVidPn(v6, v24, 0, 0);
LABEL_19:
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v56);
            if ( v53 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v52);
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v55);
            if ( !v6 )
              goto LABEL_25;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v6 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v51 + 2), v51);
LABEL_24:
            v6 = 0LL;
            v51 = 0LL;
LABEL_25:
            PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v22, PrimaryDisplaySource);
LABEL_26:
            if ( !PrimaryDisplaySource )
              goto LABEL_27;
          }
          v47 = (_QWORD *)WdLogNewEntry5_WdError(v33);
          v47[3] = *(int *)(v25 + 272);
          v47[4] = *v26;
          v47[5] = v34;
LABEL_46:
          WdLogEvent5_WdError(v47);
          goto LABEL_19;
        }
LABEL_27:
        LODWORD(v11) = 0;
      }
      else
      {
        v45 = (_QWORD *)WdLogNewEntry5_WdError(v21);
        v45[3] = v4;
        v45[4] = a1->HighPart;
        v45[5] = a1->LowPart;
        WdLogEvent5_WdError(v45);
        LODWORD(v11) = -1073741811;
      }
    }
    DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v48);
  }
LABEL_29:
  CPROCESSATTACHHELPER::Detach(&ApcState);
  return (unsigned int)v11;
}
