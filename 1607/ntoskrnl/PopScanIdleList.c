/*
 * XREFs of PopScanIdleList @ 0x1400094AC
 * Callers:
 *     PopPolicySystemIdle @ 0x1403F4738 (PopPolicySystemIdle.c)
 * Callees:
 *     PopGetPowerSettingValue @ 0x14000851C (PopGetPowerSettingValue.c)
 *     PopDiagTraceEventNoPayload @ 0x1400AE73C (PopDiagTraceEventNoPayload.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoRequestPowerIrp @ 0x14012B0E0 (PoRequestPowerIrp.c)
 *     PopCoalescingCheck @ 0x140205320 (PopCoalescingCheck.c)
 *     PopDiagTraceDeviceIdleCheck @ 0x140207F00 (PopDiagTraceDeviceIdleCheck.c)
 *     PopDiagTraceDiskIdleCheck @ 0x1402080B4 (PopDiagTraceDiskIdleCheck.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x140208E1C (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopSetPowerSettingValueAcDc @ 0x1403F4AA8 (PopSetPowerSettingValueAcDc.c)
 *     PopSetPowerSettingValue @ 0x1403F6F90 (PopSetPowerSettingValue.c)
 */

__int64 PopScanIdleList()
{
  int v0; // edi
  char v1; // r12
  int v2; // ebx
  unsigned int v3; // r15d
  KIRQL v4; // al
  KIRQL v5; // r13
  __int64 *v6; // r14
  int v7; // r8d
  int v8; // ecx
  __int64 v9; // rdx
  unsigned int v10; // r10d
  unsigned int v11; // eax
  int v13; // r13d
  __int64 *v14; // rbx
  unsigned __int32 v15; // ebp
  unsigned __int32 v16; // esi
  unsigned int v17; // edi
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  int v22; // eax
  __int64 v23; // [rsp+20h] [rbp-68h]
  unsigned int v24; // [rsp+30h] [rbp-58h]
  unsigned int v25; // [rsp+34h] [rbp-54h]
  int v26; // [rsp+38h] [rbp-50h]
  unsigned int v27[19]; // [rsp+3Ch] [rbp-4Ch] BYREF
  KIRQL v28; // [rsp+90h] [rbp+8h]
  int v29; // [rsp+98h] [rbp+10h] BYREF
  int v30; // [rsp+A0h] [rbp+18h]
  unsigned int v31; // [rsp+A8h] [rbp+20h]

  v0 = dword_140303D68;
  v26 = dword_140303D68;
  v29 = 0;
  v1 = 0;
  v2 = 0;
  v25 = dword_140303D64;
  v3 = 0;
  v31 = *((_DWORD *)PopPolicy + 53);
  v24 = PopCurrentCoalescingSpindownTimeout;
  v4 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  v5 = v4;
  v28 = v4;
  if ( byte_140328A8C )
  {
    KeReleaseSpinLock(&PopDopeGlobalLock, v4);
  }
  else
  {
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICE_IDLE_START);
    v6 = (__int64 *)PopIdleDetectList;
    if ( (__int64 *)PopIdleDetectList != &PopIdleDetectList )
    {
      v13 = 0;
      do
      {
        v14 = v6 - 4;
        v15 = _InterlockedExchange((volatile __int32 *)v6 - 7, 0);
        *((_DWORD *)v6 - 5) += v15;
        if ( v15 || *((_DWORD *)v14 + 2) )
          *(_DWORD *)v14 = 0;
        v16 = _InterlockedExchangeAdd((volatile signed __int32 *)v14, PopIdleScanInterval);
        if ( !v16 )
          *((_DWORD *)v14 + 14) = 1;
        if ( v0 == 1 )
          v17 = *((_DWORD *)v14 + 4);
        else
          v17 = *((_DWORD *)v14 + 5);
        if ( *((_DWORD *)v14 + 12) == 1 )
        {
          if ( v17 == -1 )
            v17 = v31;
          v19 = PopCoalescingCheck(v24, v17, v16);
          v17 = v19;
          if ( v19 )
            ++v13;
          v3 = v25;
          v20 = *((_DWORD *)v14 + 23);
          if ( v25 > v19 )
            v3 = v19;
          v18 = PopIdleScanInterval + *((_DWORD *)v14 + 22);
          if ( v16 )
          {
            if ( v20 <= PopIdleScanInterval )
              v21 = 0;
            else
              v21 = v20 - PopIdleScanInterval;
          }
          else
          {
            v21 = PopIdleScanInterval + v20;
            if ( v21 > v3 )
            {
              v18 = v3;
              v21 = v3;
            }
          }
          *((_DWORD *)v14 + 22) = v18;
          *((_DWORD *)v14 + 23) = v21;
        }
        else
        {
          v18 = v16;
        }
        if ( v17 && v18 >= v17 && *((_DWORD *)v14 + 14) == 1 && (v16 || (PopSimulate & 0x2000000) != 0) )
        {
          if ( *((_DWORD *)v14 + 12) == 1 )
            PopDiagTraceIoCoalescingDiskIdle(v14[3]);
          if ( PoRequestPowerIrp(
                 (PDEVICE_OBJECT)v14[3],
                 2u,
                 *(POWER_STATE *)((char *)v14 + 52),
                 PopDeviceIdleCompletion,
                 0LL,
                 0LL) >= 0 )
          {
            *((_DWORD *)v14 + 3) = 0;
            v22 = *((_DWORD *)v14 + 13);
            ++dword_140328A88;
            *((_DWORD *)v14 + 14) = v22;
          }
        }
        else if ( *((_DWORD *)v14 + 12) == 1 && !v16 )
        {
          v1 = 1;
        }
        PopDiagTraceDeviceIdleCheck(v6 - 4, v16, v15);
        if ( *((_DWORD *)v14 + 12) == 1 )
          PopDiagTraceDiskIdleCheck(v6 - 4, v17, v3);
        v6 = (__int64 *)*v6;
        v0 = v26;
      }
      while ( v6 != &PopIdleDetectList );
      v30 = v13;
      v2 = v13;
      v5 = v28;
    }
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICE_IDLE_END);
    KeReleaseSpinLock(&PopDopeGlobalLock, v5);
    v7 = PopIdleBackgroundIgnoreCount;
    if ( PopIdleBackgroundIgnoreCount )
      v7 = --PopIdleBackgroundIgnoreCount;
    v8 = PopBackgroundTaskIgnoreCount;
    if ( PopBackgroundTaskIgnoreCount )
      v8 = --PopBackgroundTaskIgnoreCount;
    v9 = dword_1403032C8 % (unsigned int)PopIdleScanInterval;
    v10 = dword_1403032C8 / (unsigned int)PopIdleScanInterval;
    if ( !dword_1403032CC
      || (v9 = (PopIdleScanInterval + 179) % (unsigned int)PopIdleScanInterval,
          v11 = (PopIdleScanInterval + 179) / (unsigned int)PopIdleScanInterval,
          v10 == v11) )
    {
      PopBackgroundTaskAllowed = 1;
    }
    else if ( v10 < v11 )
    {
      PopBackgroundTaskAllowed = 0;
    }
    if ( !v2 || v1 )
    {
      if ( !v7 && !dword_140303D4C )
      {
        PopGetPowerSettingValue((__int64)&GUID_IDLE_BACKGROUND_TASK, v9, 3u, &v29, v23, v27);
        ++v29;
        PopSetPowerSettingValueAcDc(&GUID_IDLE_BACKGROUND_TASK, 4LL, &v29);
        v9 = (PopIdleScanInterval + 59) % (unsigned int)PopIdleScanInterval;
        v8 = PopBackgroundTaskIgnoreCount;
        PopIdleBackgroundIgnoreCount = (PopIdleScanInterval + 59) / (unsigned int)PopIdleScanInterval;
      }
      if ( !v8 && PopBackgroundTaskAllowed && PopSIdle >= 50 && !dword_140303D4C )
      {
        PopGetPowerSettingValue((__int64)&GUID_BACKGROUND_TASK_NOTIFICATION, v9, 0, &v29, v23, v27);
        ++v29;
        PopSetPowerSettingValue(&GUID_BACKGROUND_TASK_NOTIFICATION, 0xFFFFFFFFLL, 0LL, 4LL, &v29);
        PopBackgroundTaskAllowed = 0;
        PopBackgroundTaskIgnoreCount = (PopIdleScanInterval + 179) / (unsigned int)PopIdleScanInterval;
      }
    }
  }
  return 0LL;
}
