/*
 * XREFs of ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F3B40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000192C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000199C (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0009468 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?LogMonitorPlugUnplugEvent@DMMVIDEOPRESENTTARGET@@QEAAEKI@Z @ 0x1C0033BF8 (-LogMonitorPlugUnplugEvent@DMMVIDEOPRESENTTARGET@@QEAAEKI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E2234 (-RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@PEAU_D.c)
 *     ?RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z @ 0x1C00E287C (-RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z.c)
 *     _VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK @ 0x1C00F3DC4 (_VIDPN_MGR--_MonitorEventHandler_--_2_--_AUTO_PERFTRACK--__AUTO_PERFTRACK.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C00F4120 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     DpiGdiAsyncMonitorEventCallout @ 0x1C0192EE4 (DpiGdiAsyncMonitorEventCallout.c)
 */

__int64 __fastcall VIDPN_MGR::_MonitorEventHandler(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  __int64 v7; // r15
  __int64 v8; // rdi
  int v9; // r12d
  __int64 v11; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  _BYTE *v27; // rcx
  __int64 v28; // rax
  DXGAUTOMUTEX *v29; // rcx
  __int64 v31; // rbx
  __int64 v32; // rax
  int v33; // edx
  int v34; // eax
  __int64 v35; // rax
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v36; // r8d
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  _BYTE *v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // r14
  unsigned int *i; // r14
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rax
  _QWORD *v58; // r14
  unsigned int *j; // r14
  int active; // eax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rbx
  DMMVIDEOPRESENTTARGET *v68; // rax
  int v69; // r11d
  _BYTE v70[16]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v71[16]; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v72; // [rsp+50h] [rbp-20h] BYREF
  __int64 v73; // [rsp+58h] [rbp-18h]
  int v74; // [rsp+60h] [rbp-10h]
  unsigned int v75; // [rsp+64h] [rbp-Ch]
  char v76; // [rsp+68h] [rbp-8h]

  v7 = a5;
  LODWORD(v8) = 0;
  v9 = a6;
  v11 = (int)a4;
  v72 = a4;
  v73 = a5;
  v74 = a6;
  v75 = a2;
  v76 = 1;
  if ( a4 > 3 && a4 - 7 > 3 )
  {
    v37 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v37 + 24) = v11;
    WdLogEvent5_WdError(v37);
    LODWORD(v8) = -1073741811;
    goto LABEL_23;
  }
  if ( !a1 )
  {
    v38 = WdLogNewEntry5_WdError(0LL);
    WdLogEvent5_WdError(v38);
    LODWORD(v8) = -1071775742;
    goto LABEL_23;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    v39 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v39);
  }
  if ( !*(_QWORD *)(a1 + 2128) )
  {
    v35 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v35);
  }
  v14 = *(_QWORD *)(a1 + 2128);
  v15 = *(_QWORD *)(v14 + 88);
  if ( !v15 )
  {
    v40 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v40 + 24) = a1;
    WdLogEvent5_WdError(v40);
    LODWORD(v8) = -1071774923;
    goto LABEL_23;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&a5, *(_QWORD *)(v14 + 88));
  v16 = (unsigned int)v11;
  switch ( (_DWORD)v11 )
  {
    case 0:
LABEL_13:
      v17 = a2;
      if ( a2 == -1 )
      {
        if ( (_DWORD)v11 )
        {
          v63 = WdLogNewEntry5_WdAssertion(v16);
          WdLogEvent5_WdAssertion(v63);
        }
        v64 = (_QWORD *)(*(_QWORD *)(v15 + 96) + 24LL);
        if ( (_QWORD *)*v64 == v64 || (v65 = *v64 - 8LL) == 0 || (v17 = *(unsigned int *)(v65 + 24), (_DWORD)v17 == -1) )
        {
          v66 = WdLogNewEntry5_WdError(v16);
          *(_QWORD *)(v66 + 24) = v15;
          WdLogEvent5_WdError(v66);
          LODWORD(v8) = -1071774971;
          goto LABEL_22;
        }
      }
      LODWORD(v8) = VIDPN_MGR::OnMonitorConnectionChanged(v15, v17, v7, (unsigned int)v11);
      if ( !*(_DWORD *)(v15 + 480)
        && !(_DWORD)v11
        && !*(_BYTE *)(a1 + 2053)
        && (unsigned __int64)(v7 - 1) <= 4
        && (unsigned int)(v9 - 1) <= 2 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v15 + 96) + 72LL));
        v67 = *(_QWORD *)(v15 + 96);
        v68 = (DMMVIDEOPRESENTTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v67, a2);
        if ( v68
          && DMMVIDEOPRESENTTARGET::LogMonitorPlugUnplugEvent(v68, *(_DWORD *)(v15 + 484), *(_DWORD *)(v15 + 488)) )
        {
          v69 = 6;
          LODWORD(v7) = 0;
        }
        DpiGdiAsyncMonitorEventCallout(*(_QWORD *)(a1 + 268), a2, v69, v7, 1, (__int64)a7);
        v76 = 0;
        if ( v67 )
          ReferenceCounted::Release((ReferenceCounted *)(v67 + 64));
      }
      v21 = *((_QWORD *)DXGGLOBAL::GetGlobal(v18) + 111);
      if ( !*(_BYTE *)v21 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v71, *(struct DXGFASTMUTEX *const *)(v21 + 8));
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v71);
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
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v27, v24, v25, v26) + 24) = 222LL;
        if ( !v71[8] )
          goto LABEL_22;
        v29 = (DXGAUTOMUTEX *)v71;
        goto LABEL_21;
      }
LABEL_90:
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v20, v19, v22, v23) + 24) = 200LL;
      goto LABEL_22;
    case 1:
      LODWORD(v8) = VIDPN_MGR::OnMonitorConnectionChanged(v15, a2, v7, 1LL);
      if ( !*(_DWORD *)(v15 + 480) )
        DpiGdiAsyncMonitorEventCallout(*(_QWORD *)(a1 + 268), a2, 1, v7, 1, (__int64)a7);
      goto LABEL_22;
    case 2:
      if ( (_DWORD)v7 == 1 )
      {
        if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(a1 + 2128) + 16LL)) < 1105 && a2 == -1 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v15 + 96) + 72LL));
          v31 = *(_QWORD *)(v15 + 96);
          v53 = (_QWORD *)(v31 + 24);
          if ( (_QWORD *)*v53 != v53 )
          {
            for ( i = (unsigned int *)(*v53 - 8LL);
                  i;
                  i = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                        (DMMVIDEOPRESENTTARGETSET *)v31,
                                        (const struct DMMVIDEOPRESENTTARGET *const)i) )
            {
              v55 = VIDPN_MGR::RemovePresentPathFromActiveVidPn((DXGADAPTER ***)v15, i[6]);
              v8 = v55;
              if ( v55 < 0 )
              {
                v57 = WdLogNewEntry5_WdError(v56);
                *(_QWORD *)(v57 + 24) = i[6];
                *(_QWORD *)(v57 + 32) = v8;
                WdLogEvent5_WdError(v57);
              }
            }
          }
LABEL_32:
          if ( v31 )
            ReferenceCounted::Release((ReferenceCounted *)(v31 + 64));
          goto LABEL_22;
        }
        v34 = VIDPN_MGR::RemovePresentPathFromActiveVidPn((DXGADAPTER ***)v15, a2);
      }
      else
      {
        if ( (_DWORD)v7 )
        {
          v42 = WdLogNewEntry5_WdError((unsigned int)(v11 - 2));
          *(_QWORD *)(v42 + 24) = v7;
          goto LABEL_50;
        }
        if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(a1 + 2128) + 16LL)) < 1105 && a2 == -1 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v15 + 96) + 72LL));
          v31 = *(_QWORD *)(v15 + 96);
          v58 = (_QWORD *)(v31 + 24);
          if ( (_QWORD *)*v58 != v58 )
          {
            for ( j = (unsigned int *)(*v58 - 8LL);
                  j;
                  j = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                        (DMMVIDEOPRESENTTARGETSET *)v31,
                                        (const struct DMMVIDEOPRESENTTARGET *const)j) )
            {
              active = VIDPN_MGR::RestorePresentPathToActiveVidPn((VIDPN_MGR *)v15, j[6], v36, a7);
              v8 = active;
              if ( active < 0 )
              {
                v62 = WdLogNewEntry5_WdError(v61);
                *(_QWORD *)(v62 + 24) = j[6];
                *(_QWORD *)(v62 + 32) = v8;
                WdLogEvent5_WdError(v62);
              }
            }
          }
          goto LABEL_32;
        }
        v34 = VIDPN_MGR::RestorePresentPathToActiveVidPn((VIDPN_MGR *)v15, a2, v36, a7);
      }
      LODWORD(v8) = v34;
      goto LABEL_22;
    case 3:
      if ( a2 == -1 )
      {
        v52 = WdLogNewEntry5_WdAssertion((unsigned int)(v11 - 3));
        WdLogEvent5_WdAssertion(v52);
      }
      if ( *(_DWORD *)(v15 + 480) )
        goto LABEL_22;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v15 + 96) + 72LL));
      v31 = *(_QWORD *)(v15 + 96);
      v32 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v31, a2);
      if ( v32 && *(_QWORD *)(v32 + 96) )
        DpiGdiAsyncMonitorEventCallout(*(_QWORD *)(a1 + 268), v33, 3, v7, 0, (__int64)a7);
      goto LABEL_32;
  }
  v16 = (unsigned int)(v11 - 7);
  if ( (_DWORD)v11 == 7 )
    goto LABEL_13;
  v41 = (unsigned int)(v11 - 9);
  if ( (_DWORD)v11 == 9 )
  {
    if ( a2 == -1 )
    {
      v51 = WdLogNewEntry5_WdAssertion(v41);
      WdLogEvent5_WdAssertion(v51);
    }
    if ( !*(_DWORD *)(v15 + 480) )
      DpiGdiAsyncMonitorEventCallout(*(_QWORD *)(a1 + 268), a2, 9, v7, 0, (__int64)a7);
    goto LABEL_22;
  }
  if ( (_DWORD)v11 != 10 )
  {
    v42 = WdLogNewEntry5_WdError(v41);
    *(_QWORD *)(v42 + 24) = v11;
LABEL_50:
    WdLogEvent5_WdError(v42);
    LODWORD(v8) = -1073741811;
    goto LABEL_22;
  }
  if ( a2 == -1 )
  {
    v43 = WdLogNewEntry5_WdAssertion(v41);
    WdLogEvent5_WdAssertion(v43);
  }
  LODWORD(v8) = VIDPN_MGR::OnMonitorConnectionChanged(v15, a2, v7, 10LL);
  DpiGdiAsyncMonitorEventCallout(*(_QWORD *)(a1 + 268), a2, 10, v7, 1, (__int64)a7);
  v45 = *((_QWORD *)DXGGLOBAL::GetGlobal(v44) + 111);
  if ( *(_BYTE *)v45 )
    goto LABEL_90;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v70, *(struct DXGFASTMUTEX *const *)(v45 + 8));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v70);
  v49 = (_BYTE *)(v45 + 16);
  v50 = 18LL;
  do
  {
    *v49 = 0;
    v49 += 48;
    --v50;
  }
  while ( v50 );
  ++*(_DWORD *)(v45 + 880);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v49, v46, v47, v48) + 24) = 222LL;
  if ( !v70[8] )
    goto LABEL_22;
  v29 = (DXGAUTOMUTEX *)v70;
LABEL_21:
  DXGAUTOMUTEX::Release(v29);
LABEL_22:
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(a5 + 40));
LABEL_23:
  VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK(&v72);
  return (unsigned int)v8;
}
