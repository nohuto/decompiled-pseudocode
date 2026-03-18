/*
 * XREFs of ?DdiResetFromTimeout@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0128120
 * Callers:
 *     ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C012D3D0 (-PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiResetFromTimeout(ADAPTER_RENDER *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v11; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // rbp
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  _QWORD *v20; // rax
  unsigned __int8 v21; // cl
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5020);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_13;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v11 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v11 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v11);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5, v4, v6, v7);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v9 = 0LL;
LABEL_13:
      v14 = 0;
      goto LABEL_14;
    }
    v9 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
    goto LABEL_13;
  v14 = *(_DWORD *)(v9 + 136);
LABEL_14:
  v16 = (*(int (__fastcall **)(_QWORD))(*((_QWORD *)this + 2) + 416LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 224LL));
  v19 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v19 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v15, v17);
    v20[3] = 275LL;
    v20[4] = 16LL;
    v20[5] = this;
    v20[6] = CurrentIrql;
    v21 = KeGetCurrentIrql();
    v20[7] = v21;
    WdLogEvent5_WdCriticalError(v20);
  }
  if ( v9 && *(_DWORD *)(v9 + 136) != v14 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v15, v17);
    v22[3] = 275LL;
    v22[4] = 25LL;
    v23 = *(int *)(v9 + 136);
    v22[7] = 0LL;
    v22[5] = v23;
    v22[6] = v14;
    WdLogEvent5_WdCriticalError(v22);
  }
  v24 = WdLogNewEntry5_WdEvent(v19, v15, v17, v18);
  *(_QWORD *)(v24 + 24) = v16;
  *(_QWORD *)(v24 + 32) = *(_QWORD *)(*((_QWORD *)this + 2) + 224LL);
  WdLogEvent5_WdEvent(v24);
  if ( (_DWORD)v16 )
  {
    v26 = WdLogNewEntry5_WdError(v25);
    *(_QWORD *)(v26 + 24) = v16;
    WdLogEvent5_WdError(v26);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v27, &EventProfilerExit, v28, 5020);
  return (unsigned int)v16;
}
