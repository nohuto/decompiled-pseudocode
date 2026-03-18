/*
 * XREFs of DmmGetEmergentSimulatedTarget @ 0x1C00A8F88
 * Callers:
 *     ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00A5B40 (-DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJXZ @ 0x1C00DF640 (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJXZ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00048C4 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     IsInternalVideoOutput @ 0x1C000A310 (IsInternalVideoOutput.c)
 */

__int64 __fastcall DmmGetEmergentSimulatedTarget(DXGADAPTER *a1, _DWORD *a2)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // edi
  _QWORD *v14; // rbx
  _QWORD *v15; // rdi
  __int64 v16; // rdi
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rdx
  const struct DMMVIDEOPRESENTTARGET *v18; // rdx
  int v19; // eax
  __int64 v20; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v4 + 24) = 0LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
  *a2 = -1;
  if ( !a1 )
  {
    v6 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v6 + 24) = 0LL;
LABEL_5:
    WdLogEvent5_WdError(v6);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *((_QWORD *)a1 + 248);
  if ( !v9 )
  {
    v6 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v6 + 24) = a1;
    goto LABEL_5;
  }
  v10 = *(_QWORD *)(v9 + 112);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v20, v10);
    v12 = *(_DWORD *)(v10 + 492);
    if ( v12 == -1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 96) + 72LL));
      v14 = *(_QWORD **)(v10 + 96);
      v15 = v14 + 3;
      if ( (_QWORD *)*v15 == v15 )
        v16 = 0LL;
      else
        v16 = *v15 - 8LL;
      NextTarget = (const struct DMMVIDEOPRESENTTARGET *)v16;
      if ( !v16 )
        goto LABEL_24;
      while ( !IsInternalVideoOutput(*((_DWORD *)NextTarget + 18)) )
      {
        NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v14, v18);
        if ( !NextTarget )
          goto LABEL_22;
      }
      v16 = (__int64)v18;
LABEL_22:
      if ( v16 )
      {
        v19 = *(_DWORD *)(v16 + 24);
        v13 = 0;
        *a2 = v19;
      }
      else
      {
LABEL_24:
        v13 = -1073741275;
      }
      if ( v14 )
        ReferenceCounted::Release((ReferenceCounted *)(v14 + 8));
    }
    else
    {
      *a2 = v12;
      v13 = 0;
    }
    DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v20 + 40));
    return v13;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v11 + 24) = a1;
    WdLogEvent5_WdError(v11);
    return 3223192373LL;
  }
}
