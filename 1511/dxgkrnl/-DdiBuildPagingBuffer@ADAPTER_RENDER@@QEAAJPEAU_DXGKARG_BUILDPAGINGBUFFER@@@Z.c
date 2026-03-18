/*
 * XREFs of ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0069960
 * Callers:
 *     ?ADAPTER_RENDER_DdiBuildPagingBuffer@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0001C70 (-ADAPTER_RENDER_DdiBuildPagingBuffer@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?DxgkrnlLogBuildPagingBufferInformation@ADAPTER_RENDER@@AEAAXJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0069370 (-DxgkrnlLogBuildPagingBufferInformation@ADAPTER_RENDER@@AEAAXJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiBuildPagingBuffer(
        ADAPTER_RENDER *this,
        struct _DXGKARG_BUILDPAGINGBUFFER *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // r14
  __int64 v7; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // esi
  int v10; // r15d
  __int64 v11; // rdx
  ADAPTER_RENDER *v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rax
  __int64 ThreadWin32Thread; // rax
  _QWORD *v22; // rax
  unsigned __int8 v23; // cl
  _QWORD *v24; // rax
  __int64 v25; // rax

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5016);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v7 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_7;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v20 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v20 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v20);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( !CurrentProcessSessionId
    || (unsigned int)PsGetThreadSessionId(CurrentThread) != CurrentProcessSessionId
    || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread), !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread) )
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
  v13 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_BUILDPAGINGBUFFER *))(*((_QWORD *)this + 2) + 384LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 224LL),
          a2);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v11, v14);
    v22[3] = 275LL;
    v22[4] = 16LL;
    v22[5] = this;
    v22[6] = CurrentIrql;
    v23 = KeGetCurrentIrql();
    v22[7] = v23;
    WdLogEvent5_WdCriticalError(v22);
  }
  if ( v7 && *(_DWORD *)(v7 + 136) != v10 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v11, v14);
    v24[3] = 275LL;
    v24[4] = 25LL;
    v24[5] = *(int *)(v7 + 136);
    v24[6] = v10;
    v24[7] = 0LL;
    WdLogEvent5_WdCriticalError(v24);
  }
  ADAPTER_RENDER::DxgkrnlLogBuildPagingBufferInformation(v12, (unsigned int)v13, a2, v15);
  if ( (_DWORD)v13 && (_DWORD)v13 != -1071775743 && (_DWORD)v13 != -1071775486 )
  {
    v25 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v25 + 24) = v13;
    WdLogEvent5_WdError(v25);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v17, &EventProfilerExit, v18, 5016);
  return (unsigned int)v13;
}
