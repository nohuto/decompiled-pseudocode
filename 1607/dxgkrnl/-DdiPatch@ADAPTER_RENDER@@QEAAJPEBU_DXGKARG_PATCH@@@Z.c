/*
 * XREFs of ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x1C014B0F8
 * Callers:
 *     ?ADAPTER_RENDER_DdiPatch@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_PATCH@@@Z @ 0x1C0022030 (-ADAPTER_RENDER_DdiPatch@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_PATCH@@@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiPatch(ADAPTER_RENDER *this, const struct _DXGKARG_PATCH *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 CurrentIrql; // bp
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v12; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r15
  __int64 v20; // rcx
  _QWORD *v21; // rax
  unsigned __int8 v22; // cl
  _QWORD *v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 DmaBufferSize; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rax
  __int64 DmaBufferPrivateDataSubmissionStartOffset; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  _QWORD *v35; // rax
  __int64 PatchLocationListSize; // rcx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  _QWORD *v40; // rax
  __int64 Value; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5008);
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
  v19 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_PATCH *))(*((_QWORD *)this + 2) + 376LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  v20 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v20 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v16, v17);
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
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v16, v17);
    v23[3] = 275LL;
    v23[4] = 25LL;
    v24 = *(int *)(v10 + 136);
    v23[7] = 0LL;
    v23[5] = v24;
    v23[6] = v15;
    WdLogEvent5_WdCriticalError(v23);
  }
  v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v16, v17, v18);
  v25[3] = v19;
  v25[4] = a2->hDevice;
  v25[5] = a2->DmaBufferSegmentId;
  v25[6] = a2->DmaBufferPhysicalAddress.QuadPart;
  DmaBufferSize = a2->DmaBufferSize;
  v25[7] = DmaBufferSize;
  v30 = (_QWORD *)WdLogNewEntry5_WdTrace(DmaBufferSize, v27, v28, v29);
  v30[3] = a2->DmaBufferSubmissionStartOffset;
  v30[4] = a2->DmaBufferSubmissionEndOffset;
  v30[5] = a2->pDmaBufferPrivateData;
  v30[6] = a2->DmaBufferPrivateDataSize;
  DmaBufferPrivateDataSubmissionStartOffset = a2->DmaBufferPrivateDataSubmissionStartOffset;
  v30[7] = DmaBufferPrivateDataSubmissionStartOffset;
  v35 = (_QWORD *)WdLogNewEntry5_WdTrace(DmaBufferPrivateDataSubmissionStartOffset, v32, v33, v34);
  v35[3] = a2->DmaBufferPrivateDataSubmissionEndOffset;
  v35[4] = a2->pAllocationList;
  v35[5] = a2->AllocationListSize;
  v35[6] = a2->pPatchLocationList;
  PatchLocationListSize = a2->PatchLocationListSize;
  v35[7] = PatchLocationListSize;
  v40 = (_QWORD *)WdLogNewEntry5_WdTrace(PatchLocationListSize, v37, v38, v39);
  v40[3] = a2->PatchLocationListSubmissionStart;
  v40[4] = a2->PatchLocationListSubmissionLength;
  v40[5] = a2->SubmissionFenceId;
  Value = a2->Flags.Value;
  v40[6] = Value;
  if ( (_DWORD)v19 )
  {
    v42 = WdLogNewEntry5_WdError(Value);
    *(_QWORD *)(v42 + 24) = v19;
    WdLogEvent5_WdError(v42);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v43, &EventProfilerExit, v44, 5008);
  return (unsigned int)v19;
}
