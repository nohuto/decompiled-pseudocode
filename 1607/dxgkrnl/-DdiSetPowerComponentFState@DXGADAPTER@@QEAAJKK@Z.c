/*
 * XREFs of ?DdiSetPowerComponentFState@DXGADAPTER@@QEAAJKK@Z @ 0x1C0009060
 * Callers:
 *     ?PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z @ 0x1C001DD84 (-PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z @ 0x1C001F1F0 (-DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z.c)
 *     ?DXGADAPTER_DdiSetPowerComponentFState@@YAJPEAVDXGADAPTER@@KK@Z @ 0x1C00220B0 (-DXGADAPTER_DdiSetPowerComponentFState@@YAJPEAVDXGADAPTER@@KK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::DdiSetPowerComponentFState(DXGADAPTER *this, unsigned int a2, unsigned int a3)
{
  unsigned __int8 CurrentIrql; // bp
  __int64 v7; // rbx
  int v8; // esi
  __int64 v9; // rdi
  __int64 v10; // rcx
  _QWORD *v11; // rax
  unsigned __int8 v12; // cl
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v14; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax

  CurrentIrql = KeGetCurrentIrql();
  v7 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_4;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v14 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v14 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v14);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v7 = 0LL;
      goto LABEL_4;
    }
    v7 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
  {
LABEL_4:
    v8 = 0;
    goto LABEL_5;
  }
  v8 = *(_DWORD *)(v7 + 136);
LABEL_5:
  v9 = (*((int (__fastcall **)(_QWORD, _QWORD, _QWORD))this + 89))(*((_QWORD *)this + 30), a2, a3);
  v10 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v10 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v11[3] = 275LL;
    v11[4] = 16LL;
    v11[5] = this;
    v11[6] = CurrentIrql;
    v12 = KeGetCurrentIrql();
    v11[7] = v12;
    WdLogEvent5_WdCriticalError(v11);
  }
  if ( v7 && *(_DWORD *)(v7 + 136) != v8 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v17[3] = 275LL;
    v17[4] = 25LL;
    v18 = *(int *)(v7 + 136);
    v17[7] = 0LL;
    v17[5] = v18;
    v17[6] = v8;
    WdLogEvent5_WdCriticalError(v17);
  }
  if ( (_DWORD)v9 != -1071775466 && (_DWORD)v9 )
  {
    v19 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v19 + 24) = v9;
    WdLogEvent5_WdError(v19);
  }
  return (unsigned int)v9;
}
