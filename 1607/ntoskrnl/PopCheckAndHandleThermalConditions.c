/*
 * XREFs of PopCheckAndHandleThermalConditions @ 0x140147464
 * Callers:
 *     PopThermalWorker @ 0x140574480 (PopThermalWorker.c)
 * Callees:
 *     PopThermalStandbyEndTracking @ 0x1401251F0 (PopThermalStandbyEndTracking.c)
 *     PopThermalStandbyNotify @ 0x14020701C (PopThermalStandbyNotify.c)
 *     PopThermalWriteShutdownToRegistry @ 0x140207108 (PopThermalWriteShutdownToRegistry.c)
 *     PopDiagTraceThermalStateChange @ 0x1402092F8 (PopDiagTraceThermalStateChange.c)
 *     PopTraceCr3Mitigated @ 0x140209714 (PopTraceCr3Mitigated.c)
 *     PopTraceCr3Tripped @ 0x1402097A8 (PopTraceCr3Tripped.c)
 *     PopTraceZoneCr3Mitigated @ 0x140209DA4 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x140209EC4 (PopTraceZoneCr3Tripped.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopExecutePowerAction @ 0x140530CA8 (PopExecutePowerAction.c)
 *     PopCriticalShutdown @ 0x14066EAB8 (PopCriticalShutdown.c)
 *     PopUpdateOverThrottledCount @ 0x1406707A8 (PopUpdateOverThrottledCount.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x1406722FC (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x1406723E8 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalShutdown @ 0x140676B24 (PopSqmThermalCriticalShutdown.c)
 *     PopSqmThermalHibernate @ 0x140676B38 (PopSqmThermalHibernate.c)
 */

char __fastcall PopCheckAndHandleThermalConditions(__int64 a1)
{
  __int64 v1; // rsi
  char v2; // di
  char v3; // bp
  char v5; // dl
  char result; // al
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  char v16; // al
  char v17; // bl
  unsigned __int64 v18; // [rsp+30h] [rbp-38h] BYREF
  int v19; // [rsp+38h] [rbp-30h]
  _QWORD v20[4]; // [rsp+40h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v2 = 0;
  v3 = 0;
  if ( *(_BYTE *)(a1 + 342) && !*(_BYTE *)(a1 + 71) )
  {
    v2 = 1;
    PopSqmThermalCriticalShutdown();
    PopDiagTraceZoneCriticalTripPointExceeded(a1 + 240, v1);
    *(_BYTE *)(a1 + 71) = 1;
  }
  if ( *(_BYTE *)(a1 + 341) )
  {
    v3 = 1;
    PopDiagTraceZoneS4TripPointExceeded(a1 + 240, v1);
    PopSqmThermalHibernate(a1);
  }
  else if ( !v2 )
  {
    goto LABEL_4;
  }
  PopAcquirePolicyLock();
  if ( v3 )
  {
    if ( byte_140303EA6 && byte_140303EA8 && byte_140303EB6 == 2 )
    {
      PopThermalHibernateInitiated = 1;
      PopThermalStandbyEndTracking(2LL, v7, v8);
      v18 = 0xC000000400000003uLL;
      v20[0] = 0x8000000001LL;
      v19 = 0;
      v20[1] = 0LL;
      v20[2] = 0LL;
      PopExecutePowerAction((unsigned int)v20, 0, (unsigned int)&v18, 5, 1);
    }
    else
    {
      v2 = 1;
    }
  }
  if ( v2 )
  {
    PopThermalWriteShutdownToRegistry();
    if ( !PopThermalCriticalShutdownInitiated )
    {
      PopThermalStandbyEndTracking(3LL, v9, v10);
      PopThermalCriticalShutdownInitiated = 1;
      if ( PopThermalCriticalShutdownEnabled )
        PopCriticalShutdown();
    }
  }
  PopReleasePolicyLock();
LABEL_4:
  v5 = *(_BYTE *)(a1 + 356) != 0;
  if ( *(_BYTE *)(a1 + 73) != v5 )
  {
    *(_BYTE *)(a1 + 73) = v5;
    PopUpdateOverThrottledCount(a1);
  }
  result = *(_BYTE *)(a1 + 343);
  if ( *(_BYTE *)(a1 + 72) != result )
  {
    PopDiagTraceThermalStateChange(*(PDEVICE_OBJECT *)(a1 + 48));
    PopAcquirePolicyLock();
    v11 = *(_BYTE *)(a1 + 343);
    *(_BYTE *)(a1 + 72) = v11;
    if ( v11 )
    {
      if ( ++dword_140302E64 == 1 )
      {
        byte_140302E6C = 1;
        ++dword_140302E68;
        PopTraceCr3Tripped();
      }
      PopTraceZoneCr3Tripped((unsigned int)dword_140302E68, a1);
      v15 = dword_140302E64;
    }
    else
    {
      PopTraceZoneCr3Mitigated((unsigned int)dword_140302E68, a1);
      v15 = --dword_140302E64;
    }
    if ( v15 )
    {
      v16 = HIBYTE(PopSystemThermalInfo);
      v17 = 1;
    }
    else
    {
      v17 = 0;
      PopThermalStandbyEndTracking(0LL, v12, v14);
      PopTraceCr3Mitigated((unsigned int)dword_140302E68);
      v16 = HIBYTE(PopSystemThermalInfo);
      if ( HIBYTE(PopSystemThermalInfo) )
      {
        PopThermalStandbyNotify(0LL);
        HIBYTE(PopSystemThermalInfo) = 0;
        return PopReleasePolicyLock();
      }
    }
    if ( !v3 && v17 && (_BYTE)PopSystemThermalInfo && !v16 )
    {
      LOBYTE(v13) = 1;
      PopThermalStandbyNotify(v13);
      PopSystemThermalInfo = 256;
    }
    return PopReleasePolicyLock();
  }
  return result;
}
