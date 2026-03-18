/*
 * XREFs of ?DdiSubmitCommandVirtual@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMANDVIRTUAL@@@Z @ 0x1C0092D04
 * Callers:
 *     ?ADAPTER_RENDER_DdiSubmitCommandVirtual@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMANDVIRTUAL@@@Z @ 0x1C0005460 (-ADAPTER_RENDER_DdiSubmitCommandVirtual@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMANDVIRTUA.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00022B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002310 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSubmitCommandVirtual(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SUBMITCOMMANDVIRTUAL *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 CurrentIrql; // r15
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 DmaBufferSize; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rax
  __int64 Value; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rax
  __int64 ThreadWin32Thread; // rax
  _QWORD *v31; // rax
  unsigned __int8 v32; // cl
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5063);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v10 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_8;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v29 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v29 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v29);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6, v5, v7, v8);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v10 = 0LL;
      goto LABEL_8;
    }
    v10 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
  {
LABEL_8:
    v13 = 0;
    goto LABEL_9;
  }
  v13 = *(_DWORD *)(v10 + 136);
LABEL_9:
  v15 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_SUBMITCOMMANDVIRTUAL *))(*((_QWORD *)this + 2) + 792LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 224LL),
          a2);
  v18 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v18 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v14, v16);
    v31[3] = 275LL;
    v31[4] = 16LL;
    v31[5] = this;
    v31[6] = CurrentIrql;
    v32 = KeGetCurrentIrql();
    v31[7] = v32;
    WdLogEvent5_WdCriticalError(v31);
  }
  if ( v10 && *(_DWORD *)(v10 + 136) != v13 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v14, v16);
    v33[3] = 275LL;
    v33[4] = 25LL;
    v34 = *(int *)(v10 + 136);
    v33[7] = 0LL;
    v33[5] = v34;
    v33[6] = v13;
    WdLogEvent5_WdCriticalError(v33);
  }
  v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v14, v16, v17);
  v19[3] = v15;
  v19[4] = a2->hContext;
  v19[5] = a2->DmaBufferVirtualAddress;
  DmaBufferSize = a2->DmaBufferSize;
  v19[6] = DmaBufferSize;
  v24 = (_QWORD *)WdLogNewEntry5_WdTrace(DmaBufferSize, v21, v22, v23);
  v24[3] = a2->pDmaBufferPrivateData;
  v24[4] = a2->DmaBufferPrivateDataSize;
  v24[5] = a2->SubmissionFenceId;
  v24[6] = a2->NodeOrdinal;
  Value = a2->Flags.Value;
  v24[7] = Value;
  if ( (_DWORD)v15 != -1073741811 && (_DWORD)v15 )
  {
    v35 = WdLogNewEntry5_WdError(Value);
    *(_QWORD *)(v35 + 24) = v15;
    WdLogEvent5_WdError(v35);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v26, &EventProfilerExit, v27, 5063);
  return (unsigned int)v15;
}
