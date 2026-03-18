/*
 * XREFs of SepRmCapUpdateWrkr @ 0x14055C278
 * Callers:
 *     SepRmCommandServerThread @ 0x1405A7600 (SepRmCommandServerThread.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     SepBuildCapPolicyTable @ 0x140130FF8 (SepBuildCapPolicyTable.c)
 *     SepRmDereferenceCapTable @ 0x14024F694 (SepRmDereferenceCapTable.c)
 */

void __fastcall SepRmCapUpdateWrkr(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int v4; // ebp
  __int64 v5; // r9
  struct _KTHREAD *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r9
  signed __int8 v9; // cf
  __int64 v10; // rsi
  volatile signed __int64 *v11; // rsi
  struct _KTHREAD *v12; // rdx
  __int16 v13; // ax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rsi
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  __int64 v20; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 44);
  v20 = 0LL;
  v4 = SepBuildCapPolicyTable(v2, (PRTL_DYNAMIC_HASH_TABLE *)&v20);
  if ( v4 < 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v15 = KeAbPreAcquire((ULONG_PTR)&SepRmCapTableLock, 0LL, 0LL, v5);
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&SepRmCapTableLock, 0LL);
    v17 = v15;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx(&SepRmCapTableLock, v15, (ULONG_PTR)&SepRmCapTableLock, v16);
    if ( v17 )
      *(_BYTE *)(v17 + 26) |= 1u;
    SepRmEnforceCap = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SepRmCapTableLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&SepRmCapTableLock);
    KeAbPostRelease((ULONG_PTR)&SepRmCapTableLock);
    v18 = KeGetCurrentThread();
    v19 = v18->KernelApcDisable + 1;
    v18->KernelApcDisable = v19;
    if ( !v19
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
      && !v18->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  else
  {
    if ( v20 )
      *(_QWORD *)(v20 + 40) = 1LL;
    v6 = KeGetCurrentThread();
    --v6->KernelApcDisable;
    v7 = KeAbPreAcquire((ULONG_PTR)&SepRmCapTableLock, 0LL, 0LL, v5);
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&SepRmCapTableLock, 0LL);
    v10 = v7;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx(&SepRmCapTableLock, v7, (ULONG_PTR)&SepRmCapTableLock, v8);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    v11 = (volatile signed __int64 *)SepRmCapTable;
    SepRmCapTable = v20;
    SepRmEnforceCap = v20 != 0;
    if ( v20 && InitSafeBootMode == 1 )
    {
      SepRmDereferenceCapTable((volatile signed __int64 *)SepRmCapTable);
      SepRmCapTable = 0LL;
      *(_QWORD *)(*(_QWORD *)(SepRmDefaultCap + 64) + 32LL) = SeDefaultRecoveryCapeSd;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SepRmCapTableLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&SepRmCapTableLock);
    KeAbPostRelease((ULONG_PTR)&SepRmCapTableLock);
    v12 = KeGetCurrentThread();
    v13 = v12->KernelApcDisable + 1;
    v12->KernelApcDisable = v13;
    if ( !v13
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
      && !v12->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( v11 )
      SepRmDereferenceCapTable(v11);
  }
  *(_DWORD *)(a2 + 40) = v4;
}
