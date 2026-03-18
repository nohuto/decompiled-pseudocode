/*
 * XREFs of ?DdiStopCapture@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_STOPCAPTURE@@@Z @ 0x1C014CBD4
 * Callers:
 *     ?ADAPTER_RENDER_DdiStopCapture@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_STOPCAPTURE@@@Z @ 0x1C00220A0 (-ADAPTER_RENDER_DdiStopCapture@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_STOPCAPTURE@@@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiStopCapture(ADAPTER_RENDER *this, struct _DXGKARG_STOPCAPTURE *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v12; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v15; // esi
  __int64 v16; // rdx
  void *v17; // rbp
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  _QWORD *v21; // rax
  unsigned __int8 v22; // cl
  _QWORD *v23; // rax
  __int64 v24; // rcx
  struct _DXGKARG_STOPCAPTURE *v25; // rax
  HANDLE hAllocation; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5039);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v10 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_13;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v12 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v12 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v12);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6, v5, v7, v8);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v10 = 0LL;
LABEL_13:
      v15 = 0;
      goto LABEL_14;
    }
    v10 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
    goto LABEL_13;
  v15 = *(_DWORD *)(v10 + 136);
LABEL_14:
  v17 = (void *)(*(int (__fastcall **)(_QWORD, struct _DXGKARG_STOPCAPTURE *))(*((_QWORD *)this + 2) + 552LL))(
                  *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
                  a2);
  v20 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v20 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v16, v18);
    v21[3] = 275LL;
    v21[4] = 16LL;
    v21[5] = this;
    v21[6] = CurrentIrql;
    v22 = KeGetCurrentIrql();
    v21[7] = v22;
    WdLogEvent5_WdCriticalError(v21);
  }
  if ( v10 && *(_DWORD *)(v10 + 136) != v15 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v16, v18);
    v23[3] = 275LL;
    v23[4] = 25LL;
    v24 = *(int *)(v10 + 136);
    v23[7] = 0LL;
    v23[5] = v24;
    v23[6] = v15;
    WdLogEvent5_WdCriticalError(v23);
  }
  v25 = (struct _DXGKARG_STOPCAPTURE *)WdLogNewEntry5_WdTrace(v20, v16, v18, v19);
  v25[3].hAllocation = v17;
  v25[4].hAllocation = *(HANDLE *)(*((_QWORD *)this + 2) + 240LL);
  hAllocation = a2->hAllocation;
  v25[5].hAllocation = a2->hAllocation;
  if ( (_DWORD)v17 )
  {
    v27 = WdLogNewEntry5_WdError(hAllocation);
    *(_QWORD *)(v27 + 24) = v17;
    WdLogEvent5_WdError(v27);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v28, &EventProfilerExit, v29, 5039);
  return (unsigned int)v17;
}
