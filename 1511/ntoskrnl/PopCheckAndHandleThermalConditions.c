/*
 * XREFs of PopCheckAndHandleThermalConditions @ 0x140142CE0
 * Callers:
 *     PopThermalWorker @ 0x14054C618 (PopThermalWorker.c)
 * Callees:
 *     PopThermalStandbyEndTracking @ 0x14011A294 (PopThermalStandbyEndTracking.c)
 *     PopThermalStandbyNotify @ 0x1401EE650 (PopThermalStandbyNotify.c)
 *     PopThermalWriteShutdownToRegistry @ 0x1401EE7CC (PopThermalWriteShutdownToRegistry.c)
 *     PopDiagTraceThermalStateChange @ 0x1401F06F0 (PopDiagTraceThermalStateChange.c)
 *     PopTraceCr3Mitigated @ 0x1401F0BE4 (PopTraceCr3Mitigated.c)
 *     PopTraceCr3Tripped @ 0x1401F0C78 (PopTraceCr3Tripped.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     PopExecutePowerAction @ 0x1404F6DC0 (PopExecutePowerAction.c)
 *     PopCriticalShutdown @ 0x14063662C (PopCriticalShutdown.c)
 *     PopUpdateOverThrottledCount @ 0x140638278 (PopUpdateOverThrottledCount.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x14063A270 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x14063A35C (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalShutdown @ 0x14063E2CC (PopSqmThermalCriticalShutdown.c)
 *     PopSqmThermalHibernate @ 0x14063E2E0 (PopSqmThermalHibernate.c)
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
    if ( byte_1402DDF66 && byte_1402DDF68 && byte_1402DDF76 == 2 )
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
    v14 = *(_BYTE *)(a1 + 343);
    *(_BYTE *)(a1 + 72) = v14;
    if ( v14 )
    {
      v15 = dword_1402DD944 + 1;
      dword_1402DD944 = v15;
      if ( v15 == 1 )
      {
        byte_1402DD94C = 1;
        ++dword_1402DD948;
        PopTraceCr3Tripped();
        v15 = dword_1402DD944;
      }
    }
    else
    {
      v15 = --dword_1402DD944;
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
      PopTraceCr3Mitigated((unsigned int)dword_1402DD948);
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
