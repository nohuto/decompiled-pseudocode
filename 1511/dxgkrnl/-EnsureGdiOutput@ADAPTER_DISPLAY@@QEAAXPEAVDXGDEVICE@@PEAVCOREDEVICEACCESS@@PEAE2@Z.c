/*
 * XREFs of ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2@Z @ 0x1C009AF4C
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBI@Z @ 0x1C0063440 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00AFD1C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@@Z @ 0x1C013A090 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z @ 0x1C0003374 (-PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007A8C (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsMonitorVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007C7C (-IsMonitorVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000B054 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1C000B08C (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ??1ADAPTEROWNERTRACKER@@QEAA@XZ @ 0x1C000CF70 (--1ADAPTEROWNERTRACKER@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C0097258 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C009A798 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C009B8E0 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     DmmRestorePresentPathFromVidPnSourceToActiveVidPn @ 0x1C00B1740 (DmmRestorePresentPathFromVidPnSourceToActiveVidPn.c)
 *     DmmRemovePresentPathFromVidPnSourceInActiveVidPn @ 0x1C00B17E8 (DmmRemovePresentPathFromVidPnSourceInActiveVidPn.c)
 *     DpiGdiAsyncDisplaySwitchCallout @ 0x1C016B120 (DpiGdiAsyncDisplaySwitchCallout.c)
 */

void __fastcall ADAPTER_DISPLAY::EnsureGdiOutput(
        ADAPTER_DISPLAY *this,
        struct DXGDEVICE *a2,
        struct COREDEVICEACCESS *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  char v8; // r15
  DXGGLOBAL *Global; // rax
  __int64 v10; // rcx
  struct DXGSESSIONDATA *SessionData; // rdi
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  bool v15; // zf
  struct _ERESOURCE *CurrentThread; // rsi
  DXGADAPTER *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // edi
  unsigned int i; // edi
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rsi
  struct DXGPROCESS *Current; // rax
  __int64 v28; // rax
  int active; // eax
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rsi
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  _BYTE *v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // r8
  __int64 v44; // rdx
  _QWORD *v45; // rax
  __int64 v46; // rcx
  _QWORD *v47; // rax
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // r14
  _QWORD *v51; // rax
  _BYTE v52[16]; // [rsp+30h] [rbp-71h] BYREF
  unsigned __int8 *v53; // [rsp+40h] [rbp-61h]
  _BYTE v54[8]; // [rsp+48h] [rbp-59h] BYREF
  DXGADAPTER *v55; // [rsp+50h] [rbp-51h]
  DXGADAPTER *v56; // [rsp+58h] [rbp-49h]
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-41h] BYREF
  char v58; // [rsp+90h] [rbp-11h]
  _QWORD v59[2]; // [rsp+98h] [rbp-9h] BYREF

  v59[0] = 0LL;
  v59[1] = 0LL;
  v53 = a4;
  v8 = 0;
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    v28 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v28 + 24) = 11850LL;
    WdLogEvent5_WdAssertion(v28);
  }
  v58 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionData + 2324));
  v12 = 0LL;
  if ( *((_DWORD *)this + 26) )
  {
    do
    {
      if ( ADAPTER_DISPLAY::IsPartOfDesktop((DXGADAPTER **)this, v12) )
      {
        v13 = *((_QWORD *)this + 17);
        v14 = 1016LL * (unsigned int)v12;
        if ( *(_QWORD *)(v14 + v13 + 672) )
        {
          v15 = *(_DWORD *)(v14 + v13 + 680) == 3;
        }
        else
        {
          Current = DXGPROCESS::GetCurrent();
          v15 = (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 10) + 312LL))(0LL) == 0;
        }
        *((_BYTE *)v59 + v12) = v15;
        if ( v15 )
        {
          if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, v12) || !ADAPTER_DISPLAY::IsMonitorVisible(this, v12) )
          {
            v8 = 1;
            active = DmmRestorePresentPathFromVidPnSourceToActiveVidPn(a2, v12, 1u, a3);
            v31 = active;
            if ( active < 0 )
            {
              v42 = (_QWORD *)WdLogNewEntry5_WdError(v30);
              v42[3] = *((_QWORD *)this + 2);
              v42[4] = (unsigned int)v12;
              v42[5] = v31;
              WdLogEvent5_WdError(v42);
LABEL_43:
              DpiGdiAsyncDisplaySwitchCallout(0LL);
              goto LABEL_26;
            }
            v34 = *((_QWORD *)DXGGLOBAL::GetGlobal(v30) + 134);
            if ( *(_BYTE *)v34 )
            {
              *(_QWORD *)(WdLogNewEntry5_WdTrace(v33, v32, v35, v36) + 24) = 193LL;
            }
            else
            {
              DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v52, *(struct DXGFASTMUTEX *const *)(v34 + 8));
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v52);
              v40 = (_BYTE *)(v34 + 16);
              v41 = 18LL;
              do
              {
                *v40 = 0;
                v40 += 48;
                --v41;
              }
              while ( v41 );
              ++*(_DWORD *)(v34 + 880);
              *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v37, v38, v39) + 24) = 215LL;
              if ( v52[8] )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v52);
            }
          }
        }
        else
        {
          v8 = 1;
        }
      }
      v12 = (unsigned int)(v12 + 1);
    }
    while ( (unsigned int)v12 < *((_DWORD *)this + 26) );
    if ( !v8 )
      goto LABEL_25;
    CurrentThread = (struct _ERESOURCE *)KeGetCurrentThread();
    v55 = (DXGADAPTER *)*((_QWORD *)this + 2);
    v17 = v55;
    v56 = *(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL);
    if ( v55 )
      DXGADAPTER::PushWorkerThreadOfExclusiveOwner((PERESOURCE *)v55, CurrentThread);
    if ( v56 && v17 != v56 )
      DXGADAPTER::PushWorkerThreadOfExclusiveOwner((PERESOURCE *)v56, CurrentThread);
    if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD *, _QWORD, unsigned __int8 *))(*(_QWORD *)(*((_QWORD *)a2 + 5)
                                                                                                  + 80LL)
                                                                                      + 184LL))(
            *((_QWORD *)this + 2),
            v59,
            *((unsigned int *)this + 26),
            a5) )
    {
      v43 = WdLogNewEntry5_WdEvent(v19, v18, v20, v21);
      v44 = 0LL;
      *(_QWORD *)(v43 + 24) = a2;
      v45 = (_QWORD *)(v43 + 32);
      do
      {
        v46 = *((unsigned __int8 *)v59 + v44++);
        *v45++ = v46;
      }
      while ( v44 < 2 );
      *(_QWORD *)(v43 + 48) = *((unsigned int *)this + 26);
      WdLogEvent5_WdEvent(v43);
    }
    v22 = 0;
    if ( *((_DWORD *)this + 26) )
    {
      while ( 1 )
      {
        if ( !*((_BYTE *)v59 + v22) )
        {
          if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, v22) )
          {
            v24 = DmmRemovePresentPathFromVidPnSourceInActiveVidPn(a2, v22, 0, 0);
            v26 = v24;
            if ( v24 < 0 )
              break;
          }
        }
        if ( ++v22 >= *((_DWORD *)this + 26) )
          goto LABEL_21;
      }
      v47 = (_QWORD *)WdLogNewEntry5_WdError(v25);
      v47[3] = *((_QWORD *)this + 2);
      v47[4] = v22;
      v47[5] = v26;
      WdLogEvent5_WdError(v47);
      ADAPTEROWNERTRACKER::~ADAPTEROWNERTRACKER((ADAPTEROWNERTRACKER *)v54);
      goto LABEL_43;
    }
LABEL_21:
    CPROCESSATTACHHELPER::Detach(&ApcState);
    for ( i = 0; i < *((_DWORD *)this + 26); ++i )
    {
      if ( *((_BYTE *)v59 + i) )
      {
        v48 = ADAPTER_DISPLAY::SetCopyProtectionWithLock((DXGADAPTER **)this, i);
        v50 = v48;
        if ( v48 < 0 )
        {
          v51 = (_QWORD *)WdLogNewEntry5_WdError(v49);
          v51[3] = *((_QWORD *)this + 2);
          v51[4] = i;
          v51[5] = v50;
          WdLogEvent5_WdError(v51);
        }
      }
    }
    ADAPTEROWNERTRACKER::~ADAPTEROWNERTRACKER((ADAPTEROWNERTRACKER *)v54);
  }
LABEL_25:
  *v53 = v8;
LABEL_26:
  CPROCESSATTACHHELPER::Detach(&ApcState);
}
