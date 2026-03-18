/*
 * XREFs of ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z @ 0x1C007829C
 * Callers:
 *     DXGADAPTER_DdiControlInterrupt @ 0x1C000A580 (DXGADAPTER_DdiControlInterrupt.c)
 *     ?StartHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C015B41C (-StartHwVSync@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?StopHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C015B598 (-StopHwVSync@DXGDODPRESENT@@QEAAXXZ.c)
 * Callees:
 *     ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z @ 0x1C0001FB0 (-DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00022B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002310 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002434 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::DdiControlInterrupt(DXGADAPTER *this, enum _DXGK_INTERRUPT_TYPE a2, unsigned __int8 a3)
{
  __int64 v4; // r15
  DXGADAPTER *v6; // rcx
  __int64 v7; // r8
  DXGK_INTERRUPT_STATE v8; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int8 CurrentIrql; // r13
  __int64 v15; // rdi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v17; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v20; // r12d
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  _QWORD *v26; // rax
  unsigned __int8 v27; // cl
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  struct _DXGKARG_CONTROLINTERRUPT2 v33; // [rsp+68h] [rbp+20h]

  v4 = a2;
  v8 = DXGK_INTERRUPT_ENABLE;
  if ( (int)DXGADAPTER::GetDriverVersion(this) >= 1300 && *((_QWORD *)v6 + 94) )
  {
    v33.InterruptType = v4;
    LOBYTE(v8) = (_BYTE)v7 == 0;
    v33.InterruptState = v8;
    return DXGADAPTER::DdiControlInterrupt2(v6, v33, 0LL);
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)v6, &EventProfilerEnter, v7, 5038);
  DXGADAPTER::AcquireDdiSync((__int64)this, 1);
  CurrentIrql = KeGetCurrentIrql();
  v15 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_16;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v17 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v17 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v17);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11, v10, v12, v13);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v15 = 0LL;
      goto LABEL_16;
    }
    v15 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v15 = 0LL;
  }
  if ( v15 )
  {
    v20 = *(_DWORD *)(v15 + 136);
    goto LABEL_17;
  }
LABEL_16:
  v20 = 0;
LABEL_17:
  LOBYTE(v12) = a3;
  v22 = (*((int (__fastcall **)(_QWORD, _QWORD, __int64))this + 68))(*((_QWORD *)this + 28), (unsigned int)v4, v12);
  v25 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v25 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v21, v23);
    v26[3] = 275LL;
    v26[4] = 16LL;
    v26[5] = this;
    v26[6] = CurrentIrql;
    v27 = KeGetCurrentIrql();
    v26[7] = v27;
    WdLogEvent5_WdCriticalError(v26);
  }
  if ( v15 && *(_DWORD *)(v15 + 136) != v20 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v21, v23);
    v28[3] = 275LL;
    v28[4] = 25LL;
    v28[5] = *(int *)(v15 + 136);
    v28[6] = v20;
    v28[7] = 0LL;
    WdLogEvent5_WdCriticalError(v28);
  }
  if ( (_DWORD)v4 == 3 && (int)v22 >= 0 )
  {
    LOBYTE(v25) = a3;
    PoNotifyVSyncChange(v25);
  }
  v29 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v21, v23, v24);
  v29[3] = v22;
  v29[4] = v4;
  v29[5] = a3;
  if ( (_DWORD)v22 != -1073741823 && (_DWORD)v22 != -1073741822 && (_DWORD)v22 )
  {
    v30 = WdLogNewEntry5_WdError(a3);
    *(_QWORD *)(v30 + 24) = v22;
    WdLogEvent5_WdError(v30);
  }
  DXGADAPTER::ReleaseDdiSync(this);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v31, &EventProfilerExit, v32, 5038);
  return (unsigned int)v22;
}
