/*
 * XREFs of ?DdiGetVirtualGpuInfo@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETVIRTUALGPUINFO@@PEAU_LUID@@PEAU_GUID@@@Z @ 0x1C01588B4
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C0193CE0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015A620 (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiGetVirtualGpuInfo(
        ADAPTER_RENDER *this,
        struct _DXGKARG_GETVIRTUALGPUINFO *a2,
        struct _LUID *a3,
        struct _GUID *a4)
{
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 PartitionId; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v19; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v21; // rax
  int CurrentProcessSessionId; // ebp
  __int64 ThreadWin32Thread; // rax
  int v24; // ebp
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  _QWORD *v30; // rax
  unsigned __int8 v31; // cl
  _QWORD *v32; // rax
  __int64 v33; // rcx
  bool v34; // sf
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax

  result = ADAPTER_RENDER::EnsureVirtualGpuProcess(this);
  if ( (int)result < 0 )
    return result;
  PartitionId = a2->PartitionId;
  if ( (unsigned int)PartitionId >= *((_DWORD *)this + 266)
    || (v13 = *(_QWORD *)(*((_QWORD *)this + 134) + 8 * PartitionId)) == 0
    || (_DWORD)PartitionId != *(_DWORD *)v13 )
  {
    v37 = WdLogNewEntry5_WdWarning(v9, PartitionId, v10, v11);
    *(_QWORD *)(v37 + 24) = a2->PartitionId;
    WdLogEvent5_WdWarning(v37);
    return 3221225485LL;
  }
  *a3 = *(struct _LUID *)(v13 + 4);
  *a4 = *(struct _GUID *)(*(_QWORD *)(*((_QWORD *)this + 134) + 8LL * a2->PartitionId) + 12LL);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v19 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_14;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v21 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v21 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v21);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v15, v14, v16, v17);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v19 = 0LL;
LABEL_14:
      v24 = 0;
      goto LABEL_15;
    }
    v19 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v19 = 0LL;
  }
  if ( !v19 )
    goto LABEL_14;
  v24 = *(_DWORD *)(v19 + 136);
LABEL_15:
  v26 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_GETVIRTUALGPUINFO *))(*(_QWORD *)(*((_QWORD *)this + 2) + 936LL)
                                                                           + 72LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 936LL) + 8LL),
          a2);
  v29 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v29 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v25, v27);
    v30[3] = 275LL;
    v30[4] = 16LL;
    v30[5] = this;
    v30[6] = CurrentIrql;
    v31 = KeGetCurrentIrql();
    v30[7] = v31;
    WdLogEvent5_WdCriticalError(v30);
  }
  if ( v19 && *(_DWORD *)(v19 + 136) != v24 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v25, v27);
    v32[3] = 275LL;
    v32[4] = 25LL;
    v33 = *(int *)(v19 + 136);
    v32[7] = 0LL;
    v32[5] = v33;
    v32[6] = v24;
    WdLogEvent5_WdCriticalError(v32);
  }
  if ( (_DWORD)v26 == -1073741823 || (_DWORD)v26 == -1073741811 )
    goto LABEL_24;
  v34 = (int)v26 < 0;
  if ( (_DWORD)v26 )
  {
    v35 = WdLogNewEntry5_WdError(v29);
    *(_QWORD *)(v35 + 24) = v26;
    WdLogEvent5_WdError(v35);
LABEL_24:
    v34 = (int)v26 < 0;
  }
  if ( v34 )
  {
    v36 = WdLogNewEntry5_WdWarning(v29, v25, v27, v28);
    *(_QWORD *)(v36 + 24) = v26;
    WdLogEvent5_WdWarning(v36);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  return (unsigned int)v26;
}
