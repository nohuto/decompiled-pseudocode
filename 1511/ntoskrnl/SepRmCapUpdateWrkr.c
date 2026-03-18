/*
 * XREFs of SepRmCapUpdateWrkr @ 0x1404C5D68
 * Callers:
 *     SepRmCommandServerThread @ 0x14053C31C (SepRmCommandServerThread.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     SepBuildCapPolicyTable @ 0x1400F3BAC (SepBuildCapPolicyTable.c)
 *     SepRmDereferenceCapTable @ 0x140200794 (SepRmDereferenceCapTable.c)
 */

__int64 __fastcall SepRmCapUpdateWrkr(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int v4; // ebp
  struct _KTHREAD *v5; // rcx
  __int64 v6; // rax
  signed __int8 v7; // cf
  __int64 v8; // rsi
  volatile signed __int64 *v9; // rsi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 44);
  v14 = 0LL;
  v4 = SepBuildCapPolicyTable(v2, (PRTL_DYNAMIC_HASH_TABLE *)&v14);
  if ( v4 < 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v12 = KeAbPreAcquire((ULONG_PTR)&SepRmCapTableLock, 0LL, 0LL);
    v7 = _interlockedbittestandset64((volatile signed __int32 *)&SepRmCapTableLock, 0LL);
    v13 = v12;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx(&SepRmCapTableLock, v12, (ULONG_PTR)&SepRmCapTableLock);
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
    SepRmEnforceCap = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SepRmCapTableLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&SepRmCapTableLock);
    KeAbPostRelease((ULONG_PTR)&SepRmCapTableLock);
    result = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  else
  {
    if ( v14 )
      *(_QWORD *)(v14 + 40) = 1LL;
    v5 = KeGetCurrentThread();
    --v5->KernelApcDisable;
    v6 = KeAbPreAcquire((ULONG_PTR)&SepRmCapTableLock, 0LL, 0LL);
    v7 = _interlockedbittestandset64((volatile signed __int32 *)&SepRmCapTableLock, 0LL);
    v8 = v6;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx(&SepRmCapTableLock, v6, (ULONG_PTR)&SepRmCapTableLock);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    v9 = (volatile signed __int64 *)SepRmCapTable;
    SepRmCapTable = v14;
    SepRmEnforceCap = v14 != 0;
    if ( v14 && InitSafeBootMode == 1 )
    {
      SepRmDereferenceCapTable((volatile signed __int64 *)SepRmCapTable);
      SepRmCapTable = 0LL;
      *(_QWORD *)(*(_QWORD *)(SepRmDefaultCap + 64) + 32LL) = SeDefaultRecoveryCapeSd;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SepRmCapTableLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&SepRmCapTableLock);
    KeAbPostRelease((ULONG_PTR)&SepRmCapTableLock);
    result = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v9 )
      result = SepRmDereferenceCapTable(v9);
  }
  *(_DWORD *)(a2 + 40) = v4;
  return result;
}
