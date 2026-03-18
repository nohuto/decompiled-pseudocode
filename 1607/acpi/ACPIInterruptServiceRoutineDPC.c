/*
 * XREFs of ACPIInterruptServiceRoutineDPC @ 0x1C002BA60
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInterruptDispatchEvents @ 0x1C0003B6C (ACPIInterruptDispatchEvents.c)
 *     ACPIAcquireHardwareGlobalLock @ 0x1C00141C8 (ACPIAcquireHardwareGlobalLock.c)
 *     WRITE_PM1_ENABLE @ 0x1C002302C (WRITE_PM1_ENABLE.c)
 *     ACPIStartNextGlobalLockRequest @ 0x1C0027808 (ACPIStartNextGlobalLockRequest.c)
 *     ACPIButtonEvent @ 0x1C0029490 (ACPIButtonEvent.c)
 *     ACPIPccProcessSci @ 0x1C0051FE0 (ACPIPccProcessSci.c)
 */

void __fastcall ACPIInterruptServiceRoutineDPC(
        struct _KDPC *Dpc,
        _DWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  signed __int32 v5; // edi
  signed __int32 v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  KIRQL v9; // al
  KSPIN_LOCK *v10; // rcx
  bool v11; // di
  KIRQL v12; // r9
  bool v13; // al

  while ( 1 )
  {
    v5 = DeferredContext[22];
    do
    {
      v6 = v5;
      v7 = 0x80000000LL;
      if ( (v5 & 0x7FFFFFFF) == 0 )
      {
        KeAcquireSpinLockAtDpcLevel(&AcpiPm1EnableRegisterLock);
        WRITE_PM1_ENABLE(*((_WORD *)AcpiInformation + 56));
        KeReleaseSpinLockFromDpcLevel(&AcpiPm1EnableRegisterLock);
        v7 = 0LL;
      }
      v5 = _InterlockedCompareExchange(DeferredContext + 22, v7, v5);
    }
    while ( v6 != v5 );
    if ( !(_DWORD)v7 )
      break;
    v8 = (v6 & 0x100) != 0;
    if ( (v6 & 0x200) != 0 )
      v8 = (unsigned int)v8 | 2;
    if ( (_DWORD)v8 )
    {
      if ( (v6 & 0x8000) != 0 )
        LODWORD(v8) = 0x80000000;
      ACPIButtonEvent(FixedButtonDeviceObject, v8);
    }
    if ( (v6 & 0x20) != 0 )
    {
      v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AcpiInformation + 8);
      v10 = (KSPIN_LOCK *)AcpiInformation;
      v11 = 0;
      v12 = v9;
      if ( *((_UNKNOWN **)AcpiInformation + 6) != (_UNKNOWN *)((char *)AcpiInformation + 48) )
      {
        v13 = ACPIAcquireHardwareGlobalLock(*((volatile signed __int32 **)AcpiInformation + 5));
        v10 = (KSPIN_LOCK *)AcpiInformation;
        v11 = v13;
      }
      KeReleaseSpinLock(v10 + 8, v12);
      if ( v11 )
        ACPIStartNextGlobalLockRequest();
    }
    if ( (v6 & 0x20000) != 0 )
      ACPIPccProcessSci(v7, v8, SystemArgument1, SystemArgument2);
    if ( (v6 & 0x10000) != 0 )
      ACPIInterruptDispatchEvents();
  }
}
