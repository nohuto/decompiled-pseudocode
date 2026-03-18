/*
 * XREFs of PiDrvDbUnloadNode @ 0x1404FA260
 * Callers:
 *     PiDrvDbNodeActionCallback @ 0x1404FA75C (PiDrvDbNodeActionCallback.c)
 * Callees:
 *     KiSetTimerEx @ 0x140006E00 (KiSetTimerEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     KeSetCoalescableTimer @ 0x1400EFC00 (KeSetCoalescableTimer.c)
 */

__int64 __fastcall PiDrvDbUnloadNode(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 88), 1u);
  if ( *(_QWORD *)(a1 + 72) )
  {
    v5 = *(_QWORD *)(a1 + 480);
    if ( v5 )
    {
      if ( v5 < 0 )
        KeSetCoalescableTimer((PKTIMER)(a1 + 264), *(LARGE_INTEGER *)(a1 + 480), 0, 0x3A98u, (PKDPC)(a1 + 328));
    }
    else
    {
      KiSetTimerEx(a1 + 264, 0LL, 0, 0, a1 + 328);
    }
    *(_BYTE *)(a1 + 488) = 1;
  }
  *a2 = 0LL;
  ExReleaseResourceLite((PERESOURCE)(a1 + 88));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v6, v7, v8);
  return 0LL;
}
