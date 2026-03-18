/*
 * XREFs of PopThermalProcessUsermodeEvent @ 0x1406B7D70
 * Callers:
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 * Callees:
 *     PopThermalWriteShutdownToRegistry @ 0x14023CE84 (PopThermalWriteShutdownToRegistry.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PopDiagTraceUsermodeThermalEvent @ 0x1406BA1F0 (PopDiagTraceUsermodeThermalEvent.c)
 *     PopDiagTraceUsermodeTripPointExceeded @ 0x1406BA2D4 (PopDiagTraceUsermodeTripPointExceeded.c)
 *     PopSqmThermalUsermodeEvent @ 0x1406BEBC8 (PopSqmThermalUsermodeEvent.c)
 */

__int64 __fastcall PopThermalProcessUsermodeEvent(__int64 a1)
{
  __int64 v2; // r9

  PopDiagTraceUsermodeThermalEvent();
  if ( *(_DWORD *)a1 )
  {
    if ( *(_DWORD *)a1 == 1 )
    {
      PopDiagTraceUsermodeTripPointExceeded(*(unsigned __int16 *)(a1 + 12), a1 + 14, *(unsigned int *)(a1 + 8), 0LL);
      PopSqmThermalUsermodeEvent(*(unsigned __int16 *)(a1 + 12), a1 + 14, *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 4), 0);
      PopAcquirePolicyLock();
      PopThermalHibernateInitiated = 1;
      PopReleasePolicyLock();
    }
  }
  else
  {
    LOBYTE(v2) = 1;
    PopDiagTraceUsermodeTripPointExceeded(*(unsigned __int16 *)(a1 + 12), a1 + 14, *(unsigned int *)(a1 + 8), v2);
    PopSqmThermalUsermodeEvent(*(unsigned __int16 *)(a1 + 12), a1 + 14, *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 4), 1);
    PopThermalWriteShutdownToRegistry();
  }
  return 0LL;
}
