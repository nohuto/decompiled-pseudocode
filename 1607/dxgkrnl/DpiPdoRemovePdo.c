/*
 * XREFs of DpiPdoRemovePdo @ 0x1C019C49C
 * Callers:
 *     DpiPdoHandleChildConnectionChange @ 0x1C00EF2B8 (DpiPdoHandleChildConnectionChange.c)
 *     DpiPdoAddPdo @ 0x1C00EF39C (DpiPdoAddPdo.c)
 *     DpiPdoRemovePdoObjects @ 0x1C019C6F8 (DpiPdoRemovePdoObjects.c)
 * Callees:
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00C1EE4 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00C1F58 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DmmResetBaseVideoOutputTechnology@@YAJQEAXI@Z @ 0x1C01A0D8C (-DmmResetBaseVideoOutputTechnology@@YAJQEAXI@Z.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C01B09A4 (MonitorRemovePhysicalMonitor.c)
 */

__int64 __fastcall DpiPdoRemovePdo(__int64 a1, __int64 a2, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v6; // rsi
  _QWORD **v9; // rdx
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  bool v16; // zf
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  void *v24; // rcx
  __int64 v25; // rax
  NTSTATUS v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  _QWORD *v30; // rax
  _QWORD *v31; // rcx

  v4 = *(_QWORD *)(a1 + 64);
  LODWORD(v6) = 0;
  v9 = *(_QWORD ***)(v4 + 3440);
  v10 = v9;
  v11 = *v9;
  if ( *v9 == v9 )
  {
LABEL_5:
    LODWORD(v6) = -1073741811;
    v12 = WdLogNewEntry5_WdWarning(a1, v9, a3, a4);
    *(_QWORD *)(v12 + 24) = *(unsigned int *)(a2 + 24);
    WdLogEvent5_WdWarning(v12);
  }
  else
  {
    a4 = *(unsigned int *)(a2 + 24);
    while ( *((_DWORD *)v10 + 126) != (_DWORD)a4 )
    {
      v10 = v11;
      v11 = (_QWORD *)*v11;
      if ( v11 == v9 )
        goto LABEL_5;
    }
    v14 = *v10;
    v15 = (_QWORD *)v10[1];
    if ( *(_QWORD **)(*v10 + 8LL) != v10 || (_QWORD *)*v15 != v10 )
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    --*(_DWORD *)(v4 + 3456);
    v16 = *((_DWORD *)v10 + 124) == 1;
    *((_BYTE *)v10 + 508) = 0;
    if ( v16 && !*((_BYTE *)v10 + 511) )
    {
      LODWORD(v6) = DpiAcquireCoreSyncAccessSafe(a1, 1);
      if ( (int)v6 >= 0 )
      {
        v17 = MonitorRemovePhysicalMonitor(*(DXGADAPTER **)(v4 + 3688), *((_DWORD *)v10 + 126), a3);
        v19 = v17;
        if ( v17 < 0 )
        {
          v20 = WdLogNewEntry5_WdError(v18);
          *(_QWORD *)(v20 + 24) = v19;
          WdLogEvent5_WdError(v20);
        }
        v21 = DmmResetBaseVideoOutputTechnology(*(void *const *)(v4 + 3688), *((_DWORD *)v10 + 126));
        v6 = v21;
        if ( v21 < 0 )
        {
          v23 = WdLogNewEntry5_WdError(v22);
          *(_QWORD *)(v23 + 24) = v6;
          WdLogEvent5_WdError(v23);
        }
        DpiReleaseCoreSyncAccessSafe(a1, 1);
      }
    }
    KeWaitForSingleObject((PVOID)(v4 + 3224), Executive, 0, 0, 0LL);
    *(_QWORD *)(a2 + 40) = 0LL;
    KeReleaseMutex((PRKMUTEX)(v4 + 3224), 0);
    v24 = (void *)v10[116];
    if ( v24 )
    {
      ExFreePoolWithTag(v24, 0);
      v10[116] = 0LL;
    }
    v25 = WdLogNewEntry5_WdEvent(v24);
    *(_QWORD *)(v25 + 24) = v10[3];
    WdLogEvent5_WdEvent(v25);
    if ( *((_BYTE *)v10 + 509) )
    {
      v31 = *(_QWORD **)(v4 + 3472);
      if ( *v31 != v4 + 3464 )
        __fastfail(3u);
      *v10 = v4 + 3464;
      v10[1] = v31;
      *v31 = v10;
      *(_QWORD *)(v4 + 3472) = v10;
    }
    else
    {
      v26 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)v10 + 2, (PVOID)a2, &byte_1C00FF410, 1u, 0x20u);
      v6 = v26;
      if ( v26 >= 0 )
      {
        IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)v10 + 2, (PVOID)a2, 0x20u);
        IoQueueWorkItem((PIO_WORKITEM)v10[119], (PIO_WORKITEM_ROUTINE)DpiPdoDestroyPdo, DelayedWorkQueue, 0LL);
      }
      else
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v27, v29);
        v30[3] = 275LL;
        v30[4] = 21LL;
        v30[5] = v6;
        WdLogEvent5_WdCriticalError(v30);
      }
    }
  }
  return (unsigned int)v6;
}
