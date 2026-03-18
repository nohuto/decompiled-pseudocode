/*
 * XREFs of ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z @ 0x1C008B040
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C0003400 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003C64 (-Release@COREACCESS@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C0079E00 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008A660 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?WaitForEventsOrVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI_NIPEAPEAU_KEVENT@@@Z @ 0x1C009A200 (-WaitForEventsOrVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI_NIPEAPEAU_KEVENT@@@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0125D08 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 */

__int64 __fastcall DxgkCddWaitForVerticalBlankEvent(
        struct DXGADAPTER *a1,
        unsigned int a2,
        __int64 a3,
        struct _KEVENT **a4)
{
  __int64 v5; // rsi
  int PairingAdapters; // eax
  __int64 v8; // rcx
  ADAPTER_DISPLAY **v9; // rdi
  _QWORD *v10; // rax
  DXGADAPTER *v11; // rcx
  __int64 v12; // r8
  DXGADAPTER *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  char v19; // r12
  char v20; // r15
  char *v21; // r14
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r9
  __int64 v35; // rbx
  __int64 v36; // rax
  DXGADAPTER *v37; // rcx
  DXGADAPTER *v39; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v40[8]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v41[8]; // [rsp+40h] [rbp-30h] BYREF
  DXGADAPTER *v42; // [rsp+48h] [rbp-28h]
  char v43; // [rsp+50h] [rbp-20h]
  _BYTE v44[8]; // [rsp+58h] [rbp-18h] BYREF
  DXGADAPTER *v45; // [rsp+60h] [rbp-10h]
  char v46; // [rsp+68h] [rbp-8h]
  unsigned int v47; // [rsp+B0h] [rbp+40h]

  v47 = a3;
  v5 = a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3015);
  PairingAdapters = DxgkpGetPairingAdapters(a1, v5, 0LL, &v39);
  v9 = (ADAPTER_DISPLAY **)PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v10[3] = a1;
    v10[4] = v5;
    v10[5] = v9;
    WdLogEvent5_WdError(v10);
    goto LABEL_49;
  }
  v13 = v39;
  if ( !v39 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v14 + 24) = 2398LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v42 = v13;
  v43 = 0;
  if ( v13 )
  {
    if ( _InterlockedAdd64((volatile signed __int64 *)v13 + 3, 1uLL) <= 0 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v15 + 24) = 1141LL;
      WdLogEvent5_WdAssertion(v15);
    }
    v13 = v39;
  }
  v45 = v13;
  v46 = 0;
  if ( v13 )
  {
    if ( _InterlockedAdd64((volatile signed __int64 *)v13 + 3, 1uLL) <= 0 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v16 + 24) = 1141LL;
      WdLogEvent5_WdAssertion(v16);
    }
    v13 = v39;
  }
  DXGADAPTER::ReleaseReference(v13);
  LODWORD(v9) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v40);
  if ( (int)v9 >= 0 )
  {
    v9 = (ADAPTER_DISPLAY **)((char *)v13 + 1984);
    if ( !*((_QWORD *)v13 + 248) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v17);
      *(_QWORD *)(v18 + 24) = 2412LL;
      WdLogEvent5_WdAssertion(v18);
    }
    v19 = 0;
    v20 = 0;
    v21 = (char *)v13 + 1992;
    if ( *((_QWORD *)v13 + 249) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v21 + 400LL) + 8LL)
                                                              + 448LL))(
              *(_QWORD *)(*(_QWORD *)v21 + 408LL),
              (unsigned int)v5) )
      {
LABEL_27:
        LODWORD(v9) = -1073740759;
        goto LABEL_41;
      }
      _InterlockedIncrement((volatile signed __int32 *)v13 + 504);
      v19 = 1;
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v21 + 400LL) + 8LL)
                                                              + 456LL))(
              *(_QWORD *)(*(_QWORD *)v21 + 408LL),
              (unsigned int)v5) )
      {
        LOBYTE(v22) = 1;
        if ( (*(int (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v21 + 400LL) + 8LL)
                                                             + 464LL))(
               *(_QWORD *)(*(_QWORD *)v21 + 408LL),
               1LL,
               v22) < 0 )
        {
          DXGADAPTER::DecrementVSyncWaiter(v39);
          v24 = WdLogNewEntry5_WdError(v23);
          *(_QWORD *)(v24 + 24) = 2459LL;
          WdLogEvent5_WdError(v24);
          goto LABEL_27;
        }
        v20 = 1;
      }
      v13 = v39;
    }
    else
    {
      if ( !(unsigned __int8)DXGADAPTER::IsVSyncAvailable(v13, (unsigned int)v5) )
        goto LABEL_27;
      ADAPTER_DISPLAY::ControlVSyncAdapter(*v9, v5);
    }
    if ( v42 != v45 )
      COREACCESS::Release((COREACCESS *)v44);
    COREACCESS::Release((COREACCESS *)v41);
    LODWORD(v9) = ADAPTER_DISPLAY::WaitForEventsOrVerticalBlankEvent(*v9, v5, 0, v47, a4);
    if ( v19 )
    {
      if ( !*(_QWORD *)v21 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v25);
        *(_QWORD *)(v26 + 24) = 2497LL;
        WdLogEvent5_WdAssertion(v26);
      }
      DXGADAPTER::DecrementVSyncWaiter(v13);
    }
    if ( !v20 )
      goto LABEL_41;
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v40) < 0 )
    {
      v36 = WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
      *(_QWORD *)(v36 + 24) = 2523LL;
    }
    else
    {
      v31 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v21 + 400LL) + 8LL) + 464LL))(
              *(_QWORD *)(*(_QWORD *)v21 + 408LL),
              1LL);
      v35 = v31;
      if ( v31 >= 0 )
        goto LABEL_41;
      v36 = WdLogNewEntry5_WdWarning(v33, v32, v12, v34);
      *(_QWORD *)(v36 + 24) = v35;
    }
    WdLogEvent5_WdWarning(v36);
  }
LABEL_41:
  v37 = v45;
  if ( v45 )
  {
    if ( v46 )
    {
      COREACCESS::Release((COREACCESS *)v44);
      v37 = v45;
    }
    DXGADAPTER::ReleaseReference(v37);
  }
  v11 = v42;
  if ( v42 )
  {
    if ( v43 )
    {
      COREACCESS::Release((COREACCESS *)v41);
      v11 = v42;
    }
    DXGADAPTER::ReleaseReference(v11);
  }
LABEL_49:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)v11, &EventProfilerExit, v12, 3015);
  return (unsigned int)v9;
}
