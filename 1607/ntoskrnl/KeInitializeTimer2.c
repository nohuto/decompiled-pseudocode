/*
 * XREFs of KeInitializeTimer2 @ 0x14007DDC8
 * Callers:
 *     ExAllocateTimerInternal @ 0x140133028 (ExAllocateTimerInternal.c)
 *     MiStoreEvictThread @ 0x14014398C (MiStoreEvictThread.c)
 *     KiCompleteKernelInit @ 0x1403D46A0 (KiCompleteKernelInit.c)
 *     NtCreateWorkerFactory @ 0x14046FD64 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x1404701BC (NtCreateTimer2.c)
 *     CmpInitDelayDerefKCBEngine @ 0x14055BC28 (CmpInitDelayDerefKCBEngine.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x14056FA98 (PopIdleInitAoAcDozeS4Timer.c)
 *     PopInitializeTimer @ 0x14057A7BC (PopInitializeTimer.c)
 *     EtwpInitialize @ 0x1407A0D3C (EtwpInitialize.c)
 *     ExInitializeTimeRefresh @ 0x1407AE678 (ExInitializeTimeRefresh.c)
 *     ExpWorkerInitialization @ 0x1407B4A64 (ExpWorkerInitialization.c)
 *     PopBatteryInit @ 0x1407B99E0 (PopBatteryInit.c)
 * Callees:
 *     <none>
 */

char __fastcall KeInitializeTimer2(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r11
  char v5; // r9
  _BYTE *i; // rax
  char result; // al

  v4 = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)a1 = (a4 >= 0) | 0x18;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_QWORD *)(a1 + 96) = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(a2 ^ KiWaitAlways), KiWaitNever);
  *(_QWORD *)(a1 + 104) = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(a3 ^ KiWaitAlways), KiWaitNever);
  *(_QWORD *)(a1 + 112) = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways), KiWaitNever);
  *(_QWORD *)(a1 + 120) = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways), KiWaitNever);
  v5 = a4 & 0xE;
  *(_BYTE *)(a1 + 129) = v5;
  for ( i = KiTimer2Combinations; *i != v5; i += 3 )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= 5 )
      __fastfail(5u);
  }
  *(_BYTE *)(a1 + 130) = KiTimer2Combinations[3 * v4 + 1];
  result = KiTimer2Combinations[3 * v4 + 2];
  *(_BYTE *)(a1 + 131) = result;
  return result;
}
