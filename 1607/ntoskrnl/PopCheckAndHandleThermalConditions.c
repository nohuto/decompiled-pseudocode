/*
 * XREFs of PopCheckAndHandleThermalConditions @ 0x140146EF4
 * Callers:
 *     PopThermalWorker @ 0x140573F40 (PopThermalWorker.c)
 * Callees:
 *     PopThermalStandbyEndTracking @ 0x140124C80 (PopThermalStandbyEndTracking.c)
 *     PopThermalStandbyNotify @ 0x1402071F0 (PopThermalStandbyNotify.c)
 *     PopThermalWriteShutdownToRegistry @ 0x1402072DC (PopThermalWriteShutdownToRegistry.c)
 *     PopDiagTraceThermalStateChange @ 0x1402094CC (PopDiagTraceThermalStateChange.c)
 *     PopTraceCr3Mitigated @ 0x1402098E8 (PopTraceCr3Mitigated.c)
 *     PopTraceCr3Tripped @ 0x14020997C (PopTraceCr3Tripped.c)
 *     PopTraceZoneCr3Mitigated @ 0x140209F78 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x14020A098 (PopTraceZoneCr3Tripped.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopExecutePowerAction @ 0x140530768 (PopExecutePowerAction.c)
 *     PopCriticalShutdown @ 0x14066E9D4 (PopCriticalShutdown.c)
 *     PopUpdateOverThrottledCount @ 0x1406706C4 (PopUpdateOverThrottledCount.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x140672218 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x140672304 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalShutdown @ 0x140676A40 (PopSqmThermalCriticalShutdown.c)
 *     PopSqmThermalHibernate @ 0x140676A54 (PopSqmThermalHibernate.c)
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
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
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
    if ( byte_140303F66 && byte_140303F68 && (v8 = 2LL, byte_140303F76 == 2) )
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
    v10 = *(_BYTE *)(a1 + 343);
    *(_BYTE *)(a1 + 72) = v10;
    if ( v10 )
    {
      if ( ++dword_140302E04 == 1 )
      {
        byte_140302E0C = 1;
        ++dword_140302E08;
        PopTraceCr3Tripped();
      }
      PopTraceZoneCr3Tripped((unsigned int)dword_140302E08, a1);
      v14 = dword_140302E04;
    }
    else
    {
      PopTraceZoneCr3Mitigated((unsigned int)dword_140302E08, a1);
      v14 = --dword_140302E04;
    }
    if ( v14 )
    {
      v15 = HIBYTE(PopSystemThermalInfo);
      v16 = 1;
    }
    else
    {
      v16 = 0;
      PopThermalStandbyEndTracking(0LL, v11, v13);
      PopTraceCr3Mitigated((unsigned int)dword_140302E08);
      v15 = HIBYTE(PopSystemThermalInfo);
      if ( HIBYTE(PopSystemThermalInfo) )
      {
        PopThermalStandbyNotify(0LL);
        HIBYTE(PopSystemThermalInfo) = 0;
        return PopReleasePolicyLock(v12, v11, v13);
      }
    }
    if ( !v3 && v16 && (_BYTE)PopSystemThermalInfo && !v15 )
    {
      LOBYTE(v12) = 1;
      PopThermalStandbyNotify(v12);
      PopSystemThermalInfo = 256;
    }
    return PopReleasePolicyLock(v12, v11, v13);
  }
  return result;
}
