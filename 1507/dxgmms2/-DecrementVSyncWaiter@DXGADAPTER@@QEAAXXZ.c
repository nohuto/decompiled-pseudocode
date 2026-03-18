/*
 * XREFs of ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C0012044
 * Callers:
 *     ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK@Z @ 0x1C0012110 (-SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::DecrementVSyncWaiter(DXGADAPTER *this, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rcx

  if ( _InterlockedDecrement((volatile signed __int32 *)this + 500) < 0 )
  {
    v3 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v3[3] = 275LL;
    v3[4] = 28LL;
    v3[5] = this;
    v4 = *((unsigned int *)this + 500);
    v3[7] = 0LL;
    v3[6] = v4;
    WdLogEvent5_WdCriticalError(v3);
  }
}
