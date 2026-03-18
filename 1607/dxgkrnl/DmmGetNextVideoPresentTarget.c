/*
 * XREFs of DmmGetNextVideoPresentTarget @ 0x1C0088D50
 * Callers:
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C0089084 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 *     MonitorRebuildMonitorModeListCache @ 0x1C01B0908 (MonitorRebuildMonitorModeListCache.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DmmGetNextVideoPresentTarget(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // rdi
  unsigned int v12; // r15d
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  void (__fastcall ***v16)(_QWORD, __int64); // rcx
  int v17; // ebx
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax

  if ( !a3 )
  {
    v20 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v20 + 24) = 0LL;
    WdLogEvent5_WdError(v20);
    return 3221225485LL;
  }
  *a3 = -1;
  if ( !a1 )
  {
    v21 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v21 + 24) = 0LL;
    WdLogEvent5_WdError(v21);
    return 3223191554LL;
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 144)) )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v22);
  }
  v6 = *(_QWORD *)(a1 + 2128);
  if ( !v6 )
  {
    v23 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v23 + 24) = a1;
    WdLogEvent5_WdError(v23);
    return 3223191554LL;
  }
  v7 = *(_QWORD *)(v6 + 88);
  if ( !v7 )
  {
    v24 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v24 + 24) = a1;
    WdLogEvent5_WdError(v24);
    return 3223192373LL;
  }
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v7 + 40));
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 96) + 72LL));
  v9 = *(_QWORD *)(v7 + 96);
  if ( a2 == -1 )
  {
    v19 = (_QWORD *)(v9 + 24);
    v12 = 0;
    if ( (_QWORD *)*v19 != v19 )
    {
      v15 = *v19 - 8LL;
      goto LABEL_20;
    }
    goto LABEL_27;
  }
  v10 = (_QWORD *)(v9 + 24);
  if ( (_QWORD *)*v10 == v10 )
  {
    v12 = 0;
    v11 = 0LL;
    goto LABEL_17;
  }
  v11 = *v10 - 8LL;
  if ( v11 )
  {
    v12 = 0;
    while ( *(_DWORD *)(v11 + 24) != a2 )
    {
      v13 = *(_QWORD *)(v11 + 8);
      if ( v13 == v9 + 24 )
        v11 = 0LL;
      else
        v11 = v13 - 8;
      if ( !v11 )
        goto LABEL_38;
    }
LABEL_17:
    if ( v11 )
      goto LABEL_18;
    goto LABEL_38;
  }
  v12 = 0;
LABEL_38:
  v25 = WdLogNewEntry5_WdAssertion(v8);
  WdLogEvent5_WdAssertion(v25);
LABEL_18:
  v14 = *(_QWORD *)(v11 + 8);
  if ( v14 == v9 + 24 )
  {
LABEL_27:
    v15 = 0LL;
    goto LABEL_20;
  }
  v15 = v14 - 8;
LABEL_20:
  if ( v15 )
    *a3 = *(_DWORD *)(v15 + 24);
  else
    v12 = -1073741275;
  if ( v9 )
  {
    v16 = (void (__fastcall ***)(_QWORD, __int64))(v9 + 64);
    v17 = _InterlockedDecrement((volatile signed __int32 *)(v9 + 72));
    if ( v17 )
    {
      if ( v17 < 0 )
      {
        v26 = WdLogNewEntry5_WdError(v16);
        *(_QWORD *)(v26 + 24) = v17;
        WdLogEvent5_WdError(v26);
      }
    }
    else if ( v16 )
    {
      (**v16)(v16, 1LL);
    }
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v7 + 40));
  return v12;
}
