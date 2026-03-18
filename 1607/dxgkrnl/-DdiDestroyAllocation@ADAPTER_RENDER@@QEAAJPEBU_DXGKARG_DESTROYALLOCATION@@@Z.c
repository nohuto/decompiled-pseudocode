/*
 * XREFs of ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z @ 0x1C00925B8
 * Callers:
 *     ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C008F974 (-DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009BB8C (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C0151348 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiDestroyAllocation(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_DESTROYALLOCATION *a2,
        __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  struct _KTHREAD **v10; // rbx
  __int64 v11; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v13; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  _QWORD *v23; // rax
  const HANDLE *pAllocationList; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  unsigned __int8 v31; // cl
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  _BYTE v35[8]; // [rsp+20h] [rbp-38h] BYREF
  struct _KTHREAD **v36; // [rsp+28h] [rbp-30h]
  int v37; // [rsp+30h] [rbp-28h]

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5005);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  v9 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
    v10 = (struct _KTHREAD **)(ProcessDxgProcess + 88);
  else
    v10 = 0LL;
  v37 = 0;
  v36 = v10;
  if ( v10 && v10[1] == KeGetCurrentThread() )
  {
    v28 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v28 + 24) = 1142LL;
    WdLogEvent5_WdAssertion(v28);
  }
  if ( v9 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v10);
    v37 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v13 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_19;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v29 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v29 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v29);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v13 = 0LL;
LABEL_19:
      v17 = 0;
      goto LABEL_20;
    }
    v13 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v13 )
    goto LABEL_19;
  v17 = *(_DWORD *)(v13 + 136);
LABEL_20:
  v19 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_DESTROYALLOCATION *))(*((_QWORD *)this + 2) + 336LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  v22 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v22 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v18, v20);
    v30[3] = 275LL;
    v30[4] = 16LL;
    v30[5] = this;
    v30[6] = CurrentIrql;
    v31 = KeGetCurrentIrql();
    v30[7] = v31;
    WdLogEvent5_WdCriticalError(v30);
  }
  if ( v13 && *(_DWORD *)(v13 + 136) != v17 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v18, v20);
    v32[3] = 275LL;
    v32[4] = 25LL;
    v33 = *(int *)(v13 + 136);
    v32[7] = 0LL;
    v32[5] = v33;
    v32[6] = v17;
    WdLogEvent5_WdCriticalError(v32);
  }
  v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v18, v20, v21);
  v23[3] = v19;
  v23[4] = a2->Flags.Value;
  v23[5] = a2->hResource;
  v23[6] = a2->NumAllocations;
  pAllocationList = a2->pAllocationList;
  if ( pAllocationList )
    pAllocationList = (const HANDLE *)*pAllocationList;
  v23[7] = pAllocationList;
  if ( (_DWORD)v19 )
  {
    v34 = WdLogNewEntry5_WdError(pAllocationList);
    *(_QWORD *)(v34 + 24) = v19;
    WdLogEvent5_WdError(v34);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v35);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v25, &EventProfilerExit, v26, 5005);
  return (unsigned int)v19;
}
