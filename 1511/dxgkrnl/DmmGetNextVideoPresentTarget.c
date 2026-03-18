/*
 * XREFs of DmmGetNextVideoPresentTarget @ 0x1C0097DEC
 * Callers:
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C0098160 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 *     MonitorRebuildMonitorModeListCache @ 0x1C0186F98 (MonitorRebuildMonitorModeListCache.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00070B8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 */

__int64 __fastcall DmmGetNextVideoPresentTarget(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // edi

  if ( !a3 )
  {
    v6 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v6 + 24) = 0LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  *a3 = -1;
  if ( !a1 )
  {
    v8 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v8 + 24) = 0LL;
LABEL_5:
    WdLogEvent5_WdError(v8);
    return 3223191554LL;
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 144)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 128)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *(_QWORD *)(a1 + 1984);
  if ( !v10 )
  {
    v8 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v8 + 24) = a1;
    goto LABEL_5;
  }
  v11 = *(_QWORD *)(v10 + 112);
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v12 + 24) = a1;
    WdLogEvent5_WdError(v12);
    return 3223192373LL;
  }
  DXGFASTMUTEX::Acquire(*(union _LARGE_INTEGER **)(v11 + 40));
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 96) + 72LL));
  v13 = *(_QWORD *)(v11 + 96);
  if ( a2 != -1 )
  {
    v17 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(v11 + 96), a2);
    if ( !v17 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v18);
    }
    v19 = *(_QWORD *)(v17 + 8);
    if ( v19 != v13 + 24 )
    {
      v15 = v19 - 8;
      goto LABEL_21;
    }
LABEL_20:
    v15 = 0LL;
    goto LABEL_21;
  }
  v14 = (_QWORD *)(v13 + 24);
  if ( (_QWORD *)*v14 == v14 )
    goto LABEL_20;
  v15 = *v14 - 8LL;
LABEL_21:
  if ( v15 )
  {
    *a3 = *(_DWORD *)(v15 + 24);
    v20 = 0;
  }
  else
  {
    v20 = -1073741275;
  }
  if ( v13 )
    ReferenceCounted::Release((ReferenceCounted *)(v13 + 64));
  DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v11 + 40));
  return v20;
}
