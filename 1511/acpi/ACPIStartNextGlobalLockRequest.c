/*
 * XREFs of ACPIStartNextGlobalLockRequest @ 0x1C001B4CC
 * Callers:
 *     ACPIReleaseGlobalLock @ 0x1C001B400 (ACPIReleaseGlobalLock.c)
 *     ACPIInterruptServiceRoutineDPC @ 0x1C0024980 (ACPIInterruptServiceRoutineDPC.c)
 * Callees:
 *     ACPIReleaseHardwareGlobalLock @ 0x1C001B45C (ACPIReleaseHardwareGlobalLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 */

void ACPIStartNextGlobalLockRequest()
{
  KIRQL v0; // di
  __int64 **v1; // rcx
  __int64 *v2; // rbx
  __int64 v3; // rax
  IRP **v4; // rcx
  IRP *v5; // rcx

  v0 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AcpiInformation + 8);
  v1 = (__int64 **)((char *)AcpiInformation + 48);
  if ( *v1 == (__int64 *)v1 )
  {
    ACPIReleaseHardwareGlobalLock();
    KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v0);
  }
  else
  {
    v2 = *v1;
    v3 = **v1;
    if ( (__int64 **)(*v1)[1] != v1 || *(__int64 **)(v3 + 8) != v2 )
      __fastfail(3u);
    *v1 = (__int64 *)v3;
    *(_QWORD *)(v3 + 8) = v1;
    KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v0);
    v4 = (IRP **)(v2 - 2);
    *((_QWORD *)AcpiInformation + 9) = v2 - 2;
    *((_DWORD *)AcpiInformation + 20) = *((unsigned __int16 *)v2 - 3);
    if ( *((_WORD *)v2 - 4) == 1 )
    {
      v5 = *v4;
      v5->IoStatus.Status = 0;
      IofCompleteRequest(v5, 0);
    }
    else if ( *((_WORD *)v2 - 4) == 2 )
    {
      ((void (*)(void))*v4)();
    }
  }
}
