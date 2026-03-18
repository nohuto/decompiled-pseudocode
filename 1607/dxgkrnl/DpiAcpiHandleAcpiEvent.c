/*
 * XREFs of DpiAcpiHandleAcpiEvent @ 0x1C019B8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000BB0C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C000C484 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000EA98 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C0600 (DxgkWriteDiagEntry.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00C1F3C (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00C2074 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C00DF65C (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C00DF68C (DxgkReleaseAdapterDdiSync.c)
 *     DpiAcpiProcessEventRequests @ 0x1C019BD20 (DpiAcpiProcessEventRequests.c)
 *     DpiDxgkDdiNotifyAcpiEvent @ 0x1C019E774 (DpiDxgkDdiNotifyAcpiEvent.c)
 */

void __fastcall DpiAcpiHandleAcpiEvent(PVOID IoObject, _QWORD *Context, PIO_WORKITEM IoWorkItem)
{
  int v3; // r14d
  bool v6; // zf
  __int64 v7; // rsi
  __int64 v8; // rbx
  int v9; // edx
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  char v17; // dl
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // [rsp+30h] [rbp-49h] BYREF
  __int64 v22; // [rsp+38h] [rbp-41h]
  PIO_WORKITEM IoWorkItema; // [rsp+40h] [rbp-39h]
  _QWORD v24[8]; // [rsp+50h] [rbp-29h] BYREF

  v3 = 0;
  IoWorkItema = IoWorkItem;
  v21 = 0;
  AcquireMiniportListMutex();
  if ( *(_DWORD *)Context == 1 && (_BYTE)word_1C0056E9D && HIBYTE(word_1C0056E9D) && (PVOID)qword_1C0056EA8 == IoObject )
  {
    *(_DWORD *)Context = 4;
    IoObject = (PVOID)qword_1C0056EA0;
  }
  memset(v24, 0, sizeof(v24));
  v6 = Context[1] == 0LL;
  v24[0] = 0x4000000006LL;
  HIDWORD(v24[7]) = !v6;
  memset(&v24[1], 0, 36);
  HIDWORD(v24[6]) = *(_DWORD *)Context;
  LODWORD(v24[7]) = *((_DWORD *)Context + 1);
  LODWORD(v24[6]) = 25;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v24);
  while ( 1 )
  {
    v7 = qword_1C0056EB8;
    if ( *(_QWORD *)v7 != v7 )
    {
      while ( 1 )
      {
        KeWaitForSingleObject((PVOID)(v7 + 72), Executive, 0, 0, 0LL);
        v8 = *(_QWORD *)(v7 + 56);
        if ( *(_QWORD *)v8 != v8 )
          break;
LABEL_45:
        KeReleaseMutex((PRKMUTEX)(v7 + 72), 0);
        v7 = *(_QWORD *)v7;
        if ( *(_QWORD *)v7 == qword_1C0056EB8 )
          goto LABEL_46;
      }
      while ( *(_DWORD *)(v8 + 16) != 1953656900
           || *(_DWORD *)(v8 + 20) != 2
           || (*(_DWORD *)Context == 1 || *(_DWORD *)Context == 4) && IoObject != *(PVOID *)(v8 + 24) )
      {
LABEL_44:
        v8 = *(_QWORD *)v8;
        if ( *(_QWORD *)v8 == *(_QWORD *)(v7 + 56) )
          goto LABEL_45;
      }
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v8 + 483) )
        DpiCheckForOutstandingD3Requests(v8);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v8 + 168), 1u);
      if ( *(_BYTE *)(v8 + 1142) != 1 || !*(_QWORD *)(v7 + 232) || *(_DWORD *)(v8 + 236) != 2 )
      {
LABEL_41:
        if ( *(_BYTE *)(v8 + 483) )
          DpiEnableD3Requests(*(_QWORD *)(v8 + 24));
        ExReleaseResourceLite(*(PERESOURCE *)(v8 + 168));
        KeLeaveCriticalRegion();
        goto LABEL_44;
      }
      v21 = 0;
      ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 64LL) + 168LL));
      if ( *(_DWORD *)(v8 + 3768) == 1 || *(_DWORD *)(v8 + 284) != 1 )
      {
        v9 = 2;
      }
      else
      {
        DxgkAcquireAdapterCoreSync(*(_QWORD *)(v8 + 3688), 2);
        v9 = 1;
      }
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 3688), v9);
      v10 = (int)DpiDxgkDdiNotifyAcpiEvent(
                   v7,
                   *(_QWORD *)(v8 + 48),
                   *(_DWORD *)Context,
                   *((_DWORD *)Context + 1),
                   Context[1],
                   (__int64)&v21);
      ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 64LL) + 168LL));
      if ( *(_DWORD *)(v8 + 3768) == 1 || *(_DWORD *)(v8 + 284) != 1 )
      {
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 3688));
      }
      else
      {
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 3688));
        DxgkReleaseAdapterCoreSync(*(_QWORD *)(v8 + 3688), 2);
      }
      v11 = *(_QWORD *)(v8 + 3688);
      if ( v11 )
      {
        v22 = *(_QWORD *)(v11 + 268);
        v3 = v22;
      }
      memset(v24, 0, sizeof(v24));
      memset(&v24[1], 0, 36);
      v24[7] = __PAIR64__(v10, v21);
      v24[0] = 0x4000000006LL;
      LODWORD(v24[6]) = 42;
      HIDWORD(v24[6]) = v3;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v24);
      v3 = 0;
      if ( (int)v10 >= 0 )
      {
        v17 = v21;
        if ( *(_DWORD *)Context == 4 )
        {
          v13 = (unsigned int)(-((v21 & 8) != 0) - 8);
          if ( ((unsigned int)v13 & v21) != 0 )
          {
            v18 = WdLogNewEntry5_WdError(v13);
            *(_QWORD *)(v18 + 24) = v21;
            WdLogEvent5_WdError(v18);
            v17 = 0;
            v21 = 0;
          }
        }
        LOBYTE(v13) = ~*(_BYTE *)(v8 + 3696) & ((v17 & 7) != 0);
        if ( !(_BYTE)v13 )
          goto LABEL_37;
        v19 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v19 + 24) = -1073741823LL;
        WdLogEvent5_WdError(v19);
      }
      else
      {
        v16 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
        *(_QWORD *)(v16 + 24) = v10;
        WdLogEvent5_WdWarning(v16);
      }
      v21 = 0;
LABEL_37:
      v20 = WdLogNewEntry5_WdEvent(v13);
      *(_QWORD *)(v20 + 24) = v21;
      WdLogEvent5_WdEvent(v20);
      if ( *(_DWORD *)(v8 + 3768) != 1 && *(_DWORD *)(v8 + 284) == 1 && (v21 & 7) != 0 )
        DpiAcpiProcessEventRequests(*(_QWORD *)(v8 + 24), v21, Context, Context + 2);
      goto LABEL_41;
    }
LABEL_46:
    if ( *(_DWORD *)Context != 4 || (v21 & 8) == 0 )
      break;
    *(_DWORD *)Context = 1;
    IoObject = (PVOID)qword_1C0056EA8;
  }
  _InterlockedExchange64(&qword_1C0056EC8, 0LL);
  KeReleaseMutex(Mutex, 0);
  ExFreePoolWithTag(Context, 0);
  if ( IoWorkItema )
    IoFreeWorkItem(IoWorkItema);
}
