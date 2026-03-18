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
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  char v13; // al
  int v14; // eax
  char v15; // al
  char v16; // bl
  unsigned __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  int v18; // [rsp+38h] [rbp-30h]
  _QWORD v19[4]; // [rsp+40h] [rbp-28h] BYREF

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
    if ( byte_14032E526 && byte_14032E528 && (v8 = 2LL, byte_14032E536 == 2) )
    {
      PopThermalHibernateInitiated = 1;
      PopThermalStandbyEndTracking(2LL, v7, v9);
      v17 = 0xC000000400000003uLL;
      v19[0] = 0x8000000001LL;
      v18 = 0;
      v19[1] = 0LL;
      v19[2] = 0LL;
      PopExecutePowerAction((unsigned int)v19, 0, (unsigned int)&v17, 5, 1);
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
      PopThermalStandbyEndTracking(3LL, v7, v9);
      PopThermalCriticalShutdownInitiated = 1;
      PopCriticalShutdown();
    }
  }
  PopReleasePolicyLock(v8, v7, v9);
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
    v13 = *(_BYTE *)(a1 + 343);
    *(_BYTE *)(a1 + 72) = v13;
    if ( v13 )
    {
      v14 = dword_14032DCE4 + 1;
      dword_14032DCE4 = v14;
      if ( v14 == 1 )
      {
        byte_14032DCE8 = 1;
        PopTraceCr3Tripped();
        v14 = dword_14032DCE4;
      }
    }
    else
    {
      v14 = --dword_14032DCE4;
    }
    if ( v14 )
    {
      v15 = HIBYTE(PopSystemThermalInfo);
      v16 = 1;
    }
    else
    {
      v16 = 0;
      PopThermalStandbyEndTracking(0LL, v10, v12);
      v15 = HIBYTE(PopSystemThermalInfo);
      if ( HIBYTE(PopSystemThermalInfo) )
      {
        PopThermalStandbyNotify(0LL);
        HIBYTE(PopSystemThermalInfo) = 0;
        return PopReleasePolicyLock(v11, v10, v12);
      }
    }
    if ( !v3 && v16 && (_BYTE)PopSystemThermalInfo && !v15 )
    {
      LOBYTE(v11) = 1;
      PopThermalStandbyNotify(v11);
      PopSystemThermalInfo = 256;
    }
    return PopReleasePolicyLock(v11, v10, v12);
  }
  return result;
}
