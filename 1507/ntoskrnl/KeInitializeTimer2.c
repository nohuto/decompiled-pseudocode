/*
 * XREFs of KeInitializeTimer2 @ 0x14002F848
 * Callers:
 *     ExAllocateTimerInternal @ 0x1401589E8 (ExAllocateTimerInternal.c)
 *     MiStoreEvictThread @ 0x140170980 (MiStoreEvictThread.c)
 *     KiCompleteKernelInit @ 0x1403F98E4 (KiCompleteKernelInit.c)
 *     NtCreateWorkerFactory @ 0x14046FE54 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x140470F5C (NtCreateTimer2.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x140599DD4 (PopIdleInitAoAcDozeS4Timer.c)
 *     PopInitializeTimer @ 0x140599FC0 (PopInitializeTimer.c)
 *     CmpInitDelayDerefKCBEngine @ 0x1405A27F8 (CmpInitDelayDerefKCBEngine.c)
 *     ExInitializeTimeRefresh @ 0x1407D8EFC (ExInitializeTimeRefresh.c)
 *     ExpWorkerInitialization @ 0x1407E01DC (ExpWorkerInitialization.c)
 *     PopBatteryInit @ 0x1407E5890 (PopBatteryInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeInitializeTimer2(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int8 v4; // r9
  __int64 result; // rax

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_BYTE *)a1 = (a4 >= 0) | 0x18;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_QWORD *)(a1 + 96) = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(a2 ^ KiWaitAlways), KiWaitNever);
  *(_QWORD *)(a1 + 104) = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(a3 ^ KiWaitAlways), KiWaitNever);
  *(_QWORD *)(a1 + 112) = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways), KiWaitNever);
  v4 = a4 & 0xE;
  *(_QWORD *)(a1 + 120) = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways), KiWaitNever);
  result = v4;
  if ( !v4 )
    result = 1LL;
  *(_BYTE *)(a1 + 129) = result;
  return result;
}
