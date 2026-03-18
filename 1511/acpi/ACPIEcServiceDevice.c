/*
 * XREFs of ACPIEcServiceDevice @ 0x1C00045B4
 * Callers:
 *     ACPIEcQueueEcIrp @ 0x1C003A528 (ACPIEcQueueEcIrp.c)
 *     AcpiEcCommonDpcHandler @ 0x1C003A680 (AcpiEcCommonDpcHandler.c)
 *     ACPIEcWatchdogDpc @ 0x1C003AE30 (ACPIEcWatchdogDpc.c)
 * Callees:
 *     ACPIEcServiceIoLoop @ 0x1C0023C94 (ACPIEcServiceIoLoop.c)
 *     ACPIEcLogAction @ 0x1C0024290 (ACPIEcLogAction.c)
 *     ACPIEcMaskInterrupt @ 0x1C003A6D0 (ACPIEcMaskInterrupt.c)
 *     ACPIEcUnmaskInterrupt @ 0x1C003A704 (ACPIEcUnmaskInterrupt.c)
 *     ACPIEcUnloadPending @ 0x1C007A6B4 (ACPIEcUnloadPending.c)
 */

void __fastcall ACPIEcServiceDevice(__int64 a1)
{
  KSPIN_LOCK *v2; // rdi
  KIRQL v3; // al
  __int64 v4; // rdx
  bool v5; // zf
  KIRQL v6; // si

  if ( *(_BYTE *)(a1 + 121) <= 1u )
  {
    v2 = (KSPIN_LOCK *)(a1 + 88);
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    v5 = *(_BYTE *)(a1 + 456) == 0;
    v6 = v3;
    *(_BYTE *)(a1 + 457) = 1;
    if ( v5 )
    {
      v5 = *(_BYTE *)(a1 + 458) == 0;
      *(_BYTE *)(a1 + 456) = 1;
      if ( !v5 )
      {
        *(_BYTE *)(a1 + 458) = 0;
        LOBYTE(v4) = 96;
        ACPIEcLogAction(a1, v4, 0LL);
        ACPIEcMaskInterrupt(a1);
      }
      while ( *(_BYTE *)(a1 + 457) )
      {
        *(_BYTE *)(a1 + 457) = 0;
        KeReleaseSpinLock(v2, v6);
        ACPIEcServiceIoLoop(a1);
        v6 = KeAcquireSpinLockRaiseToDpc(v2);
      }
      v5 = *(_BYTE *)(a1 + 121) == 0;
      *(_BYTE *)(a1 + 456) = 0;
      if ( !v5 )
        ACPIEcUnloadPending(a1);
      if ( !*(_BYTE *)(a1 + 458) )
      {
        *(_BYTE *)(a1 + 458) = 1;
        LOBYTE(v4) = 112;
        ACPIEcLogAction(a1, v4, 0LL);
        ACPIEcUnmaskInterrupt(a1);
      }
    }
    KeReleaseSpinLock(v2, v6);
  }
}
