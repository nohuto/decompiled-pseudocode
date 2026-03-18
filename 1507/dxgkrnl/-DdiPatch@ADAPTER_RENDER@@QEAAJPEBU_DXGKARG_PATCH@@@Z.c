/*
 * XREFs of ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x1C0092E40
 * Callers:
 *     ?ADAPTER_RENDER_DdiPatch@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_PATCH@@@Z @ 0x1C0005490 (-ADAPTER_RENDER_DdiPatch@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_PATCH@@@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00022B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002310 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiPatch(ADAPTER_RENDER *this, const struct _DXGKARG_PATCH *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 CurrentIrql; // bp
  __int64 v10; // rsi
  struct _KTHREAD *CurrentThread; // rsi
  int CurrentProcessSessionId; // r14d
  int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r14
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 DmaBufferSize; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rax
  __int64 DmaBufferPrivateDataSubmissionStartOffset; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rax
  __int64 PatchLocationListSize; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  _QWORD *v34; // rax
  __int64 Value; // rcx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v40; // rax
  _QWORD *v41; // rax
  unsigned __int8 v42; // cl
  _QWORD *v43; // rax
  __int64 v44; // rax

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5008);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v10 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_7;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v40 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v40 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v40);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6, v5, v7, v8);
  if ( !CurrentProcessSessionId
    || (unsigned int)PsGetThreadSessionId(CurrentThread) != CurrentProcessSessionId
    || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
    || !*(_QWORD *)ThreadWin32Thread )
  {
    v10 = 0LL;
LABEL_7:
    v13 = 0;
    goto LABEL_8;
  }
  v10 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  if ( !v10 )
    goto LABEL_7;
  v13 = *(_DWORD *)(v10 + 136);
LABEL_8:
  v17 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_PATCH *))(*((_QWORD *)this + 2) + 360LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 224LL),
          a2);
  v18 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v18 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v14, v15);
    v41[3] = 275LL;
    v41[4] = 16LL;
    v41[5] = this;
    v41[6] = CurrentIrql;
    v42 = KeGetCurrentIrql();
    v41[7] = v42;
    WdLogEvent5_WdCriticalError(v41);
  }
  if ( v10 && *(_DWORD *)(v10 + 136) != v13 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v14, v15);
    v43[3] = 275LL;
    v43[4] = 25LL;
    v43[5] = *(int *)(v10 + 136);
    v43[6] = v13;
    v43[7] = 0LL;
    WdLogEvent5_WdCriticalError(v43);
  }
  v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v14, v15, v16);
  v19[3] = v17;
  v19[4] = a2->hDevice;
  v19[5] = a2->DmaBufferSegmentId;
  v19[6] = a2->DmaBufferPhysicalAddress.QuadPart;
  DmaBufferSize = a2->DmaBufferSize;
  v19[7] = DmaBufferSize;
  v24 = (_QWORD *)WdLogNewEntry5_WdTrace(DmaBufferSize, v21, v22, v23);
  v24[3] = a2->DmaBufferSubmissionStartOffset;
  v24[4] = a2->DmaBufferSubmissionEndOffset;
  v24[5] = a2->pDmaBufferPrivateData;
  v24[6] = a2->DmaBufferPrivateDataSize;
  DmaBufferPrivateDataSubmissionStartOffset = a2->DmaBufferPrivateDataSubmissionStartOffset;
  v24[7] = DmaBufferPrivateDataSubmissionStartOffset;
  v29 = (_QWORD *)WdLogNewEntry5_WdTrace(DmaBufferPrivateDataSubmissionStartOffset, v26, v27, v28);
  v29[3] = a2->DmaBufferPrivateDataSubmissionEndOffset;
  v29[4] = a2->pAllocationList;
  v29[5] = a2->AllocationListSize;
  v29[6] = a2->pPatchLocationList;
  PatchLocationListSize = a2->PatchLocationListSize;
  v29[7] = PatchLocationListSize;
  v34 = (_QWORD *)WdLogNewEntry5_WdTrace(PatchLocationListSize, v31, v32, v33);
  v34[3] = a2->PatchLocationListSubmissionStart;
  v34[4] = a2->PatchLocationListSubmissionLength;
  v34[5] = a2->SubmissionFenceId;
  Value = a2->Flags.Value;
  v34[6] = Value;
  if ( (_DWORD)v17 )
  {
    v44 = WdLogNewEntry5_WdError(Value);
    *(_QWORD *)(v44 + 24) = v17;
    WdLogEvent5_WdError(v44);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v36, &EventProfilerExit, v37, 5008);
  return (unsigned int)v17;
}
