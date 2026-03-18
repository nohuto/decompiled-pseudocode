/*
 * XREFs of ?DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C00077EC
 * Callers:
 *     ?ADAPTER_RENDER_DdiSubmitCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C000D490 (-ADAPTER_RENDER_DdiSubmitCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMAND@@@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSubmitCommand(
        DXGADAPTER **this,
        const struct _DXGKARG_SUBMITCOMMAND *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // bp
  __int64 v7; // rbx
  int v8; // edi
  __int64 v9; // r15
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 Value; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v18; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  _QWORD *v21; // rax
  unsigned __int8 v22; // cl
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(this, &EventProfilerEnter, a3, 5013LL);
  DXGADAPTER::AcquireDdiSync(this[2], 1LL);
  CurrentIrql = KeGetCurrentIrql();
  v7 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_3;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v18 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v18 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v18);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v7 = 0LL;
LABEL_3:
      v8 = 0;
      goto LABEL_4;
    }
    v7 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
    goto LABEL_3;
  v8 = *(_DWORD *)(v7 + 136);
LABEL_4:
  v9 = (*((int (__fastcall **)(_QWORD, const struct _DXGKARG_SUBMITCOMMAND *))this[2] + 48))(
         *((_QWORD *)this[2] + 30),
         a2);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v21[3] = 275LL;
    v21[4] = 16LL;
    v21[5] = this;
    v21[6] = CurrentIrql;
    v22 = KeGetCurrentIrql();
    v21[7] = v22;
    WdLogEvent5_WdCriticalError(v21);
  }
  if ( v7 && *(_DWORD *)(v7 + 136) != v8 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v23[3] = 275LL;
    v23[4] = 25LL;
    v24 = *(int *)(v7 + 136);
    v23[7] = 0LL;
    v23[5] = v24;
    v23[6] = v8;
    WdLogEvent5_WdCriticalError(v23);
  }
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v10[3] = v9;
  v10[4] = a2->hDevice;
  v10[5] = a2->DmaBufferSegmentId;
  v10[6] = a2->DmaBufferPhysicalAddress.QuadPart;
  v10[7] = a2->DmaBufferSize;
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v11[3] = a2->DmaBufferSubmissionStartOffset;
  v11[4] = a2->DmaBufferSubmissionEndOffset;
  v11[5] = a2->pDmaBufferPrivateData;
  v11[6] = a2->DmaBufferPrivateDataSize;
  v11[7] = a2->DmaBufferPrivateDataSubmissionStartOffset;
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v12[3] = a2->DmaBufferPrivateDataSubmissionEndOffset;
  v12[4] = a2->SubmissionFenceId;
  v12[5] = a2->NodeOrdinal;
  Value = a2->Flags.Value;
  v12[6] = Value;
  if ( (_DWORD)v9 )
  {
    v25 = WdLogNewEntry5_WdError(Value);
    *(_QWORD *)(v25 + 24) = v9;
    WdLogEvent5_WdError(v25);
  }
  DXGADAPTER::ReleaseDdiSync(this[2]);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v14, &EventProfilerExit, v15, 5013LL);
  return (unsigned int)v9;
}
