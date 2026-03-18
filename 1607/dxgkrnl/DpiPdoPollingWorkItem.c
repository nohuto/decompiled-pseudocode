/*
 * XREFs of DpiPdoPollingWorkItem @ 0x1C019C1F0
 * Callers:
 *     DpiCleanUpGlobalState @ 0x1C019A104 (DpiCleanUpGlobalState.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000C484 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000EA98 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0029B04 (ExFreeToNPagedLookasideList.c)
 *     DpiFdoInvalidateChildStatus @ 0x1C00C2E54 (DpiFdoInvalidateChildStatus.c)
 */

void __fastcall DpiPdoPollingWorkItem(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  char v2; // r15
  int v3; // ebp
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
  _DWORD v15[4]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v16[8]; // [rsp+60h] [rbp-68h] BYREF

  v2 = (char)Context;
  memset(v16, 0, sizeof(v16));
  EtwActivityIdControl(3u, (LPGUID)&v16[1]);
  v3 = 0;
  v16[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v16[3]) = 14;
  while ( 1 )
  {
    KeWaitForSingleObject(P, Executive, 0, 0, 0LL);
    v4 = (unsigned int *)Entry;
    if ( Entry == &Entry )
    {
      v4 = 0LL;
      _InterlockedExchange(&dword_1C00570A0, 0);
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
    if ( !v2 )
    {
      v7 = 0;
      v15[0] = 0;
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v6 + 483) )
        DpiCheckForOutstandingD3Requests(v6);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 168), 1u);
      if ( *(_DWORD *)(v6 + 236) != 2 )
      {
        v3 = -1073741810;
        v12 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
        *(_QWORD *)(v12 + 24) = *(int *)(v6 + 236);
        goto LABEL_17;
      }
      if ( *(_DWORD *)(v6 + 3768) == 1 || *(_DWORD *)(v6 + 284) != 1 )
      {
        v3 = -1073741661;
        v14 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
        *(_QWORD *)(v14 + 24) = *(int *)(v6 + 284);
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
                v15,
                (__int64)v16);
        v7 = v15[0];
        v3 = v13;
      }
      if ( *(_BYTE *)(v6 + 483) )
        DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
      KeLeaveCriticalRegion();
      if ( !v3 && v7 )
      {
        _m_prefetchw((const void *)(v6 + 3436));
        if ( (_InterlockedOr((volatile signed __int32 *)(v6 + 3436), 1u) & 1) == 0 )
          IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v6 + 152), BusRelations);
      }
    }
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 64), v4, 0x20u);
    ExFreeToNPagedLookasideList(&stru_1C0056F80, v4);
    if ( v3 == 259 )
    {
      _InterlockedExchange(&dword_1C00570A0, 0);
      KeSetTimer(&stru_1C0057018, (LARGE_INTEGER)-3000000LL, &stru_1C0057058);
      return;
    }
  }
}
