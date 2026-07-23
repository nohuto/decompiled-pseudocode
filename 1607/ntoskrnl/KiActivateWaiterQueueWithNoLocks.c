/*
 * XREFs of KiActivateWaiterQueueWithNoLocks @ 0x14007E678
 * Callers:
 *     KiCommitThreadWait @ 0x14005A850 (KiCommitThreadWait.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1400A6028 (KiPriQueueThreadPriorityChanged.c)
 *     KiSwitchQueue @ 0x1400A65EC (KiSwitchQueue.c)
 *     KiSwitchPriQueue @ 0x1400B0A14 (KiSwitchPriQueue.c)
 *     KeTerminateThread @ 0x1400F02A4 (KeTerminateThread.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14001D8E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiActivateWaiterKQueue @ 0x14007E788 (KiActivateWaiterKQueue.c)
 *     KiActivateWaiterPriQueue @ 0x14007E814 (KiActivateWaiterPriQueue.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400E8250 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 */

void __fastcall KiActivateWaiterQueueWithNoLocks(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  volatile LONG *v5; // rsi
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v5 = (volatile LONG *)((char *)&KiObjectRundownLocks + 64 * ((a2 >> 4) & 0x3F));
  ExAcquireSpinLockSharedAtDpcLevel(v5);
  v6 = *(volatile signed __int32 **)(a1 + 232);
  if ( v6 )
  {
    KiAcquireKobjectLockSafe(*(_QWORD *)(a1 + 232));
    if ( !*(_QWORD *)(a1 + 232) )
    {
      _InterlockedAnd(v6, 0xFFFFFF7F);
      v6 = 0LL;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(v5);
  if ( v6 )
  {
    if ( a3 )
    {
      if ( (*(_BYTE *)v6 & 0x7F) == 0x15 )
      {
        v10 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        {
          do
            KeYieldProcessorEx(&v10);
          while ( *(_QWORD *)(a1 + 64) );
        }
        v9 = (unsigned __int8)*(_DWORD *)(a1 + 540);
        *(_DWORD *)(a1 + 540) = (unsigned __int8)*(_DWORD *)(a1 + 540) | 0x100;
        _InterlockedDecrement(&v6[v9 + 134]);
        *(_QWORD *)(a1 + 64) = 0LL;
      }
      else
      {
        _InterlockedDecrement(v6 + 10);
      }
      v7 = *a3;
      v8 = (_QWORD *)a3[1];
      if ( *(_QWORD **)(*a3 + 8LL) != a3 || (_QWORD *)*v8 != a3 )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    if ( (*(_BYTE *)v6 & 0x7F) == 0x15 )
      KiActivateWaiterPriQueue(v6);
    else
      KiActivateWaiterKQueue(v6);
  }
}
