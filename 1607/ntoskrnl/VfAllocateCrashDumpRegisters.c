/*
 * XREFs of VfAllocateCrashDumpRegisters @ 0x1407066E8
 * Callers:
 *     <none>
 * Callees:
 *     VfDisableHalVerifier @ 0x14022293C (VfDisableHalVerifier.c)
 *     ADD_MAP_REGISTERS @ 0x140705AB8 (ADD_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x140705F98 (VF_ASSERT_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x140709738 (ViGetAdapterInformationInternal.c)
 */

__int64 __fastcall VfAllocateCrashDumpRegisters(PADAPTER_OBJECT AdapterObject, PULONG NumberOfMapRegisters)
{
  ULONG *v2; // rsi
  __int64 AdapterInformationInternal; // rdi
  PVOID CrashDumpRegisters; // rbx

  v2 = NumberOfMapRegisters;
  if ( KeGetCurrentIrql() > 2u )
    VfDisableHalVerifier();
  LOBYTE(NumberOfMapRegisters) = 1;
  AdapterInformationInternal = ViGetAdapterInformationInternal(AdapterObject, NumberOfMapRegisters);
  CrashDumpRegisters = HalAllocateCrashDumpRegisters(AdapterObject, v2);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_IRQL(2u);
    _InterlockedExchangeAdd((volatile signed __int32 *)(AdapterInformationInternal + 152), *v2);
    ADD_MAP_REGISTERS(AdapterInformationInternal, *v2, 0);
    if ( ViVerifyDma )
    {
      if ( !CrashDumpRegisters )
        return -559026163LL;
    }
  }
  return (__int64)CrashDumpRegisters;
}
