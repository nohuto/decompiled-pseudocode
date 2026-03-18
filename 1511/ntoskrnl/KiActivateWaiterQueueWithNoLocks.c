/*
 * XREFs of KiActivateWaiterQueueWithNoLocks @ 0x140094210
 * Callers:
 *     KeTerminateThread @ 0x14002B7EC (KeTerminateThread.c)
 *     KiCommitThreadWait @ 0x140081ED0 (KiCommitThreadWait.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1400E7488 (KiPriQueueThreadPriorityChanged.c)
 *     KiSwitchQueue @ 0x1400E7B20 (KiSwitchQueue.c)
 *     KiSwitchPriQueue @ 0x1400F1A30 (KiSwitchPriQueue.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140035AF0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140077FB0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiActivateWaiterKQueue @ 0x140094338 (KiActivateWaiterKQueue.c)
 *     KiActivateWaiterPriQueue @ 0x1400943C4 (KiActivateWaiterPriQueue.c)
 */

void __fastcall KiActivateWaiterQueueWithNoLocks(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  volatile LONG *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  volatile signed __int32 *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  int v14; // [rsp+30h] [rbp+8h] BYREF

  v5 = &KiObjectRundownLocks[16 * ((a2 >> 4) & 0x3F)];
  ExAcquireSpinLockSharedAtDpcLevel(v5);
  v8 = *(volatile signed __int32 **)(a1 + 232);
  if ( v8 )
  {
    KiAcquireKobjectLockSafe(*(volatile signed __int32 **)(a1 + 232), v6, v7);
    if ( !*(_QWORD *)(a1 + 232) )
    {
      _InterlockedAnd(v8, 0xFFFFFF7F);
      v8 = 0LL;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(v5);
  if ( v8 )
  {
    if ( a3 )
    {
      if ( (*(_BYTE *)v8 & 0x7F) == 0x15 )
      {
        v14 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        {
          do
            KeYieldProcessorEx(&v14, v9, v10);
          while ( *(_QWORD *)(a1 + 64) );
        }
        v11 = (unsigned __int8)*(_DWORD *)(a1 + 540);
        *(_DWORD *)(a1 + 540) = (unsigned __int8)*(_DWORD *)(a1 + 540) | 0x100;
        _InterlockedDecrement(&v8[v11 + 134]);
        *(_QWORD *)(a1 + 64) = 0LL;
      }
      else
      {
        _InterlockedDecrement(v8 + 10);
      }
      v12 = *a3;
      v13 = (_QWORD *)a3[1];
      if ( *(_QWORD **)(*a3 + 8LL) != a3 || (_QWORD *)*v13 != a3 )
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    if ( (*(_BYTE *)v8 & 0x7F) == 0x15 )
      KiActivateWaiterPriQueue(v8, v9, v10);
    else
      KiActivateWaiterKQueue(v8);
  }
}
