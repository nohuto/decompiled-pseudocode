/*
 * XREFs of DpiPdoHandleStopDevice @ 0x1C016DB60
 * Callers:
 *     DpiPdoDispatchPnp @ 0x1C005E640 (DpiPdoDispatchPnp.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0005A7C (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000C824 (DpiCheckForOutstandingD3Requests.c)
 */

__int64 __fastcall DpiPdoHandleStopDevice(__int64 a1)
{
  __int64 v1; // rbx
  bool v3; // zf
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax

  v1 = *(_QWORD *)(a1 + 64);
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v1 + 451) )
    DpiCheckForOutstandingD3Requests(v1);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v1 + 168), 1u);
  v3 = *(_BYTE *)(v1 + 451) == 0;
  *(_DWORD *)(v1 + 240) = *(_DWORD *)(v1 + 236);
  *(_DWORD *)(v1 + 236) = 4;
  if ( !v3 )
    DpiEnableD3Requests(*(_QWORD *)(v1 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(v1 + 168));
  KeLeaveCriticalRegion();
  v8 = WdLogNewEntry5_WdEvent(v5, v4, v6, v7);
  *(_QWORD *)(v8 + 24) = DpiPdoHandleStopDevice;
  *(_QWORD *)(v8 + 32) = a1;
  WdLogEvent5_WdEvent(v8);
  return 0LL;
}
