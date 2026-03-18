/*
 * XREFs of PopThermalProcessUsermodeEvent @ 0x1406703AC
 * Callers:
 *     NtPowerInformation @ 0x14051E834 (NtPowerInformation.c)
 * Callees:
 *     PopThermalWriteShutdownToRegistry @ 0x1402072DC (PopThermalWriteShutdownToRegistry.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopDiagTraceUsermodeThermalEvent @ 0x1406720D0 (PopDiagTraceUsermodeThermalEvent.c)
 *     PopDiagTraceUsermodeTripPointExceeded @ 0x1406721B4 (PopDiagTraceUsermodeTripPointExceeded.c)
 *     PopSqmThermalUsermodeEvent @ 0x140676A64 (PopSqmThermalUsermodeEvent.c)
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
