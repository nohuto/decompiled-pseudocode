/*
 * XREFs of PopRundownThermalRequests @ 0x14052B5D4
 * Callers:
 *     PopDiagTraceControlCallback @ 0x14052B2D0 (PopDiagTraceControlCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14000DCD8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400FBFA8 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceThermalRequest @ 0x14052DCF8 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x14052DD74 (PopDiagTraceCoolingExtension.c)
 */

void PopRundownThermalRequests()
{
  __int64 i; // rbx
  __int64 *j; // rdi

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopCoolingExtensionLock);
  for ( i = PopCoolingExtensionList; (__int64 *)i != &PopCoolingExtensionList; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 64) )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)(i + 32));
      PopDiagTraceCoolingExtension(i, &POP_ETW_EVENT_COOLING_EXTENSION_RUNDOWN);
      for ( j = *(__int64 **)(i + 16); j != (__int64 *)(i + 16); j = (__int64 *)*j )
      {
        if ( *((_BYTE *)j + 18) )
          PopDiagTraceThermalRequest(j, &POP_ETW_EVENT_THERMAL_REQUEST_RUNDOWN);
      }
      PopReleaseRwLock((signed __int64 *)(i + 32));
    }
  }
  PopReleaseRwLock(&PopCoolingExtensionLock);
}
