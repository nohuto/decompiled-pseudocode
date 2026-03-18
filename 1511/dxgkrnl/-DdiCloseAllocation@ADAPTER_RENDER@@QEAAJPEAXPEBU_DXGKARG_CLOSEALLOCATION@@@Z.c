/*
 * XREFs of ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x1C0069020
 * Callers:
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00742C4 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C0132F4C (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiCloseAllocation(
        ADAPTER_RENDER *this,
        void *a2,
        const struct _DXGKARG_CLOSEALLOCATION *a3)
{
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned __int8 CurrentIrql; // bp
  __int64 v15; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  _QWORD *v25; // rax
  const HANDLE *pOpenHandleList; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // r9d
  __int64 v33; // rax
  _QWORD *v34; // rax
  unsigned __int8 v35; // cl
  _QWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  _BYTE v39[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v40; // [rsp+28h] [rbp-30h]
  int v41; // [rsp+30h] [rbp-28h]

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 5029);
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( ProcessWin32Process )
  {
    v9 = *(_QWORD *)(ProcessWin32Process + 248);
  }
  else
  {
    v30 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v30 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v30);
    v9 = 0LL;
  }
  if ( v9 )
    v10 = v9 + 96;
  else
    v10 = 0LL;
  v41 = 0;
  v40 = v10;
  if ( v10 && *(struct _KTHREAD **)(v10 + 8) == KeGetCurrentThread() )
  {
    v31 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v31 + 24) = 1155LL;
    WdLogEvent5_WdAssertion(v31);
  }
  if ( v9 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v10, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v32 = *(_DWORD *)(v10 + 16);
        if ( v32 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v11, &EventBlockThread, v12, v32);
      }
      ExAcquirePushLockExclusiveEx(v10, 0LL);
    }
    *(_QWORD *)(v10 + 8) = KeGetCurrentThread();
    v41 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v15 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_32;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v33 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v33 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v33);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v15 = 0LL;
      goto LABEL_32;
    }
    v15 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v15 = 0LL;
  }
  if ( v15 )
  {
    v19 = *(_DWORD *)(v15 + 136);
    goto LABEL_22;
  }
LABEL_32:
  v19 = 0;
LABEL_22:
  v21 = (*(int (__fastcall **)(void *, const struct _DXGKARG_CLOSEALLOCATION *))(*((_QWORD *)this + 2) + 576LL))(a2, a3);
  v24 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v24 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v20, v22);
    v34[3] = 275LL;
    v34[4] = 16LL;
    v34[5] = this;
    v34[6] = CurrentIrql;
    v35 = KeGetCurrentIrql();
    v34[7] = v35;
    WdLogEvent5_WdCriticalError(v34);
  }
  if ( v15 && *(_DWORD *)(v15 + 136) != v19 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v20, v22);
    v36[3] = 275LL;
    v36[4] = 25LL;
    v37 = *(int *)(v15 + 136);
    v36[7] = 0LL;
    v36[5] = v37;
    v36[6] = v19;
    WdLogEvent5_WdCriticalError(v36);
  }
  v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, v20, v22, v23);
  v25[3] = v21;
  v25[4] = a2;
  v25[5] = a3->NumAllocations;
  pOpenHandleList = a3->pOpenHandleList;
  v25[6] = *pOpenHandleList;
  if ( (_DWORD)v21 )
  {
    v38 = WdLogNewEntry5_WdError(pOpenHandleList);
    *(_QWORD *)(v38 + 24) = v21;
    WdLogEvent5_WdError(v38);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v39);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v27, &EventProfilerExit, v28, 5029);
  return (unsigned int)v21;
}
