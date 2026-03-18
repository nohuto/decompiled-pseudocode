/*
 * XREFs of ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2@Z @ 0x1C00B60B8
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBI@Z @ 0x1C005C690 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00B47FC (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@@Z @ 0x1C0135970 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0006798 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000A708 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1C000A740 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ??1ADAPTEROWNERTRACKER@@QEAA@XZ @ 0x1C000AB38 (--1ADAPTEROWNERTRACKER@@QEAA@XZ.c)
 *     ?IsMonitorVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000AFDC (-IsMonitorVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z @ 0x1C000B074 (-PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C008AC40 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0095C98 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00B6BDC (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     DmmRemovePresentPathFromVidPnSourceInActiveVidPn @ 0x1C00BA068 (DmmRemovePresentPathFromVidPnSourceInActiveVidPn.c)
 *     DmmRestorePresentPathFromVidPnSourceToActiveVidPn @ 0x1C00BA110 (DmmRestorePresentPathFromVidPnSourceToActiveVidPn.c)
 *     DpiGdiAsyncDisplaySwitchCallout @ 0x1C0166B80 (DpiGdiAsyncDisplaySwitchCallout.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGSESSIONDATA *SessionData; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rax
  bool v21; // zf
  struct _ERESOURCE *CurrentThread; // rsi
  DXGADAPTER *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // edi
  unsigned int i; // edi
  struct DXGPROCESS *Current; // rax
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // rax
  int active; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  _BYTE *v49; // rax
  __int64 v50; // rcx
  _QWORD *v51; // rax
  __int64 v52; // r8
  __int64 v53; // rdx
  _QWORD *v54; // rax
  __int64 v55; // rcx
  _QWORD *v56; // rax
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // r14
  _QWORD *v60; // rax
  _BYTE v61[16]; // [rsp+30h] [rbp-71h] BYREF
  unsigned __int8 *v62; // [rsp+40h] [rbp-61h]
  _BYTE v63[8]; // [rsp+48h] [rbp-59h] BYREF
  DXGADAPTER *v64; // [rsp+50h] [rbp-51h]
  DXGADAPTER *v65; // [rsp+58h] [rbp-49h]
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-41h] BYREF
  char v67; // [rsp+90h] [rbp-11h]
  _QWORD v68[2]; // [rsp+98h] [rbp-9h] BYREF

  v68[0] = 0LL;
  v68[1] = 0LL;
  v62 = a4;
  v8 = 0;
  Global = DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2, (__int64)a3, (__int64)a4);
  SessionData = DXGGLOBAL::GetSessionData(Global, v10, v11, v12);
  if ( !SessionData )
  {
    v34 = WdLogNewEntry5_WdAssertion(v14, v13, v16, v17);
    *(_QWORD *)(v34 + 24) = 11505LL;
    WdLogEvent5_WdAssertion(v34);
  }
  v67 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionData + 2321));
  v18 = 0LL;
  if ( *((_DWORD *)this + 20) )
  {
    do
    {
      if ( ADAPTER_DISPLAY::IsPartOfDesktop((DXGADAPTER **)this, v18) )
      {
        v19 = *((_QWORD *)this + 14);
        v20 = 1008LL * (unsigned int)v18;
        if ( *(_QWORD *)(v20 + v19 + 672) )
        {
          v21 = *(_DWORD *)(v20 + v19 + 680) == 3;
        }
        else
        {
          Current = DXGPROCESS::GetCurrent(v19);
          v21 = (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 10) + 312LL))(0LL) == 0;
        }
        *((_BYTE *)v68 + v18) = v21;
        if ( v21 )
        {
          if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, v18) || !ADAPTER_DISPLAY::IsMonitorVisible(this, v18) )
          {
            v8 = 1;
            active = DmmRestorePresentPathFromVidPnSourceToActiveVidPn(a2, v18, 1u, a3);
            v40 = active;
            if ( active < 0 )
            {
              v51 = (_QWORD *)WdLogNewEntry5_WdError(v37);
              v51[3] = *((_QWORD *)this + 2);
              v51[4] = (unsigned int)v18;
              v51[5] = v40;
              WdLogEvent5_WdError(v51);
LABEL_43:
              DpiGdiAsyncDisplaySwitchCallout(0LL);
              goto LABEL_26;
            }
            v43 = *((_QWORD *)DXGGLOBAL::GetGlobal(v37, v36, v38, v39) + 113);
            if ( *(_BYTE *)v43 )
            {
              *(_QWORD *)(WdLogNewEntry5_WdTrace(v42, v41, v44, v45) + 24) = 178LL;
            }
            else
            {
              DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v61, *(struct DXGFASTMUTEX *const *)(v43 + 8));
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v61);
              v49 = (_BYTE *)(v43 + 16);
              v50 = 10LL;
              do
              {
                *v49 = 0;
                v49 += 48;
                --v50;
              }
              while ( v50 );
              ++*(_DWORD *)(v43 + 496);
              *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v46, v47, v48) + 24) = 200LL;
              if ( v61[8] )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v61);
            }
          }
        }
        else
        {
          v8 = 1;
        }
      }
      v18 = (unsigned int)(v18 + 1);
    }
    while ( (unsigned int)v18 < *((_DWORD *)this + 20) );
    if ( !v8 )
      goto LABEL_25;
    CurrentThread = (struct _ERESOURCE *)KeGetCurrentThread();
    v64 = (DXGADAPTER *)*((_QWORD *)this + 2);
    v23 = v64;
    v65 = *(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL);
    if ( v64 )
      DXGADAPTER::PushWorkerThreadOfExclusiveOwner((PERESOURCE *)v64, CurrentThread);
    if ( v65 && v23 != v65 )
      DXGADAPTER::PushWorkerThreadOfExclusiveOwner((PERESOURCE *)v65, CurrentThread);
    if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD *, _QWORD, unsigned __int8 *))(*(_QWORD *)(*((_QWORD *)a2 + 5)
                                                                                                  + 80LL)
                                                                                      + 184LL))(
            *((_QWORD *)this + 2),
            v68,
            *((unsigned int *)this + 20),
            a5) )
    {
      v52 = WdLogNewEntry5_WdEvent(v25, v24, v26, v27);
      v53 = 0LL;
      *(_QWORD *)(v52 + 24) = a2;
      v54 = (_QWORD *)(v52 + 32);
      do
      {
        v55 = *((unsigned __int8 *)v68 + v53++);
        *v54++ = v55;
      }
      while ( v53 < 2 );
      *(_QWORD *)(v52 + 48) = *((unsigned int *)this + 20);
      WdLogEvent5_WdEvent(v52);
    }
    v28 = 0;
    if ( *((_DWORD *)this + 20) )
    {
      while ( 1 )
      {
        if ( !*((_BYTE *)v68 + v28) )
        {
          if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, v28) )
          {
            v31 = DmmRemovePresentPathFromVidPnSourceInActiveVidPn(a2, v28, 0, 0);
            v33 = v31;
            if ( v31 < 0 )
              break;
          }
        }
        if ( ++v28 >= *((_DWORD *)this + 20) )
          goto LABEL_21;
      }
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v32);
      v56[3] = *((_QWORD *)this + 2);
      v56[4] = v28;
      v56[5] = v33;
      WdLogEvent5_WdError(v56);
      ADAPTEROWNERTRACKER::~ADAPTEROWNERTRACKER((ADAPTEROWNERTRACKER *)v63);
      goto LABEL_43;
    }
LABEL_21:
    CPROCESSATTACHHELPER::Detach(&ApcState);
    for ( i = 0; i < *((_DWORD *)this + 20); ++i )
    {
      if ( *((_BYTE *)v68 + i) )
      {
        v57 = ADAPTER_DISPLAY::SetCopyProtectionWithLock((DXGADAPTER **)this, i);
        v59 = v57;
        if ( v57 < 0 )
        {
          v60 = (_QWORD *)WdLogNewEntry5_WdError(v58);
          v60[3] = *((_QWORD *)this + 2);
          v60[4] = i;
          v60[5] = v59;
          WdLogEvent5_WdError(v60);
        }
      }
    }
    ADAPTEROWNERTRACKER::~ADAPTEROWNERTRACKER((ADAPTEROWNERTRACKER *)v63);
  }
LABEL_25:
  *v62 = v8;
LABEL_26:
  CPROCESSATTACHHELPER::Detach(&ApcState);
}
