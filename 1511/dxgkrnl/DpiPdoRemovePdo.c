/*
 * XREFs of DpiPdoRemovePdo @ 0x1C01727E0
 * Callers:
 *     DpiPdoAddPdo @ 0x1C00E2A50 (DpiPdoAddPdo.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C00E2F00 (DpiPdoHandleChildConnectionChange.c)
 *     DpiPdoRemovePdoObjects @ 0x1C0172A80 (DpiPdoRemovePdoObjects.c)
 * Callees:
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00A9EA8 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00A9F1C (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DmmResetBaseVideoOutputTechnology@@YAJQEAXI@Z @ 0x1C01773C0 (-DmmResetBaseVideoOutputTechnology@@YAJQEAXI@Z.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C0187030 (MonitorRemovePhysicalMonitor.c)
 */

__int64 __fastcall DpiPdoRemovePdo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v7; // rbx
  _QWORD **v8; // r8
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  bool v15; // zf
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rsi
  _QWORD *v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  void *v26; // rcx
  __int64 v27; // rax
  NTSTATUS v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  _QWORD *v32; // rax
  _QWORD *v33; // rcx

  v4 = *(_QWORD *)(a1 + 64);
  LODWORD(v5) = 0;
  v7 = a1;
  v8 = *(_QWORD ***)(v4 + 2296);
  v9 = v8;
  v10 = *v8;
  if ( *v8 == v8 )
  {
LABEL_5:
    LODWORD(v5) = -1073741811;
    v11 = WdLogNewEntry5_WdWarning(a1, a2, v8, a4);
    *(_QWORD *)(v11 + 24) = DpiPdoRemovePdo;
    *(_QWORD *)(v11 + 32) = *(unsigned int *)(a2 + 24);
    WdLogEvent5_WdWarning(v11);
  }
  else
  {
    a1 = *(unsigned int *)(a2 + 24);
    while ( *((_DWORD *)v9 + 126) != (_DWORD)a1 )
    {
      v9 = v10;
      v10 = (_QWORD *)*v10;
      if ( v10 == v8 )
        goto LABEL_5;
    }
    v13 = *v9;
    v14 = (_QWORD *)v9[1];
    if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v14 != v9 )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    --*(_DWORD *)(v4 + 2312);
    v15 = *((_DWORD *)v9 + 124) == 1;
    *((_BYTE *)v9 + 508) = 0;
    if ( v15 && !*((_BYTE *)v9 + 511) )
    {
      LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(v7, 1);
      if ( (int)v5 >= 0 )
      {
        v16 = MonitorRemovePhysicalMonitor(*(DXGADAPTER **)(v4 + 2544), *((_DWORD *)v9 + 126));
        v18 = v16;
        if ( v16 < 0 )
        {
          v19 = (_QWORD *)WdLogNewEntry5_WdError(v17);
          v19[4] = MonitorRemovePhysicalMonitor;
          v19[3] = DpiPdoRemovePdo;
          v19[5] = v18;
          WdLogEvent5_WdError(v19);
        }
        v20 = DmmResetBaseVideoOutputTechnology(*(void *const *)(v4 + 2544), *((_DWORD *)v9 + 126));
        v5 = v20;
        if ( v20 < 0 )
        {
          v22 = (_QWORD *)WdLogNewEntry5_WdError(v21);
          v22[4] = MonitorRemovePhysicalMonitor;
          v22[3] = DpiPdoRemovePdo;
          v22[5] = v5;
          WdLogEvent5_WdError(v22);
        }
        DpiReleaseCoreSyncAccessSafe(v7, 1);
      }
    }
    KeWaitForSingleObject((PVOID)(v4 + 2080), Executive, 0, 0, 0LL);
    *(_QWORD *)(a2 + 40) = 0LL;
    KeReleaseMutex((PRKMUTEX)(v4 + 2080), 0);
    v26 = (void *)v9[116];
    if ( v26 )
    {
      ExFreePoolWithTag(v26, 0);
      v9[116] = 0LL;
    }
    v27 = WdLogNewEntry5_WdEvent(v26, v23, v24, v25);
    *(_QWORD *)(v27 + 24) = DpiPdoRemovePdo;
    *(_QWORD *)(v27 + 32) = v9[3];
    WdLogEvent5_WdEvent(v27);
    if ( *((_BYTE *)v9 + 509) )
    {
      v33 = *(_QWORD **)(v4 + 2328);
      *v9 = v4 + 2320;
      v9[1] = v33;
      if ( *v33 != v4 + 2320 )
        __fastfail(3u);
      *v33 = v9;
      *(_QWORD *)(v4 + 2328) = v9;
    }
    else
    {
      v28 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)v9 + 2, (PVOID)a2, &byte_1C00ED620, 1u, 0x20u);
      v5 = v28;
      if ( v28 >= 0 )
      {
        IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)v9 + 2, (PVOID)a2, 0x20u);
        IoQueueWorkItem((PIO_WORKITEM)v9[119], (PIO_WORKITEM_ROUTINE)DpiPdoDestroyPdo, DelayedWorkQueue, 0LL);
      }
      else
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v29, v31);
        v32[6] = 0LL;
        v32[3] = 275LL;
        v32[4] = 21LL;
        v32[5] = DpiPdoRemovePdo;
        v32[7] = v5;
        WdLogEvent5_WdCriticalError(v32);
      }
    }
  }
  return (unsigned int)v5;
}
