/*
 * XREFs of ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C0070374
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A2328 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C000102C (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ??1DXGKEYEDMUTEXBYHANDLE@@QEAA@XZ @ 0x1C00010EC (--1DXGKEYEDMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C0070150 (-SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 */

void __fastcall DXGKEYEDMUTEX::SignalAbandoned(DXGKEYEDMUTEX *this, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 CurrentProcess; // rax
  __int64 v4; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  DXGKEYEDMUTEX *v10; // [rsp+30h] [rbp+8h] BYREF
  DXGKEYEDMUTEX *v11; // [rsp+48h] [rbp+20h] BYREF

  v10 = this;
  v2 = a2;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v4);
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&v11, v2, ProcessDxgProcess, &v10);
  if ( v10 )
  {
    DXGKEYEDMUTEX::SignalAbandonedInternal(v10, v2, 0);
  }
  else
  {
    v9 = WdLogNewEntry5_WdWarning(0LL, v6, v7, v8);
    *(_QWORD *)(v9 + 24) = v2;
    *(_QWORD *)(v9 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v9);
  }
  DXGKEYEDMUTEXBYHANDLE::~DXGKEYEDMUTEXBYHANDLE(&v11);
}
