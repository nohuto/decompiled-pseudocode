/*
 * XREFs of ?DdiPreemptCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PREEMPTCOMMAND@@@Z @ 0x1C00054A8
 * Callers:
 *     ?ADAPTER_RENDER_DdiPreemptCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_PREEMPTCOMMAND@@@Z @ 0x1C0005450 (-ADAPTER_RENDER_DdiPreemptCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_PREEMPTCOMMAND@@@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00022B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002310 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiPreemptCommand(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_PREEMPTCOMMAND *a2,
        __int64 a3)
{
  unsigned __int8 CurrentIrql; // r15
  __int64 v6; // rbx
  int v7; // edi
  __int64 v8; // rsi
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v14; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  _QWORD *v17; // rax
  unsigned __int8 v18; // cl
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(this, &EventProfilerEnter, a3, 5014LL);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v6 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_3;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v14 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v14 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v14);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v6 = 0LL;
LABEL_3:
      v7 = 0;
      goto LABEL_4;
    }
    v6 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
    goto LABEL_3;
  v7 = *(_DWORD *)(v6 + 136);
LABEL_4:
  v8 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_PREEMPTCOMMAND *))(*((_QWORD *)this + 2) + 376LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 224LL),
         a2);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v17[3] = 275LL;
    v17[4] = 16LL;
    v17[5] = this;
    v17[6] = CurrentIrql;
    v18 = KeGetCurrentIrql();
    v17[7] = v18;
    WdLogEvent5_WdCriticalError(v17);
  }
  if ( v6 && *(_DWORD *)(v6 + 136) != v7 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v19[3] = 275LL;
    v19[4] = 25LL;
    v20 = *(int *)(v6 + 136);
    v19[7] = 0LL;
    v19[5] = v20;
    v19[6] = v7;
    WdLogEvent5_WdCriticalError(v19);
  }
  v9 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v9[3] = v8;
  v9[4] = a2->Flags.Value;
  v9[5] = a2->PreemptionFenceId;
  if ( (_DWORD)v8 )
  {
    v21 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v21 + 24) = v8;
    WdLogEvent5_WdError(v21);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v10, &EventProfilerExit, v11, 5014LL);
  return (unsigned int)v8;
}
