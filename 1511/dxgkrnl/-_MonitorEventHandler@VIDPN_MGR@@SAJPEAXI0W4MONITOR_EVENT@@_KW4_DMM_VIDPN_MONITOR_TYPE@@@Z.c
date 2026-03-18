/*
 * XREFs of ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00DE6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0003110 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00048C4 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0006F38 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00070B8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?LogMonitorPlugUnplugEvent@DMMVIDEOPRESENTTARGET@@QEAAEKI@Z @ 0x1C002BB78 (-LogMonitorPlugUnplugEvent@DMMVIDEOPRESENTTARGET@@QEAAEKI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00CB234 (-RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z.c)
 *     ?RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z @ 0x1C00CBC48 (-RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C00DCE0C (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     sub_1C00DEC64 @ 0x1C00DEC64 (sub_1C00DEC64.c)
 *     DpiGdiAsyncMonitorEventCallout @ 0x1C016B1D0 (DpiGdiAsyncMonitorEventCallout.c)
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
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  _BYTE *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  DXGPROCESSCOPYPROTECTIONMUTEX *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rax
  int v42; // edx
  _QWORD *v43; // r14
  unsigned int *i; // r14
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rax
  int v48; // eax
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v49; // r8d
  _QWORD *v50; // r14
  unsigned int *j; // r14
  int active; // eax
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned int v55; // edx
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rbx
  DMMVIDEOPRESENTTARGET *v62; // rax
  int v63; // r11d
  __int64 v64; // rbx
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  _BYTE *v68; // rcx
  __int64 v69; // rax
  _BYTE v71[16]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v72[16]; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v73; // [rsp+50h] [rbp-20h] BYREF
  __int64 v74; // [rsp+58h] [rbp-18h]
  int v75; // [rsp+60h] [rbp-10h]
  unsigned int v76; // [rsp+64h] [rbp-Ch]
  char v77; // [rsp+68h] [rbp-8h]

  v6 = a5;
  LODWORD(v7) = 0;
  v8 = a6;
  v10 = (int)a4;
  v73 = a4;
  v74 = a5;
  v75 = a6;
  v76 = a2;
  v77 = 1;
  if ( a4 <= 3 || a4 - 7 <= 3 )
  {
    if ( !a1 )
    {
      v13 = WdLogNewEntry5_WdError(0LL);
      WdLogEvent5_WdError(v13);
      LODWORD(v7) = -1071775742;
      goto LABEL_87;
    }
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
    {
      v15 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v15);
    }
    if ( !*(_QWORD *)(a1 + 1984) )
    {
      v16 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v16);
    }
    v17 = *(_QWORD *)(a1 + 1984);
    v18 = *(_QWORD *)(v17 + 112);
    if ( !v18 )
    {
      v19 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v19 + 24) = a1;
      WdLogEvent5_WdError(v19);
      LODWORD(v7) = -1071774923;
      goto LABEL_87;
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&a5, *(_QWORD *)(v17 + 112));
    v21 = (unsigned int)v10;
    if ( !(_DWORD)v10 )
      goto LABEL_63;
    if ( (_DWORD)v10 == 1 )
    {
      LODWORD(v7) = VIDPN_MGR::OnMonitorConnectionChanged(v18, a2, v20, 1);
      if ( !*(_DWORD *)(v18 + 480) )
        DpiGdiAsyncMonitorEventCallout(*(_QWORD *)(a1 + 252), a2, 1, v6, 1);
      goto LABEL_86;
    }
    if ( (_DWORD)v10 != 2 )
    {
      if ( (_DWORD)v10 != 3 )
      {
        v21 = (unsigned int)(v10 - 7);
        if ( (_DWORD)v10 != 7 )
        {
          v22 = (unsigned int)(v10 - 9);
          if ( (_DWORD)v10 == 9 )
          {
            if ( a2 == -1 )
            {
              v38 = WdLogNewEntry5_WdAssertion(v22);
              WdLogEvent5_WdAssertion(v38);
            }
            if ( !*(_DWORD *)(v18 + 480) )
              DpiGdiAsyncMonitorEventCallout(*(_QWORD *)(a1 + 252), a2, 9, v6, 0);
            goto LABEL_86;
          }
          if ( (_DWORD)v10 != 10 )
          {
            v23 = WdLogNewEntry5_WdError(v22);
            *(_QWORD *)(v23 + 24) = v10;
LABEL_20:
            WdLogEvent5_WdError(v23);
            LODWORD(v7) = -1073741811;
LABEL_86:
            DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(a5 + 40));
            goto LABEL_87;
          }
          if ( a2 == -1 )
          {
            v24 = WdLogNewEntry5_WdAssertion(v22);
            WdLogEvent5_WdAssertion(v24);
          }
          LODWORD(v7) = VIDPN_MGR::OnMonitorConnectionChanged(v18, a2, v20, 10);
          DpiGdiAsyncMonitorEventCallout(*(_QWORD *)(a1 + 252), a2, 10, v6, 1);
          v28 = *((_QWORD *)DXGGLOBAL::GetGlobal(v25) + 134);
          if ( !*(_BYTE *)v28 )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v71, *(struct DXGFASTMUTEX *const *)(v28 + 8));
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v71);
            v34 = (_BYTE *)(v28 + 16);
            v35 = 18LL;
            do
            {
              *v34 = 0;
              v34 += 48;
              --v35;
            }
            while ( v35 );
            ++*(_DWORD *)(v28 + 880);
            v36 = WdLogNewEntry5_WdTrace(v34, v31, v32, v33);
            v37 = (DXGPROCESSCOPYPROTECTIONMUTEX *)v71;
LABEL_85:
            *(_QWORD *)(v36 + 24) = 215LL;
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX(v37);
            goto LABEL_86;
          }
          goto LABEL_81;
        }
LABEL_63:
        v55 = a2;
        if ( a2 == -1 )
        {
          if ( (_DWORD)v10 )
          {
            v56 = WdLogNewEntry5_WdAssertion(v21);
            WdLogEvent5_WdAssertion(v56);
          }
          v57 = (_QWORD *)(*(_QWORD *)(v18 + 96) + 24LL);
          if ( (_QWORD *)*v57 == v57 || (v58 = *v57 - 8LL) == 0 || (v55 = *(_DWORD *)(v58 + 24), v55 == -1) )
          {
            v59 = WdLogNewEntry5_WdError(v21);
            *(_QWORD *)(v59 + 24) = v18;
            WdLogEvent5_WdError(v59);
            LODWORD(v7) = -1071774971;
            goto LABEL_86;
          }
        }
        LODWORD(v7) = VIDPN_MGR::OnMonitorConnectionChanged(v18, v55, v20, v10);
        if ( !*(_DWORD *)(v18 + 480)
          && !(_DWORD)v10
          && !*(_BYTE *)(a1 + 1917)
          && (unsigned __int64)(v6 - 1) <= 4
          && (unsigned int)(v8 - 1) <= 2 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v18 + 96) + 72LL));
          v61 = *(_QWORD *)(v18 + 96);
          v62 = (DMMVIDEOPRESENTTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v61, a2);
          if ( v62
            && DMMVIDEOPRESENTTARGET::LogMonitorPlugUnplugEvent(v62, *(_DWORD *)(v18 + 484), *(_DWORD *)(v18 + 488)) )
          {
            v63 = 6;
            LODWORD(v6) = 0;
          }
          DpiGdiAsyncMonitorEventCallout(*(_QWORD *)(a1 + 252), a2, v63, v6, 1);
          v77 = 0;
          if ( v61 )
            ReferenceCounted::Release((ReferenceCounted *)(v61 + 64));
        }
        v64 = *((_QWORD *)DXGGLOBAL::GetGlobal(v60) + 134);
        if ( !*(_BYTE *)v64 )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v72, *(struct DXGFASTMUTEX *const *)(v64 + 8));
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v72);
          v68 = (_BYTE *)(v64 + 16);
          v69 = 18LL;
          do
          {
            *v68 = 0;
            v68 += 48;
            --v69;
          }
          while ( v69 );
          ++*(_DWORD *)(v64 + 880);
          v36 = WdLogNewEntry5_WdTrace(v68, v65, v66, v67);
          v37 = (DXGPROCESSCOPYPROTECTIONMUTEX *)v72;
          goto LABEL_85;
        }
LABEL_81:
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v27, v26, v29, v30) + 24) = 193LL;
        goto LABEL_86;
      }
      if ( a2 == -1 )
      {
        v39 = WdLogNewEntry5_WdAssertion((unsigned int)(v10 - 3));
        WdLogEvent5_WdAssertion(v39);
      }
      if ( *(_DWORD *)(v18 + 480) )
        goto LABEL_86;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v18 + 96) + 72LL));
      v40 = *(_QWORD *)(v18 + 96);
      v41 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v40, a2);
      if ( v41 && *(_QWORD *)(v41 + 96) )
        DpiGdiAsyncMonitorEventCallout(*(_QWORD *)(a1 + 252), v42, 3, v6, 0);
LABEL_37:
      if ( v40 )
        ReferenceCounted::Release((ReferenceCounted *)(v40 + 64));
      goto LABEL_86;
    }
    if ( (_DWORD)v6 == 1 )
    {
      if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(a1 + 1984) + 16LL)) < 1105 && a2 == -1 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v18 + 96) + 72LL));
        v40 = *(_QWORD *)(v18 + 96);
        v43 = (_QWORD *)(v40 + 24);
        if ( (_QWORD *)*v43 != v43 )
        {
          for ( i = (unsigned int *)(*v43 - 8LL);
                i;
                i = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                      (DMMVIDEOPRESENTTARGETSET *)v40,
                                      (const struct DMMVIDEOPRESENTTARGET *const)i) )
          {
            v45 = VIDPN_MGR::RemovePresentPathFromActiveVidPn((struct _KTHREAD ***)v18, i[6]);
            v7 = v45;
            if ( v45 < 0 )
            {
              v47 = WdLogNewEntry5_WdError(v46);
              *(_QWORD *)(v47 + 24) = i[6];
              *(_QWORD *)(v47 + 32) = v7;
              WdLogEvent5_WdError(v47);
            }
          }
        }
        goto LABEL_37;
      }
      v48 = VIDPN_MGR::RemovePresentPathFromActiveVidPn((struct _KTHREAD ***)v18, a2);
    }
    else
    {
      if ( (_DWORD)v6 )
      {
        v23 = WdLogNewEntry5_WdError((unsigned int)(v10 - 2));
        *(_QWORD *)(v23 + 24) = v6;
        goto LABEL_20;
      }
      if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(a1 + 1984) + 16LL)) < 1105 && a2 == -1 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v18 + 96) + 72LL));
        v40 = *(_QWORD *)(v18 + 96);
        v50 = (_QWORD *)(v40 + 24);
        if ( (_QWORD *)*v50 != v50 )
        {
          for ( j = (unsigned int *)(*v50 - 8LL);
                j;
                j = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                      (DMMVIDEOPRESENTTARGETSET *)v40,
                                      (const struct DMMVIDEOPRESENTTARGET *const)j) )
          {
            active = VIDPN_MGR::RestorePresentPathToActiveVidPn((VIDPN_MGR *)v18, j[6], v49);
            v7 = active;
            if ( active < 0 )
            {
              v54 = WdLogNewEntry5_WdError(v53);
              *(_QWORD *)(v54 + 24) = j[6];
              *(_QWORD *)(v54 + 32) = v7;
              WdLogEvent5_WdError(v54);
            }
          }
        }
        goto LABEL_37;
      }
      v48 = VIDPN_MGR::RestorePresentPathToActiveVidPn((VIDPN_MGR *)v18, a2, v49);
    }
    LODWORD(v7) = v48;
    goto LABEL_86;
  }
  v12 = WdLogNewEntry5_WdError(a1);
  *(_QWORD *)(v12 + 24) = v10;
  WdLogEvent5_WdError(v12);
  LODWORD(v7) = -1073741811;
LABEL_87:
  sub_1C00DEC64(&v73);
  return (unsigned int)v7;
}
