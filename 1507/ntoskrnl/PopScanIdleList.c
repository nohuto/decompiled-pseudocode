/*
 * XREFs of PopScanIdleList @ 0x1400D0490
 * Callers:
 *     PopPolicySystemIdle @ 0x1404E3E64 (PopPolicySystemIdle.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     PopGetPowerSettingValue @ 0x14012BFE4 (PopGetPowerSettingValue.c)
 *     PopDiagTraceEventNoPayload @ 0x14012DD44 (PopDiagTraceEventNoPayload.c)
 *     PoRequestPowerIrp @ 0x140136E4C (PoRequestPowerIrp.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     PopCoalescingCheck @ 0x14023AB98 (PopCoalescingCheck.c)
 *     PopDiagTraceDeviceIdleCheck @ 0x14023DA54 (PopDiagTraceDeviceIdleCheck.c)
 *     PopDiagTraceDiskIdleCheck @ 0x14023DC08 (PopDiagTraceDiskIdleCheck.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x14023E600 (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopSetPowerSettingValue @ 0x1404FFFC0 (PopSetPowerSettingValue.c)
 *     PopSetPowerSettingValueAcDc @ 0x14055E1B0 (PopSetPowerSettingValueAcDc.c)
 */

__int64 PopScanIdleList()
{
  char v0; // r13
  int v1; // esi
  unsigned int v2; // r12d
  unsigned __int8 CurrentIrql; // bl
  __int64 *v4; // r14
  int v5; // r8d
  int v6; // ecx
  __int64 v7; // rdx
  unsigned int v8; // r10d
  unsigned int v9; // eax
  __int64 *v11; // rbx
  unsigned __int32 v12; // r15d
  unsigned __int32 v13; // ebp
  unsigned int v14; // esi
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // [rsp+30h] [rbp-68h]
  unsigned int v21; // [rsp+34h] [rbp-64h]
  unsigned __int8 v22; // [rsp+40h] [rbp-58h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v24; // [rsp+A0h] [rbp+8h] BYREF
  int v25; // [rsp+A8h] [rbp+10h]
  int v26; // [rsp+B0h] [rbp+18h]
  unsigned int v27; // [rsp+B8h] [rbp+20h]

  v24 = 0;
  v0 = 0;
  v1 = 0;
  v2 = 0;
  v26 = dword_14032E868;
  v25 = 0;
  v21 = dword_14032E864;
  v27 = *((_DWORD *)PopPolicy + 53);
  v20 = PopCurrentCoalescingSpindownTimeout;
  CurrentIrql = KeGetCurrentIrql();
  v22 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&PopDopeGlobalLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&PopDopeGlobalLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&PopDopeGlobalLock);
  }
  if ( byte_1403538EC )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&PopDopeGlobalLock, retaddr);
    else
      _InterlockedAnd64(&PopDopeGlobalLock, 0LL);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICE_IDLE_START);
  v4 = (__int64 *)PopIdleDetectList;
  if ( (__int64 *)PopIdleDetectList != &PopIdleDetectList )
  {
    do
    {
      v11 = v4 - 4;
      v12 = _InterlockedExchange((volatile __int32 *)v4 - 7, 0);
      *((_DWORD *)v4 - 5) += v12;
      if ( v12 || *((_DWORD *)v11 + 2) )
        *(_DWORD *)v11 = 0;
      v13 = _InterlockedExchangeAdd((volatile signed __int32 *)v11, PopIdleScanInterval);
      if ( !v13 )
        *((_DWORD *)v11 + 14) = 1;
      if ( v26 == 1 )
        v14 = *((_DWORD *)v11 + 4);
      else
        v14 = *((_DWORD *)v11 + 5);
      if ( *((_DWORD *)v11 + 12) == 1 )
      {
        if ( v14 == -1 )
          v14 = v27;
        v16 = PopCoalescingCheck(v20, v14, v13);
        v14 = v16;
        if ( v16 )
          ++v25;
        v2 = v21;
        v17 = *((_DWORD *)v11 + 23);
        if ( v21 > v16 )
          v2 = v16;
        v15 = PopIdleScanInterval + *((_DWORD *)v11 + 22);
        if ( v13 )
        {
          if ( v17 <= PopIdleScanInterval )
            v18 = 0;
          else
            v18 = v17 - PopIdleScanInterval;
        }
        else
        {
          v18 = PopIdleScanInterval + v17;
          if ( v18 > v2 )
          {
            v15 = v2;
            v18 = v2;
          }
        }
        *((_DWORD *)v11 + 22) = v15;
        *((_DWORD *)v11 + 23) = v18;
      }
      else
      {
        v15 = v13;
      }
      if ( v14 && v15 >= v14 && *((_DWORD *)v11 + 14) == 1 && (v13 || (PopSimulate & 0x2000000) != 0) )
      {
        if ( *((_DWORD *)v11 + 12) == 1 )
          PopDiagTraceIoCoalescingDiskIdle(v11[3]);
        if ( PoRequestPowerIrp(
               (PDEVICE_OBJECT)v11[3],
               2u,
               *(POWER_STATE *)((char *)v11 + 52),
               PopDeviceIdleCompletion,
               0LL,
               0LL) >= 0 )
        {
          *((_DWORD *)v11 + 3) = 0;
          v19 = *((_DWORD *)v11 + 13);
          ++dword_1403538E8;
          *((_DWORD *)v11 + 14) = v19;
        }
      }
      else if ( *((_DWORD *)v11 + 12) == 1 && !v13 )
      {
        v0 = 1;
      }
      PopDiagTraceDeviceIdleCheck(v4 - 4, v13, v12);
      if ( *((_DWORD *)v11 + 12) == 1 )
        PopDiagTraceDiskIdleCheck(v4 - 4, v14, v2);
      v4 = (__int64 *)*v4;
    }
    while ( v4 != &PopIdleDetectList );
    CurrentIrql = v22;
    v1 = v25;
  }
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICE_IDLE_END);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&PopDopeGlobalLock, retaddr);
  else
    _InterlockedAnd64(&PopDopeGlobalLock, 0LL);
  __writecr8(CurrentIrql);
  v5 = PopIdleBackgroundIgnoreCount;
  if ( PopIdleBackgroundIgnoreCount )
    v5 = --PopIdleBackgroundIgnoreCount;
  v6 = PopBackgroundTaskIgnoreCount;
  if ( PopBackgroundTaskIgnoreCount )
    v6 = --PopBackgroundTaskIgnoreCount;
  v7 = dword_14032E1A8 % (unsigned int)PopIdleScanInterval;
  v8 = dword_14032E1A8 / (unsigned int)PopIdleScanInterval;
  if ( !dword_14032E1AC )
    goto LABEL_26;
  v7 = (PopIdleScanInterval + 179) % (unsigned int)PopIdleScanInterval;
  v9 = (PopIdleScanInterval + 179) / (unsigned int)PopIdleScanInterval;
  if ( v8 < v9 )
  {
    PopBackgroundTaskAllowed = 0;
    goto LABEL_15;
  }
  if ( v8 == v9 )
LABEL_26:
    PopBackgroundTaskAllowed = 1;
LABEL_15:
  if ( !v1 || v0 )
  {
    if ( !v5 && !dword_14032E84C )
    {
      PopGetPowerSettingValue(&GUID_IDLE_BACKGROUND_TASK, v7, 3LL, &v24);
      ++v24;
      PopSetPowerSettingValueAcDc(&GUID_IDLE_BACKGROUND_TASK, 4LL, &v24);
      v7 = (PopIdleScanInterval + 59) % (unsigned int)PopIdleScanInterval;
      v6 = PopBackgroundTaskIgnoreCount;
      PopIdleBackgroundIgnoreCount = (PopIdleScanInterval + 59) / (unsigned int)PopIdleScanInterval;
    }
    if ( !v6 && PopBackgroundTaskAllowed && PopSIdle >= 50 && !dword_14032E84C )
    {
      PopGetPowerSettingValue(&GUID_BACKGROUND_TASK_NOTIFICATION, v7, 0LL, &v24);
      ++v24;
      PopSetPowerSettingValue(&GUID_BACKGROUND_TASK_NOTIFICATION, 0xFFFFFFFFLL, 0LL, 4LL, &v24);
      PopBackgroundTaskAllowed = 0;
      PopBackgroundTaskIgnoreCount = (PopIdleScanInterval + 179) / (unsigned int)PopIdleScanInterval;
    }
  }
  return 0LL;
}
