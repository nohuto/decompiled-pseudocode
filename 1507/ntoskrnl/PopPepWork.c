/*
 * XREFs of PopPepWork @ 0x140028D6C
 * Callers:
 *     PopFxPluginWork @ 0x140029DC8 (PopFxPluginWork.c)
 * Callees:
 *     PopPepStartActivity @ 0x140027C18 (PopPepStartActivity.c)
 *     PopPepGetReadyActivityType @ 0x14002855C (PopPepGetReadyActivityType.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140028FE0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall PopPepWork(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v2; // ebp
  char v4; // r15
  __int64 v5; // rbx
  __int64 *v6; // rsi
  unsigned __int8 CurrentIrql; // r13
  int v8; // r14d
  __int64 v9; // rbx
  volatile signed __int32 *v10; // rdi
  int v11; // r10d
  unsigned int v12; // ecx
  unsigned int v13; // eax
  __int64 v14; // r11
  int v15; // eax
  __int64 v16; // r11
  __int64 v17; // r8
  int ReadyActivityType; // r9d
  __int64 v19; // rdx
  char started; // al
  _DWORD *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  struct _KTHREAD *v24; // rcx
  __int16 v25; // ax
  signed __int32 v27; // edx
  volatile signed __int32 *v28; // [rsp+20h] [rbp-38h]
  __int64 v29; // [rsp+28h] [rbp-30h]
  void *retaddr; // [rsp+58h] [rbp+0h]

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&PopPepDeviceListLock);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopPepDeviceListLock, v5, &PopPepDeviceListLock);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  v6 = PopPepLastCheckedDevice;
  if ( PopPepLastCheckedDevice == &PopPepDeviceList )
  {
    _InterlockedCompareExchange64(
      (volatile signed __int64 *)&PopPepLastCheckedDevice,
      *PopPepLastCheckedDevice,
      (signed __int64)PopPepLastCheckedDevice);
    v6 = PopPepLastCheckedDevice;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v8 = 0;
  while ( 2 )
  {
    v9 = (__int64)v6;
    do
    {
      v10 = (volatile signed __int32 *)(v9 + 64);
      if ( v8 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9 + 64);
        }
        else
        {
          if ( _interlockedbittestandset(v10, 0x1Fu) )
            v2 = ExpWaitForSpinLockExclusiveAndAcquire(v9 + 64);
          while ( 1 )
          {
            v27 = *v10;
            if ( (*v10 & 0xBFFFFFFF) == 0x80000000 )
              break;
            if ( (v27 & 0x40000000) == 0 )
              _InterlockedCompareExchange(v10, v27 | 0x40000000, v27);
            if ( (++v2 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v2);
          }
          v2 = 0;
        }
      }
      else if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v9 + 64) )
      {
        goto LABEL_19;
      }
      v11 = *(_DWORD *)(v9 + 120);
      if ( v11 )
      {
        ReadyActivityType = PopPepGetReadyActivityType(v9 + 72, 0, 0);
        if ( ReadyActivityType != 6 )
        {
          v29 = a1;
          v28 = (volatile signed __int32 *)(v9 + 120);
LABEL_36:
          v17 = v9 + 72;
          v19 = 0LL;
LABEL_24:
          started = PopPepStartActivity(v9, v19, v17, ReadyActivityType, v28, v29);
          v21 = (_DWORD *)(v9 + 64);
          v4 = started;
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v21, retaddr);
          else
            *v21 = 0;
          goto LABEL_26;
        }
      }
      v12 = *(_DWORD *)(v9 + 168);
      v13 = 0;
      if ( v12 )
      {
        v14 = v9 + 176;
        while ( !*(_DWORD *)(v14 + 104) )
        {
          ++v13;
          v14 += 200LL;
          if ( v13 >= v12 )
            goto LABEL_16;
        }
        v15 = PopPepGetReadyActivityType(v14 + 56, 1u, 3);
        v29 = a1;
        v28 = (volatile signed __int32 *)(v16 + 104);
        v17 = v16 + 56;
        ReadyActivityType = v15;
        v19 = v16;
        goto LABEL_24;
      }
LABEL_16:
      if ( v11 )
      {
        v29 = a1;
        v28 = (volatile signed __int32 *)(v9 + 120);
        ReadyActivityType = PopPepGetReadyActivityType(v9 + 72, 4u, 5);
        goto LABEL_36;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v9 + 64, retaddr);
      else
        *v10 = 0;
LABEL_19:
      v9 = *(_QWORD *)v9;
      if ( (__int64 *)v9 == &PopPepDeviceList )
        v9 = *(_QWORD *)v9;
    }
    while ( (__int64 *)v9 != v6 );
    if ( (unsigned int)++v8 < 2 )
      continue;
    break;
  }
LABEL_26:
  __writecr8(CurrentIrql);
  if ( (__int64 *)v9 != v6 )
    _InterlockedExchange64((volatile __int64 *)&PopPepLastCheckedDevice, v9);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&PopPepDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
  v24 = KeGetCurrentThread();
  v25 = v24->KernelApcDisable + 1;
  v24->KernelApcDisable = v25;
  if ( !v25
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v24->ApcState.ApcListHead[0].Flink != &v24->152
    && !v24->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery(v24, v22, v23);
  }
  return v4;
}
