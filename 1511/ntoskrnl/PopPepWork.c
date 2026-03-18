/*
 * XREFs of PopPepWork @ 0x1400DAB48
 * Callers:
 *     PopFxPluginWork @ 0x1400DAA70 (PopFxPluginWork.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400DAD80 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     PopPepStartActivity @ 0x1400DB854 (PopPepStartActivity.c)
 *     PopPepGetReadyActivityType @ 0x1400DC148 (PopPepGetReadyActivityType.c)
 */

char __fastcall PopPepWork(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // r14
  __int64 v4; // rbx
  __int64 *v5; // rdi
  unsigned __int8 CurrentIrql; // r15
  unsigned int i; // ebp
  __int64 v8; // rbx
  volatile LONG *v9; // rcx
  int v10; // r10d
  unsigned int v11; // ecx
  unsigned int v12; // eax
  __int64 v13; // r11
  int ReadyActivityType; // r9d
  char started; // al
  int v17; // eax
  __int64 v18; // r11
  __int64 v19; // [rsp+20h] [rbp-38h]
  __int64 v20; // [rsp+28h] [rbp-30h]

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((ULONG_PTR)&PopPepDeviceListLock, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopPepDeviceListLock, v4, (ULONG_PTR)&PopPepDeviceListLock);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  v5 = PopPepLastCheckedDevice;
  if ( PopPepLastCheckedDevice == &PopPepDeviceList )
  {
    _InterlockedCompareExchange64(
      (volatile signed __int64 *)&PopPepLastCheckedDevice,
      *PopPepLastCheckedDevice,
      (signed __int64)PopPepLastCheckedDevice);
    v5 = PopPepLastCheckedDevice;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  for ( i = 0; i < 2; ++i )
  {
    v8 = (__int64)v5;
    do
    {
      v9 = (volatile LONG *)(v8 + 64);
      if ( i )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel(v9);
      }
      else if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v9) )
      {
        goto LABEL_18;
      }
      v10 = *(_DWORD *)(v8 + 120);
      if ( v10 )
      {
        ReadyActivityType = PopPepGetReadyActivityType(v8 + 72, 0LL, 0LL);
        if ( ReadyActivityType != 6 )
        {
          v20 = a1;
          v19 = v8 + 120;
          goto LABEL_25;
        }
      }
      v11 = *(_DWORD *)(v8 + 168);
      v12 = 0;
      if ( v11 )
      {
        v13 = v8 + 176;
        while ( !*(_DWORD *)(v13 + 104) )
        {
          ++v12;
          v13 += 200LL;
          if ( v12 >= v11 )
            goto LABEL_16;
        }
        v17 = PopPepGetReadyActivityType(v13 + 56, 1LL, 3LL);
        started = PopPepStartActivity(v8, v18, (int)v18 + 56, v17, v18 + 104, a1);
        goto LABEL_26;
      }
LABEL_16:
      if ( v10 )
      {
        v20 = a1;
        v19 = v8 + 120;
        ReadyActivityType = PopPepGetReadyActivityType(v8 + 72, 4LL, 5LL);
LABEL_25:
        started = PopPepStartActivity(v8, 0, (int)v8 + 72, ReadyActivityType, v19, v20);
LABEL_26:
        v3 = started;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 64));
        goto LABEL_27;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 64));
LABEL_18:
      v8 = *(_QWORD *)v8;
      if ( (__int64 *)v8 == &PopPepDeviceList )
        v8 = *(_QWORD *)v8;
    }
    while ( (__int64 *)v8 != v5 );
  }
LABEL_27:
  __writecr8(CurrentIrql);
  if ( (__int64 *)v8 != v5 )
    _InterlockedExchange64((volatile __int64 *)&PopPepLastCheckedDevice, v8);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v3;
}
