/*
 * XREFs of ?DdiSetVidPnSourceAddressWithMultiPlaneOverlay2@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2@@@Z @ 0x1C0020400
 * Callers:
 *     ?ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay2@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2@@@Z @ 0x1C0021F80 (-ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay2@@YAJPEAVADAPTER_DISPLAY@@PEBU_DX.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetVidPnSourceAddressWithMultiPlaneOverlay2(
        ADAPTER_DISPLAY *this,
        const struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int8 CurrentIrql; // bp
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v9; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v12; // esi
  __int64 v13; // rdi
  __int64 v14; // rcx
  _QWORD *v15; // rax
  unsigned __int8 v16; // cl
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax

  if ( KeGetCurrentIrql() <= 2u )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 708LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( KeGetCurrentIrql() >= 0xFu )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 709LL;
    WdLogEvent5_WdAssertion(v5);
  }
  CurrentIrql = KeGetCurrentIrql();
  v7 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_14;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v9);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v7 = 0LL;
LABEL_14:
      v12 = 0;
      goto LABEL_15;
    }
    v7 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
    goto LABEL_14;
  v12 = *(_DWORD *)(v7 + 136);
LABEL_15:
  v13 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2 *))(*((_QWORD *)this + 2) + 872LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  v14 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v14 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v15[3] = 275LL;
    v15[4] = 16LL;
    v15[5] = this;
    v15[6] = CurrentIrql;
    v16 = KeGetCurrentIrql();
    v15[7] = v16;
    WdLogEvent5_WdCriticalError(v15);
  }
  if ( v7 && *(_DWORD *)(v7 + 136) != v12 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v17[3] = 275LL;
    v17[4] = 25LL;
    v18 = *(int *)(v7 + 136);
    v17[7] = 0LL;
    v17[5] = v18;
    v17[6] = v12;
    WdLogEvent5_WdCriticalError(v17);
  }
  if ( (_DWORD)v13 )
  {
    v19 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v19 + 24) = v13;
    WdLogEvent5_WdError(v19);
  }
  return (unsigned int)v13;
}
