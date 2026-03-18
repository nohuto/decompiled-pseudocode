/*
 * XREFs of DpiFdoExcludeAdapterAccess @ 0x1C016BC30
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C000A24C (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     DpiEnableD3Requests @ 0x1C000B7B0 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000DC2C (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00A68F0 (DxgkWriteDiagEntry.c)
 *     DpiRequestIoPowerState @ 0x1C00CB040 (DpiRequestIoPowerState.c)
 *     DpiDxgkDdiProtectedCallback @ 0x1C0174FCC (DpiDxgkDdiProtectedCallback.c)
 */

void __fastcall DpiFdoExcludeAdapterAccess(_QWORD *IoObject, _QWORD *Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v3; // rdi
  char v6; // r12
  char v7; // r13
  char v8; // r15
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  _QWORD *v21; // rax
  _QWORD v22[4]; // [rsp+30h] [rbp-99h] BYREF
  PIO_WORKITEM IoWorkItema; // [rsp+50h] [rbp-79h]
  _QWORD v24[8]; // [rsp+60h] [rbp-69h] BYREF
  _DWORD v25[16]; // [rsp+A0h] [rbp-29h] BYREF

  v3 = IoObject[8];
  IoWorkItema = IoWorkItem;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( *(_BYTE *)(v3 + 480) )
  {
    LODWORD(v9) = -1073741637;
    v10 = (_QWORD *)WdLogNewEntry5_WdError(IoObject);
    v10[5] = -1073741637LL;
LABEL_3:
    v10[4] = 0LL;
    v10[3] = DpiFdoExcludeAdapterAccess;
    WdLogEvent5_WdError(v10);
    goto LABEL_23;
  }
  if ( (Context[2] & 1) == 0 )
    goto LABEL_12;
  memset(v22, 0, sizeof(v22));
  LODWORD(v22[0]) = 4;
  v22[2] = 0LL;
  v22[1] = 0LL;
  memset(v24, 0, sizeof(v24));
  DxgkDiagInitializeCodePointPacket(v24, 43, 0, 0, 0);
  LOBYTE(v11) = 1;
  SMgrGdiCallout(v22, 0LL, v11, 0LL, 0LL);
  v9 = SLODWORD(v22[3]);
  HIDWORD(v24[6]) = v22[3];
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v24);
  if ( (int)v9 >= 0 )
  {
LABEL_12:
    if ( (Context[2] & 2) == 0 )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v3 + 483) )
        DpiCheckForOutstandingD3Requests(v3);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
      KeWaitForSingleObject((PVOID)(v3 + 176), Executive, 0, 0, 0LL);
      v6 = 1;
      if ( *(_DWORD *)(v3 + 236) != 2 || *(_DWORD *)(v3 + 2624) == 1 || *(_DWORD *)(v3 + 284) != 1 )
      {
        LODWORD(v9) = -1073741661;
        v10 = (_QWORD *)WdLogNewEntry5_WdError(v14);
        v10[5] = -1073741661LL;
        goto LABEL_3;
      }
    }
    v15 = DpiRequestIoPowerState((__int64)IoObject, 5, 0LL, *((_DWORD *)Context + 4));
    LODWORD(v9) = v15;
    if ( v15 >= 0 )
    {
      v7 = 1;
      DpiDxgkDdiProtectedCallback(*(_QWORD *)(v3 + 48), *Context, Context[1], (unsigned int)v15);
      LODWORD(v9) = DpiRequestIoPowerState((__int64)IoObject, 6, 0LL, *((_DWORD *)Context + 4));
      if ( (int)v9 >= 0 )
        goto LABEL_24;
      LODWORD(v9) = 0;
    }
    else if ( v15 != -1071775482 )
    {
      goto LABEL_20;
    }
    v8 = 1;
    goto LABEL_20;
  }
  v13 = (_QWORD *)WdLogNewEntry5_WdError(v12);
  v13[4] = 0LL;
  v13[3] = DpiFdoExcludeAdapterAccess;
  v13[5] = v9;
  WdLogEvent5_WdError(v13);
LABEL_20:
  if ( (int)v9 >= 0 )
    goto LABEL_24;
  if ( v7 == 1 )
    DpiRequestIoPowerState((__int64)IoObject, 6, 0LL, *((_DWORD *)Context + 4));
LABEL_23:
  DpiDxgkDdiProtectedCallback(*(_QWORD *)(v3 + 48), *Context, Context[1], (unsigned int)v9);
LABEL_24:
  if ( v6 == 1 )
  {
    KeReleaseMutex((PRKMUTEX)(v3 + 176), 0);
    if ( *(_BYTE *)(v3 + 483) )
      DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
    KeLeaveCriticalRegion();
  }
  if ( (Context[2] & 1) != 0 )
  {
    memset(v22, 0, sizeof(v22));
    LODWORD(v22[0]) = 4;
    v22[2] = 1LL;
    v22[1] = 0LL;
    memset(v24, 0, sizeof(v24));
    DxgkDiagInitializeCodePointPacket(v24, 44, 0, 0, 0);
    LOBYTE(v16) = 1;
    SMgrGdiCallout(v22, 0LL, v16, 0LL, 0LL);
    v9 = SLODWORD(v22[3]);
    HIDWORD(v24[6]) = v22[3];
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v24);
    if ( SLODWORD(v22[3]) < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v17);
      v18[3] = DpiFdoExcludeAdapterAccess;
      v18[4] = 0LL;
      v18[5] = v9;
      WdLogEvent5_WdError(v18);
    }
  }
  if ( v8 == 1 )
  {
    memset(v25, 0, sizeof(v25));
    DxgkDiagInitializeCodePointPacket(v25, 45, 0, 0, 0);
    if ( (Context[2] & 2) != 0 )
    {
      dword_1C0047E58 = 143;
      qword_1C0047E30 = (__int64)&unk_1C0047E40;
      dword_1C0047E20 = 8;
      qword_1C0047E28 = 0LL;
      SMgrGdiCallout(&dword_1C0047E20, 0LL, 0LL, 0LL, 0LL);
    }
    else
    {
      memset(v24, 0, 0x20uLL);
      memset(v22, 0, 24);
      v22[3] = 143LL;
      LOBYTE(v19) = 1;
      LODWORD(v24[0]) = 8;
      v24[2] = v22;
      v24[1] = 0LL;
      SMgrGdiCallout(v24, 0LL, v19, 0LL, 0LL);
      v9 = SLODWORD(v24[3]);
      if ( SLODWORD(v24[3]) < 0 )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdError(v20);
        v21[3] = DpiFdoExcludeAdapterAccess;
        v21[4] = 0LL;
        v21[5] = v9;
        WdLogEvent5_WdError(v21);
      }
    }
    v25[13] = v9;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v25);
  }
  if ( (Context[2] & 2) != 0 )
    KeSetEvent((PRKEVENT)Context[3], 0, 0);
  ExFreePoolWithTag(Context, 0);
  IoFreeWorkItem(IoWorkItema);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), IoWorkItema, 0x20u);
}
