/*
 * XREFs of ?DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C0091C10
 * Callers:
 *     ?ADAPTER_RENDER_DdiDestroyDevice@@YAJPEAVADAPTER_RENDER@@PEAX@Z @ 0x1C0022000 (-ADAPTER_RENDER_DdiDestroyDevice@@YAJPEAVADAPTER_RENDER@@PEAX@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0095E84 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0007A60 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiDestroyDevice(ADAPTER_RENDER *this, void *a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // rax
  _QWORD *v25; // rax
  unsigned __int8 v26; // cl
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  _BYTE v30[56]; // [rsp+20h] [rbp-38h] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5027);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v6);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v30, ProcessDxgProcess);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v10 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_22;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v24 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v24 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v24);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v10 = 0LL;
      goto LABEL_22;
    }
    v10 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    v14 = *(_DWORD *)(v10 + 136);
    goto LABEL_12;
  }
LABEL_22:
  v14 = 0;
LABEL_12:
  v16 = (*(int (__fastcall **)(void *))(*((_QWORD *)this + 2) + 576LL))(a2);
  v18 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v18 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v15, v17);
    v25[3] = 275LL;
    v25[4] = 16LL;
    v25[5] = this;
    v25[6] = CurrentIrql;
    v26 = KeGetCurrentIrql();
    v25[7] = v26;
    WdLogEvent5_WdCriticalError(v25);
  }
  if ( v10 && *(_DWORD *)(v10 + 136) != v14 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v15, v17);
    v27[3] = 275LL;
    v27[4] = 25LL;
    v28 = *(int *)(v10 + 136);
    v27[7] = 0LL;
    v27[5] = v28;
    v27[6] = v14;
    WdLogEvent5_WdCriticalError(v27);
  }
  v19 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v19 + 24) = v16;
  *(_QWORD *)(v19 + 32) = a2;
  WdLogEvent5_WdEvent(v19);
  if ( (_DWORD)v16 )
  {
    v29 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v29 + 24) = v16;
    WdLogEvent5_WdError(v29);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v21, &EventProfilerExit, v22, 5027);
  return (unsigned int)v16;
}
