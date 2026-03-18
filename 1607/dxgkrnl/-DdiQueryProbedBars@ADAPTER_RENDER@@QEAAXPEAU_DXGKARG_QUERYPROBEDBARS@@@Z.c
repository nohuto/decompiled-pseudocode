/*
 * XREFs of ?DdiQueryProbedBars@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_QUERYPROBEDBARS@@@Z @ 0x1C0159004
 * Callers:
 *     DxgkDdiQueryProbedBars @ 0x1C015A8FC (DxgkDdiQueryProbedBars.c)
 * Callees:
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ADAPTER_RENDER::DdiQueryProbedBars(ADAPTER_RENDER *this, struct _DXGKARG_QUERYPROBEDBARS *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int8 CurrentIrql; // bp
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v11; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rax
  unsigned __int8 v19; // cl
  _QWORD *v20; // rax
  __int64 v21; // rcx

  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_10;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v11 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v11 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v11);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5, v4, v6, v7);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v9 = 0LL;
LABEL_10:
      v14 = 0;
      goto LABEL_11;
    }
    v9 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
    goto LABEL_10;
  v14 = *(_DWORD *)(v9 + 136);
LABEL_11:
  (*(void (__fastcall **)(_QWORD, struct _DXGKARG_QUERYPROBEDBARS *))(*(_QWORD *)(*((_QWORD *)this + 2) + 920LL) + 64LL))(
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 920LL) + 8LL),
    a2);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15, v17);
    v18[3] = 275LL;
    v18[4] = 16LL;
    v18[5] = this;
    v18[6] = CurrentIrql;
    v19 = KeGetCurrentIrql();
    v18[7] = v19;
    WdLogEvent5_WdCriticalError(v18);
  }
  if ( v9 && *(_DWORD *)(v9 + 136) != v14 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15, v17);
    v20[3] = 275LL;
    v20[4] = 25LL;
    v21 = *(int *)(v9 + 136);
    v20[7] = 0LL;
    v20[5] = v21;
    v20[6] = v14;
    WdLogEvent5_WdCriticalError(v20);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
}
