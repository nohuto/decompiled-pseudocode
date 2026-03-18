/*
 * XREFs of DpiPdoIsChildConnected @ 0x1C00C2C38
 * Callers:
 *     DpiFdoInvalidateChildStatus @ 0x1C00C2E54 (DpiFdoInvalidateChildStatus.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DpiSignalVideoOutputCreateCompletion @ 0x1C002A998 (DpiSignalVideoOutputCreateCompletion.c)
 *     DxgkWriteDiagEntry @ 0x1C00C0600 (DxgkWriteDiagEntry.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00C1F3C (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00C2074 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C00DF65C (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C00DF68C (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiQueryChildStatus @ 0x1C00F9F4C (DpiDxgkDdiQueryChildStatus.c)
 */

__int64 __fastcall DpiPdoIsChildConnected(__int64 a1, int a2, char a3, char a4, _BYTE *a5)
{
  __int64 v5; // r14
  bool v6; // bl
  __int64 v8; // r13
  __int64 ChildStatus; // r15
  __int64 v10; // rcx
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r13
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  _DWORD v23[2]; // [rsp+48h] [rbp-49h] BYREF
  __int64 v24; // [rsp+50h] [rbp-41h]
  _QWORD v25[8]; // [rsp+60h] [rbp-31h] BYREF

  v5 = *(_QWORD *)(a1 + 64);
  v6 = 0;
  v8 = a1;
  LODWORD(ChildStatus) = 0;
  *a5 = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v5 + 3120), 1u);
  v11 = *(_QWORD *)(v5 + 3112);
  if ( v11 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)v11 )
        goto LABEL_27;
      if ( *(_DWORD *)(v11 + 24) == a2 )
        break;
      v11 += 120LL;
      if ( !v11 )
        goto LABEL_27;
    }
    if ( *(_DWORD *)v11 == 1 )
    {
      v12 = *(_DWORD *)(v11 + 4);
      if ( v12 >= 15 )
        v6 = v12 <= 16;
    }
    switch ( *(_DWORD *)(v11 + 16) )
    {
      case 1:
        *a5 = 1;
        break;
      case 3:
LABEL_14:
        v13 = *(_QWORD *)(v5 + 3688);
        v14 = *(_QWORD *)(v5 + 40);
        v24 = 0LL;
        v23[1] = a2;
        v23[0] = v6 ? 3 : 1;
        DxgkAcquireAdapterCoreSync(v13, 1);
        KeWaitForSingleObject(*(PVOID *)(v11 + 104), Executive, 0, 0, 0LL);
        DxgkAcquireAdapterDdiSync(*(_QWORD *)(v5 + 3688), 1LL);
        LOBYTE(v15) = a4;
        ChildStatus = (int)DpiDxgkDdiQueryChildStatus(v14, *(_QWORD *)(v5 + 48), v23, v15);
        DxgkReleaseAdapterDdiSync(*(_QWORD *)(v5 + 3688));
        KeReleaseMutex(*(PRKMUTEX *)(v11 + 104), 0);
        DxgkReleaseAdapterCoreSync(*(_QWORD *)(v5 + 3688), 1);
        if ( (int)ChildStatus < 0 )
        {
          v19 = WdLogNewEntry5_WdError(v16);
          *(_QWORD *)(v19 + 24) = *(_QWORD *)(v14 + 208);
          *(_QWORD *)(v19 + 32) = ChildStatus;
          goto LABEL_28;
        }
        v8 = a1;
        *a5 = v24;
        break;
      case 4:
        if ( (!v6 || *(_DWORD *)(v11 + 4) != 15 || *(_QWORD *)(v5 + 3040)) && a3 )
          goto LABEL_14;
        *a5 = *(_BYTE *)(v11 + 48);
        break;
      default:
        v18 = WdLogNewEntry5_WdError((unsigned int)(*(_DWORD *)(v11 + 16) - 3));
        *(_QWORD *)(v18 + 24) = 0LL;
        WdLogEvent5_WdError(v18);
        break;
    }
    if ( !*a5 && *(_BYTE *)(v11 + 28) == 1 )
    {
      KeWaitForSingleObject((PVOID)(v5 + 3224), Executive, 0, 0, 0LL);
      *(_BYTE *)(v11 + 28) = 0;
      KeReleaseMutex((PRKMUTEX)(v5 + 3224), 0);
      DpiSignalVideoOutputCreateCompletion(v8);
    }
    goto LABEL_19;
  }
LABEL_27:
  v19 = WdLogNewEntry5_WdError(v10);
  *(_QWORD *)(v19 + 24) = 0LL;
LABEL_28:
  WdLogEvent5_WdError(v19);
LABEL_19:
  ExReleaseResourceLite((PERESOURCE)(v5 + 3120));
  KeLeaveCriticalRegion();
  memset(v25, 0, sizeof(v25));
  memset(&v25[1], 0, 36);
  HIDWORD(v25[7]) = (unsigned __int8)*a5;
  v25[0] = 0x4000000006LL;
  LODWORD(v25[6]) = 38;
  HIDWORD(v25[6]) = a2;
  LODWORD(v25[7]) = ChildStatus;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v25);
  return (unsigned int)ChildStatus;
}
