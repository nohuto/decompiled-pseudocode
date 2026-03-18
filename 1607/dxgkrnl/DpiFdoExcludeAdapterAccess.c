/*
 * XREFs of DpiFdoExcludeAdapterAccess @ 0x1C01948A0
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000C484 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000EA98 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C0600 (DxgkWriteDiagEntry.c)
 *     DpiRequestIoPowerState @ 0x1C00E0898 (DpiRequestIoPowerState.c)
 *     DpiDxgkDdiProtectedCallback @ 0x1C019E97C (DpiDxgkDdiProtectedCallback.c)
 */

void __fastcall DpiFdoExcludeAdapterAccess(_QWORD *IoObject, _QWORD *Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v3; // rdi
  char *v4; // rbx
  char v5; // r13
  char v6; // r12
  char v7; // r15
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // r8
  char *v19; // r14
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rax
  _QWORD v27[4]; // [rsp+30h] [rbp-99h] BYREF
  PIO_WORKITEM IoWorkItema; // [rsp+50h] [rbp-79h]
  _QWORD v29[8]; // [rsp+60h] [rbp-69h] BYREF
  _QWORD v30[8]; // [rsp+A0h] [rbp-29h] BYREF

  v3 = IoObject[8];
  v4 = (char *)(Context + 4);
  v5 = 0;
  IoWorkItema = IoWorkItem;
  v6 = 0;
  v7 = 0;
  if ( *(_BYTE *)(v3 + 480) )
  {
    LODWORD(v10) = -1073741637;
    v11 = WdLogNewEntry5_WdError(IoObject);
    *(_QWORD *)(v11 + 24) = -1073741637LL;
LABEL_3:
    WdLogEvent5_WdError(v11);
    goto LABEL_23;
  }
  if ( (Context[2] & 1) == 0 )
    goto LABEL_12;
  memset(v27, 0, sizeof(v27));
  v27[2] = 0LL;
  v27[1] = 0LL;
  LODWORD(v27[0]) = 4;
  memset(v29, 0, sizeof(v29));
  v29[7] = 0LL;
  LOBYTE(v12) = 1;
  v29[0] = 0x4000000006LL;
  memset(&v29[1], 0, 36);
  v29[6] = 43LL;
  SMgrGdiCallout(v27, 0LL, v12, 0LL, 0LL, v4);
  v10 = SLODWORD(v27[3]);
  HIDWORD(v29[6]) = v27[3];
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v29);
  if ( (int)v10 >= 0 )
  {
LABEL_12:
    if ( (Context[2] & 2) == 0 )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v3 + 483) )
        DpiCheckForOutstandingD3Requests(v3);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
      KeWaitForSingleObject((PVOID)(v3 + 176), Executive, 0, 0, 0LL);
      v5 = 1;
      if ( *(_DWORD *)(v3 + 236) != 2 || *(_DWORD *)(v3 + 3768) == 1 || *(_DWORD *)(v3 + 284) != 1 )
      {
        LODWORD(v10) = -1073741661;
        v11 = WdLogNewEntry5_WdError(v16);
        *(_QWORD *)(v11 + 24) = -1073741661LL;
        goto LABEL_3;
      }
    }
    v17 = DpiRequestIoPowerState((__int64)IoObject, 5, (__int64)IoWorkItem, *((_DWORD *)Context + 4));
    LODWORD(v10) = v17;
    if ( v17 >= 0 )
    {
      v6 = 1;
      DpiDxgkDdiProtectedCallback(*(_QWORD *)(v3 + 48), *Context, Context[1], (unsigned int)v17);
      LODWORD(v10) = DpiRequestIoPowerState((__int64)IoObject, 6, v18, *((_DWORD *)Context + 4));
      if ( (int)v10 >= 0 )
        goto LABEL_24;
      LODWORD(v10) = 0;
    }
    else if ( v17 != -1071775482 )
    {
      goto LABEL_20;
    }
    v7 = 1;
    goto LABEL_20;
  }
  v14 = WdLogNewEntry5_WdError(v13);
  *(_QWORD *)(v14 + 24) = v10;
  WdLogEvent5_WdError(v14);
LABEL_20:
  if ( (int)v10 >= 0 )
    goto LABEL_24;
  if ( v6 == 1 )
    DpiRequestIoPowerState((__int64)IoObject, 6, v15, *((_DWORD *)Context + 4));
LABEL_23:
  DpiDxgkDdiProtectedCallback(*(_QWORD *)(v3 + 48), *Context, Context[1], (unsigned int)v10);
LABEL_24:
  if ( v5 == 1 )
  {
    KeReleaseMutex((PRKMUTEX)(v3 + 176), 0);
    if ( *(_BYTE *)(v3 + 483) )
      DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
    KeLeaveCriticalRegion();
  }
  if ( (Context[2] & 1) != 0 )
  {
    memset(v27, 0, sizeof(v27));
    LODWORD(v27[0]) = 4;
    v27[2] = 1LL;
    v27[1] = 0LL;
    memset(v29, 0, sizeof(v29));
    v29[0] = 0x4000000006LL;
    v19 = (char *)(Context + 4);
    memset(&v29[1], 0, 36);
    LOBYTE(v20) = 1;
    v29[7] = 0LL;
    v29[6] = 44LL;
    SMgrGdiCallout(v27, 0LL, v20, 0LL, 0LL, Context + 4);
    v10 = SLODWORD(v27[3]);
    HIDWORD(v29[6]) = v27[3];
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v29);
    if ( SLODWORD(v27[3]) < 0 )
    {
      v22 = WdLogNewEntry5_WdError(v21);
      *(_QWORD *)(v22 + 24) = v10;
      WdLogEvent5_WdError(v22);
    }
  }
  else
  {
    v19 = (char *)(Context + 4);
  }
  if ( v7 == 1 )
  {
    memset(v30, 0, sizeof(v30));
    v30[0] = 0x4000000006LL;
    memset(&v30[1], 0, 36);
    v30[7] = 0LL;
    v23 = *((_DWORD *)Context + 4);
    v30[6] = 45LL;
    if ( (v23 & 2) != 0 )
    {
      qword_1C0058068 = (__int64)&unk_1C0058078;
      dword_1C0058090 = 143;
      dword_1C0058058 = 8;
      qword_1C0058060 = 0LL;
      SMgrGdiCallout(&dword_1C0058058, 0LL, 0LL, 0LL, 0LL, v19);
    }
    else
    {
      memset(v29, 0, 0x20uLL);
      v27[3] = 143LL;
      LOBYTE(v24) = 1;
      memset(v27, 0, 24);
      v29[2] = v27;
      LODWORD(v29[0]) = 8;
      v29[1] = 0LL;
      SMgrGdiCallout(v29, 0LL, v24, 0LL, 0LL, v19);
      v10 = SLODWORD(v29[3]);
      if ( SLODWORD(v29[3]) < 0 )
      {
        v26 = WdLogNewEntry5_WdError(v25);
        *(_QWORD *)(v26 + 24) = v10;
        WdLogEvent5_WdError(v26);
      }
    }
    HIDWORD(v30[6]) = v10;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v30);
  }
  if ( (Context[2] & 2) != 0 )
    KeSetEvent((PRKEVENT)Context[3], 0, 0);
  ExFreePoolWithTag(Context, 0);
  IoFreeWorkItem(IoWorkItema);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), IoWorkItema, 0x20u);
}
