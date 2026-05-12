/*
 * XREFs of RaidAdapterDeleteAsyncCallbacks @ 0x1C002382C
 * Callers:
 *     RaidAdapterReleaseResources @ 0x1C0056F70 (RaidAdapterReleaseResources.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C00571E4 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     RaidAdapterCancelPauseTimer @ 0x1C00234C8 (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterDisConnectMSIInterrupt @ 0x1C0056CE8 (RaidAdapterDisConnectMSIInterrupt.c)
 *     RaidAdapterDisConnectNonMSIInterrupt @ 0x1C0056D28 (RaidAdapterDisConnectNonMSIInterrupt.c)
 */

void __fastcall RaidAdapterDeleteAsyncCallbacks(__int64 a1)
{
  KIRQL v2; // bl
  void *v3; // rcx
  __int64 i; // rbx
  void *v5; // rcx
  void *v6; // rcx
  char v7; // al

  KeCancelTimer((PKTIMER)(a1 + 1664));
  v2 = KfRaiseIrql(2u);
  RaidAdapterCancelPauseTimer(a1, (struct _KTIMER *)(a1 + 1856));
  RaidAdapterCancelPauseTimer(a1, (struct _KTIMER *)(a1 + 4216));
  KeLowerIrql(v2);
  KeFlushQueuedDpcs();
  if ( *(_BYTE *)(a1 + 4449) )
  {
    RaidAdapterDisConnectMSIInterrupt(a1);
    *(_QWORD *)(a1 + 4432) = 0LL;
    *(_BYTE *)(a1 + 4449) = 0;
  }
  else if ( *(_QWORD *)(a1 + 664) )
  {
    RaidAdapterDisConnectNonMSIInterrupt(a1);
  }
  v3 = *(void **)(a1 + 5096);
  if ( v3 )
  {
    PoUnregisterPowerSettingCallback(v3);
    *(_QWORD *)(a1 + 5096) = 0LL;
  }
  if ( *(_QWORD *)(a1 + 5112) )
  {
    PoUnregisterCoalescingCallback();
    *(_QWORD *)(a1 + 5112) = 0LL;
  }
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 4896); i = (unsigned int)(i + 1) )
    PoUnregisterPowerSettingCallback(*(PVOID *)(*(_QWORD *)(a1 + 4912) + 8 * i));
  v5 = *(void **)(a1 + 4904);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *(_DWORD *)(a1 + 4896) = 0;
    *(_QWORD *)(a1 + 4904) = 0LL;
    *(_QWORD *)(a1 + 4912) = 0LL;
  }
  v6 = *(void **)(a1 + 5120);
  if ( v6 )
  {
    PoUnregisterPowerSettingCallback(v6);
    *(_QWORD *)(a1 + 5120) = 0LL;
  }
  v7 = *(_BYTE *)(a1 + 109);
  if ( (v7 & 8) != 0 )
  {
    *(_BYTE *)(a1 + 109) = v7 & 0xF7;
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 5128), 0);
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 5128));
  }
}
