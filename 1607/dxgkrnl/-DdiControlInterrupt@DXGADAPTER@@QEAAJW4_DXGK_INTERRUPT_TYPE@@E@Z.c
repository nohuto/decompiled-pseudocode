/*
 * XREFs of ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z @ 0x1C009FE60
 * Callers:
 *     DXGADAPTER_DdiControlInterrupt @ 0x1C000D290 (DXGADAPTER_DdiControlInterrupt.c)
 *     ?StartHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C0184EFC (-StartHwVSync@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?StopHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C0184F94 (-StopHwVSync@DXGDODPRESENT@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z @ 0x1C0009138 (-DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0009468 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::DdiControlInterrupt(DXGADAPTER *this, enum _DXGK_INTERRUPT_TYPE a2, unsigned __int8 a3)
{
  __int64 v4; // r15
  DXGADAPTER *v6; // rcx
  __int64 v7; // r8
  DXGK_INTERRUPT_STATE v8; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int8 CurrentIrql; // r13
  __int64 v13; // rdi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v15; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v18; // r12d
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  _QWORD *v24; // rax
  unsigned __int8 v25; // cl
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  struct _DXGKARG_CONTROLINTERRUPT2 v31; // [rsp+68h] [rbp+20h]

  v4 = a2;
  v8 = DXGK_INTERRUPT_ENABLE;
  if ( (int)DXGADAPTER::GetDriverVersion(this) >= 1300 && *((_QWORD *)v6 + 96) )
  {
    v31.InterruptType = v4;
    LOBYTE(v8) = (_BYTE)v7 == 0;
    v31.InterruptState = v8;
    return DXGADAPTER::DdiControlInterrupt2(v6, v31, 0LL);
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v6, &EventProfilerEnter, v7, 5038);
  DXGADAPTER::AcquireDdiSync((__int64)this, 1);
  CurrentIrql = KeGetCurrentIrql();
  v13 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_16;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v15 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v15 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v15);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v13 = 0LL;
      goto LABEL_16;
    }
    v13 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v13 = 0LL;
  }
  if ( v13 )
  {
    v18 = *(_DWORD *)(v13 + 136);
    goto LABEL_17;
  }
LABEL_16:
  v18 = 0;
LABEL_17:
  LOBYTE(v11) = a3;
  v20 = (*((int (__fastcall **)(_QWORD, _QWORD, __int64))this + 70))(*((_QWORD *)this + 30), (unsigned int)v4, v11);
  v23 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v23 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v19, v21);
    v24[3] = 275LL;
    v24[4] = 16LL;
    v24[5] = this;
    v24[6] = CurrentIrql;
    v25 = KeGetCurrentIrql();
    v24[7] = v25;
    WdLogEvent5_WdCriticalError(v24);
  }
  if ( v13 && *(_DWORD *)(v13 + 136) != v18 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v19, v21);
    v26[3] = 275LL;
    v26[4] = 25LL;
    v26[5] = *(int *)(v13 + 136);
    v26[6] = v18;
    v26[7] = 0LL;
    WdLogEvent5_WdCriticalError(v26);
  }
  if ( (_DWORD)v4 == 3 && (int)v20 >= 0 )
  {
    LOBYTE(v23) = a3;
    PoNotifyVSyncChange(v23);
  }
  v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v19, v21, v22);
  v27[3] = v20;
  v27[4] = v4;
  v27[5] = a3;
  if ( (_DWORD)v20 != -1073741823 && (_DWORD)v20 != -1073741822 && (_DWORD)v20 )
  {
    v28 = WdLogNewEntry5_WdError(a3);
    *(_QWORD *)(v28 + 24) = v20;
    WdLogEvent5_WdError(v28);
  }
  DXGADAPTER::ReleaseDdiSync(this);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v29, &EventProfilerExit, v30, 5038);
  return (unsigned int)v20;
}
