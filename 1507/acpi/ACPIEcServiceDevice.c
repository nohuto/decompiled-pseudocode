/*
 * XREFs of ACPIEcServiceDevice @ 0x1C003A3AC
 * Callers:
 *     ACPIEcQueueEcIrp @ 0x1C0039918 (ACPIEcQueueEcIrp.c)
 *     AcpiEcCommonDpcHandler @ 0x1C0039A70 (AcpiEcCommonDpcHandler.c)
 *     ACPIEcWatchdogDpc @ 0x1C003AAA0 (ACPIEcWatchdogDpc.c)
 * Callees:
 *     ACPIEcMaskInterrupt @ 0x1C0039AC0 (ACPIEcMaskInterrupt.c)
 *     ACPIEcUnmaskInterrupt @ 0x1C0039AF4 (ACPIEcUnmaskInterrupt.c)
 *     ACPIEcLogAction @ 0x1C003A170 (ACPIEcLogAction.c)
 *     ACPIEcServiceIoLoop @ 0x1C003A4A0 (ACPIEcServiceIoLoop.c)
 *     ACPIEcUnloadPending @ 0x1C007A554 (ACPIEcUnloadPending.c)
 */

void __fastcall ACPIEcServiceDevice(__int64 a1)
{
  KSPIN_LOCK *v2; // rdi
  KIRQL v3; // al
  bool v4; // zf
  KIRQL v5; // si

  if ( *(_BYTE *)(a1 + 121) <= 1u )
  {
    v2 = (KSPIN_LOCK *)(a1 + 88);
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    v4 = *(_BYTE *)(a1 + 456) == 0;
    v5 = v3;
    *(_BYTE *)(a1 + 457) = 1;
    if ( v4 )
    {
      v4 = *(_BYTE *)(a1 + 458) == 0;
      *(_BYTE *)(a1 + 456) = 1;
      if ( !v4 )
      {
        *(_BYTE *)(a1 + 458) = 0;
        ACPIEcLogAction(a1, 0x60u, 0);
        ACPIEcMaskInterrupt(a1);
      }
      while ( *(_BYTE *)(a1 + 457) )
      {
        *(_BYTE *)(a1 + 457) = 0;
        KeReleaseSpinLock(v2, v5);
        ACPIEcServiceIoLoop(a1);
        v5 = KeAcquireSpinLockRaiseToDpc(v2);
      }
      v4 = *(_BYTE *)(a1 + 121) == 0;
      *(_BYTE *)(a1 + 456) = 0;
      if ( !v4 )
        ACPIEcUnloadPending(a1);
      if ( !*(_BYTE *)(a1 + 458) )
      {
        *(_BYTE *)(a1 + 458) = 1;
        ACPIEcLogAction(a1, 0x70u, 0);
        ACPIEcUnmaskInterrupt(a1);
      }
    }
    KeReleaseSpinLock(v2, v5);
  }
}
