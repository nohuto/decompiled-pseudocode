/*
 * XREFs of ?DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C0005580
 * Callers:
 *     ?ADAPTER_RENDER_DdiSubmitCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C00054A0 (-ADAPTER_RENDER_DdiSubmitCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMAND@@@Z.c)
 * Callees:
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSubmitCommand(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SUBMITCOMMAND *a2,
        __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int8 CurrentIrql; // si
  __int64 v8; // r14
  int v9; // r15d
  __int64 v10; // rbp
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v20; // rax
  int CurrentProcessSessionId; // r14d
  __int64 ThreadWin32Thread; // rax
  _QWORD *v23; // rax
  unsigned __int8 v24; // cl
  _QWORD *v25; // rax
  __int64 v26; // rax

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(this, &EventProfilerEnter, a3, 5013LL);
  v5 = *((_QWORD *)this + 2);
  v6 = *(_QWORD *)(v5 + 1984);
  if ( !v6
    || !*(_QWORD *)(v6 + 384)
    || !(*(unsigned __int8 (**)(void))(*(_QWORD *)(*(_QWORD *)(v6 + 376) + 8LL) + 72LL))() )
  {
    if ( !KeReadStateEvent((PRKEVENT)(v5 + 192)) )
      KeWaitForSingleObject((PVOID)(v5 + 192), Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v5 + 216), 1u);
  }
  CurrentIrql = KeGetCurrentIrql();
  v8 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_6;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v20 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v20 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v20);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( !CurrentProcessSessionId
    || (unsigned int)PsGetThreadSessionId(CurrentThread) != CurrentProcessSessionId
    || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
    || !*(_QWORD *)ThreadWin32Thread )
  {
    v8 = 0LL;
    goto LABEL_6;
  }
  v8 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  if ( !v8 )
  {
LABEL_6:
    v9 = 0;
    goto LABEL_7;
  }
  v9 = *(_DWORD *)(v8 + 136);
LABEL_7:
  v10 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_SUBMITCOMMAND *))(*((_QWORD *)this + 2) + 368LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 224LL),
          a2);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v23[3] = 275LL;
    v23[4] = 16LL;
    v23[5] = this;
    v23[6] = CurrentIrql;
    v24 = KeGetCurrentIrql();
    v23[7] = v24;
    WdLogEvent5_WdCriticalError(v23);
  }
  if ( v8 && *(_DWORD *)(v8 + 136) != v9 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v25[3] = 275LL;
    v25[4] = 25LL;
    v25[5] = *(int *)(v8 + 136);
    v25[6] = v9;
    v25[7] = 0LL;
    WdLogEvent5_WdCriticalError(v25);
  }
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v11[3] = v10;
  v11[4] = a2->hDevice;
  v11[5] = a2->DmaBufferSegmentId;
  v11[6] = a2->DmaBufferPhysicalAddress.QuadPart;
  v11[7] = a2->DmaBufferSize;
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v12[3] = a2->DmaBufferSubmissionStartOffset;
  v12[4] = a2->DmaBufferSubmissionEndOffset;
  v12[5] = a2->pDmaBufferPrivateData;
  v12[6] = a2->DmaBufferPrivateDataSize;
  v12[7] = a2->DmaBufferPrivateDataSubmissionStartOffset;
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v13[3] = a2->DmaBufferPrivateDataSubmissionEndOffset;
  v13[4] = a2->SubmissionFenceId;
  v13[5] = a2->NodeOrdinal;
  v13[6] = a2->Flags.Value;
  if ( (_DWORD)v10 )
  {
    v26 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v26 + 24) = v10;
    WdLogEvent5_WdError(v26);
  }
  v14 = *((_QWORD *)this + 2);
  v15 = *(_QWORD *)(v14 + 1984);
  if ( !v15
    || !*(_QWORD *)(v15 + 384)
    || !(*(unsigned __int8 (**)(void))(*(_QWORD *)(*(_QWORD *)(v15 + 376) + 8LL) + 72LL))() )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v14 + 216));
    KeLeaveCriticalRegion();
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v16, &EventProfilerExit, v17, 5013LL);
  return (unsigned int)v10;
}
