/*
 * XREFs of ?DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z @ 0x1C0091688
 * Callers:
 *     ?ADAPTER_RENDER_DdiCreateContext@@YAJPEAVADAPTER_RENDER@@PEAXPEAU_DXGKARG_CREATECONTEXT@@@Z @ 0x1C0010C20 (-ADAPTER_RENDER_DdiCreateContext@@YAJPEAVADAPTER_RENDER@@PEAXPEAU_DXGKARG_CREATECONTEXT@@@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C00B04D4 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 * Callees:
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0007A60 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiCreateContext(ADAPTER_RENDER *this, void *a2, struct _DXGKARG_CREATECONTEXT *a3)
{
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v9; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v11; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rax
  _QWORD *v27; // rax
  unsigned __int8 v28; // cl
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  _BYTE v32[56]; // [rsp+20h] [rbp-38h] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 5041);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v7);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v32, ProcessDxgProcess);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v11 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_23;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v26 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v26 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v26);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v11 = 0LL;
      goto LABEL_23;
    }
    v11 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    v15 = *(_DWORD *)(v11 + 136);
    goto LABEL_12;
  }
LABEL_23:
  v15 = 0;
LABEL_12:
  v17 = (*(int (__fastcall **)(void *, struct _DXGKARG_CREATECONTEXT *))(*((_QWORD *)this + 2) + 640LL))(a2, a3);
  v19 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v19 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v16, v18);
    v27[3] = 275LL;
    v27[4] = 16LL;
    v27[5] = this;
    v27[6] = CurrentIrql;
    v28 = KeGetCurrentIrql();
    v27[7] = v28;
    WdLogEvent5_WdCriticalError(v27);
  }
  if ( v11 && *(_DWORD *)(v11 + 136) != v15 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v16, v18);
    v29[3] = 275LL;
    v29[4] = 25LL;
    v30 = *(int *)(v11 + 136);
    v29[7] = 0LL;
    v29[5] = v30;
    v29[6] = v15;
    WdLogEvent5_WdCriticalError(v29);
  }
  v20 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v20[3] = v17;
  v20[4] = a2;
  v20[5] = a3->hContext;
  v20[6] = a3->ContextInfo.DmaBufferSize;
  v20[7] = a3->ContextInfo.AllocationListSize;
  WdLogEvent5_WdEvent(v20);
  v21 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v21 + 24) = a3->ContextInfo.PatchLocationListSize;
  WdLogEvent5_WdEvent(v21);
  if ( (_DWORD)v17 != -1073741801 && (_DWORD)v17 )
  {
    v31 = WdLogNewEntry5_WdError(v22);
    *(_QWORD *)(v31 + 24) = v17;
    WdLogEvent5_WdError(v31);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v23, &EventProfilerExit, v24, 5041);
  return (unsigned int)v17;
}
