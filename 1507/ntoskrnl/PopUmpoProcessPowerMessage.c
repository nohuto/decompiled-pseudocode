/*
 * XREFs of PopUmpoProcessPowerMessage @ 0x1404FFB68
 * Callers:
 *     PopUmpoProcessMessage @ 0x1404FFA1C (PopUmpoProcessMessage.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x1400D0F1C (PopProcessPowerRequestOverrideQueryResponse.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PopSetNewPolicyValue @ 0x1404FFD24 (PopSetNewPolicyValue.c)
 *     PfIoPowerEventNotify @ 0x140566798 (PfIoPowerEventNotify.c)
 *     PopPowerRequestOverrideInitialize @ 0x1405C17E8 (PopPowerRequestOverrideInitialize.c)
 */

__int64 __fastcall PopUmpoProcessPowerMessage(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // rdx
  PVOID PoolWithTag; // rax
  __int64 v7; // rsi
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // bp
  PVOID **v12; // rax
  bool v13; // zf
  unsigned __int8 v14; // bl
  signed __int32 v15; // eax
  struct _KEVENT *v16; // rcx

  if ( *(_DWORD *)a1 != 4 )
  {
    v5 = (unsigned int)(*(_DWORD *)a1 - 7);
    switch ( *(_DWORD *)a1 )
    {
      case 7:
        v16 = *(struct _KEVENT **)(a1 + 24);
        if ( v16 )
          KeSetEvent(v16, 0, 0);
        if ( *(_BYTE *)(a1 + 20) )
          PfIoPowerEventNotify(*(unsigned int *)(a1 + 12), v5, 1LL);
        break;
      case 8:
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6F706D55u);
        v7 = (__int64)PoolWithTag;
        if ( !PoolWithTag )
          return (unsigned int)-1073741670;
        memset(PoolWithTag, 0, 0x28uLL);
        *(_DWORD *)(v7 + 32) = *(_DWORD *)(a1 + 24);
        *(_OWORD *)(v7 + 16) = *(_OWORD *)(a1 + 8);
        v9 = KeAbPreAcquire((ULONG_PTR)&PopBrightnessNotifyMutex, 0LL, 0LL, v8);
        v10 = v9;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(1uLL);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)&PopBrightnessNotifyMutex, 0) )
          ExpAcquireFastMutexContended((ULONG_PTR)&PopBrightnessNotifyMutex, v9);
        if ( v10 )
          *(_BYTE *)(v10 + 26) |= 1u;
        qword_14032D4C8 = (__int64)KeGetCurrentThread();
        dword_14032D4F0 = CurrentIrql;
        v12 = (PVOID **)qword_14032D508;
        *(_QWORD *)v7 = &PopBrightnessChangeWorkList;
        *(_QWORD *)(v7 + 8) = v12;
        if ( *v12 != &PopBrightnessChangeWorkList )
          __fastfail(3u);
        v13 = PopBrightnessWorkItemQueued == 0;
        *v12 = (PVOID *)v7;
        qword_14032D508 = v7;
        if ( v13 )
        {
          PopBrightnessWorkItemQueued = 1;
          ExQueueWorkItem(&PopNotifyBrightnessWorkItem, DelayedWorkQueue);
        }
        qword_14032D4C8 = 0LL;
        v14 = dword_14032D4F0;
        v15 = _InterlockedCompareExchange((volatile signed __int32 *)&PopBrightnessNotifyMutex, 1, 0);
        if ( v15 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)&PopBrightnessNotifyMutex, v15);
        __writecr8(v14);
        KeAbPostRelease((ULONG_PTR)&PopBrightnessNotifyMutex);
        break;
      case 9:
        PopProcessPowerRequestOverrideQueryResponse((unsigned int *)(a1 + 8));
        break;
      case 0xB:
        PopPowerRequestOverrideInitialize();
        break;
      default:
        if ( (PoDebug & 2) != 0 )
          DbgPrint("%s: Received an unrecognized message, type=%d\n", "PopUmpoProcessPowerMessage", *(_DWORD *)a1);
        break;
    }
    return 0;
  }
  v2 = PopSetNewPolicyValue(a1 + 8, (unsigned int)(*(_DWORD *)a1 - 4));
  v3 = v2;
  if ( v2 >= 0 )
    return 0;
  if ( (PoDebug & 1) != 0 )
    DbgPrint("%s: PopSetNewPolicyValue() 0x%x\n", "PopUmpoProcessPowerMessage", v2);
  return v3;
}
