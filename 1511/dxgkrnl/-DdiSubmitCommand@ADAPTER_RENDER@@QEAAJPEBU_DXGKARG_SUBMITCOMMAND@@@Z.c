/*
 * XREFs of ?DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C0001DAC
 * Callers:
 *     ?ADAPTER_RENDER_DdiSubmitCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C000CD90 (-ADAPTER_RENDER_DdiSubmitCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMAND@@@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSubmitCommand(
        DXGADAPTER **this,
        const struct _DXGKARG_SUBMITCOMMAND *a2,
        __int64 a3)
{
  unsigned __int8 CurrentIrql; // bp
  __int64 v6; // rbx
  int v7; // edi
  __int64 v8; // r15
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v16; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  _QWORD *v19; // rax
  unsigned __int8 v20; // cl
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(this, &EventProfilerEnter, a3, 5013LL);
  DXGADAPTER::AcquireDdiSync(this[2], 1LL);
  CurrentIrql = KeGetCurrentIrql();
  v6 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_3;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v16 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v16 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v16);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v6 = 0LL;
LABEL_3:
      v7 = 0;
      goto LABEL_4;
    }
    v6 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
    goto LABEL_3;
  v7 = *(_DWORD *)(v6 + 136);
LABEL_4:
  v8 = (*((int (__fastcall **)(_QWORD, const struct _DXGKARG_SUBMITCOMMAND *))this[2] + 46))(
         *((_QWORD *)this[2] + 28),
         a2);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v19[3] = 275LL;
    v19[4] = 16LL;
    v19[5] = this;
    v19[6] = CurrentIrql;
    v20 = KeGetCurrentIrql();
    v19[7] = v20;
    WdLogEvent5_WdCriticalError(v19);
  }
  if ( v6 && *(_DWORD *)(v6 + 136) != v7 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v21[3] = 275LL;
    v21[4] = 25LL;
    v22 = *(int *)(v6 + 136);
    v21[7] = 0LL;
    v21[5] = v22;
    v21[6] = v7;
    WdLogEvent5_WdCriticalError(v21);
  }
  v9 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v9[3] = v8;
  v9[4] = a2->hDevice;
  v9[5] = a2->DmaBufferSegmentId;
  v9[6] = a2->DmaBufferPhysicalAddress.QuadPart;
  v9[7] = a2->DmaBufferSize;
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v10[3] = a2->DmaBufferSubmissionStartOffset;
  v10[4] = a2->DmaBufferSubmissionEndOffset;
  v10[5] = a2->pDmaBufferPrivateData;
  v10[6] = a2->DmaBufferPrivateDataSize;
  v10[7] = a2->DmaBufferPrivateDataSubmissionStartOffset;
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v11[3] = a2->DmaBufferPrivateDataSubmissionEndOffset;
  v11[4] = a2->SubmissionFenceId;
  v11[5] = a2->NodeOrdinal;
  v11[6] = a2->Flags.Value;
  if ( (_DWORD)v8 )
  {
    v23 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v23 + 24) = v8;
    WdLogEvent5_WdError(v23);
  }
  DXGADAPTER::ReleaseDdiSync(this[2]);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v12, &EventProfilerExit, v13, 5013LL);
  return (unsigned int)v8;
}
