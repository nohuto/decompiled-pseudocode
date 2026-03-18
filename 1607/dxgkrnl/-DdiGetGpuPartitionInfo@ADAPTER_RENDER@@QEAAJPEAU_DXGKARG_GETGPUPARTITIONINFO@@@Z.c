/*
 * XREFs of ?DdiGetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETGPUPARTITIONINFO@@@Z @ 0x1C015832C
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C0193CE0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B4048 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015A620 (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiGetGpuPartitionInfo(
        ADAPTER_RENDER *this,
        struct _DXGKARG_GETGPUPARTITIONINFO *a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v12; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v15; // ebp
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  _QWORD *v21; // rax
  unsigned __int8 v22; // cl
  _QWORD *v23; // rax
  __int64 v24; // rcx
  bool v25; // sf
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 CurrentGpuPartitionCount; // rax
  __int64 v30; // rax
  SIZE_T v31; // rax
  PVOID v32; // rax
  __int64 v33; // r8

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
LABEL_11:
      v15 = 0;
      goto LABEL_12;
    }
    v10 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
    goto LABEL_11;
  v15 = *(_DWORD *)(v10 + 136);
LABEL_12:
  v17 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_GETGPUPARTITIONINFO *))(*(_QWORD *)(*((_QWORD *)this + 2) + 936LL)
                                                                             + 32LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 936LL) + 8LL),
          a2);
  v20 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v20 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v16, v18);
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
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v16, v18);
    v23[3] = 275LL;
    v23[4] = 25LL;
    v24 = *(int *)(v10 + 136);
    v23[7] = 0LL;
    v23[5] = v24;
    v23[6] = v15;
    WdLogEvent5_WdCriticalError(v23);
  }
  if ( (_DWORD)v17 == -1073741811 || (_DWORD)v17 == -1073741789 )
    goto LABEL_21;
  v25 = (int)v17 < 0;
  if ( (_DWORD)v17 )
  {
    v26 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v26 + 24) = v17;
    WdLogEvent5_WdError(v26);
LABEL_21:
    v25 = (int)v17 < 0;
  }
  if ( v25 )
  {
    v27 = WdLogNewEntry5_WdWarning(v20, v16, v18, v19);
    *(_QWORD *)(v27 + 24) = v17;
    WdLogEvent5_WdWarning(v27);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (int)v17 >= 0 )
  {
    CurrentGpuPartitionCount = a2->CurrentGpuPartitionCount;
    if ( (_DWORD)CurrentGpuPartitionCount != *((_DWORD *)this + 266) )
    {
      if ( *((_QWORD *)this + 134) )
      {
        v30 = WdLogNewEntry5_WdError(v28);
        *(_QWORD *)(v30 + 24) = 848LL;
        WdLogEvent5_WdError(v30);
        return 3221225473LL;
      }
      v31 = 8 * CurrentGpuPartitionCount;
      if ( !is_mul_ok(a2->CurrentGpuPartitionCount, 8uLL) )
        v31 = -1LL;
      v32 = operator new[](v31, 0x4B677844u, PagedPool);
      *((_QWORD *)this + 134) = v32;
      if ( !v32 )
        return 3221225495LL;
      v33 = a2->CurrentGpuPartitionCount;
      *((_DWORD *)this + 266) = a2->CurrentGpuPartitionCount;
      memset(v32, 0, 8 * v33);
    }
  }
  return (unsigned int)v17;
}
