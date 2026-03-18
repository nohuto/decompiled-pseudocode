/*
 * XREFs of PopDeactiveThermalRequest @ 0x140633588
 * Callers:
 *     PoDeleteThermalRequest @ 0x140633290 (PoDeleteThermalRequest.c)
 * Callees:
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     PopAcquireRwLockExclusive @ 0x140098DC8 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x14009D768 (PopReleaseRwLock.c)
 *     PopGetDope @ 0x14013F194 (PopGetDope.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140142C6C (PopThermalUpdateTelemetryClientCount.c)
 *     PopPropogateCoolingChange @ 0x1401E9310 (PopPropogateCoolingChange.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1401F0E14 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x1404F742C (PopThermalUpdatePassiveTimeTracking.c)
 *     PopDiagTraceThermalRequest @ 0x14054E6B4 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x14054E730 (PopDiagTraceCoolingExtension.c)
 *     PopCleanCoolingExtension @ 0x1406333F8 (PopCleanCoolingExtension.c)
 */

void __fastcall PopDeactiveThermalRequest(__int64 a1)
{
  __int64 v1; // rbx
  char v3; // bp
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  PopAcquireRwLockExclusive(v1 + 32);
  if ( *(_BYTE *)(a1 + 18) )
  {
    if ( *(_QWORD *)(v1 + 136) )
    {
      PopThermalUpdatePassiveTimeTracking(a1 + 40, *(_BYTE *)(a1 + 16));
      PopTraceThermalRequestPassiveHistogram(a1);
      PopThermalUpdateTelemetryClientCount(0);
    }
    PopDiagTraceThermalRequest(a1, &POP_ETW_EVENT_THERMAL_REQUEST_REMOVE);
    *(_BYTE *)(a1 + 18) = 0;
    PopPropogateCoolingChange(v1);
  }
  PopReleaseRwLock((signed __int64 *)(v1 + 32));
  PopAcquireRwLockExclusive((__int64)&PopCoolingExtensionLock);
  PopAcquireRwLockExclusive(v1 + 32);
  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD **)(a1 + 8);
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || *v5 != a1 )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  if ( *(_QWORD *)(v1 + 16) == v1 + 16 )
  {
    v6 = *(_QWORD *)(v1 + 48);
    if ( v6 )
    {
      *(_QWORD *)(PopGetDope(v6) + 64) = 0LL;
      if ( *(_BYTE *)(v1 + 64) )
        PopDiagTraceCoolingExtension(v1, &POP_ETW_EVENT_COOLING_EXTENSION_REMOVE);
      v7 = *(_QWORD *)v1;
      v8 = *(_QWORD **)(v1 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v1 + 8LL) != v1 || *v8 != v1 )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      *(_QWORD *)v1 = 0LL;
    }
    v3 = 1;
  }
  PopReleaseRwLock((signed __int64 *)(v1 + 32));
  PopReleaseRwLock((signed __int64 *)&PopCoolingExtensionLock);
  if ( v3 )
  {
    PopAcquireRwLockExclusive(v1 + 32);
    if ( *(_BYTE *)(v1 + 67) )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      *(_QWORD *)(v1 + 72) = &Event;
      PopReleaseRwLock((signed __int64 *)(v1 + 32));
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      PopAcquireRwLockExclusive(v1 + 32);
      *(_QWORD *)(v1 + 72) = 0LL;
    }
    PopReleaseRwLock((signed __int64 *)(v1 + 32));
    PopCleanCoolingExtension(v1);
  }
}
