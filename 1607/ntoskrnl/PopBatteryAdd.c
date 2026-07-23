/*
 * XREFs of PopBatteryAdd @ 0x14066EC84
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     PopAcquireRwLockExclusive @ 0x1400F9D28 (PopAcquireRwLockExclusive.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopChangeCapability @ 0x14056E438 (PopChangeCapability.c)
 *     PopBatteryWaitTag @ 0x14066F71C (PopBatteryWaitTag.c)
 */

void __fastcall PopBatteryAdd(__int64 a1)
{
  __int64 v2; // rdx

  KeInitializeEvent((PRKEVENT)(a1 + 80), SynchronizationEvent, 0);
  if ( ++dword_1403035B0 == 1 )
  {
    PopAcquirePolicyLock();
    LOBYTE(v2) = 1;
    PopChangeCapability(&byte_140303EBE, v2);
    PopReleasePolicyLock();
  }
  PopAcquireRwLockExclusive((unsigned __int64 *)PopCB);
  byte_1403035B8 = 1;
  PopBatteryWaitTag(a1);
  PopReleaseRwLock(PopCB);
}
