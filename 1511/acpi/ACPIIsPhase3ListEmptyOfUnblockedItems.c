/*
 * XREFs of ACPIIsPhase3ListEmptyOfUnblockedItems @ 0x1C0039670
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C001C040 (ACPIDevicePowerDpc.c)
 * Callees:
 *     ACPIDevicePowerEnumerateAssociatedPowerNodes @ 0x1C001F8D8 (ACPIDevicePowerEnumerateAssociatedPowerNodes.c)
 */

bool ACPIIsPhase3ListEmptyOfUnblockedItems()
{
  char v0; // si
  char v1; // bp
  __int64 *v2; // rdi
  __int64 v3; // rcx
  __int64 *v4; // rdx
  __int64 *v5; // rcx
  int v6; // eax
  __int64 v7; // rax
  __int64 *v8; // rdi
  __int64 v9; // rcx

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
      v6 = *((_DWORD *)v5 + 16);
      if ( v6 == 1 )
      {
        v7 = v5[2];
        if ( (v7 & 0x1000) == 0
          || (AcpiPowerCurrentPagingPathTransitions <= 0 || (v7 & 0x40000) != 0) && (__int64 *)v5[13] == v5 + 13 )
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
      else if ( (unsigned int)(v6 - 3) <= 1 )
      {
        v0 = 1;
      }
      _InterlockedAnd64(v5 + 2, 0xFFFFFFFFFFFBFFFFuLL);
    }
    while ( v4 != &AcpiPowerNodeList );
    if ( !v1 && v0 )
    {
      v8 = (__int64 *)AcpiPowerPhase3List;
      while ( v8 != &AcpiPowerPhase3List )
      {
        v9 = (__int64)v8;
        v8 = (__int64 *)*v8;
        if ( !*(_DWORD *)(v9 + 48) )
          ACPIDevicePowerEnumerateAssociatedPowerNodes(
            v9,
            (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))ACPIIsPhase3ListEmptyOfUnblockedItemsPowerNodeEnum,
            v9);
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  return v1 == 0;
}
