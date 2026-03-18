/*
 * XREFs of ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0092BB0
 * Callers:
 *     ?ADAPTER_RENDER_DdiBuildPagingBuffer@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0005480 (-ADAPTER_RENDER_DdiBuildPagingBuffer@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00022B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002310 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?DxgkrnlLogBuildPagingBufferInformation@ADAPTER_RENDER@@AEAAXJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0092970 (-DxgkrnlLogBuildPagingBufferInformation@ADAPTER_RENDER@@AEAAXJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiBuildPagingBuffer(
        ADAPTER_RENDER *this,
        struct _DXGKARG_BUILDPAGINGBUFFER *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v10; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // esi
  int v13; // r15d
  __int64 v14; // rdx
  ADAPTER_RENDER *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  unsigned __int8 v26; // cl
  _QWORD *v27; // rax
  __int64 v28; // rax

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5016);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v10 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_7;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v24 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v24 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v24);
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
  v16 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_BUILDPAGINGBUFFER *))(*((_QWORD *)this + 2) + 384LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 224LL),
          a2);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v14, v17);
    v25[3] = 275LL;
    v25[4] = 16LL;
    v25[5] = this;
    v25[6] = CurrentIrql;
    v26 = KeGetCurrentIrql();
    v25[7] = v26;
    WdLogEvent5_WdCriticalError(v25);
  }
  if ( v10 && *(_DWORD *)(v10 + 136) != v13 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v14, v17);
    v27[3] = 275LL;
    v27[4] = 25LL;
    v27[5] = *(int *)(v10 + 136);
    v27[6] = v13;
    v27[7] = 0LL;
    WdLogEvent5_WdCriticalError(v27);
  }
  ADAPTER_RENDER::DxgkrnlLogBuildPagingBufferInformation(v15, (unsigned int)v16, a2, v18);
  if ( (_DWORD)v16 && (_DWORD)v16 != -1071775743 && (_DWORD)v16 != -1071775486 )
  {
    v28 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v28 + 24) = v16;
    WdLogEvent5_WdError(v28);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v20, &EventProfilerExit, v21, 5016);
  return (unsigned int)v16;
}
