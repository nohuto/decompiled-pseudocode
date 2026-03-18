/*
 * XREFs of ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z @ 0x1C00CD940
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00085E0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C000903C (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C009F904 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0147094 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0168F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddWaitForVerticalBlankEvent(DXGADAPTER *this, unsigned int a2, __int64 Count, PVOID Object[])
{
  ULONG v5; // r13d
  __int64 v6; // rsi
  char v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  NTSTATUS v11; // edi
  __int64 v12; // r8
  char v13; // r15
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct DXGADAPTER *v20; // rcx
  struct DXGADAPTER *v21; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r9
  __int64 v41; // rbx
  __int64 v42; // rax
  _QWORD *v43; // rax
  _BYTE v44[8]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v45[8]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+60h] [rbp-A0h]
  struct DXGADAPTER *v47; // [rsp+68h] [rbp-98h]
  char v48; // [rsp+70h] [rbp-90h]
  _BYTE v49[8]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v50; // [rsp+80h] [rbp-80h]
  struct DXGADAPTER *v51; // [rsp+88h] [rbp-78h]
  char v52; // [rsp+90h] [rbp-70h]
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp-60h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+B0h] [rbp-50h] BYREF

  v5 = Count;
  v6 = a2;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, Count, 3015);
  v8 = 0;
  if ( !this )
  {
    v23 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v23 + 24) = 5572LL;
    WdLogEvent5_WdAssertion(v23);
  }
  v9 = *((_QWORD *)this + 266);
  if ( !v9 )
  {
    v11 = -1073741637;
    goto LABEL_54;
  }
  if ( (unsigned int)v6 >= *(_DWORD *)(v9 + 80) )
  {
    v24 = WdLogNewEntry5_WdError(this);
    v11 = -1073741811;
    *(_QWORD *)(v24 + 24) = v6;
    *(_QWORD *)(v24 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v24);
LABEL_54:
    v43 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v43[5] = v11;
    v43[3] = this;
    v43[4] = v6;
    WdLogEvent5_WdError(v43);
    goto LABEL_36;
  }
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  v47 = this;
  v48 = 0;
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  v51 = this;
  v46 = -1LL;
  v52 = 0;
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  v50 = -1LL;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)this + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)this + 2), this);
  v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v44);
  if ( v11 < 0 )
    goto LABEL_26;
  if ( !*((_QWORD *)this + 266) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v25 + 24) = 2413LL;
    WdLogEvent5_WdAssertion(v25);
  }
  v13 = 0;
  if ( !*((_QWORD *)this + 267) )
  {
    if ( DXGADAPTER::IsVSyncAvailable(this, v6) )
    {
      ADAPTER_DISPLAY::ControlVSyncAdapter(*((ADAPTER_DISPLAY **)this + 266), v6);
      goto LABEL_14;
    }
    goto LABEL_43;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 267) + 376LL)
                                                                      + 8LL)
                                                          + 448LL))(
          *(_QWORD *)(*((_QWORD *)this + 267) + 384LL),
          (unsigned int)v6) )
    goto LABEL_43;
  _InterlockedIncrement((volatile signed __int32 *)this + 540);
  v13 = 1;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 267) + 376LL)
                                                                      + 8LL)
                                                          + 456LL))(
          *(_QWORD *)(*((_QWORD *)this + 267) + 384LL),
          (unsigned int)v6) )
  {
    LOBYTE(v14) = 1;
    if ( (*(int (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 267) + 376LL) + 8LL)
                                                         + 464LL))(
           *(_QWORD *)(*((_QWORD *)this + 267) + 384LL),
           1LL,
           v14) >= 0 )
    {
      v8 = 1;
      goto LABEL_14;
    }
    DXGADAPTER::DecrementVSyncWaiter(this);
    v27 = WdLogNewEntry5_WdError(v26);
    *(_QWORD *)(v27 + 24) = 2460LL;
    WdLogEvent5_WdError(v27);
LABEL_43:
    v11 = -1073740759;
    goto LABEL_26;
  }
LABEL_14:
  if ( v47 != v51 )
    COREACCESS::Release((COREACCESS *)v49);
  COREACCESS::Release((COREACCESS *)v45);
  v15 = *((_QWORD *)this + 266);
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v15 + 16)) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v28 + 24) = 5463LL;
    WdLogEvent5_WdAssertion(v28);
  }
  if ( v5 - 1 > 8 )
  {
    v29 = WdLogNewEntry5_WdError(v16);
    v11 = -1073741811;
    *(_QWORD *)(v29 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v29);
  }
  else
  {
    v17 = *(_QWORD *)(v15 + 112) + 808LL;
    Timeout.QuadPart = -800000LL;
    *Object = (PVOID)(v17 + 1016 * v6);
    v11 = KeWaitForMultipleObjects(v5, Object, WaitAny, Executive, 0, 0, &Timeout, &WaitBlockArray);
  }
  if ( v13 )
  {
    if ( !*((_QWORD *)this + 267) )
    {
      v30 = WdLogNewEntry5_WdAssertion(v19);
      *(_QWORD *)(v30 + 24) = 2498LL;
      WdLogEvent5_WdAssertion(v30);
    }
    if ( _InterlockedDecrement((volatile signed __int32 *)this + 540) < 0 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v18, v12);
      v31[3] = 275LL;
      v31[4] = 28LL;
      v31[5] = this;
      v32 = *((unsigned int *)this + 540);
      v31[7] = 0LL;
      v31[6] = v32;
      WdLogEvent5_WdCriticalError(v31);
    }
  }
  if ( !v8 )
    goto LABEL_26;
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v44) < 0 )
  {
    v42 = WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
    *(_QWORD *)(v42 + 24) = 2524LL;
    goto LABEL_52;
  }
  v37 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 267) + 376LL) + 8LL)
                                                   + 464LL))(
          *(_QWORD *)(*((_QWORD *)this + 267) + 384LL),
          1LL);
  v41 = v37;
  if ( v37 < 0 )
  {
    v42 = WdLogNewEntry5_WdWarning(v39, v38, v12, v40);
    *(_QWORD *)(v42 + 24) = v41;
LABEL_52:
    WdLogEvent5_WdWarning(v42);
  }
LABEL_26:
  v20 = v51;
  if ( v51 )
  {
    if ( v52 )
    {
      COREACCESS::Release((COREACCESS *)v49);
      v20 = v51;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v20 + 2), v20);
  }
  v21 = v47;
  if ( v47 )
  {
    if ( v48 )
    {
      COREACCESS::Release((COREACCESS *)v45);
      v21 = v47;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v21 + 2), v21);
  }
LABEL_36:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v21, &EventProfilerExit, v12, 3015);
  return (unsigned int)v11;
}
