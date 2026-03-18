/*
 * XREFs of DmmGetEmergentSimulatedTarget @ 0x1C00C0E48
 * Callers:
 *     ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00BF1B0 (-DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F3A30 (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000192C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     IsInternalVideoOutput @ 0x1C000B478 (IsInternalVideoOutput.c)
 */

__int64 __fastcall DmmGetEmergentSimulatedTarget(DXGADAPTER *a1, _DWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rdi
  int v7; // eax
  _QWORD *v8; // rbx
  _QWORD *v9; // rdi
  __int64 v10; // rdi
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rdx
  const struct DMMVIDEOPRESENTTARGET *v12; // rdx
  int v13; // eax
  unsigned int v14; // edi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v17 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v17 + 24) = 0LL;
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
  *a2 = -1;
  if ( !a1 )
  {
    v16 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v16 + 24) = 0LL;
    goto LABEL_19;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v18);
  }
  v5 = *((_QWORD *)a1 + 266);
  if ( !v5 )
  {
    v16 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v16 + 24) = a1;
LABEL_19:
    WdLogEvent5_WdError(v16);
    return 3223191554LL;
  }
  v6 = *(_QWORD *)(v5 + 88);
  if ( v6 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v20, v6);
    v7 = *(_DWORD *)(v6 + 492);
    if ( v7 == -1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v6 + 96) + 72LL));
      v8 = *(_QWORD **)(v6 + 96);
      v9 = v8 + 3;
      if ( (_QWORD *)*v9 == v9 )
        v10 = 0LL;
      else
        v10 = *v9 - 8LL;
      NextTarget = (const struct DMMVIDEOPRESENTTARGET *)v10;
      if ( !v10 )
        goto LABEL_22;
      while ( !IsInternalVideoOutput(*((_DWORD *)NextTarget + 18)) )
      {
        NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v8, v12);
        if ( !NextTarget )
          goto LABEL_13;
      }
      v10 = (__int64)v12;
LABEL_13:
      if ( v10 )
      {
        v13 = *(_DWORD *)(v10 + 24);
        v14 = 0;
        *a2 = v13;
      }
      else
      {
LABEL_22:
        v14 = -1073741275;
      }
      if ( v8 )
        ReferenceCounted::Release((ReferenceCounted *)(v8 + 8));
    }
    else
    {
      *a2 = v7;
      v14 = 0;
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v20 + 40));
    return v14;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v19 + 24) = a1;
    WdLogEvent5_WdError(v19);
    return 3223192373LL;
  }
}
