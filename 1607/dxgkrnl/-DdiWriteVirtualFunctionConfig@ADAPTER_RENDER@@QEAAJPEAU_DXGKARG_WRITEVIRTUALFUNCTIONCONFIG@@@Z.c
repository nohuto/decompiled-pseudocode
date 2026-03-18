/*
 * XREFs of ?DdiWriteVirtualFunctionConfig@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_WRITEVIRTUALFUNCTIONCONFIG@@@Z @ 0x1C0159FE0
 * Callers:
 *     DxgkDdiWriteVirtualFunctionConfig @ 0x1C015AAA4 (DxgkDdiWriteVirtualFunctionConfig.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiWriteVirtualFunctionConfig(
        ADAPTER_RENDER *this,
        struct _DXGKARG_WRITEVIRTUALFUNCTIONCONFIG *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v11; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  _QWORD *v20; // rax
  unsigned __int8 v21; // cl
  _QWORD *v22; // rax
  __int64 v23; // rcx
  bool v24; // sf
  __int64 v25; // rax
  __int64 v26; // rax

  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_10;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v11 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v11 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v11);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5, v4, v6, v7);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v9 = 0LL;
LABEL_10:
      v14 = 0;
      goto LABEL_11;
    }
    v9 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
    goto LABEL_10;
  v14 = *(_DWORD *)(v9 + 136);
LABEL_11:
  v16 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_WRITEVIRTUALFUNCTIONCONFIG *))(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                + 920LL)
                                                                                    + 40LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 920LL) + 8LL),
          a2);
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
  if ( (_DWORD)v16 != -1073741811 )
  {
    v24 = (int)v16 < 0;
    if ( !(_DWORD)v16 )
      goto LABEL_20;
    v25 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v25 + 24) = v16;
    WdLogEvent5_WdError(v25);
  }
  v24 = (int)v16 < 0;
LABEL_20:
  if ( v24 )
  {
    v26 = WdLogNewEntry5_WdWarning(v19, v15, v17, v18);
    *(_QWORD *)(v26 + 24) = v16;
    WdLogEvent5_WdWarning(v26);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  return (unsigned int)v16;
}
