/*
 * XREFs of PopDripsWatchdogWorkerRoutine @ 0x140675590
 * Callers:
 *     <none>
 * Callees:
 *     PopDeepSleepEnabled @ 0x140009838 (PopDeepSleepEnabled.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x140206E5C (PopAccumulateNonActivatedCpuTime.c)
 *     PopBatteryCapacityToRate @ 0x1402073F0 (PopBatteryCapacityToRate.c)
 *     PpmConvertTimeTo @ 0x14020A560 (PpmConvertTimeTo.c)
 *     PopAcquireDripsWatchdogLock @ 0x140675158 (PopAcquireDripsWatchdogLock.c)
 *     PopDeepSleepWatchdogTakeAction @ 0x140675220 (PopDeepSleepWatchdogTakeAction.c)
 *     PopDripsWatchdogTakeAction @ 0x1406752EC (PopDripsWatchdogTakeAction.c)
 *     PopSetDripsWatchdog @ 0x1406757A8 (PopSetDripsWatchdog.c)
 */

char __fastcall PopDripsWatchdogWorkerRoutine(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // eax
  int v6; // r13d
  char v7; // r12
  int v8; // esi
  __int64 v9; // r14
  int v10; // r15d
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  unsigned int v13; // ecx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v19; // [rsp+20h] [rbp-30h]
  __int64 v20; // [rsp+28h] [rbp-28h] BYREF
  __int64 v21; // [rsp+30h] [rbp-20h]
  __int64 v22; // [rsp+38h] [rbp-18h]
  int v23; // [rsp+40h] [rbp-10h]

  PopAcquireDripsWatchdogLock();
  if ( qword_140329BA0 )
  {
    v6 = *(_DWORD *)(a1 + 100);
    v7 = *(_BYTE *)(a1 + 4);
    v8 = v6 - *(_DWORD *)(a1 + 12);
    v9 = *(_QWORD *)(a1 + 56);
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    v23 = 0;
    v10 = *(_DWORD *)(a1 + 96) - *(_DWORD *)(a1 + 8);
    v19 = *(_DWORD *)(a1 + 96);
    if ( v10 )
      LODWORD(v11) = 0;
    else
      v11 = (v9 - *(_QWORD *)(a1 + 32)) / 0x2710uLL;
    LODWORD(v20) = v11;
    if ( v8 )
      HIDWORD(v20) = 0;
    else
      HIDWORD(v20) = (v9 - *(_QWORD *)(a1 + 40)) / 0x2710uLL;
    LODWORD(v21) = (v9 - *(_QWORD *)(a1 + 48)) / 0x2710uLL;
    if ( !v10 )
    {
      v12 = 1000LL * (unsigned int)v11;
      if ( !v12 || (unk_1403035F4 & 0x40000000) != 0 || (v13 = *(_DWORD *)(a1 + 16), unk_1403035E4 >= v13) )
        v14 = 0;
      else
        v14 = PopBatteryCapacityToRate(v13 - unk_1403035E4, v12);
      HIDWORD(v22) = v14;
    }
    PopAccumulateNonActivatedCpuTime(0, (_QWORD *)(a1 + 64), (_QWORD *)(a1 + 72));
    HIDWORD(v21) = PpmConvertTimeTo(*(_QWORD *)(a1 + 72), 0x3E8uLL);
    if ( v10 )
    {
      *(_DWORD *)(a1 + 8) = v19;
      *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 88);
      *(_QWORD *)(a1 + 32) = v9;
      *(_DWORD *)(a1 + 16) = unk_1403035E4;
    }
    if ( v8 )
    {
      *(_DWORD *)(a1 + 12) = v6;
      *(_QWORD *)(a1 + 40) = v9;
    }
    *(_QWORD *)(a1 + 48) = v9;
    PopSetDripsWatchdog();
    _InterlockedExchange((volatile __int32 *)(a1 + 376), 0);
    ExReleaseResourceLite(&stru_140329BD8);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v15, v16, v17);
    LOBYTE(v23) = byte_14032892C & 1;
    v5 = 100 * HIDWORD(v21) / (unsigned int)v21;
    LODWORD(v22) = v5;
    if ( v10 )
    {
      LOBYTE(v5) = PopDeepSleepEnabled();
      if ( (_BYTE)v5 && !v8 )
        LOBYTE(v5) = PopDeepSleepWatchdogTakeAction((__int64)&v20, v7);
    }
    else if ( !qword_1403288D8 )
    {
      LOBYTE(v5) = PopDripsWatchdogTakeAction((int *)&v20, v7);
    }
  }
  else
  {
    ExReleaseResourceLite(&stru_140329BD8);
    LOBYTE(v5) = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v2, v3, v4);
  }
  return v5;
}
