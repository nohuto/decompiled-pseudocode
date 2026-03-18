/*
 * XREFs of ?DdiQueryEngineStatus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYENGINESTATUS@@@Z @ 0x1C001A248
 * Callers:
 *     ?ADAPTER_RENDER_DdiQueryEngineStatus@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_QUERYENGINESTATUS@@@Z @ 0x1C001D130 (-ADAPTER_RENDER_DdiQueryEngineStatus@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_QUERYENGINESTATUS@@@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiQueryEngineStatus(
        ADAPTER_RENDER *this,
        struct _DXGKARG_QUERYENGINESTATUS *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v9; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v12; // edi
  __int64 v13; // rsi
  _QWORD *v14; // rax
  unsigned __int8 v15; // cl
  _QWORD *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 Value; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5050);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v7 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_13;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v9 = WdLogNewEntry5_WdAssertion(v5);
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
LABEL_13:
      v12 = 0;
      goto LABEL_14;
    }
    v7 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
    goto LABEL_13;
  v12 = *(_DWORD *)(v7 + 136);
LABEL_14:
  v13 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_QUERYENGINESTATUS *))(*((_QWORD *)this + 2) + 672LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 224LL),
          a2);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v14[3] = 275LL;
    v14[4] = 16LL;
    v14[5] = this;
    v14[6] = CurrentIrql;
    v15 = KeGetCurrentIrql();
    v14[7] = v15;
    WdLogEvent5_WdCriticalError(v14);
  }
  if ( v7 && *(_DWORD *)(v7 + 136) != v12 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v16[3] = 275LL;
    v16[4] = 25LL;
    v17 = *(int *)(v7 + 136);
    v16[7] = 0LL;
    v16[5] = v17;
    v16[6] = v12;
    WdLogEvent5_WdCriticalError(v16);
  }
  v18 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v18[3] = v13;
  v18[4] = a2->NodeOrdinal;
  v18[5] = a2->EngineOrdinal;
  Value = a2->EngineStatus.Value;
  v18[6] = Value;
  if ( (_DWORD)v13 )
  {
    v20 = WdLogNewEntry5_WdError(Value);
    *(_QWORD *)(v20 + 24) = v13;
    WdLogEvent5_WdError(v20);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v21, &EventProfilerExit, v22, 5050);
  return (unsigned int)v13;
}
