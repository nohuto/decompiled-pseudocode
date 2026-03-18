/*
 * XREFs of ?DdiSetGpuPartitionCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z @ 0x1C0159804
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C0193CE0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B4048 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015A620 (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSetGpuPartitionCount(
        ADAPTER_RENDER *this,
        struct _DXGKARG_SETGPUPARTITIONCOUNT *a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  SIZE_T v10; // rax
  PVOID v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v18; // rsi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v20; // rax
  int CurrentProcessSessionId; // ebp
  __int64 ThreadWin32Thread; // rax
  int v23; // ebp
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  _QWORD *v29; // rax
  unsigned __int8 v30; // cl
  _QWORD *v31; // rax
  __int64 v32; // rcx
  bool v33; // sf
  __int64 v34; // rax
  __int64 v35; // rax

  result = ADAPTER_RENDER::EnsureVirtualGpuProcess(this);
  if ( (int)result < 0 )
    return result;
  if ( *((_DWORD *)this + 267) )
  {
    v9 = WdLogNewEntry5_WdWarning(v6, v5, v7, v8);
    *(_QWORD *)(v9 + 24) = 902LL;
    WdLogEvent5_WdWarning(v9);
    return 3221225485LL;
  }
  if ( a2->PartitionCount != *((_DWORD *)this + 266) )
  {
    operator delete(*((void **)this + 134));
    v10 = 8LL * a2->PartitionCount;
    if ( !is_mul_ok(a2->PartitionCount, 8uLL) )
      v10 = -1LL;
    v11 = operator new[](v10, 0x4B677844u, PagedPool);
    *((_QWORD *)this + 134) = v11;
    if ( !v11 )
    {
      v12 = WdLogNewEntry5_WdLowResource(0LL);
      *(_QWORD *)(v12 + 24) = 912LL;
      WdLogEvent5_WdLowResource(v12);
      return 3221225495LL;
    }
    *((struct _DXGKARG_SETGPUPARTITIONCOUNT *)this + 266) = (struct _DXGKARG_SETGPUPARTITIONCOUNT)a2->PartitionCount;
    memset(v11, 0, 8LL * a2->PartitionCount);
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v18 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_19;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v20 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v20 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v20);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14, v13, v15, v16);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v18 = 0LL;
LABEL_19:
      v23 = 0;
      goto LABEL_20;
    }
    v18 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v18 = 0LL;
  }
  if ( !v18 )
    goto LABEL_19;
  v23 = *(_DWORD *)(v18 + 136);
LABEL_20:
  v25 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_SETGPUPARTITIONCOUNT *))(*(_QWORD *)(*((_QWORD *)this + 2) + 936LL)
                                                                              + 40LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 936LL) + 8LL),
          a2);
  v28 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v28 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v24, v26);
    v29[3] = 275LL;
    v29[4] = 16LL;
    v29[5] = this;
    v29[6] = CurrentIrql;
    v30 = KeGetCurrentIrql();
    v29[7] = v30;
    WdLogEvent5_WdCriticalError(v29);
  }
  if ( v18 && *(_DWORD *)(v18 + 136) != v23 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v24, v26);
    v31[3] = 275LL;
    v31[4] = 25LL;
    v32 = *(int *)(v18 + 136);
    v31[7] = 0LL;
    v31[5] = v32;
    v31[6] = v23;
    WdLogEvent5_WdCriticalError(v31);
  }
  if ( (_DWORD)v25 == -1073741823 || (_DWORD)v25 == -1073741811 )
    goto LABEL_29;
  v33 = (int)v25 < 0;
  if ( (_DWORD)v25 )
  {
    v34 = WdLogNewEntry5_WdError(v28);
    *(_QWORD *)(v34 + 24) = v25;
    WdLogEvent5_WdError(v34);
LABEL_29:
    v33 = (int)v25 < 0;
  }
  if ( v33 )
  {
    v35 = WdLogNewEntry5_WdWarning(v28, v24, v26, v27);
    *(_QWORD *)(v35 + 24) = v25;
    WdLogEvent5_WdWarning(v35);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (int)v25 < 0 )
  {
    operator delete(*((void **)this + 134));
    *((_DWORD *)this + 266) = 0;
  }
  return (unsigned int)v25;
}
