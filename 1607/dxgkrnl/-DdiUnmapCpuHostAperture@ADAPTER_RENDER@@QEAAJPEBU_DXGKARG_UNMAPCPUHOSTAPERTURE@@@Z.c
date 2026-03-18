/*
 * XREFs of ?DdiUnmapCpuHostAperture@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_UNMAPCPUHOSTAPERTURE@@@Z @ 0x1C00DEFF4
 * Callers:
 *     ?ADAPTER_RENDER_DdiUnmapCpuHostAperture@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_UNMAPCPUHOSTAPERTURE@@@Z @ 0x1C000EA90 (-ADAPTER_RENDER_DdiUnmapCpuHostAperture@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_UNMAPCPUHOSTAPERTUR.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiUnmapCpuHostAperture(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_UNMAPCPUHOSTAPERTURE *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rax
  __int64 ThreadWin32Thread; // rax
  _QWORD *v25; // rax
  unsigned __int8 v26; // cl
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5062);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v10 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_8;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v23 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v23 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v23);
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
  v15 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_UNMAPCPUHOSTAPERTURE *))(*((_QWORD *)this + 2) + 840LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  v17 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v17 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v14, v16);
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
    v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v14, v16);
    v27[3] = 275LL;
    v27[4] = 25LL;
    v28 = *(int *)(v10 + 136);
    v27[7] = 0LL;
    v27[5] = v28;
    v27[6] = v13;
    WdLogEvent5_WdCriticalError(v27);
  }
  v18 = WdLogNewEntry5_WdEvent(v17);
  *(_QWORD *)(v18 + 24) = v15;
  WdLogEvent5_WdEvent(v18);
  if ( (_DWORD)v15 != -1073741811 && (_DWORD)v15 )
  {
    v29 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v29 + 24) = v15;
    WdLogEvent5_WdError(v29);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v20, &EventProfilerExit, v21, 5062);
  return (unsigned int)v15;
}
