/*
 * XREFs of ?DdiCreateProcess@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEPROCESS@@@Z @ 0x1C0092058
 * Callers:
 *     ?ADAPTER_RENDER_DdiCreateProcess@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_CREATEPROCESS@@@Z @ 0x1C0021FE0 (-ADAPTER_RENDER_DdiCreateProcess@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_CREATEPROCESS@@@Z.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@@Z @ 0x1C00A2F30 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiCreateProcess(
        ADAPTER_RENDER *this,
        struct _DXGKARG_CREATEPROCESS *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // r14
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rax
  _QWORD *v20; // rax
  unsigned __int8 v21; // cl
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax

  if ( !*(_QWORD *)(*((_QWORD *)this + 2) + 848LL) )
    return 0LL;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5064);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v7 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_23;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v19 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v19 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v19);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v7 = 0LL;
      goto LABEL_23;
    }
    v7 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
  {
LABEL_23:
    v11 = 0;
    goto LABEL_13;
  }
  v11 = *(_DWORD *)(v7 + 136);
LABEL_13:
  v13 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_CREATEPROCESS *))(*((_QWORD *)this + 2) + 848LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  v15 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v15 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v12, v14);
    v20[3] = 275LL;
    v20[4] = 16LL;
    v20[5] = this;
    v20[6] = CurrentIrql;
    v21 = KeGetCurrentIrql();
    v20[7] = v21;
    WdLogEvent5_WdCriticalError(v20);
  }
  if ( v7 && *(_DWORD *)(v7 + 136) != v11 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v12, v14);
    v22[3] = 275LL;
    v22[4] = 25LL;
    v23 = *(int *)(v7 + 136);
    v22[7] = 0LL;
    v22[5] = v23;
    v22[6] = v11;
    WdLogEvent5_WdCriticalError(v22);
  }
  if ( (_DWORD)v13 )
  {
    v24 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v24 + 24) = v13;
    WdLogEvent5_WdError(v24);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v16, &EventProfilerExit, v17, 5064);
  return (unsigned int)v13;
}
