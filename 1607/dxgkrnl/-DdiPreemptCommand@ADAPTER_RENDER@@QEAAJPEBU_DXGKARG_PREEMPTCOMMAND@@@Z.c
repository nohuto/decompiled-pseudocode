/*
 * XREFs of ?DdiPreemptCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PREEMPTCOMMAND@@@Z @ 0x1C0007718
 * Callers:
 *     ?ADAPTER_RENDER_DdiPreemptCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_PREEMPTCOMMAND@@@Z @ 0x1C0006FD0 (-ADAPTER_RENDER_DdiPreemptCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_PREEMPTCOMMAND@@@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiPreemptCommand(
        DXGADAPTER **this,
        const struct _DXGKARG_PREEMPTCOMMAND *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v7; // rbx
  int v8; // edi
  __int64 v9; // rsi
  _QWORD *v10; // rax
  __int64 PreemptionFenceId; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v16; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  _QWORD *v19; // rax
  unsigned __int8 v20; // cl
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(this, &EventProfilerEnter, a3, 5014LL);
  DXGADAPTER::AcquireDdiSync(this[2], 1LL);
  CurrentIrql = KeGetCurrentIrql();
  v7 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_3;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v16 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v16 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v16);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v7 = 0LL;
LABEL_3:
      v8 = 0;
      goto LABEL_4;
    }
    v7 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
    goto LABEL_3;
  v8 = *(_DWORD *)(v7 + 136);
LABEL_4:
  v9 = (*((int (__fastcall **)(_QWORD, const struct _DXGKARG_PREEMPTCOMMAND *))this[2] + 49))(
         *((_QWORD *)this[2] + 30),
         a2);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v19[3] = 275LL;
    v19[4] = 16LL;
    v19[5] = this;
    v19[6] = CurrentIrql;
    v20 = KeGetCurrentIrql();
    v19[7] = v20;
    WdLogEvent5_WdCriticalError(v19);
  }
  if ( v7 && *(_DWORD *)(v7 + 136) != v8 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v21[3] = 275LL;
    v21[4] = 25LL;
    v22 = *(int *)(v7 + 136);
    v21[7] = 0LL;
    v21[5] = v22;
    v21[6] = v8;
    WdLogEvent5_WdCriticalError(v21);
  }
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v10[3] = v9;
  v10[4] = a2->Flags.Value;
  PreemptionFenceId = a2->PreemptionFenceId;
  v10[5] = PreemptionFenceId;
  if ( (_DWORD)v9 )
  {
    v23 = WdLogNewEntry5_WdError(PreemptionFenceId);
    *(_QWORD *)(v23 + 24) = v9;
    WdLogEvent5_WdError(v23);
  }
  DXGADAPTER::ReleaseDdiSync(this[2]);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v12, &EventProfilerExit, v13, 5014LL);
  return (unsigned int)v9;
}
