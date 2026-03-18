/*
 * XREFs of ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z @ 0x1C008A580
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001EBC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C00026A0 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00788C0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008CBD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C011E940 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01201C0 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C013EFB8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddWaitForVerticalBlankEvent(struct DXGADAPTER *a1, unsigned int a2, __int64 a3, PVOID *a4)
{
  ULONG v5; // r13d
  __int64 v6; // r14
  int PairingAdapters; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // r15
  __int64 v14; // rbx
  volatile signed __int64 *v15; // rbx
  signed __int64 v16; // rsi
  DXGADAPTER *v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  char v23; // si
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rcx
  DXGADAPTER *v33; // rsi
  struct DXGADAPTER *v34; // rcx
  __int64 v35; // rdi
  DXGADAPTER *v36; // rcx
  __int64 v37; // rdi
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  DXGADAPTER *v63; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v64[8]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v65[8]; // [rsp+50h] [rbp-B0h] BYREF
  DXGADAPTER *v66; // [rsp+58h] [rbp-A8h]
  char v67; // [rsp+60h] [rbp-A0h]
  _BYTE v68[8]; // [rsp+68h] [rbp-98h] BYREF
  struct DXGADAPTER *v69; // [rsp+70h] [rbp-90h]
  char v70; // [rsp+78h] [rbp-88h]
  union _LARGE_INTEGER Timeout; // [rsp+80h] [rbp-80h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+90h] [rbp-70h] BYREF

  v5 = a3;
  v6 = a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3015);
  PairingAdapters = DxgkpGetPairingAdapters(a1, v6, 0LL, &v63);
  v13 = 0;
  v14 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v39[3] = a1;
    v39[4] = v6;
    v39[5] = v14;
    WdLogEvent5_WdError(v39);
    goto LABEL_53;
  }
  v15 = (volatile signed __int64 *)v63;
  if ( !v63 )
  {
    v40 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v40 + 24) = 2382LL;
    WdLogEvent5_WdAssertion(v40);
  }
  v66 = (DXGADAPTER *)v15;
  v67 = 0;
  if ( v15 )
  {
    if ( _InterlockedAdd64(v15 + 3, 1uLL) <= 0 )
    {
      v41 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
      *(_QWORD *)(v41 + 24) = 1050LL;
      WdLogEvent5_WdAssertion(v41);
    }
    v15 = (volatile signed __int64 *)v63;
  }
  v69 = (struct DXGADAPTER *)v15;
  v70 = 0;
  if ( v15 )
  {
    if ( _InterlockedAdd64(v15 + 3, 1uLL) <= 0 )
    {
      v42 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
      *(_QWORD *)(v42 + 24) = 1050LL;
      WdLogEvent5_WdAssertion(v42);
    }
    v15 = (volatile signed __int64 *)v63;
  }
  v16 = _InterlockedExchangeAdd64(v15 + 3, 0xFFFFFFFFFFFFFFFFuLL);
  v17 = v63;
  v18 = v16 - 1;
  if ( !v18 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v63 + 2), v63);
  if ( v18 < 0 )
  {
    v43 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v43 + 24) = 1067LL;
    WdLogEvent5_WdAssertion(v43);
  }
  LODWORD(v14) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v64);
  if ( (int)v14 < 0 )
    goto LABEL_39;
  if ( !*((_QWORD *)v17 + 247) )
  {
    v44 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
    *(_QWORD *)(v44 + 24) = 2396LL;
    WdLogEvent5_WdAssertion(v44);
  }
  v23 = 0;
  if ( !*((_QWORD *)v17 + 248) )
  {
    if ( DXGADAPTER::IsVSyncAvailable(v17, v6) )
    {
      ADAPTER_DISPLAY::ControlVSyncAdapter(*((ADAPTER_DISPLAY **)v17 + 247), v6);
      goto LABEL_23;
    }
    goto LABEL_60;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 248) + 376LL) + 8LL)
                                                          + 448LL))(
          *(_QWORD *)(*((_QWORD *)v17 + 248) + 384LL),
          (unsigned int)v6) )
    goto LABEL_60;
  _InterlockedIncrement((volatile signed __int32 *)v17 + 500);
  v23 = 1;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 248) + 376LL) + 8LL)
                                                          + 456LL))(
          *(_QWORD *)(*((_QWORD *)v17 + 248) + 384LL),
          (unsigned int)v6) )
  {
    LOBYTE(v26) = 1;
    if ( (*(int (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 248) + 376LL) + 8LL)
                                                         + 464LL))(
           *(_QWORD *)(*((_QWORD *)v17 + 248) + 384LL),
           1LL,
           v26) >= 0 )
    {
      v13 = 1;
      goto LABEL_23;
    }
    DXGADAPTER::DecrementVSyncWaiter(v63);
    v46 = WdLogNewEntry5_WdError(v45);
    *(_QWORD *)(v46 + 24) = 2443LL;
    WdLogEvent5_WdError(v46);
LABEL_60:
    LODWORD(v14) = -1073740759;
    goto LABEL_39;
  }
LABEL_23:
  if ( v66 != v69 )
    COREACCESS::Release((COREACCESS *)v68);
  if ( !v67 )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v24, v26);
    v47[5] = v65;
    v47[3] = 275LL;
    v47[4] = 4LL;
    v47[6] = 0LL;
    v47[7] = 0LL;
    WdLogEvent5_WdCriticalError(v47);
  }
  v67 = 0;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v66 + 18) )
    DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v66);
  v14 = *((_QWORD *)v17 + 247);
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v14 + 16)) )
  {
    v48 = WdLogNewEntry5_WdAssertion(v28, v27, v29, v30);
    *(_QWORD *)(v48 + 24) = 23906LL;
    WdLogEvent5_WdAssertion(v48);
  }
  if ( v5 - 1 > 8 )
  {
    v49 = WdLogNewEntry5_WdError(v28);
    LODWORD(v14) = -1073741811;
    *(_QWORD *)(v49 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v49);
  }
  else
  {
    v31 = *(_QWORD *)(v14 + 112) + 800LL;
    Timeout.QuadPart = -800000LL;
    *a4 = (PVOID)(v31 + 1008 * v6);
    LODWORD(v14) = KeWaitForMultipleObjects(v5, a4, WaitAny, Executive, 0, 0, &Timeout, &WaitBlockArray);
  }
  if ( v23 )
  {
    if ( !*((_QWORD *)v17 + 248) )
    {
      v50 = WdLogNewEntry5_WdAssertion(v32, v19, v21, v22);
      *(_QWORD *)(v50 + 24) = 2481LL;
      WdLogEvent5_WdAssertion(v50);
    }
    v33 = v63;
    if ( _InterlockedDecrement((volatile signed __int32 *)v63 + 500) < 0 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v32, v19, v21);
      v51[5] = v63;
      v51[3] = 275LL;
      v51[4] = 28LL;
      v52 = *((unsigned int *)v33 + 500);
      v51[7] = 0LL;
      v51[6] = v52;
      WdLogEvent5_WdCriticalError(v51);
    }
  }
  if ( !v13 )
    goto LABEL_39;
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v64) < 0 )
  {
    v60 = WdLogNewEntry5_WdWarning(v54, v53, v55, v56);
    *(_QWORD *)(v60 + 24) = 2507LL;
    goto LABEL_69;
  }
  v57 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 248) + 376LL) + 8LL)
                                                   + 464LL))(
          *(_QWORD *)(*((_QWORD *)v17 + 248) + 384LL),
          1LL);
  v59 = v57;
  if ( v57 < 0 )
  {
    v60 = WdLogNewEntry5_WdWarning(v58, v19, v21, v22);
    *(_QWORD *)(v60 + 24) = v59;
LABEL_69:
    WdLogEvent5_WdWarning(v60);
  }
LABEL_39:
  v34 = v69;
  if ( v69 )
  {
    if ( v70 )
    {
      COREACCESS::Release((COREACCESS *)v68);
      v34 = v69;
    }
    v35 = _InterlockedDecrement64((volatile signed __int64 *)v34 + 3);
    if ( !v35 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v34 + 2), v34);
    if ( v35 < 0 )
    {
      v61 = WdLogNewEntry5_WdAssertion(v34, v19, v21, v22);
      *(_QWORD *)(v61 + 24) = 1067LL;
      WdLogEvent5_WdAssertion(v61);
    }
  }
  v36 = v66;
  if ( v66 )
  {
    if ( v67 )
    {
      COREACCESS::Release((COREACCESS *)v65);
      v36 = v66;
    }
    v37 = _InterlockedDecrement64((volatile signed __int64 *)v36 + 3);
    if ( !v37 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v36 + 2), v36);
    if ( v37 < 0 )
    {
      v62 = WdLogNewEntry5_WdAssertion(v36, v19, v21, v22);
      *(_QWORD *)(v62 + 24) = 1067LL;
      WdLogEvent5_WdAssertion(v62);
    }
  }
LABEL_53:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)v36, &EventProfilerExit, v21, 3015);
  return (unsigned int)v14;
}
