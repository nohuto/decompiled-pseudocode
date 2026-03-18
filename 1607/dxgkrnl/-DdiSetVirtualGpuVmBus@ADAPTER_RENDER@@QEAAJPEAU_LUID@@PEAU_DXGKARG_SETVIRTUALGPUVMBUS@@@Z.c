/*
 * XREFs of ?DdiSetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_LUID@@PEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C0159C40
 * Callers:
 *     DxgkDdiSetVirtualGpuVmBus @ 0x1C015AA98 (DxgkDdiSetVirtualGpuVmBus.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAIPEAU_LUID@@@Z @ 0x1C015A698 (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAIPEAU_LUID@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSetVirtualGpuVmBus(
        ADAPTER_RENDER *this,
        struct _LUID *a2,
        struct _DXGKARG_SETVIRTUALGPUVMBUS *a3)
{
  ULONG VirtualGpuByLuid; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v12; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v14; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v17; // ebp
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  _QWORD *v23; // rax
  unsigned __int8 v24; // cl
  _QWORD *v25; // rax
  __int64 v26; // rcx
  bool v27; // sf
  __int64 v28; // rax
  __int64 v29; // rax

  VirtualGpuByLuid = ADAPTER_RENDER::FindVirtualGpuByLuid(this, a2);
  a3->VirtualGpuIndex = VirtualGpuByLuid;
  if ( VirtualGpuByLuid == -1 )
    return 3221225485LL;
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v12 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_12;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v14 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v14 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v14);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8, v7, v9, v10);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v12 = 0LL;
LABEL_12:
      v17 = 0;
      goto LABEL_13;
    }
    v12 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 )
    goto LABEL_12;
  v17 = *(_DWORD *)(v12 + 136);
LABEL_13:
  v19 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_SETVIRTUALGPUVMBUS *))(*(_QWORD *)(*((_QWORD *)this + 2) + 936LL)
                                                                            + 120LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 936LL) + 8LL),
          a3);
  v22 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v22 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v18, v20);
    v23[3] = 275LL;
    v23[4] = 16LL;
    v23[5] = this;
    v23[6] = CurrentIrql;
    v24 = KeGetCurrentIrql();
    v23[7] = v24;
    WdLogEvent5_WdCriticalError(v23);
  }
  if ( v12 && *(_DWORD *)(v12 + 136) != v17 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v18, v20);
    v25[3] = 275LL;
    v25[4] = 25LL;
    v26 = *(int *)(v12 + 136);
    v25[7] = 0LL;
    v25[5] = v26;
    v25[6] = v17;
    WdLogEvent5_WdCriticalError(v25);
  }
  if ( (_DWORD)v19 == -1073741823 || (_DWORD)v19 == -1073741811 )
    goto LABEL_22;
  v27 = (int)v19 < 0;
  if ( (_DWORD)v19 )
  {
    v28 = WdLogNewEntry5_WdError(v22);
    *(_QWORD *)(v28 + 24) = v19;
    WdLogEvent5_WdError(v28);
LABEL_22:
    v27 = (int)v19 < 0;
  }
  if ( v27 )
  {
    v29 = WdLogNewEntry5_WdWarning(v22, v18, v20, v21);
    *(_QWORD *)(v29 + 24) = v19;
    WdLogEvent5_WdWarning(v29);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  return (unsigned int)v19;
}
