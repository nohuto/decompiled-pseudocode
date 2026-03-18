/*
 * XREFs of KiInitializeProcessor @ 0x1403A7538
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x1403B10E8 (KiInitializeDynamicProcessorDpc.c)
 *     KeInitSystem @ 0x14074E20C (KeInitSystem.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x14002C018 (KeInitializeTimerEx.c)
 *     KeSetCoalescableTimer @ 0x140091250 (KeSetCoalescableTimer.c)
 *     KeInitializeGate @ 0x1400EF318 (KeInitializeGate.c)
 *     KiInitializeDpcList @ 0x1400F44B4 (KiInitializeDpcList.c)
 *     KeInitializeThreadedDpc @ 0x1401332D4 (KeInitializeThreadedDpc.c)
 */

__int64 __fastcall KiInitializeProcessor(__int64 a1)
{
  unsigned __int64 v2; // rax
  __int16 v4; // ax
  ULONG v5; // r9d
  __int64 v6; // r8
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r8

  if ( KeThreadDpcEnable )
  {
    KeInitializeGate(a1 + 22528);
    KiInitializeDpcList((_QWORD *)(a1 + 11688));
    *(_QWORD *)(a1 + 11704) = 0LL;
    *(_DWORD *)(a1 + 11712) = 0;
  }
  if ( KeDpcWatchdogPeriod )
  {
    KeInitializeThreadedDpc((PRKDPC)(a1 + 24320), (PKDEFERRED_ROUTINE)KiDpcWatchdog, (PVOID)*(unsigned int *)(a1 + 36));
    v4 = *(_WORD *)(a1 + 36);
    *(_BYTE *)(a1 + 24321) = 2;
    *(_WORD *)(a1 + 24322) = v4 + 640;
    KeInitializeTimerEx((PKTIMER)(a1 + 24384), NotificationTimer);
    v5 = KeMaximumIncrement;
    v6 = KeMaximumIncrement;
    v7 = (KeMaximumIncrement + 10000 * (unsigned __int64)(unsigned int)KeDpcWatchdogPeriod - 1) / KeMaximumIncrement;
    if ( v7 > 0xFFFFFFFF )
      v7 = 0xFFFFFFFFLL;
    *(_DWORD *)(a1 + 22636) = 0;
    *(_DWORD *)(a1 + 22632) = v7;
    v8 = v7 * v6 / 0x4E20;
    if ( v8 > 0xFFFFFFFF )
      LODWORD(v8) = -1;
    KeSetCoalescableTimer((PKTIMER)(a1 + 24384), (LARGE_INTEGER)-v5, v8, 0xFAu, (PKDPC)(a1 + 24320));
  }
  if ( KiDPCTimeout )
  {
    v2 = (10000LL * (unsigned int)KiDPCTimeout + (unsigned __int64)KeMaximumIncrement - 1) / KeMaximumIncrement;
    if ( v2 > 0xFFFFFFFF )
      LODWORD(v2) = -1;
    *(_DWORD *)(a1 + 23332) = v2;
  }
  return 0LL;
}
