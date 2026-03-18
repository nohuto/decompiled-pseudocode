/*
 * XREFs of ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK@Z @ 0x1C0021BA0
 * Callers:
 *     ?NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0021768 (-NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C00026A0 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     Template_qqqq @ 0x1C001BE48 (Template_qqqq.c)
 */

void __fastcall ADAPTER_DISPLAY::SignalVerticalBlankEvent(
        ADAPTER_DISPLAY *this,
        struct DXGADAPTER *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v6; // rbx
  __int64 v7; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  if ( a3 < *((_DWORD *)this + 20) )
  {
    v6 = *((_QWORD *)this + 14) + 1008LL * a3;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 848), &LockHandle);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_qqqq(
        *(unsigned __int8 *)(v6 + 840),
        &EventDWMVsyncSignal,
        v7,
        *(_DWORD *)(v6 + 832),
        a4,
        *(_BYTE *)(v6 + 840),
        *((_DWORD *)a2 + 500));
    KePulseEvent((PRKEVENT)(v6 + 800), 0, 0);
    if ( *(_QWORD *)(v6 + 824) )
    {
      *(_DWORD *)(v6 + 836) = a4;
      if ( *(_DWORD *)(v6 + 832) <= a4 )
      {
        if ( *(_BYTE *)(v6 + 840) )
        {
          *(_BYTE *)(v6 + 840) = 0;
          if ( *((_QWORD *)a2 + 248) )
            DXGADAPTER::DecrementVSyncWaiter(a2);
        }
        KeSetEvent(*(PRKEVENT *)(v6 + 824), 0, 0);
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
