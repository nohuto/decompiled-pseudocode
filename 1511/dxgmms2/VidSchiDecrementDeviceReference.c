/*
 * XREFs of VidSchiDecrementDeviceReference @ 0x1C00110F8
 * Callers:
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C0002288 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C000B8A0 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiDecrementContextReference @ 0x1C00104B0 (VidSchiDecrementContextReference.c)
 *     VidSchFlushQueuePackets @ 0x1C0010DB0 (VidSchFlushQueuePackets.c)
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C0011044 (VidSchiSuspendResumeDevicesForPowerTransition.c)
 *     VidSchUnreferenceDisplayingAllocationInternal @ 0x1C0022BF0 (VidSchUnreferenceDisplayingAllocationInternal.c)
 *     VidSchTerminateDevice @ 0x1C0038790 (VidSchTerminateDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiDecrementDeviceReference(char *P, int a2)
{
  char **v4; // rdx
  PVOID *v5; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( !a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)P + 4) + 1824LL), &LockHandle);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)P + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v4 = (char **)*((_QWORD *)P + 11);
    v5 = (PVOID *)*((_QWORD *)P + 12);
    if ( v4[1] != P + 88 || *v5 != P + 88 )
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
