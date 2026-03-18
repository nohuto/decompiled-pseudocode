/*
 * XREFs of ACPIIsPhase3ListEmptyOfUnblockedItems @ 0x1C0038A80
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C001BE00 (ACPIDevicePowerDpc.c)
 * Callees:
 *     ACPIDevicePowerEnumerateAssociatedPowerNodes @ 0x1C001EB58 (ACPIDevicePowerEnumerateAssociatedPowerNodes.c)
 */

bool ACPIIsPhase3ListEmptyOfUnblockedItems()
{
  char v0; // bp
  char v1; // si
  __int64 *v2; // rdi
  __int64 v3; // rcx
  __int64 *v4; // rdx
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int64 *v7; // rdi
  __int64 v8; // rcx

  v0 = 0;
  v1 = 0;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  if ( AcpiPowerCurrentPagingPathTransitions > 0 )
  {
    v2 = (__int64 *)AcpiPowerPhase3List;
    while ( v2 != &AcpiPowerPhase3List )
    {
      v3 = (__int64)v2;
      v2 = (__int64 *)*v2;
      if ( !*(_DWORD *)(v3 + 48) && (*(_DWORD *)(v3 + 56) & 0x2000000) != 0 )
        ACPIDevicePowerEnumerateAssociatedPowerNodes(
          v3,
          (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))ACPIMarkPagingPathPowerNodeEnum,
          v3);
    }
  }
  v4 = (__int64 *)AcpiPowerNodeList;
  if ( (__int64 *)AcpiPowerNodeList != &AcpiPowerNodeList )
  {
    do
    {
      v5 = v4;
      v4 = (__int64 *)*v4;
      if ( *((_DWORD *)v5 + 16) == 1 )
      {
        v6 = v5[2];
        if ( (v6 & 0x1000) == 0
          || (AcpiPowerCurrentPagingPathTransitions <= 0 || (v6 & 0x40000) != 0) && (__int64 *)v5[13] == v5 + 13 )
        {
          _InterlockedAnd64(v5 + 2, 0xFFFFFFFFFFFFFFF7uLL);
          v1 = 1;
        }
        else
        {
          _InterlockedOr64(v5 + 2, 8uLL);
          v0 = 1;
        }
      }
      _InterlockedAnd64(v5 + 2, 0xFFFFFFFFFFFBFFFFuLL);
    }
    while ( v4 != &AcpiPowerNodeList );
    if ( !v1 && v0 )
    {
      v7 = (__int64 *)AcpiPowerPhase3List;
      while ( v7 != &AcpiPowerPhase3List )
      {
        v8 = (__int64)v7;
        v7 = (__int64 *)*v7;
        if ( !*(_DWORD *)(v8 + 48) )
          ACPIDevicePowerEnumerateAssociatedPowerNodes(
            v8,
            (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))ACPIIsPhase3ListEmptyOfUnblockedItemsPowerNodeEnum,
            v8);
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  return v1 == 0;
}
