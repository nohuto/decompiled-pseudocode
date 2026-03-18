/*
 * XREFs of ?DdiRecommendMonitorModes@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDMONITORMODES@@@Z @ 0x1C00F6534
 * Callers:
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C00F0544 (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiRecommendMonitorModes(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_RECOMMENDMONITORMODES *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 CurrentIrql; // r15
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  _QWORD *v19; // rax
  const DXGK_MONITORSOURCEMODESET_INTERFACE *pMonitorSourceModeSetInterface; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // rax
  __int64 ThreadWin32Thread; // rax
  _QWORD *v26; // rax
  unsigned __int8 v27; // cl
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5037);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v10 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_8;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v24 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v24 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v24);
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
  v15 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_RECOMMENDMONITORMODES *))(*((_QWORD *)this + 2) + 528LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  v18 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v18 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v14, v16);
    v26[3] = 275LL;
    v26[4] = 16LL;
    v26[5] = this;
    v26[6] = CurrentIrql;
    v27 = KeGetCurrentIrql();
    v26[7] = v27;
    WdLogEvent5_WdCriticalError(v26);
  }
  if ( v10 && *(_DWORD *)(v10 + 136) != v13 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v14, v16);
    v28[3] = 275LL;
    v28[4] = 25LL;
    v29 = *(int *)(v10 + 136);
    v28[7] = 0LL;
    v28[5] = v29;
    v28[6] = v13;
    WdLogEvent5_WdCriticalError(v28);
  }
  v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v14, v16, v17);
  v19[3] = v15;
  v19[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 240LL);
  v19[5] = a2->VideoPresentTargetId;
  v19[6] = a2->hMonitorSourceModeSet;
  pMonitorSourceModeSetInterface = a2->pMonitorSourceModeSetInterface;
  v19[7] = pMonitorSourceModeSetInterface;
  if ( (_DWORD)v15 != -1073741801 && (_DWORD)v15 )
  {
    v30 = WdLogNewEntry5_WdError(pMonitorSourceModeSetInterface);
    *(_QWORD *)(v30 + 24) = v15;
    WdLogEvent5_WdError(v30);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v21, &EventProfilerExit, v22, 5037);
  return (unsigned int)v15;
}
