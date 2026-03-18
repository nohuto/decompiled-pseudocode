/*
 * XREFs of ?DdiSubmitCommandVirtual@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMANDVIRTUAL@@@Z @ 0x1C0092480
 * Callers:
 *     ?ADAPTER_RENDER_DdiSubmitCommandVirtual@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMANDVIRTUAL@@@Z @ 0x1C0007610 (-ADAPTER_RENDER_DdiSubmitCommandVirtual@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMANDVIRTUA.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSubmitCommandVirtual(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SUBMITCOMMANDVIRTUAL *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // r14
  __int64 v7; // rbp
  struct _KTHREAD *CurrentThread; // rdi
  int CurrentProcessSessionId; // ebp
  int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 DmaBufferSize; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  __int64 Value; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rax
  __int64 ThreadWin32Thread; // rax
  _QWORD *v28; // rax
  unsigned __int8 v29; // cl
  _QWORD *v30; // rax
  __int64 v31; // rax

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5063);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v7 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_7;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v26 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v26 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v26);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( !CurrentProcessSessionId
    || (unsigned int)PsGetThreadSessionId(CurrentThread) != CurrentProcessSessionId
    || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
    || !*(_QWORD *)ThreadWin32Thread )
  {
    v7 = 0LL;
LABEL_7:
    v10 = 0;
    goto LABEL_8;
  }
  v7 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  if ( !v7 )
    goto LABEL_7;
  v10 = *(_DWORD *)(v7 + 136);
LABEL_8:
  v12 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_SUBMITCOMMANDVIRTUAL *))(*((_QWORD *)this + 2) + 808LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  v15 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v15 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v11, v13);
    v28[3] = 275LL;
    v28[4] = 16LL;
    v28[5] = this;
    v28[6] = CurrentIrql;
    v29 = KeGetCurrentIrql();
    v28[7] = v29;
    WdLogEvent5_WdCriticalError(v28);
  }
  if ( v7 && *(_DWORD *)(v7 + 136) != v10 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v11, v13);
    v30[3] = 275LL;
    v30[4] = 25LL;
    v30[5] = *(int *)(v7 + 136);
    v30[6] = v10;
    v30[7] = 0LL;
    WdLogEvent5_WdCriticalError(v30);
  }
  v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v11, v13, v14);
  v16[3] = v12;
  v16[4] = a2->hContext;
  v16[5] = a2->DmaBufferVirtualAddress;
  DmaBufferSize = a2->DmaBufferSize;
  v16[6] = DmaBufferSize;
  v21 = (_QWORD *)WdLogNewEntry5_WdTrace(DmaBufferSize, v18, v19, v20);
  v21[3] = a2->pDmaBufferPrivateData;
  v21[4] = a2->DmaBufferPrivateDataSize;
  v21[5] = a2->SubmissionFenceId;
  v21[6] = a2->NodeOrdinal;
  Value = a2->Flags.Value;
  v21[7] = Value;
  if ( (_DWORD)v12 != -1073741811 && (_DWORD)v12 )
  {
    v31 = WdLogNewEntry5_WdError(Value);
    *(_QWORD *)(v31 + 24) = v12;
    WdLogEvent5_WdError(v31);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v23, &EventProfilerExit, v24, 5063);
  return (unsigned int)v12;
}
