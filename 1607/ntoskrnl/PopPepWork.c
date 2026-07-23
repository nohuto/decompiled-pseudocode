/*
 * XREFs of PopPepWork @ 0x1400BFC34
 * Callers:
 *     PopFxPluginWork @ 0x1400C11C0 (PopFxPluginWork.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PopPepStartActivity @ 0x1400C0088 (PopPepStartActivity.c)
 *     PopPepGetReadyActivityType @ 0x1400C09A4 (PopPepGetReadyActivityType.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400C0DF0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x1400C10B0 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PopPepWork(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v2; // r14d
  int v3; // r15d
  char started; // r12
  int v5; // r13d
  __int64 v6; // rbx
  __int64 *v7; // rdi
  __int64 v8; // rbx
  REGHANDLE v9; // rsi
  int v10; // esi
  __int64 v11; // rbx
  volatile LONG *v12; // rcx
  int v13; // r10d
  int ReadyActivityType; // r9d
  unsigned int v15; // eax
  __int64 v16; // r11
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v22; // eax
  __int64 v23; // r11
  __int64 v25; // [rsp+38h] [rbp-60h] BYREF
  __int64 CurrentIrql; // [rsp+40h] [rbp-58h]
  __int64 v27; // [rsp+48h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v3 = 0;
  started = 0;
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&PopPepDeviceListLock, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopPepDeviceListLock, v6, &PopPepDeviceListLock);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v7 = PopPepLastCheckedDevice;
  if ( PopPepLastCheckedDevice == &PopPepDeviceList )
  {
    _InterlockedCompareExchange64(
      (volatile signed __int64 *)&PopPepLastCheckedDevice,
      *PopPepLastCheckedDevice,
      (signed __int64)PopPepLastCheckedDevice);
    v7 = PopPepLastCheckedDevice;
  }
  v8 = v7[4];
  if ( PopDiagHandleRegistered )
  {
    v9 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_START) )
    {
      v25 = 0LL;
      if ( v8 )
        v25 = *(_QWORD *)(v8 + 48);
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v25;
      EtwWrite(v9, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_START, 0LL, 1u, &UserData);
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v10 = 0;
LABEL_10:
  v11 = (__int64)v7;
  while ( 1 )
  {
    v27 = v11;
    v12 = (volatile LONG *)(v11 + 64);
    if ( v10 )
      break;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v12) )
      goto LABEL_13;
LABEL_27:
    v11 = *(_QWORD *)v11;
    if ( (__int64 *)v11 == &PopPepDeviceList )
      v11 = *(_QWORD *)v11;
    if ( (__int64 *)v11 == v7 )
    {
      if ( (unsigned int)++v10 >= 3 )
        goto LABEL_21;
      goto LABEL_10;
    }
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(v12);
  if ( v10 == 2 )
    ++v3;
LABEL_13:
  v13 = *(_DWORD *)(v11 + 120);
  if ( v13 )
  {
    ReadyActivityType = PopPepGetReadyActivityType(v11 + 72, 0LL, 0LL);
    if ( ReadyActivityType != 6 )
    {
      started = PopPepStartActivity(v11, 0, (int)v11 + 72, ReadyActivityType, v11 + 120, a1);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 64));
      v5 = 1;
      goto LABEL_21;
    }
  }
  v15 = *(_DWORD *)(v11 + 168);
  v2 = 0;
  if ( !v15 )
  {
LABEL_19:
    if ( v13 )
    {
      v17 = PopPepGetReadyActivityType(v11 + 72, 4LL, 5LL);
      started = PopPepStartActivity(v11, 0, (int)v11 + 72, v17, v11 + 120, a1);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 64));
      v5 = 3;
      goto LABEL_21;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 64));
    goto LABEL_27;
  }
  v16 = v11 + 176;
  while ( !*(_DWORD *)(v16 + 104) )
  {
    ++v2;
    v16 += 200LL;
    if ( v2 >= v15 )
      goto LABEL_19;
  }
  v22 = PopPepGetReadyActivityType(v16 + 56, 1LL, 3LL);
  started = PopPepStartActivity(v11, v23, (int)v23 + 56, v22, v23 + 104, a1);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 64));
  v5 = 2;
LABEL_21:
  __writecr8((unsigned __int8)CurrentIrql);
  if ( (__int64 *)v11 != v7 )
    _InterlockedExchange64((volatile __int64 *)&PopPepLastCheckedDevice, v11);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&PopPepDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v18, v19, v20);
  PopDiagTraceFxDefaultPepWorkerEnd(*(_QWORD *)(v27 + 32), v5, v2, v10, v3);
  return started;
}
