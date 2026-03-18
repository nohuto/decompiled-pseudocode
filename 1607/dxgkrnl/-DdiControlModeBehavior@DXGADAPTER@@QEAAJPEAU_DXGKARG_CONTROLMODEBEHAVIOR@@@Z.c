/*
 * XREFs of ?DdiControlModeBehavior@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLMODEBEHAVIOR@@@Z @ 0x1C00E4648
 * Callers:
 *     ?SetModeBehavior@DXGADAPTER@@AEAAXE@Z @ 0x1C00E71A4 (-SetModeBehavior@DXGADAPTER@@AEAAXE@Z.c)
 * Callees:
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0007A60 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::DdiControlModeBehavior(
        DXGADAPTER *this,
        struct _DXGKARG_CONTROLMODEBEHAVIOR *a2,
        __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int8 CurrentIrql; // r15
  __int64 v13; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 Value; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // rax
  __int64 ThreadWin32Thread; // rax
  _QWORD *v29; // rax
  unsigned __int8 v30; // cl
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  _BYTE v34[56]; // [rsp+20h] [rbp-38h] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5071);
  CurrentProcess = PsGetCurrentProcess(this);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v6);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v34, ProcessDxgProcess);
  DXGADAPTER::AcquireDdiSync((__int64)this, 1);
  CurrentIrql = KeGetCurrentIrql();
  v13 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_8;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v27 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v27 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v27);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9, v8, v10, v11);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v13 = 0LL;
      goto LABEL_8;
    }
    v13 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v13 )
  {
LABEL_8:
    v16 = 0;
    goto LABEL_9;
  }
  v16 = *(_DWORD *)(v13 + 136);
LABEL_9:
  v18 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_CONTROLMODEBEHAVIOR *))this + 118))(*((_QWORD *)this + 30), a2);
  v21 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v21 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v17, v19);
    v29[3] = 275LL;
    v29[4] = 16LL;
    v29[5] = this;
    v29[6] = CurrentIrql;
    v30 = KeGetCurrentIrql();
    v29[7] = v30;
    WdLogEvent5_WdCriticalError(v29);
  }
  if ( v13 && *(_DWORD *)(v13 + 136) != v16 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v17, v19);
    v31[3] = 275LL;
    v31[4] = 25LL;
    v32 = *(int *)(v13 + 136);
    v31[7] = 0LL;
    v31[5] = v32;
    v31[6] = v16;
    WdLogEvent5_WdCriticalError(v31);
  }
  v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v17, v19, v20);
  v22[3] = v18;
  v22[4] = *((_QWORD *)this + 30);
  v22[5] = a2->Request.Value;
  v22[6] = a2->Satisfied.Value;
  Value = a2->NotSatisfied.Value;
  v22[7] = Value;
  if ( (_DWORD)v18 != -1073741637 && (_DWORD)v18 != -1073741801 && (_DWORD)v18 )
  {
    v33 = WdLogNewEntry5_WdError(Value);
    *(_QWORD *)(v33 + 24) = v18;
    WdLogEvent5_WdError(v33);
  }
  DXGADAPTER::ReleaseDdiSync(this);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v34);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v24, &EventProfilerExit, v25, 5071);
  return (unsigned int)v18;
}
