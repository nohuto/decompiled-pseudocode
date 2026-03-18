/*
 * XREFs of DpiFdoStopMiracastSession @ 0x1C00E02B0
 * Callers:
 *     DpiFdoHandleSystemPower @ 0x1C00DFB38 (DpiFdoHandleSystemPower.c)
 *     DpiFdoHandleDevicePower @ 0x1C00DFFA0 (DpiFdoHandleDevicePower.c)
 *     DpiFdoHandleStopDevice @ 0x1C01950D0 (DpiFdoHandleStopDevice.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000BB0C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C000C484 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000EA98 (DpiCheckForOutstandingD3Requests.c)
 *     DpiMiracastAddRefMiracastDeviceContext @ 0x1C0012900 (DpiMiracastAddRefMiracastDeviceContext.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C002BF28 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C002C100 (DpiMiracastStopMiracastSessionSync.c)
 */

void __fastcall DpiFdoStopMiracastSession(__int64 a1, char a2, union _LARGE_INTEGER *a3, unsigned int a4)
{
  __int64 v4; // rbx
  char *v5; // rdi
  __int64 v9; // rcx
  __int64 v10; // rbx

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  if ( v4 && *(_DWORD *)(v4 + 16) == 1953656900 )
  {
    if ( *(_DWORD *)(v4 + 20) == 3 )
    {
      v10 = *(_QWORD *)(v4 + 2592);
      if ( !v10 )
        return;
      v4 = *(_QWORD *)(v10 + 64);
    }
    else if ( *(_DWORD *)(v4 + 20) != 2 )
    {
      return;
    }
    AcquireMiniportListMutex();
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v4 + 483) )
      DpiCheckForOutstandingD3Requests(v4);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
    v9 = *(_QWORD *)(v4 + 3040);
    if ( v9 && *(_DWORD *)(v4 + 3768) != 1 && *(_DWORD *)(v4 + 284) == 1 )
    {
      DpiMiracastAddRefMiracastDeviceContext(v9, (unsigned int)DpiFdoStopMiracastSession);
      v5 = *(char **)(v4 + 3040);
    }
    if ( *(_BYTE *)(v4 + 483) )
      DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
    KeLeaveCriticalRegion();
    _InterlockedExchange64(&qword_1C0056EC8, 0LL);
    KeReleaseMutex(Mutex, 0);
    if ( v5 )
    {
      DpiMiracastStopMiracastSessionSync(v5, a2, a3, 0LL, a4, 0);
      DpiMiracastReleaseMiracastDeviceContext((int *)v5, (unsigned int)DpiFdoStopMiracastSession);
    }
  }
}
