/*
 * XREFs of ?DdiQueryMitigatedRangeCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYMITIGATEDRANGECOUNT@@@Z @ 0x1C0158CA8
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C0193CE0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015A620 (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiQueryMitigatedRangeCount(
        ADAPTER_RENDER *this,
        struct _DXGKARG_QUERYMITIGATEDRANGECOUNT *a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 CurrentIrql; // bp
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v12; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rax
  unsigned __int8 v20; // cl
  _QWORD *v21; // rax
  __int64 v22; // rcx

  result = ADAPTER_RENDER::EnsureVirtualGpuProcess(this);
  if ( (int)result < 0 )
    return result;
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v10 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_11;
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
      goto LABEL_11;
    }
    v10 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    v15 = *(_DWORD *)(v10 + 136);
    goto LABEL_12;
  }
LABEL_11:
  v15 = 0;
LABEL_12:
  (*(void (__fastcall **)(_QWORD, struct _DXGKARG_QUERYMITIGATEDRANGECOUNT *))(*(_QWORD *)(*((_QWORD *)this + 2) + 928LL)
                                                                             + 32LL))(
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 936LL) + 8LL),
    a2);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v16, v18);
    v19[3] = 275LL;
    v19[4] = 16LL;
    v19[5] = this;
    v19[6] = CurrentIrql;
    v20 = KeGetCurrentIrql();
    v19[7] = v20;
    WdLogEvent5_WdCriticalError(v19);
  }
  if ( v10 )
  {
    if ( *(_DWORD *)(v10 + 136) != v15 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v16, v18);
      v21[3] = 275LL;
      v21[4] = 25LL;
      v22 = *(int *)(v10 + 136);
      v21[7] = 0LL;
      v21[5] = v22;
      v21[6] = v15;
      WdLogEvent5_WdCriticalError(v21);
    }
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  return 0LL;
}
