/*
 * XREFs of ?DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C00DDB78
 * Callers:
 *     DxgkGetScanLine @ 0x1C00DD610 (DxgkGetScanLine.c)
 *     ?DodGetScanLine@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C0147964 (-DodGetScanLine@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 * Callees:
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0007A60 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiGetScanLine(ADAPTER_DISPLAY *this, struct _DXGKARG_GETSCANLINE *a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v13; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // rbp
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 ScanLine; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rax
  _QWORD *v29; // rax
  unsigned __int8 v30; // cl
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  _BYTE v34[56]; // [rsp+20h] [rbp-38h] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5036);
  CurrentProcess = PsGetCurrentProcess(this);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v6);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v34, ProcessDxgProcess);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v13 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_22;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v28 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v28 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v28);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9, v8, v10, v11);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v13 = 0LL;
      goto LABEL_22;
    }
    v13 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v13 = 0LL;
  }
  if ( v13 )
  {
    v17 = *(_DWORD *)(v13 + 136);
    goto LABEL_12;
  }
LABEL_22:
  v17 = 0;
LABEL_12:
  v19 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_GETSCANLINE *))(*((_QWORD *)this + 2) + 544LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  v22 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v22 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v18, v20);
    v29[3] = 275LL;
    v29[4] = 16LL;
    v29[5] = this;
    v29[6] = CurrentIrql;
    v30 = KeGetCurrentIrql();
    v29[7] = v30;
    WdLogEvent5_WdCriticalError(v29);
  }
  if ( v13 && *(_DWORD *)(v13 + 136) != v17 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v18, v20);
    v31[3] = 275LL;
    v31[4] = 25LL;
    v32 = *(int *)(v13 + 136);
    v31[7] = 0LL;
    v31[5] = v32;
    v31[6] = v17;
    WdLogEvent5_WdCriticalError(v31);
  }
  v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v18, v20, v21);
  v23[3] = v19;
  v23[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 240LL);
  ScanLine = a2->ScanLine;
  v23[5] = ScanLine;
  if ( (_DWORD)v19 )
  {
    v33 = WdLogNewEntry5_WdError(ScanLine);
    *(_QWORD *)(v33 + 24) = v19;
    WdLogEvent5_WdError(v33);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v34);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v25, &EventProfilerExit, v26, 5036);
  return (unsigned int)v19;
}
