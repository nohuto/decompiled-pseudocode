/*
 * XREFs of PopBatteryAdd @ 0x1406367E0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     PopAcquireRwLockExclusive @ 0x140098DC8 (PopAcquireRwLockExclusive.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     PopChangeCapability @ 0x14053DEF8 (PopChangeCapability.c)
 *     PopBatteryWaitTag @ 0x140637214 (PopBatteryWaitTag.c)
 */

void __fastcall PopBatteryAdd(__int64 a1)
{
  __int64 v2; // rdx

  KeInitializeEvent((PRKEVENT)(a1 + 80), SynchronizationEvent, 0);
  if ( ++dword_1402DE3D0 == 1 )
  {
    PopAcquirePolicyLock();
    LOBYTE(v2) = 1;
    PopChangeCapability(&byte_1402DDF7E, v2);
    PopReleasePolicyLock();
  }
  PopAcquireRwLockExclusive((__int64)&PopCB);
  byte_1402DE3D8 = 1;
  PopBatteryWaitTag(a1);
  PopReleaseRwLock((signed __int64 *)&PopCB);
}
