/*
 * XREFs of AcpiDeviceResetDereference @ 0x1C0039BE0
 * Callers:
 *     AcpiDeviceResetCompleteResetWorker @ 0x1C0039A10 (AcpiDeviceResetCompleteResetWorker.c)
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0017E60 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AcpiDeviceResetDereference(volatile signed __int32 **P)
{
  volatile signed __int32 *v2; // rcx
  void (__fastcall *v3)(_QWORD); // rax

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P, 0xFFFFFFFF) == 1 )
  {
    ACPIInitDereferenceDeviceExtensionUnlocked(P[1]);
    v2 = P[10];
    if ( v2 )
    {
      v3 = (void (__fastcall *)(_QWORD))*((_QWORD *)v2 + 3);
      if ( v3 )
        v3(*((_QWORD *)v2 + 1));
    }
    ExFreePoolWithTag(P, 0);
  }
}
