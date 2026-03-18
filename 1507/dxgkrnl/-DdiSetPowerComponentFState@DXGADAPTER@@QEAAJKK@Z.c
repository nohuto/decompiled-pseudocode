/*
 * XREFs of ?DdiSetPowerComponentFState@DXGADAPTER@@QEAAJKK@Z @ 0x1C0018BB8
 * Callers:
 *     ?DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z @ 0x1C0019110 (-DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z.c)
 *     ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x1C0019F64 (-PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?DXGADAPTER_DdiSetPowerComponentFState@@YAJPEAVDXGADAPTER@@KK@Z @ 0x1C001CE80 (-DXGADAPTER_DdiSetPowerComponentFState@@YAJPEAVDXGADAPTER@@KK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::DdiSetPowerComponentFState(DXGADAPTER *this, unsigned int a2, unsigned int a3)
{
  unsigned __int8 CurrentIrql; // bp
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v9; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v12; // esi
  __int64 v13; // rdi
  __int64 v14; // rcx
  _QWORD *v15; // rax
  unsigned __int8 v16; // cl
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax

  CurrentIrql = KeGetCurrentIrql();
  v7 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_10;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v9 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v9 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v9);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v7 = 0LL;
LABEL_10:
      v12 = 0;
      goto LABEL_11;
    }
    v7 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
    goto LABEL_10;
  v12 = *(_DWORD *)(v7 + 136);
LABEL_11:
  v13 = (*((int (__fastcall **)(_QWORD, _QWORD, _QWORD))this + 87))(*((_QWORD *)this + 28), a2, a3);
  v14 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v14 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v15[3] = 275LL;
    v15[4] = 16LL;
    v15[5] = this;
    v15[6] = CurrentIrql;
    v16 = KeGetCurrentIrql();
    v15[7] = v16;
    WdLogEvent5_WdCriticalError(v15);
  }
  if ( v7 && *(_DWORD *)(v7 + 136) != v12 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v17[3] = 275LL;
    v17[4] = 25LL;
    v18 = *(int *)(v7 + 136);
    v17[7] = 0LL;
    v17[5] = v18;
    v17[6] = v12;
    WdLogEvent5_WdCriticalError(v17);
  }
  if ( (_DWORD)v13 != -1071775466 && (_DWORD)v13 )
  {
    v19 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v19 + 24) = v13;
    WdLogEvent5_WdError(v19);
  }
  return (unsigned int)v13;
}
