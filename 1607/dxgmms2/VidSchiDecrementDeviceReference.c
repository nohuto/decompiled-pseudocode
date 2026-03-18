/*
 * XREFs of VidSchiDecrementDeviceReference @ 0x1C000F050
 * Callers:
 *     VidSchiDecrementContextReference @ 0x1C0001BA0 (VidSchiDecrementContextReference.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C000A340 (VidSchiSwitchContextWithCheck.c)
 *     VidSchFlushQueuePackets @ 0x1C000ED10 (VidSchFlushQueuePackets.c)
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C000EF98 (VidSchiSuspendResumeDevicesForPowerTransition.c)
 *     VidSchTerminateDevice @ 0x1C0040DE0 (VidSchTerminateDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiDecrementDeviceReference(char *P, int a2)
{
  char **v4; // rdx
  PVOID *v5; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( !a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)P + 4) + 1856LL), &LockHandle);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)P + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v4 = (char **)*((_QWORD *)P + 10);
    v5 = (PVOID *)*((_QWORD *)P + 11);
    if ( v4[1] != P + 80 || *v5 != P + 80 )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = (char *)v5;
    if ( !a2 )
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    ExFreePoolWithTag(P, 0);
  }
  else if ( !a2 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
