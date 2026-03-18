/*
 * XREFs of DpiAcpiHandleAcpiEvent @ 0x1C0171CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C000A24C (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B77C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C000B7B0 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000DC2C (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00A68F0 (DxgkWriteDiagEntry.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00A9F00 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00AA040 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C00E25D8 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C00E2694 (DxgkAcquireAdapterDdiSync.c)
 *     DpiAcpiProcessEventRequests @ 0x1C0172080 (DpiAcpiProcessEventRequests.c)
 *     DpiDxgkDdiNotifyAcpiEvent @ 0x1C0174DCC (DpiDxgkDdiNotifyAcpiEvent.c)
 */

void __fastcall DpiAcpiHandleAcpiEvent(PVOID IoObject, _DWORD *Context, PIO_WORKITEM IoWorkItem)
{
  PVOID v5; // r14
  _QWORD *v6; // rdi
  struct _KMUTANT *v7; // r13
  __int64 v8; // rbx
  int v9; // edx
  __int64 v10; // r15
  __int64 v11; // rax
  int v12; // r14d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rax
  unsigned int v20; // [rsp+30h] [rbp-49h] BYREF
  PVOID v21; // [rsp+38h] [rbp-41h]
  __int64 v22; // [rsp+40h] [rbp-39h]
  _DWORD v23[16]; // [rsp+50h] [rbp-29h] BYREF

  v21 = IoObject;
  v5 = IoObject;
  memset(v23, 0, sizeof(v23));
  DxgkDiagInitializeCodePointPacket(v23, 25, *Context, Context[1], *((_QWORD *)Context + 1) != 0LL);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v23);
  AcquireMiniportListMutex();
  v6 = (_QWORD *)qword_1C0046CF8;
  if ( (_QWORD *)*v6 == v6 )
    goto LABEL_38;
  do
  {
    v7 = (struct _KMUTANT *)(v6 + 9);
    KeWaitForSingleObject(v6 + 9, Executive, 0, 0, 0LL);
    v8 = v6[7];
    if ( *(_QWORD *)v8 == v8 )
      goto LABEL_37;
    do
    {
      if ( *(_DWORD *)(v8 + 16) != 1953656900 || *(_DWORD *)(v8 + 20) != 2 || *Context == 1 && v5 != *(PVOID *)(v8 + 24) )
        goto LABEL_35;
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v8 + 483) )
        DpiCheckForOutstandingD3Requests(v8);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v8 + 168), 1u);
      if ( *(_BYTE *)(v8 + 1094) == 1 && v6[29] && *(_DWORD *)(v8 + 236) == 2 )
      {
        v20 = 0;
        ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 64LL) + 168LL));
        if ( *(_DWORD *)(v8 + 2624) == 1 || *(_DWORD *)(v8 + 284) != 1 )
        {
          v9 = 2;
        }
        else
        {
          DxgkAcquireAdapterCoreSync(*(_QWORD *)(v8 + 2544), 2);
          v9 = 1;
        }
        DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 2544), v9);
        v10 = (int)DpiDxgkDdiNotifyAcpiEvent(
                     (_DWORD)v6,
                     *(_QWORD *)(v8 + 48),
                     *Context,
                     Context[1],
                     *((_QWORD *)Context + 1),
                     (__int64)&v20);
        ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 64LL) + 168LL));
        if ( *(_DWORD *)(v8 + 2624) == 1 || *(_DWORD *)(v8 + 284) != 1 )
        {
          DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 2544));
        }
        else
        {
          DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 2544));
          DxgkReleaseAdapterCoreSync(*(_QWORD *)(v8 + 2544), 2);
        }
        v11 = *(_QWORD *)(v8 + 2544);
        v12 = 0;
        if ( v11 )
        {
          v22 = *(_QWORD *)(v11 + 252);
          v12 = v22;
        }
        memset(v23, 0, sizeof(v23));
        DxgkDiagInitializeCodePointPacket(v23, 42, v12, v20, v10);
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v23);
        if ( (int)v10 < 0 )
        {
          v17 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
          *(_QWORD *)(v17 + 24) = DpiAcpiHandleAcpiEvent;
          *(_QWORD *)(v17 + 32) = v10;
          WdLogEvent5_WdWarning(v17);
          goto LABEL_27;
        }
        if ( (*(_BYTE *)(v8 + 2552) & 1) == 0 && v20 )
        {
          v18 = (_QWORD *)WdLogNewEntry5_WdError(v14);
          v18[3] = DpiAcpiHandleAcpiEvent;
          v18[4] = 0LL;
          v18[5] = -1073741823LL;
          WdLogEvent5_WdError(v18);
LABEL_27:
          v20 = 0;
        }
        v19 = WdLogNewEntry5_WdEvent(v14, v13, v15, v16);
        *(_QWORD *)(v19 + 24) = DpiAcpiHandleAcpiEvent;
        *(_QWORD *)(v19 + 32) = v20;
        WdLogEvent5_WdEvent(v19);
        if ( *(_DWORD *)(v8 + 2624) != 1 && *(_DWORD *)(v8 + 284) == 1 )
          DpiAcpiProcessEventRequests(*(_QWORD *)(v8 + 24), v20, Context);
        v5 = v21;
      }
      if ( *(_BYTE *)(v8 + 483) )
        DpiEnableD3Requests(*(_QWORD *)(v8 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v8 + 168));
      KeLeaveCriticalRegion();
LABEL_35:
      v8 = *(_QWORD *)v8;
    }
    while ( *(_QWORD *)v8 != v6[7] );
    v7 = (struct _KMUTANT *)(v6 + 9);
LABEL_37:
    KeReleaseMutex(v7, 0);
    v6 = (_QWORD *)*v6;
  }
  while ( *v6 != qword_1C0046CF8 );
LABEL_38:
  _InterlockedExchange64(&qword_1C0046D08, 0LL);
  KeReleaseMutex(Mutex, 0);
  ExFreePoolWithTag(Context, 0);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
