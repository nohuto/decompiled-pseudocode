/*
 * XREFs of PopUmpoProcessPowerMessage @ 0x1403F6B18
 * Callers:
 *     PopUmpoProcessMessage @ 0x1403F69E8 (PopUmpoProcessMessage.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x1400F96D4 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140112708 (PopIdleCancelAoAcDozeS4Timer.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14020D310 (PopIdleArmAoAcDozeS4Timer.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopSetNewPolicyValue @ 0x1403F6C58 (PopSetNewPolicyValue.c)
 *     PfIoPowerEventNotify @ 0x140530C88 (PfIoPowerEventNotify.c)
 *     PopBroadcastSessionInfo @ 0x14057C174 (PopBroadcastSessionInfo.c)
 *     PopPowerRequestOverrideInitialize @ 0x140580E94 (PopPowerRequestOverrideInitialize.c)
 */

__int64 __fastcall PopUmpoProcessPowerMessage(__int64 a1)
{
  __int64 result; // rax
  PVOID PoolWithTag; // rax
  __int64 v4; // rdi
  __int64 *v5; // rax
  bool v6; // zf
  int v7; // ebx
  _DWORD v8[8]; // [rsp+20h] [rbp-38h] BYREF

  switch ( *(_DWORD *)a1 )
  {
    case 4:
      result = PopSetNewPolicyValue(a1 + 8, (unsigned int)(*(_DWORD *)a1 - 4));
      if ( (int)result < 0 )
        return result;
      break;
    case 7:
      if ( *(_BYTE *)(a1 + 20) )
        PfIoPowerEventNotify(*(unsigned int *)(a1 + 12), (unsigned int)(*(_DWORD *)a1 - 7), 1LL);
      break;
    case 8:
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6F706D55u);
      v4 = (__int64)PoolWithTag;
      if ( !PoolWithTag )
        return 3221225626LL;
      memset(PoolWithTag, 0, 0x28uLL);
      *(_DWORD *)(v4 + 32) = *(_DWORD *)(a1 + 24);
      *(_OWORD *)(v4 + 16) = *(_OWORD *)(a1 + 8);
      ExAcquireFastMutex(&PopBrightnessNotifyMutex);
      v5 = (__int64 *)qword_1403025E8;
      if ( *(PVOID **)qword_1403025E8 != &PopBrightnessChangeWorkList )
        __fastfail(3u);
      v6 = PopBrightnessWorkItemQueued == 0;
      *(_QWORD *)v4 = &PopBrightnessChangeWorkList;
      *(_QWORD *)(v4 + 8) = v5;
      *v5 = v4;
      qword_1403025E8 = v4;
      if ( v6 )
      {
        PopBrightnessWorkItemQueued = 1;
        ExQueueWorkItem(&PopNotifyBrightnessWorkItem, DelayedWorkQueue);
      }
      KeReleaseGuardedMutex(&PopBrightnessNotifyMutex);
      break;
    case 9:
      PopProcessPowerRequestOverrideQueryResponse((unsigned int *)(a1 + 8));
      break;
    case 0xB:
      PopPowerRequestOverrideInitialize();
      break;
    case 0xF:
      v8[0] = *(_DWORD *)(a1 + 8);
      v8[1] = *(_DWORD *)(a1 + 12);
      v8[2] = *(_DWORD *)(a1 + 16);
      v8[3] = *(_DWORD *)(a1 + 20);
      v8[4] = *(_DWORD *)(a1 + 24);
      v8[5] = *(_DWORD *)(a1 + 28);
      v8[6] = *(_DWORD *)(a1 + 32);
      v8[7] = *(_DWORD *)(a1 + 36);
      PopBroadcastSessionInfo(4LL, 32LL, v8);
      break;
    case 0x11:
      v7 = *(_DWORD *)(a1 + 8);
      PopAcquirePolicyLock();
      dword_1403032F0 = v7;
      if ( byte_140303311 )
      {
        PopIdleCancelAoAcDozeS4Timer(4u);
        PopIdleArmAoAcDozeS4Timer();
      }
      PopReleasePolicyLock();
      break;
  }
  return 0LL;
}
