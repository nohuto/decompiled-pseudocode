/*
 * XREFs of DpiLdaValidateSystemChainStatus @ 0x1C00D8A20
 * Callers:
 *     DpiSessionCreateCallback @ 0x1C00D81A0 (DpiSessionCreateCallback.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0005A48 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C0005A7C (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000C824 (DpiCheckForOutstandingD3Requests.c)
 *     DpiLdaValidateChainStatus @ 0x1C01701C0 (DpiLdaValidateChainStatus.c)
 */

LONG DpiLdaValidateSystemChainStatus()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  struct _DEVICE_OBJECT *v3; // rcx

  AcquireMiniportListMutex();
  v0 = qword_1C0046C78;
  if ( *(_QWORD *)v0 != v0 )
  {
    do
    {
      KeWaitForSingleObject((PVOID)(v0 + 72), Executive, 0, 0, 0LL);
      v1 = *(_QWORD *)(v0 + 56);
      if ( *(_QWORD *)v1 != v1 )
      {
        do
        {
          if ( *(_DWORD *)(v1 + 16) != 1953656900 || *(_DWORD *)(v1 + 20) != 4 )
          {
            KeEnterCriticalRegion();
            if ( *(_BYTE *)(v1 + 451) )
              DpiCheckForOutstandingD3Requests(v1);
            ExAcquireResourceSharedLite(*(PERESOURCE *)(v1 + 168), 1u);
            if ( *(_DWORD *)(v1 + 472) && (int)DpiLdaValidateChainStatus(*(_QWORD *)(v1 + 24)) < 0 )
            {
              v3 = *(struct _DEVICE_OBJECT **)(v1 + 152);
              *(_BYTE *)(v1 + 232) = 1;
              IoInvalidateDeviceState(v3);
            }
            if ( *(_BYTE *)(v1 + 451) )
              DpiEnableD3Requests(*(_QWORD *)(v1 + 24));
            ExReleaseResourceLite(*(PERESOURCE *)(v1 + 168));
            KeLeaveCriticalRegion();
          }
          v1 = *(_QWORD *)v1;
        }
        while ( *(_QWORD *)v1 != *(_QWORD *)(v0 + 56) );
      }
      KeReleaseMutex((PRKMUTEX)(v0 + 72), 0);
      v0 = *(_QWORD *)v0;
    }
    while ( *(_QWORD *)v0 != qword_1C0046C78 );
  }
  _InterlockedExchange64(&qword_1C0046C88, 0LL);
  return KeReleaseMutex((PRKMUTEX)Mutex, 0);
}
