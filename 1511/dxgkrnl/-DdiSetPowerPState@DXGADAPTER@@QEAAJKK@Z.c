/*
 * XREFs of ?DdiSetPowerPState@DXGADAPTER@@QEAAJKK@Z @ 0x1C012873C
 * Callers:
 *     ?ProcessPStateTransitionRequest@DXGADAPTER@@QEAAXXZ @ 0x1C001B3F8 (-ProcessPStateTransitionRequest@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::DdiSetPowerPState(DXGADAPTER *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r15d
  unsigned int v5; // r12d
  unsigned __int8 CurrentIrql; // bp
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v10; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // rcx
  _QWORD *v18; // rax
  unsigned __int8 v19; // cl
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax

  v4 = a3;
  v5 = a2;
  CurrentIrql = KeGetCurrentIrql();
  v8 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_10;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v10 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v10);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(this, a2, a3, a4);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v8 = 0LL;
LABEL_10:
      v13 = 0;
      goto LABEL_11;
    }
    v8 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
    goto LABEL_10;
  v13 = *(_DWORD *)(v8 + 136);
LABEL_11:
  v15 = (*((int (__fastcall **)(_QWORD, _QWORD, _QWORD))this + 93))(*((_QWORD *)this + 28), v5, v4);
  v17 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v17 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v14, v16);
    v18[3] = 275LL;
    v18[4] = 16LL;
    v18[5] = this;
    v18[6] = CurrentIrql;
    v19 = KeGetCurrentIrql();
    v18[7] = v19;
    WdLogEvent5_WdCriticalError(v18);
  }
  if ( v8 && *(_DWORD *)(v8 + 136) != v13 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v14, v16);
    v20[3] = 275LL;
    v20[4] = 25LL;
    v21 = *(int *)(v8 + 136);
    v20[7] = 0LL;
    v20[5] = v21;
    v20[6] = v13;
    WdLogEvent5_WdCriticalError(v20);
  }
  if ( (_DWORD)v15 && (_DWORD)v15 != 259 )
  {
    v22 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v22 + 24) = v15;
    WdLogEvent5_WdError(v22);
  }
  return (unsigned int)v15;
}
