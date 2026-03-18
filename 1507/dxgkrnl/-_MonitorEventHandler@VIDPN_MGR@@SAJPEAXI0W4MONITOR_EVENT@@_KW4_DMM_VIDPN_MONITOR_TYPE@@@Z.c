/*
 * XREFs of ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00CAAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002434 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004BA8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0004F50 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?LogMonitorPlugUnplugEvent@DMMVIDEOPRESENTTARGET@@QEAAEKI@Z @ 0x1C002BCBC (-LogMonitorPlugUnplugEvent@DMMVIDEOPRESENTTARGET@@QEAAEKI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00BCBD4 (-RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z.c)
 *     ?RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z @ 0x1C00BD1F0 (-RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z.c)
 *     _VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK @ 0x1C00CAD18 (_VIDPN_MGR--_MonitorEventHandler_--_2_--_AUTO_PERFTRACK--__AUTO_PERFTRACK.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI@Z @ 0x1C00CD444 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI@Z.c)
 *     DpiGdiAsyncMonitorEventCallout @ 0x1C0166C30 (DpiGdiAsyncMonitorEventCallout.c)
 */

__int64 __fastcall VIDPN_MGR::_MonitorEventHandler(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  __int64 v6; // r13
  __int64 v7; // rdi
  int v8; // r12d
  __int64 v10; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  unsigned int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  _BYTE *v35; // rax
  __int64 v36; // rcx
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // rax
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v43; // r8d
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // r8
  __int64 v51; // rax
  _QWORD *v52; // r14
  unsigned int *i; // r14
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // rax
  _QWORD *v57; // r14
  unsigned int *j; // r14
  int active; // eax
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rbx
  DMMVIDEOPRESENTTARGET *v67; // rax
  unsigned int v68; // r11d
  _BYTE v69[16]; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v70; // [rsp+30h] [rbp-20h] BYREF
  __int64 v71; // [rsp+38h] [rbp-18h]
  int v72; // [rsp+40h] [rbp-10h]
  unsigned int v73; // [rsp+44h] [rbp-Ch]
  char v74; // [rsp+48h] [rbp-8h]

  v6 = a5;
  LODWORD(v7) = 0;
  v8 = a6;
  v10 = (int)a4;
  v70 = a4;
  v71 = a5;
  v72 = a6;
  v73 = a2;
  v74 = 1;
  if ( a4 > 3 && a4 - 7 > 2 )
  {
    v44 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v44 + 24) = v10;
    WdLogEvent5_WdError(v44);
    LODWORD(v7) = -1073741811;
    goto LABEL_22;
  }
  if ( !a1 )
  {
    v45 = WdLogNewEntry5_WdError(0LL);
    WdLogEvent5_WdError(v45);
    LODWORD(v7) = -1071775742;
    goto LABEL_22;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    v46 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    WdLogEvent5_WdAssertion(v46);
  }
  if ( !*(_QWORD *)(a1 + 1976) )
  {
    v42 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    WdLogEvent5_WdAssertion(v42);
  }
  v16 = *(_QWORD *)(a1 + 1976);
  v17 = *(_QWORD *)(v16 + 88);
  if ( !v17 )
  {
    v47 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v47 + 24) = a1;
    WdLogEvent5_WdError(v47);
    LODWORD(v7) = -1071774923;
    goto LABEL_22;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&a5, *(_QWORD *)(v16 + 88));
  v21 = (unsigned int)v10;
  if ( !(_DWORD)v10 )
    goto LABEL_13;
  if ( (_DWORD)v10 == 1 )
  {
    LODWORD(v7) = VIDPN_MGR::OnMonitorConnectionChanged((VIDPN_MGR *)v17, a2);
    if ( *(_DWORD *)(v17 + 480) )
      goto LABEL_21;
    v50 = 1LL;
    goto LABEL_69;
  }
  if ( (_DWORD)v10 != 2 )
  {
    if ( (_DWORD)v10 != 3 )
    {
      v21 = (unsigned int)(v10 - 7);
      if ( (_DWORD)v10 == 7 )
      {
LABEL_13:
        v22 = a2;
        if ( a2 != -1 )
          goto LABEL_14;
        if ( (_DWORD)v10 )
        {
          v62 = WdLogNewEntry5_WdAssertion(v21, a2, v19, v20);
          WdLogEvent5_WdAssertion(v62);
        }
        v63 = (_QWORD *)(*(_QWORD *)(v17 + 96) + 24LL);
        if ( (_QWORD *)*v63 == v63 || (v64 = *v63 - 8LL) == 0 || (v22 = *(_DWORD *)(v64 + 24), v22 == -1) )
        {
          v65 = WdLogNewEntry5_WdError(v21);
          *(_QWORD *)(v65 + 24) = v17;
          WdLogEvent5_WdError(v65);
          LODWORD(v7) = -1071774971;
        }
        else
        {
LABEL_14:
          LODWORD(v7) = VIDPN_MGR::OnMonitorConnectionChanged((VIDPN_MGR *)v17, v22);
          if ( !*(_DWORD *)(v17 + 480)
            && !(_DWORD)v10
            && !*(_BYTE *)(a1 + 1909)
            && (unsigned __int64)(v6 - 1) <= 2
            && (unsigned int)(v8 - 1) <= 2 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v17 + 96) + 72LL));
            v66 = *(_QWORD *)(v17 + 96);
            v67 = (DMMVIDEOPRESENTTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v66, a2);
            if ( v67
              && DMMVIDEOPRESENTTARGET::LogMonitorPlugUnplugEvent(v67, *(_DWORD *)(v17 + 484), *(_DWORD *)(v17 + 488)) )
            {
              v68 = 6;
              v6 = 0LL;
            }
            DpiGdiAsyncMonitorEventCallout(*(_QWORD *)(a1 + 252), a2, v68, v6);
            v74 = 0;
            if ( v66 )
              ReferenceCounted::Release((ReferenceCounted *)(v66 + 64));
          }
          v29 = *((_QWORD *)DXGGLOBAL::GetGlobal(v24, v23, v25, v26) + 113);
          if ( *(_BYTE *)v29 )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v28, v27, v30, v31) + 24) = 178LL;
          }
          else
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v69, *(struct DXGFASTMUTEX *const *)(v29 + 8));
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v69);
            v35 = (_BYTE *)(v29 + 16);
            v36 = 10LL;
            do
            {
              *v35 = 0;
              v35 += 48;
              --v36;
            }
            while ( v36 );
            ++*(_DWORD *)(v29 + 496);
            *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v32, v33, v34) + 24) = 200LL;
            if ( v69[8] )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v69);
          }
        }
        goto LABEL_21;
      }
      if ( (_DWORD)v10 != 9 )
      {
        v48 = WdLogNewEntry5_WdError(v21);
        *(_QWORD *)(v48 + 24) = v10;
LABEL_48:
        WdLogEvent5_WdError(v48);
        LODWORD(v7) = -1073741811;
        goto LABEL_21;
      }
      if ( a2 == -1 )
      {
        v49 = WdLogNewEntry5_WdAssertion(v21, v18, v19, v20);
        WdLogEvent5_WdAssertion(v49);
      }
      if ( *(_DWORD *)(v17 + 480) )
        goto LABEL_21;
      v50 = 9LL;
LABEL_69:
      DpiGdiAsyncMonitorEventCallout(*(_QWORD *)(a1 + 252), a2, v50, v6);
      goto LABEL_21;
    }
    if ( a2 == -1 )
    {
      v51 = WdLogNewEntry5_WdAssertion((unsigned int)(v10 - 3), v18, v19, v20);
      WdLogEvent5_WdAssertion(v51);
    }
    if ( *(_DWORD *)(v17 + 480) )
      goto LABEL_21;
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v17 + 96) + 72LL));
    v38 = *(_QWORD *)(v17 + 96);
    v39 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v38, a2);
    if ( v39 && *(_QWORD *)(v39 + 96) )
      DpiGdiAsyncMonitorEventCallout(*(_QWORD *)(a1 + 252), v40, 3LL, v6);
LABEL_31:
    if ( v38 )
      ReferenceCounted::Release((ReferenceCounted *)(v38 + 64));
    goto LABEL_21;
  }
  if ( (_DWORD)v6 == 1 )
  {
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(a1 + 1976) + 16LL)) < 1105 && a2 == -1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v17 + 96) + 72LL));
      v38 = *(_QWORD *)(v17 + 96);
      v52 = (_QWORD *)(v38 + 24);
      if ( (_QWORD *)*v52 != v52 )
      {
        for ( i = (unsigned int *)(*v52 - 8LL);
              i;
              i = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                    (DMMVIDEOPRESENTTARGETSET *)v38,
                                    (const struct DMMVIDEOPRESENTTARGET *const)i) )
        {
          v54 = VIDPN_MGR::RemovePresentPathFromActiveVidPn((DXGADAPTER ***)v17, i[6]);
          v7 = v54;
          if ( v54 < 0 )
          {
            v56 = WdLogNewEntry5_WdError(v55);
            *(_QWORD *)(v56 + 24) = i[6];
            *(_QWORD *)(v56 + 32) = v7;
            WdLogEvent5_WdError(v56);
          }
        }
      }
      goto LABEL_31;
    }
    v41 = VIDPN_MGR::RemovePresentPathFromActiveVidPn((DXGADAPTER ***)v17, a2);
  }
  else
  {
    if ( (_DWORD)v6 )
    {
      v48 = WdLogNewEntry5_WdError((unsigned int)(v10 - 2));
      *(_QWORD *)(v48 + 24) = v6;
      goto LABEL_48;
    }
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(a1 + 1976) + 16LL)) < 1105 && a2 == -1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v17 + 96) + 72LL));
      v38 = *(_QWORD *)(v17 + 96);
      v57 = (_QWORD *)(v38 + 24);
      if ( (_QWORD *)*v57 != v57 )
      {
        for ( j = (unsigned int *)(*v57 - 8LL);
              j;
              j = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                    (DMMVIDEOPRESENTTARGETSET *)v38,
                                    (const struct DMMVIDEOPRESENTTARGET *const)j) )
        {
          active = VIDPN_MGR::RestorePresentPathToActiveVidPn((VIDPN_MGR *)v17, j[6], v43);
          v7 = active;
          if ( active < 0 )
          {
            v61 = WdLogNewEntry5_WdError(v60);
            *(_QWORD *)(v61 + 24) = j[6];
            *(_QWORD *)(v61 + 32) = v7;
            WdLogEvent5_WdError(v61);
          }
        }
      }
      goto LABEL_31;
    }
    v41 = VIDPN_MGR::RestorePresentPathToActiveVidPn((VIDPN_MGR *)v17, a2, v43);
  }
  LODWORD(v7) = v41;
LABEL_21:
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(a5 + 40));
LABEL_22:
  VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK(&v70);
  return (unsigned int)v7;
}
