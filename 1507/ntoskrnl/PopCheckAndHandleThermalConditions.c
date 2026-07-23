/*
 * XREFs of PopCheckAndHandleThermalConditions @ 0x140170C90
 * Callers:
 *     PopThermalWorker @ 0x1405C3BD8 (PopThermalWorker.c)
 * Callees:
 *     PopThermalStandbyEndTracking @ 0x1401485D4 (PopThermalStandbyEndTracking.c)
 *     PopThermalStandbyNotify @ 0x14023CAA4 (PopThermalStandbyNotify.c)
 *     PopThermalWriteShutdownToRegistry @ 0x14023CE84 (PopThermalWriteShutdownToRegistry.c)
 *     PopDiagTraceThermalStateChange @ 0x14023EA84 (PopDiagTraceThermalStateChange.c)
 *     PopTraceCr3Tripped @ 0x14023EF40 (PopTraceCr3Tripped.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PopExecutePowerAction @ 0x1405654E8 (PopExecutePowerAction.c)
 *     PopCriticalShutdown @ 0x1406B5F3C (PopCriticalShutdown.c)
 *     PopUpdateOverThrottledCount @ 0x1406B837C (PopUpdateOverThrottledCount.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x1406BA338 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x1406BA424 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalShutdown @ 0x1406BEBA4 (PopSqmThermalCriticalShutdown.c)
 *     PopSqmThermalHibernate @ 0x1406BEBB8 (PopSqmThermalHibernate.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  char v14; // al
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
    if ( byte_14032E526 && byte_14032E528 && byte_14032E536 == 2 )
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
    v14 = *(_BYTE *)(a1 + 343);
    *(_BYTE *)(a1 + 72) = v14;
    if ( v14 )
    {
      v15 = dword_14032DCE4 + 1;
      dword_14032DCE4 = v15;
      if ( v15 == 1 )
      {
        byte_14032DCE8 = 1;
        PopTraceCr3Tripped();
        v15 = dword_14032DCE4;
      }
    }
    else
    {
      v15 = --dword_14032DCE4;
    }
    if ( v15 )
    {
      v16 = HIBYTE(PopSystemThermalInfo);
      v17 = 1;
    }
    else
    {
      v17 = 0;
      PopThermalStandbyEndTracking(0LL, v11, v13);
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
      LOBYTE(v12) = 1;
      PopThermalStandbyNotify(v12);
      PopSystemThermalInfo = 256;
    }
    return PopReleasePolicyLock();
  }
  return result;
}
