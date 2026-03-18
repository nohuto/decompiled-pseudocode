/*
 * XREFs of ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C0003400
 * Callers:
 *     ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK@Z @ 0x1C0021A90 (-SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK@Z.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z @ 0x1C008B040 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C009A900 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00B6230 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00CC590 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00EA248 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C01298A4 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::DecrementVSyncWaiter(DXGADAPTER *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx

  if ( _InterlockedDecrement((volatile signed __int32 *)this + 504) < 0 )
  {
    v2 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v2[3] = 275LL;
    v2[4] = 28LL;
    v2[5] = this;
    v3 = *((unsigned int *)this + 504);
    v2[7] = 0LL;
    v2[6] = v3;
    WdLogEvent5_WdCriticalError(v2);
  }
}
