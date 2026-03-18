/*
 * XREFs of DpiAcpiHandleAcpiEvent @ 0x1C016D4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0005A48 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C0005A7C (DpiEnableD3Requests.c)
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C0008568 (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000C824 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C0061DC0 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C0061F00 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkWriteDiagEntry @ 0x1C009AC30 (DxgkWriteDiagEntry.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C00BBA54 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C00BBBBC (DxgkReleaseAdapterDdiSync.c)
 *     DpiAcpiProcessEventRequests @ 0x1C016D870 (DpiAcpiProcessEventRequests.c)
 *     DpiDxgkDdiNotifyAcpiEvent @ 0x1C017059C (DpiDxgkDdiNotifyAcpiEvent.c)
 */

void __fastcall DpiAcpiHandleAcpiEvent(PVOID IoObject, _DWORD *Context, PIO_WORKITEM IoWorkItem)
{
  PVOID v5; // r14
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rdi
  struct _KMUTANT *v10; // r13
  __int64 v11; // rbx
  int v12; // edx
  __int64 v13; // r15
  __int64 v14; // rax
  int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rax
  unsigned int v26; // [rsp+30h] [rbp-49h] BYREF
  PVOID v27; // [rsp+38h] [rbp-41h]
  __int64 v28; // [rsp+40h] [rbp-39h]
  _DWORD v29[16]; // [rsp+50h] [rbp-29h] BYREF

  v27 = IoObject;
  v5 = IoObject;
  memset(v29, 0, sizeof(v29));
  DxgkDiagInitializeCodePointPacket(v29, 25, *Context, Context[1], *((_QWORD *)Context + 1) != 0LL);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v29, v6, v7, v8);
  AcquireMiniportListMutex();
  v9 = (_QWORD *)qword_1C0046C78;
  if ( (_QWORD *)*v9 == v9 )
    goto LABEL_38;
  do
  {
    v10 = (struct _KMUTANT *)(v9 + 9);
    KeWaitForSingleObject(v9 + 9, Executive, 0, 0, 0LL);
    v11 = v9[7];
    if ( *(_QWORD *)v11 == v11 )
      goto LABEL_37;
    do
    {
      if ( *(_DWORD *)(v11 + 16) != 1953656900
        || *(_DWORD *)(v11 + 20) != 2
        || *Context == 1 && v5 != *(PVOID *)(v11 + 24) )
      {
        goto LABEL_35;
      }
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v11 + 451) )
        DpiCheckForOutstandingD3Requests(v11);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v11 + 168), 1u);
      if ( *(_BYTE *)(v11 + 1061) == 1 && v9[29] && *(_DWORD *)(v11 + 236) == 2 )
      {
        v26 = 0;
        ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) + 64LL) + 168LL));
        if ( *(_DWORD *)(v11 + 2584) == 1 || *(_DWORD *)(v11 + 248) != 1 )
        {
          v12 = 2;
        }
        else
        {
          DxgkAcquireAdapterCoreSync(*(_QWORD *)(v11 + 2504), 2);
          v12 = 1;
        }
        DxgkAcquireAdapterDdiSync(*(_QWORD *)(v11 + 2504), v12);
        v13 = (int)DpiDxgkDdiNotifyAcpiEvent(
                     (_DWORD)v9,
                     *(_QWORD *)(v11 + 48),
                     *Context,
                     Context[1],
                     *((_QWORD *)Context + 1),
                     (__int64)&v26);
        ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) + 64LL) + 168LL));
        if ( *(_DWORD *)(v11 + 2584) == 1 || *(_DWORD *)(v11 + 248) != 1 )
        {
          DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v11 + 2504));
        }
        else
        {
          DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v11 + 2504));
          DxgkReleaseAdapterCoreSync(*(_QWORD *)(v11 + 2504));
        }
        v14 = *(_QWORD *)(v11 + 2504);
        v15 = 0;
        if ( v14 )
        {
          v28 = *(_QWORD *)(v14 + 252);
          v15 = v28;
        }
        memset(v29, 0, sizeof(v29));
        DxgkDiagInitializeCodePointPacket(v29, 42, v15, v26, v13);
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v29, v16, v17, v18);
        if ( (int)v13 < 0 )
        {
          v23 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
          *(_QWORD *)(v23 + 24) = DpiAcpiHandleAcpiEvent;
          *(_QWORD *)(v23 + 32) = v13;
          WdLogEvent5_WdWarning(v23);
          goto LABEL_27;
        }
        if ( (*(_BYTE *)(v11 + 2512) & 1) == 0 && v26 )
        {
          v24 = (_QWORD *)WdLogNewEntry5_WdError(v20);
          v24[3] = DpiAcpiHandleAcpiEvent;
          v24[4] = 0LL;
          v24[5] = -1073741823LL;
          WdLogEvent5_WdError(v24);
LABEL_27:
          v26 = 0;
        }
        v25 = WdLogNewEntry5_WdEvent(v20, v19, v21, v22);
        *(_QWORD *)(v25 + 24) = DpiAcpiHandleAcpiEvent;
        *(_QWORD *)(v25 + 32) = v26;
        WdLogEvent5_WdEvent(v25);
        if ( *(_DWORD *)(v11 + 2584) != 1 && *(_DWORD *)(v11 + 248) == 1 )
          DpiAcpiProcessEventRequests(*(_QWORD *)(v11 + 24), v26, Context);
        v5 = v27;
      }
      if ( *(_BYTE *)(v11 + 451) )
        DpiEnableD3Requests(*(_QWORD *)(v11 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v11 + 168));
      KeLeaveCriticalRegion();
LABEL_35:
      v11 = *(_QWORD *)v11;
    }
    while ( *(_QWORD *)v11 != v9[7] );
    v10 = (struct _KMUTANT *)(v9 + 9);
LABEL_37:
    KeReleaseMutex(v10, 0);
    v9 = (_QWORD *)*v9;
  }
  while ( *v9 != qword_1C0046C78 );
LABEL_38:
  _InterlockedExchange64(&qword_1C0046C88, 0LL);
  KeReleaseMutex((PRKMUTEX)Mutex, 0);
  ExFreePoolWithTag(Context, 0);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
