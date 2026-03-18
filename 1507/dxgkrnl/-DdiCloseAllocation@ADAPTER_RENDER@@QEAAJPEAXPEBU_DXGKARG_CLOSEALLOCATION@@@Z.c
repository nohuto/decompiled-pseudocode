/*
 * XREFs of ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x1C009265C
 * Callers:
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00800E0 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C012CA28 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00022B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002310 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiCloseAllocation(
        ADAPTER_RENDER *this,
        void *a2,
        const struct _DXGKARG_CLOSEALLOCATION *a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGPROCESS *v11; // rdi
  struct _KTHREAD **v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v18; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  _QWORD *v28; // rax
  const HANDLE *pOpenHandleList; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  unsigned __int8 v36; // cl
  _QWORD *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  _BYTE v40[8]; // [rsp+20h] [rbp-38h] BYREF
  struct _KTHREAD **v41; // [rsp+28h] [rbp-30h]
  int v42; // [rsp+30h] [rbp-28h]

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 5029);
  Current = DXGPROCESS::GetCurrent((__int64)this);
  v11 = Current;
  if ( Current )
    v12 = (struct _KTHREAD **)((char *)Current + 96);
  else
    v12 = 0LL;
  v42 = 0;
  v41 = v12;
  if ( v12 && v12[1] == KeGetCurrentThread() )
  {
    v33 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v33 + 24) = 1135LL;
    WdLogEvent5_WdAssertion(v33);
  }
  if ( v11 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v12);
    v42 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v18 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_16;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v34 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v34 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v34);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14, v13, v15, v16);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v18 = 0LL;
LABEL_16:
      v22 = 0;
      goto LABEL_17;
    }
    v18 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v18 = 0LL;
  }
  if ( !v18 )
    goto LABEL_16;
  v22 = *(_DWORD *)(v18 + 136);
LABEL_17:
  v24 = (*(int (__fastcall **)(void *, const struct _DXGKARG_CLOSEALLOCATION *))(*((_QWORD *)this + 2) + 576LL))(a2, a3);
  v27 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v27 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v23, v25);
    v35[3] = 275LL;
    v35[4] = 16LL;
    v35[5] = this;
    v35[6] = CurrentIrql;
    v36 = KeGetCurrentIrql();
    v35[7] = v36;
    WdLogEvent5_WdCriticalError(v35);
  }
  if ( v18 && *(_DWORD *)(v18 + 136) != v22 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v23, v25);
    v37[3] = 275LL;
    v37[4] = 25LL;
    v38 = *(int *)(v18 + 136);
    v37[7] = 0LL;
    v37[5] = v38;
    v37[6] = v22;
    WdLogEvent5_WdCriticalError(v37);
  }
  v28 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v23, v25, v26);
  v28[3] = v24;
  v28[4] = a2;
  v28[5] = a3->NumAllocations;
  pOpenHandleList = a3->pOpenHandleList;
  v28[6] = *pOpenHandleList;
  if ( (_DWORD)v24 )
  {
    v39 = WdLogNewEntry5_WdError(pOpenHandleList);
    *(_QWORD *)(v39 + 24) = v24;
    WdLogEvent5_WdError(v39);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v40);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v30, &EventProfilerExit, v31, 5029);
  return (unsigned int)v24;
}
