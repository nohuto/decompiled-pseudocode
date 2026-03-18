/*
 * XREFs of ?DdiResetEngine@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_RESETENGINE@@@Z @ 0x1C00189CC
 * Callers:
 *     ?ADAPTER_RENDER_DdiResetEngine@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_RESETENGINE@@@Z @ 0x1C001CE20 (-ADAPTER_RENDER_DdiResetEngine@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_RESETENGINE@@@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00022B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002310 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiResetEngine(ADAPTER_RENDER *this, struct _DXGKARG_RESETENGINE *a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // r15
  __int64 v6; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v8; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v11; // edi
  __int64 v12; // r14
  _QWORD *v13; // rax
  unsigned __int8 v14; // cl
  _QWORD *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5051);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v6 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_13;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v8 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v8 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v8);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v6 = 0LL;
LABEL_13:
      v11 = 0;
      goto LABEL_14;
    }
    v6 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
    goto LABEL_13;
  v11 = *(_DWORD *)(v6 + 136);
LABEL_14:
  v12 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_RESETENGINE *))(*((_QWORD *)this + 2) + 680LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 224LL),
          a2);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v13[3] = 275LL;
    v13[4] = 16LL;
    v13[5] = this;
    v13[6] = CurrentIrql;
    v14 = KeGetCurrentIrql();
    v13[7] = v14;
    WdLogEvent5_WdCriticalError(v13);
  }
  if ( v6 && *(_DWORD *)(v6 + 136) != v11 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v15[3] = 275LL;
    v15[4] = 25LL;
    v16 = *(int *)(v6 + 136);
    v15[7] = 0LL;
    v15[5] = v16;
    v15[6] = v11;
    WdLogEvent5_WdCriticalError(v15);
  }
  v17 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v17[3] = v12;
  v17[4] = a2->NodeOrdinal;
  v17[5] = a2->EngineOrdinal;
  v17[6] = a2->LastAbortedFenceId;
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v18, &EventProfilerExit, v19, 5051);
  return (unsigned int)v12;
}
