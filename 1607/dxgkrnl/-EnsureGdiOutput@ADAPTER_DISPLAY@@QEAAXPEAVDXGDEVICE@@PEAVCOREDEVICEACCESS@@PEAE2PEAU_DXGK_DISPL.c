/*
 * XREFs of ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0087994
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0073484 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0075550 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015D868 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0001388 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1C00013C0 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00068C8 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsMonitorVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000694C (-IsMonitorVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z @ 0x1C0008FB0 (-PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1ADAPTEROWNERTRACKER@@QEAA@XZ @ 0x1C000D4F8 (--1ADAPTEROWNERTRACKER@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     DmmRemovePresentPathFromVidPnSourceInActiveVidPn @ 0x1C0070918 (DmmRemovePresentPathFromVidPnSourceInActiveVidPn.c)
 *     DmmRestorePresentPathFromVidPnSourceToActiveVidPn @ 0x1C00709C0 (DmmRestorePresentPathFromVidPnSourceToActiveVidPn.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00871E0 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00884F8 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00A3E48 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiGdiAsyncDisplaySwitchCallout @ 0x1C0192E0C (DpiGdiAsyncDisplaySwitchCallout.c)
 */

void __fastcall ADAPTER_DISPLAY::EnsureGdiOutput(
        ADAPTER_DISPLAY *this,
        struct DXGDEVICE *a2,
        struct COREDEVICEACCESS *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  unsigned __int8 v9; // r15
  DXGGLOBAL *Global; // rax
  __int64 v11; // rcx
  struct DXGSESSIONDATA *SessionData; // rdi
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 CurrentProcess; // rax
  __int64 v17; // rdx
  __int64 ProcessDxgProcess; // rax
  bool v19; // zf
  struct _ETHREAD *CurrentThread; // rsi
  DXGADAPTER *v21; // rdi
  unsigned int v22; // edi
  unsigned int i; // edi
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rax
  int active; // eax
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  _BYTE *v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rax
  __int64 v42; // r8
  __int64 v43; // rdx
  _QWORD *v44; // rax
  __int64 v45; // rcx
  _QWORD *v46; // rax
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // r14
  _QWORD *v50; // rax
  _BYTE v52[16]; // [rsp+40h] [rbp-79h] BYREF
  _BYTE v53[8]; // [rsp+50h] [rbp-69h] BYREF
  DXGADAPTER *v54; // [rsp+58h] [rbp-61h]
  DXGADAPTER *v55; // [rsp+60h] [rbp-59h]
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-51h] BYREF
  char v57; // [rsp+98h] [rbp-21h]
  _QWORD v58[2]; // [rsp+A0h] [rbp-19h] BYREF

  v58[0] = 0LL;
  v58[1] = 0LL;
  v9 = 0;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    v27 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v27 + 24) = 1613LL;
    WdLogEvent5_WdAssertion(v27);
  }
  v57 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionData + 2323));
  v13 = 0LL;
  if ( *((_DWORD *)this + 20) )
  {
    do
    {
      if ( ADAPTER_DISPLAY::IsPartOfDesktop((DXGADAPTER **)this, v13) )
      {
        v14 = *((_QWORD *)this + 14);
        v15 = 1016LL * (unsigned int)v13;
        if ( *(_QWORD *)(v15 + v14 + 672) )
        {
          v19 = *(_DWORD *)(v15 + v14 + 680) == 3;
        }
        else
        {
          CurrentProcess = PsGetCurrentProcess();
          ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v17);
          v19 = (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(ProcessDxgProcess + 72) + 312LL))(0LL) == 0;
        }
        *((_BYTE *)v58 + v13) = v19;
        if ( v19 )
        {
          if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, v13, 0) || !ADAPTER_DISPLAY::IsMonitorVisible(this, v13) )
          {
            v9 = 1;
            active = DmmRestorePresentPathFromVidPnSourceToActiveVidPn(a2, v13, 1u, a3, a6);
            v30 = active;
            if ( active < 0 )
            {
              v41 = (_QWORD *)WdLogNewEntry5_WdError(v29);
              v41[3] = *((_QWORD *)this + 2);
              v41[4] = (unsigned int)v13;
              v41[5] = v30;
              WdLogEvent5_WdError(v41);
LABEL_43:
              DpiGdiAsyncDisplaySwitchCallout(0LL, a6);
              goto LABEL_26;
            }
            v33 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 111);
            if ( *(_BYTE *)v33 )
            {
              *(_QWORD *)(WdLogNewEntry5_WdTrace(v32, v31, v34, v35) + 24) = 200LL;
            }
            else
            {
              DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v52, *(struct DXGFASTMUTEX *const *)(v33 + 8));
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v52);
              v39 = (_BYTE *)(v33 + 16);
              v40 = 18LL;
              do
              {
                *v39 = 0;
                v39 += 48;
                --v40;
              }
              while ( v40 );
              ++*(_DWORD *)(v33 + 880);
              *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v36, v37, v38) + 24) = 222LL;
              if ( v52[8] )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v52);
            }
          }
        }
        else
        {
          v9 = 1;
        }
      }
      v13 = (unsigned int)(v13 + 1);
    }
    while ( (unsigned int)v13 < *((_DWORD *)this + 20) );
    if ( !v9 )
      goto LABEL_25;
    CurrentThread = KeGetCurrentThread();
    v54 = (DXGADAPTER *)*((_QWORD *)this + 2);
    v21 = v54;
    v55 = *(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL);
    if ( v54 )
      DXGADAPTER::PushWorkerThreadOfExclusiveOwner(v54, CurrentThread);
    if ( v55 && v21 != v55 )
      DXGADAPTER::PushWorkerThreadOfExclusiveOwner(v55, CurrentThread);
    if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD *, _QWORD, unsigned __int8 *))(*(_QWORD *)(*((_QWORD *)a2 + 5)
                                                                                                  + 72LL)
                                                                                      + 184LL))(
            *((_QWORD *)this + 2),
            v58,
            *((unsigned int *)this + 20),
            a5) )
    {
      v42 = WdLogNewEntry5_WdEvent();
      v43 = 0LL;
      *(_QWORD *)(v42 + 24) = a2;
      v44 = (_QWORD *)(v42 + 32);
      do
      {
        v45 = *((unsigned __int8 *)v58 + v43++);
        *v44++ = v45;
      }
      while ( v43 < 2 );
      *(_QWORD *)(v42 + 48) = *((unsigned int *)this + 20);
      WdLogEvent5_WdEvent(v42);
    }
    v22 = 0;
    if ( *((_DWORD *)this + 20) )
    {
      while ( 1 )
      {
        if ( !*((_BYTE *)v58 + v22) )
        {
          if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, v22, 1u) )
          {
            v24 = DmmRemovePresentPathFromVidPnSourceInActiveVidPn(a2, v22, 0, 0);
            v26 = v24;
            if ( v24 < 0 )
              break;
          }
        }
        if ( ++v22 >= *((_DWORD *)this + 20) )
          goto LABEL_21;
      }
      v46 = (_QWORD *)WdLogNewEntry5_WdError(v25);
      v46[3] = *((_QWORD *)this + 2);
      v46[4] = v22;
      v46[5] = v26;
      WdLogEvent5_WdError(v46);
      ADAPTEROWNERTRACKER::~ADAPTEROWNERTRACKER((ADAPTEROWNERTRACKER *)v53);
      goto LABEL_43;
    }
LABEL_21:
    CPROCESSATTACHHELPER::Detach(&ApcState);
    for ( i = 0; i < *((_DWORD *)this + 20); ++i )
    {
      if ( *((_BYTE *)v58 + i) )
      {
        v47 = ADAPTER_DISPLAY::SetCopyProtectionWithLock((DXGADAPTER **)this, i);
        v49 = v47;
        if ( v47 < 0 )
        {
          v50 = (_QWORD *)WdLogNewEntry5_WdError(v48);
          v50[3] = *((_QWORD *)this + 2);
          v50[4] = i;
          v50[5] = v49;
          WdLogEvent5_WdError(v50);
        }
      }
    }
    ADAPTEROWNERTRACKER::~ADAPTEROWNERTRACKER((ADAPTEROWNERTRACKER *)v53);
  }
LABEL_25:
  *a4 = v9;
LABEL_26:
  CPROCESSATTACHHELPER::Detach(&ApcState);
}
