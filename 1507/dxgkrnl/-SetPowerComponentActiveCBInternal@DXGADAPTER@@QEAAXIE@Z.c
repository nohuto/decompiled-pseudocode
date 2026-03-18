/*
 * XREFs of ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIE@Z @ 0x1C001A7D0
 * Callers:
 *     DxgSetPowerComponentActiveNoWaitCB @ 0x1C001D0C0 (DxgSetPowerComponentActiveNoWaitCB.c)
 *     ?RequestPowerStateForTargets@DMMVIDPN@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C00CBB7C (-RequestPowerStateForTargets@DMMVIDPN@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 *     ?EnableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C01261CC (-EnableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x1C0128D94 (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
 *     DxgSetPowerComponentActiveCBInternal @ 0x1C01333B0 (DxgSetPowerComponentActiveCBInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::SetPowerComponentActiveCBInternal(DXGADAPTER *this, unsigned int a2, unsigned __int8 a3)
{
  _QWORD *v6; // rax

  if ( a2 >= *((_DWORD *)this + 538) )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v6[3] = 275LL;
    v6[4] = 23LL;
    v6[5] = this;
    v6[6] = 0LL;
    v6[7] = 0LL;
    WdLogEvent5_WdCriticalError(v6);
  }
  DXGADAPTER::SetPowerComponentActiveCBWorker(this, a2, a3);
}
