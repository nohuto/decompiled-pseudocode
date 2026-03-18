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
    if ( byte_1402DDF66 && byte_1402DDF68 && (v8 = 2LL, byte_1402DDF76 == 2) )
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
      if ( PopThermalCriticalShutdownEnabled )
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
      v14 = dword_1402DD944 + 1;
      dword_1402DD944 = v14;
      if ( v14 == 1 )
      {
        byte_1402DD94C = 1;
        ++dword_1402DD948;
        PopTraceCr3Tripped();
        v14 = dword_1402DD944;
      }
    }
    else
    {
      v14 = --dword_1402DD944;
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
      PopTraceCr3Mitigated((unsigned int)dword_1402DD948);
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
