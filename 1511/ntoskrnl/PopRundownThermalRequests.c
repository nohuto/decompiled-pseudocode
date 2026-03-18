/*
 * XREFs of PopRundownThermalRequests @ 0x140633974
 * Callers:
 *     EtwpDisallowedGuidAddition @ 0x1404CFA30 (EtwpDisallowedGuidAddition.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140098DC8 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x14009D768 (PopReleaseRwLock.c)
 *     PopDiagTraceThermalRequest @ 0x14054E6B4 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x14054E730 (PopDiagTraceCoolingExtension.c)
 */

void PopRundownThermalRequests()
{
  __int64 i; // rbx
  __int64 j; // rdi

  PopAcquireRwLockExclusive((__int64)&PopCoolingExtensionLock);
  for ( i = PopCoolingExtensionList; (__int64 *)i != &PopCoolingExtensionList; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 64) )
    {
      PopAcquireRwLockExclusive(i + 32);
      PopDiagTraceCoolingExtension(i, &POP_ETW_EVENT_COOLING_EXTENSION_RUNDOWN);
      for ( j = *(_QWORD *)(i + 16); j != i + 16; j = *(_QWORD *)j )
      {
        if ( *(_BYTE *)(j + 18) )
          PopDiagTraceThermalRequest(j, &POP_ETW_EVENT_THERMAL_REQUEST_RUNDOWN);
      }
      PopReleaseRwLock((signed __int64 *)(i + 32));
    }
  }
  PopReleaseRwLock((signed __int64 *)&PopCoolingExtensionLock);
}
