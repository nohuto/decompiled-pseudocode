/*
 * XREFs of ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C001E250
 * Callers:
 *     DxgSetPowerComponentActiveNoWaitCB @ 0x1C00221D0 (DxgSetPowerComponentActiveNoWaitCB.c)
 *     DxgSetPowerComponentActiveNoWaitForceAsyncCB @ 0x1C00221F0 (DxgSetPowerComponentActiveNoWaitForceAsyncCB.c)
 *     ?RequestPowerStateForTargets@DMMVIDPN@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C007E6C8 (-RequestPowerStateForTargets@DMMVIDPN@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 *     ?EnableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C0145610 (-EnableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x1C01467A4 (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
 *     DxgSetPowerComponentActiveCBInternal @ 0x1C015AB80 (DxgSetPowerComponentActiveCBInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::SetPowerComponentActiveCBInternal(
        DXGADAPTER *this,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned int a4)
{
  _QWORD *v8; // rax

  if ( a2 >= *((_DWORD *)this + 578) )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v8[3] = 275LL;
    v8[4] = 23LL;
    v8[5] = this;
    v8[6] = 0LL;
    v8[7] = 0LL;
    WdLogEvent5_WdCriticalError(v8);
  }
  DXGADAPTER::SetPowerComponentActiveCBWorker(this, a2, a3, a4);
}
