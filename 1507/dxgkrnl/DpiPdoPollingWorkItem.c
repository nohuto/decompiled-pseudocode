/*
 * XREFs of DpiPdoPollingWorkItem @ 0x1C016DD50
 * Callers:
 *     DpiCleanUpGlobalState @ 0x1C016CD3C (DpiCleanUpGlobalState.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0005A7C (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000C824 (DpiCheckForOutstandingD3Requests.c)
 *     ExFreeToNPagedLookasideList @ 0x1C00230C4 (ExFreeToNPagedLookasideList.c)
 *     DpiFdoInvalidateChildStatus @ 0x1C00C4CD8 (DpiFdoInvalidateChildStatus.c)
 */

void __fastcall DpiPdoPollingWorkItem(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  int v2; // ebp
  char v3; // r15
  unsigned int *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rax
  int v15; // [rsp+88h] [rbp+10h] BYREF

  v2 = 0;
  v3 = (char)Context;
  while ( 1 )
  {
    KeWaitForSingleObject(P, Executive, 0, 0, 0LL);
    v4 = (unsigned int *)Entry;
    if ( Entry == &Entry )
    {
      v4 = 0LL;
      _InterlockedExchange(&dword_1C0046E60, 0);
    }
    else
    {
      v5 = *(_QWORD *)Entry;
      if ( *((PVOID **)Entry + 1) != &Entry || *(PVOID *)(v5 + 8) != Entry )
        __fastfail(3u);
      Entry = *(PVOID *)Entry;
      *(_QWORD *)(v5 + 8) = &Entry;
    }
    KeReleaseMutex((PRKMUTEX)P, 0);
    if ( !v4 )
      break;
    v6 = *(_QWORD *)(*((_QWORD *)v4 + 3) + 64LL);
    if ( !v3 )
    {
      v7 = 0;
      v15 = 0;
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v6 + 451) )
        DpiCheckForOutstandingD3Requests(v6);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 168), 1u);
      if ( *(_DWORD *)(v6 + 236) != 2 )
      {
        v2 = -1073741810;
        v12 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
        *(_QWORD *)(v12 + 24) = DpiPdoPollingWorkItem;
        *(_QWORD *)(v12 + 32) = *(int *)(v6 + 236);
        goto LABEL_17;
      }
      if ( *(_DWORD *)(v6 + 2584) == 1 || *(_DWORD *)(v6 + 248) != 1 )
      {
        v2 = -1073741661;
        v14 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
        *(_QWORD *)(v14 + 24) = DpiPdoPollingWorkItem;
        *(_QWORD *)(v14 + 32) = *(int *)(v6 + 248);
        v12 = v14;
LABEL_17:
        WdLogEvent5_WdWarning(v12);
      }
      else
      {
        v13 = DpiFdoInvalidateChildStatus(
                *((_QWORD *)v4 + 3),
                v4[8],
                *((_QWORD *)v4 + 5),
                v4[9],
                *((_BYTE *)v4 + 48),
                *((_BYTE *)v4 + 49),
                0,
                *((_BYTE *)v4 + 50),
                &v15);
        v7 = v15;
        v2 = v13;
      }
      if ( *(_BYTE *)(v6 + 451) )
        DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
      KeLeaveCriticalRegion();
      if ( !v2 && v7 )
      {
        _m_prefetchw((const void *)(v6 + 2252));
        if ( (_InterlockedOr((volatile signed __int32 *)(v6 + 2252), 1u) & 1) == 0 )
          IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v6 + 152), BusRelations);
      }
    }
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 64), v4, 0x20u);
    ExFreeToNPagedLookasideList(&stru_1C0046D40, v4);
    if ( v2 == 259 )
    {
      _InterlockedExchange(&dword_1C0046E60, 0);
      KeSetTimer(&stru_1C0046DD8, (LARGE_INTEGER)-3000000LL, &stru_1C0046E18);
      return;
    }
  }
}
