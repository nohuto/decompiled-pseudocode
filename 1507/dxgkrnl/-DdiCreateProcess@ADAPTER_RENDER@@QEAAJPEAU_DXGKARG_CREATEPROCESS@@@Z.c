/*
 * XREFs of ?DdiCreateProcess@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEPROCESS@@@Z @ 0x1C0092A5C
 * Callers:
 *     ?ADAPTER_RENDER_DdiCreateProcess@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_CREATEPROCESS@@@Z @ 0x1C001CD80 (-ADAPTER_RENDER_DdiCreateProcess@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_CREATEPROCESS@@@Z.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@@Z @ 0x1C00849DC (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00022B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002310 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiCreateProcess(
        ADAPTER_RENDER *this,
        struct _DXGKARG_CREATEPROCESS *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v14; // ebp
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rax
  _QWORD *v23; // rax
  unsigned __int8 v24; // cl
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax

  if ( !*(_QWORD *)(*((_QWORD *)this + 2) + 832LL) )
    return 0LL;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5064);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v10 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_23;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v22 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v22 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v22);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6, v5, v7, v8);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v10 = 0LL;
      goto LABEL_23;
    }
    v10 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
  {
LABEL_23:
    v14 = 0;
    goto LABEL_13;
  }
  v14 = *(_DWORD *)(v10 + 136);
LABEL_13:
  v16 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_CREATEPROCESS *))(*((_QWORD *)this + 2) + 832LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 224LL),
          a2);
  v18 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v18 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v15, v17);
    v23[3] = 275LL;
    v23[4] = 16LL;
    v23[5] = this;
    v23[6] = CurrentIrql;
    v24 = KeGetCurrentIrql();
    v23[7] = v24;
    WdLogEvent5_WdCriticalError(v23);
  }
  if ( v10 && *(_DWORD *)(v10 + 136) != v14 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v15, v17);
    v25[3] = 275LL;
    v25[4] = 25LL;
    v26 = *(int *)(v10 + 136);
    v25[7] = 0LL;
    v25[5] = v26;
    v25[6] = v14;
    WdLogEvent5_WdCriticalError(v25);
  }
  if ( (_DWORD)v16 )
  {
    v27 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v27 + 24) = v16;
    WdLogEvent5_WdError(v27);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v19, &EventProfilerExit, v20, 5064);
  return (unsigned int)v16;
}
