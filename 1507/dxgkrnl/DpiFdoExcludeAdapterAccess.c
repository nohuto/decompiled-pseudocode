/*
 * XREFs of DpiFdoExcludeAdapterAccess @ 0x1C0167580
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0005A7C (DpiEnableD3Requests.c)
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C0008568 (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000C824 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C009AC30 (DxgkWriteDiagEntry.c)
 *     DpiRequestIoPowerState @ 0x1C00BC9E0 (DpiRequestIoPowerState.c)
 *     DpiDxgkDdiProtectedCallback @ 0x1C017074C (DpiDxgkDdiProtectedCallback.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // rcx
  _QWORD *v30; // rax
  _QWORD v31[4]; // [rsp+30h] [rbp-99h] BYREF
  PIO_WORKITEM IoWorkItema; // [rsp+50h] [rbp-79h]
  _QWORD v33[8]; // [rsp+60h] [rbp-69h] BYREF
  _DWORD v34[16]; // [rsp+A0h] [rbp-29h] BYREF

  v3 = IoObject[8];
  IoWorkItema = IoWorkItem;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( *(_BYTE *)(v3 + 448) )
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
  memset(v31, 0, sizeof(v31));
  LODWORD(v31[0]) = 4;
  v31[2] = 0LL;
  v31[1] = 0LL;
  memset(v33, 0, sizeof(v33));
  DxgkDiagInitializeCodePointPacket(v33, 43, 0, 0, 0);
  LOBYTE(v11) = 1;
  SMgrGdiCallout(v31, 0LL, v11, 0LL, 0LL);
  v9 = SLODWORD(v31[3]);
  HIDWORD(v33[6]) = v31[3];
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v33, v12, v13, v14);
  if ( (int)v9 >= 0 )
  {
LABEL_12:
    if ( (Context[2] & 2) == 0 )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v3 + 451) )
        DpiCheckForOutstandingD3Requests(v3);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
      KeWaitForSingleObject((PVOID)(v3 + 176), Executive, 0, 0, 0LL);
      v6 = 1;
      if ( *(_DWORD *)(v3 + 236) != 2 || *(_DWORD *)(v3 + 2584) == 1 || *(_DWORD *)(v3 + 248) != 1 )
      {
        LODWORD(v9) = -1073741661;
        v10 = (_QWORD *)WdLogNewEntry5_WdError(v17);
        v10[5] = -1073741661LL;
        goto LABEL_3;
      }
    }
    v18 = DpiRequestIoPowerState((__int64)IoObject, 4, 0LL, *((_DWORD *)Context + 4));
    LODWORD(v9) = v18;
    if ( v18 >= 0 )
    {
      v7 = 1;
      DpiDxgkDdiProtectedCallback(*(_QWORD *)(v3 + 48), *Context, Context[1], (unsigned int)v18);
      LODWORD(v9) = DpiRequestIoPowerState((__int64)IoObject, 5, 0LL, *((_DWORD *)Context + 4));
      if ( (int)v9 >= 0 )
        goto LABEL_24;
      LODWORD(v9) = 0;
    }
    else if ( v18 != -1071775482 )
    {
      goto LABEL_20;
    }
    v8 = 1;
    goto LABEL_20;
  }
  v16 = (_QWORD *)WdLogNewEntry5_WdError(v15);
  v16[4] = 0LL;
  v16[3] = DpiFdoExcludeAdapterAccess;
  v16[5] = v9;
  WdLogEvent5_WdError(v16);
LABEL_20:
  if ( (int)v9 >= 0 )
    goto LABEL_24;
  if ( v7 == 1 )
    DpiRequestIoPowerState((__int64)IoObject, 5, 0LL, *((_DWORD *)Context + 4));
LABEL_23:
  DpiDxgkDdiProtectedCallback(*(_QWORD *)(v3 + 48), *Context, Context[1], (unsigned int)v9);
LABEL_24:
  if ( v6 == 1 )
  {
    KeReleaseMutex((PRKMUTEX)(v3 + 176), 0);
    if ( *(_BYTE *)(v3 + 451) )
      DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
    KeLeaveCriticalRegion();
  }
  if ( (Context[2] & 1) != 0 )
  {
    memset(v31, 0, sizeof(v31));
    LODWORD(v31[0]) = 4;
    v31[2] = 1LL;
    v31[1] = 0LL;
    memset(v33, 0, sizeof(v33));
    DxgkDiagInitializeCodePointPacket(v33, 44, 0, 0, 0);
    LOBYTE(v19) = 1;
    SMgrGdiCallout(v31, 0LL, v19, 0LL, 0LL);
    v9 = SLODWORD(v31[3]);
    HIDWORD(v33[6]) = v31[3];
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v33, v20, v21, v22);
    if ( SLODWORD(v31[3]) < 0 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdError(v23);
      v24[3] = DpiFdoExcludeAdapterAccess;
      v24[4] = 0LL;
      v24[5] = v9;
      WdLogEvent5_WdError(v24);
    }
  }
  if ( v8 == 1 )
  {
    memset(v34, 0, sizeof(v34));
    DxgkDiagInitializeCodePointPacket(v34, 45, 0, 0, 0);
    if ( (Context[2] & 2) != 0 )
    {
      dword_1C0047DD8 = 143;
      qword_1C0047DB0 = (__int64)&unk_1C0047DC0;
      dword_1C0047DA0 = 8;
      qword_1C0047DA8 = 0LL;
      SMgrGdiCallout(&dword_1C0047DA0, 0LL, 0LL, 0LL, 0LL);
    }
    else
    {
      memset(v33, 0, 0x20uLL);
      memset(v31, 0, 24);
      v31[3] = 143LL;
      LOBYTE(v28) = 1;
      LODWORD(v33[0]) = 8;
      v33[2] = v31;
      v33[1] = 0LL;
      SMgrGdiCallout(v33, 0LL, v28, 0LL, 0LL);
      v9 = SLODWORD(v33[3]);
      if ( SLODWORD(v33[3]) < 0 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdError(v29);
        v30[3] = DpiFdoExcludeAdapterAccess;
        v30[4] = 0LL;
        v30[5] = v9;
        WdLogEvent5_WdError(v30);
      }
    }
    v34[13] = v9;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v34, v25, v26, v27);
  }
  if ( (Context[2] & 2) != 0 )
    KeSetEvent((PRKEVENT)Context[3], 0, 0);
  ExFreePoolWithTag(Context, 0);
  IoFreeWorkItem(IoWorkItema);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), IoWorkItema, 0x20u);
}
