/*
 * XREFs of ?DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1C001F484
 * Callers:
 *     ?PerformClockCalibration@ADAPTER_RENDER@@QEAAXXZ @ 0x1C001F27C (-PerformClockCalibration@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ADAPTER_RENDER_DdiCalibrateGpuClock@@YAJPEAVADAPTER_RENDER@@IIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1C0021FC0 (-ADAPTER_RENDER_DdiCalibrateGpuClock@@YAJPEAVADAPTER_RENDER@@IIPEAU_DXGK_GPUCLOCKDATA@@@Z.c)
 *     DxgkQueryClockCalibration @ 0x1C014FAA0 (DxgkQueryClockCalibration.c)
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiCalibrateGpuClock(
        ADAPTER_RENDER *this,
        unsigned int a2,
        __int64 a3,
        struct _DXGK_GPUCLOCKDATA *a4)
{
  __int64 v5; // r12
  __int64 v7; // r13
  unsigned __int8 CurrentIrql; // bp
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v11; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v14; // esi
  __int64 v15; // rdi
  _QWORD *v16; // rax
  unsigned __int8 v17; // cl
  _QWORD *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax

  v5 = (unsigned int)a3;
  v7 = a2;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5056);
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_13;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v11 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v11);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v9 = 0LL;
LABEL_13:
      v14 = 0;
      goto LABEL_14;
    }
    v9 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
    goto LABEL_13;
  v14 = *(_DWORD *)(v9 + 136);
LABEL_14:
  v15 = (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, struct _DXGK_GPUCLOCKDATA *))(*((_QWORD *)this + 2) + 784LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          (unsigned int)v7,
          (unsigned int)v5,
          a4);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v16[3] = 275LL;
    v16[4] = 16LL;
    v16[5] = this;
    v16[6] = CurrentIrql;
    v17 = KeGetCurrentIrql();
    v16[7] = v17;
    WdLogEvent5_WdCriticalError(v16);
  }
  if ( v9 && *(_DWORD *)(v9 + 136) != v14 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v18[3] = 275LL;
    v18[4] = 25LL;
    v19 = *(int *)(v9 + 136);
    v18[7] = 0LL;
    v18[5] = v19;
    v18[6] = v14;
    WdLogEvent5_WdCriticalError(v18);
  }
  v20 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v20[3] = v15;
  v20[4] = v7;
  v20[5] = v5;
  v20[6] = a4->GpuFrequency;
  WdLogEvent5_WdEvent(v20);
  v21 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v21 + 24) = a4->GpuClockCounter;
  *(_QWORD *)(v21 + 32) = a4->CpuClockCounter;
  WdLogEvent5_WdEvent(v21);
  if ( (_DWORD)v15 != -1073741811 && (_DWORD)v15 )
  {
    v24 = WdLogNewEntry5_WdError(v22);
    *(_QWORD *)(v24 + 24) = v15;
    WdLogEvent5_WdError(v24);
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v22, &EventProfilerExit, v23, 5056);
  return (unsigned int)v15;
}
