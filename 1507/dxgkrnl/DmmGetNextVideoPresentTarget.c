/*
 * XREFs of DmmGetNextVideoPresentTarget @ 0x1C008A470
 * Callers:
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C008CF18 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 *     MonitorRebuildMonitorModeListCache @ 0x1C01828EC (MonitorRebuildMonitorModeListCache.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004A54 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004BA8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 */

__int64 __fastcall DmmGetNextVideoPresentTarget(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // edi
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax

  if ( !a3 )
  {
    v22 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v22 + 24) = 0LL;
    WdLogEvent5_WdError(v22);
    return 3221225485LL;
  }
  *a3 = -1;
  if ( !a1 )
  {
    v23 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v23 + 24) = 0LL;
LABEL_25:
    WdLogEvent5_WdError(v23);
    return 3223191554LL;
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 144)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 128)) )
  {
    v24 = WdLogNewEntry5_WdAssertion(a1, v6, v7, v8);
    WdLogEvent5_WdAssertion(v24);
  }
  v9 = *(_QWORD *)(a1 + 1976);
  if ( !v9 )
  {
    v23 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v23 + 24) = a1;
    goto LABEL_25;
  }
  v10 = *(_QWORD *)(v9 + 88);
  if ( !v10 )
  {
    v25 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v25 + 24) = a1;
    WdLogEvent5_WdError(v25);
    return 3223192373LL;
  }
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v10 + 40));
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 96) + 72LL));
  v11 = *(_QWORD *)(v10 + 96);
  if ( a2 == -1 )
  {
    v21 = (_QWORD *)(v11 + 24);
    if ( (_QWORD *)*v21 != v21 )
    {
      v18 = *v21 - 8LL;
      goto LABEL_13;
    }
    goto LABEL_18;
  }
  v14 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(v10 + 96), a2);
  if ( !v14 )
  {
    v26 = WdLogNewEntry5_WdAssertion(v13, v12, v15, v16);
    WdLogEvent5_WdAssertion(v26);
  }
  v17 = *(_QWORD *)(v14 + 8);
  if ( v17 == v11 + 24 )
  {
LABEL_18:
    v18 = 0LL;
    goto LABEL_13;
  }
  v18 = v17 - 8;
LABEL_13:
  if ( v18 )
  {
    *a3 = *(_DWORD *)(v18 + 24);
    v19 = 0;
  }
  else
  {
    v19 = -1073741275;
  }
  if ( v11 )
    ReferenceCounted::Release((ReferenceCounted *)(v11 + 64));
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v10 + 40));
  return v19;
}
