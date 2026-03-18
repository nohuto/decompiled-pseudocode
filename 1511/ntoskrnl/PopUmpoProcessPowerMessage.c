/*
 * XREFs of PopUmpoProcessPowerMessage @ 0x1404496B8
 * Callers:
 *     PopUmpoProcessMessage @ 0x140449588 (PopUmpoProcessMessage.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x14009896C (PopProcessPowerRequestOverrideQueryResponse.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     PopSetNewPolicyValue @ 0x140448E50 (PopSetNewPolicyValue.c)
 *     PfIoPowerEventNotify @ 0x1404F7B0C (PfIoPowerEventNotify.c)
 *     PopPowerRequestOverrideInitialize @ 0x14054B2B0 (PopPowerRequestOverrideInitialize.c)
 */

__int64 __fastcall PopUmpoProcessPowerMessage(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  PVOID PoolWithTag; // rax
  __int64 v5; // rdi
  PVOID **v6; // rax
  bool v7; // zf
  struct _KEVENT *v8; // rcx

  if ( *(_DWORD *)a1 == 4 )
  {
    result = PopSetNewPolicyValue(a1 + 8);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    v3 = (unsigned int)(*(_DWORD *)a1 - 7);
    switch ( *(_DWORD *)a1 )
    {
      case 7:
        v8 = *(struct _KEVENT **)(a1 + 24);
        if ( v8 )
          KeSetEvent(v8, 0, 0);
        if ( *(_BYTE *)(a1 + 20) )
          PfIoPowerEventNotify(*(unsigned int *)(a1 + 12), v3, 1LL);
        break;
      case 8:
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6F706D55u);
        v5 = (__int64)PoolWithTag;
        if ( !PoolWithTag )
          return 3221225626LL;
        memset(PoolWithTag, 0, 0x28uLL);
        *(_DWORD *)(v5 + 32) = *(_DWORD *)(a1 + 24);
        *(_OWORD *)(v5 + 16) = *(_OWORD *)(a1 + 8);
        ExAcquireFastMutex(&PopBrightnessNotifyMutex);
        v6 = (PVOID **)qword_1402DD108;
        *(_QWORD *)v5 = &PopBrightnessChangeWorkList;
        *(_QWORD *)(v5 + 8) = v6;
        if ( *v6 != &PopBrightnessChangeWorkList )
          __fastfail(3u);
        v7 = PopBrightnessWorkItemQueued == 0;
        *v6 = (PVOID *)v5;
        qword_1402DD108 = v5;
        if ( v7 )
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
    }
  }
  return 0LL;
}
