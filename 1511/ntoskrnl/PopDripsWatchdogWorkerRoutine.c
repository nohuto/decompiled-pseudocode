/*
 * XREFs of PopDripsWatchdogWorkerRoutine @ 0x14063CD1C
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PopDeepSleepEnabled @ 0x1400990CC (PopDeepSleepEnabled.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x1401EE490 (PopAccumulateNonActivatedCpuTime.c)
 *     PopBatteryCapacityToRate @ 0x1401EEAB8 (PopBatteryCapacityToRate.c)
 *     PpmConvertTimeTo @ 0x1401F1620 (PpmConvertTimeTo.c)
 *     PopAcquireDripsWatchdogLock @ 0x14063C910 (PopAcquireDripsWatchdogLock.c)
 *     PopDeepSleepWatchdogTakeAction @ 0x14063C9D8 (PopDeepSleepWatchdogTakeAction.c)
 *     PopDripsWatchdogTakeAction @ 0x14063CAA4 (PopDripsWatchdogTakeAction.c)
 *     PopSetDripsWatchdog @ 0x14063CF34 (PopSetDripsWatchdog.c)
 */

char __fastcall PopDripsWatchdogWorkerRoutine(__int64 a1)
{
  unsigned int v2; // eax
  int v3; // r13d
  char v4; // r12
  int v5; // esi
  __int64 v6; // r14
  int v7; // r15d
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdx
  unsigned int v10; // ecx
  int v11; // eax
  int v13; // [rsp+20h] [rbp-30h]
  __int64 v14; // [rsp+28h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-20h]
  __int64 v16; // [rsp+38h] [rbp-18h]
  int v17; // [rsp+40h] [rbp-10h]

  PopAcquireDripsWatchdogLock();
  if ( qword_140306E40 )
  {
    v3 = *(_DWORD *)(a1 + 100);
    v4 = *(_BYTE *)(a1 + 4);
    v5 = v3 - *(_DWORD *)(a1 + 12);
    v6 = *(_QWORD *)(a1 + 56);
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0;
    v7 = *(_DWORD *)(a1 + 96) - *(_DWORD *)(a1 + 8);
    v13 = *(_DWORD *)(a1 + 96);
    if ( v7 )
      LODWORD(v8) = 0;
    else
      v8 = (v6 - *(_QWORD *)(a1 + 32)) / 0x2710uLL;
    LODWORD(v14) = v8;
    if ( v5 )
      HIDWORD(v14) = 0;
    else
      HIDWORD(v14) = (v6 - *(_QWORD *)(a1 + 40)) / 0x2710uLL;
    LODWORD(v15) = (v6 - *(_QWORD *)(a1 + 48)) / 0x2710uLL;
    if ( !v7 )
    {
      v9 = 1000LL * (unsigned int)v8;
      if ( !v9 || (unk_1402DE414 & 0x40000000) != 0 || (v10 = *(_DWORD *)(a1 + 16), DWORD1(xmmword_1402DE400) >= v10) )
        v11 = 0;
      else
        v11 = PopBatteryCapacityToRate(v10 - DWORD1(xmmword_1402DE400), v9);
      HIDWORD(v16) = v11;
    }
    PopAccumulateNonActivatedCpuTime(0, (_QWORD *)(a1 + 64), (_QWORD *)(a1 + 72));
    HIDWORD(v15) = PpmConvertTimeTo(*(_QWORD *)(a1 + 72), 0x3E8uLL);
    if ( v7 )
    {
      *(_DWORD *)(a1 + 8) = v13;
      *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 88);
      *(_QWORD *)(a1 + 32) = v6;
      *(_DWORD *)(a1 + 16) = DWORD1(xmmword_1402DE400);
    }
    if ( v5 )
    {
      *(_DWORD *)(a1 + 12) = v3;
      *(_QWORD *)(a1 + 40) = v6;
    }
    *(_QWORD *)(a1 + 48) = v6;
    PopSetDripsWatchdog();
    _InterlockedExchange((volatile __int32 *)(a1 + 376), 0);
    ExReleaseResourceLite(&stru_140306E78);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    LOBYTE(v17) = byte_140305AA0 & 1;
    v2 = 100 * HIDWORD(v15) / (unsigned int)v15;
    LODWORD(v16) = v2;
    if ( v7 )
    {
      LOBYTE(v2) = PopDeepSleepEnabled();
      if ( (_BYTE)v2 && !v5 )
        LOBYTE(v2) = PopDeepSleepWatchdogTakeAction((__int64)&v14, v4);
    }
    else if ( !qword_140305A58 )
    {
      LOBYTE(v2) = PopDripsWatchdogTakeAction((int *)&v14, v4);
    }
  }
  else
  {
    ExReleaseResourceLite(&stru_140306E78);
    LOBYTE(v2) = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v2;
}
