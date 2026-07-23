/*
 * XREFs of SepRmCapUpdateWrkr @ 0x14056BCF4
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     SepBuildCapPolicyTable @ 0x140145460 (SepBuildCapPolicyTable.c)
 *     SepRmDereferenceCapTable @ 0x140219AA8 (SepRmDereferenceCapTable.c)
 */

__int64 __fastcall SepRmCapUpdateWrkr(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int v4; // ebp
  struct _KTHREAD *v5; // rcx
  _BYTE *v6; // rax
  signed __int8 v7; // cf
  _BYTE *v8; // rsi
  volatile signed __int64 *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v15; // rax
  _BYTE *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 44);
  v20 = 0LL;
  v4 = SepBuildCapPolicyTable(v2, (PRTL_DYNAMIC_HASH_TABLE *)&v20);
  if ( v4 < 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v15 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&SepRmCapTableLock, 0LL, 0);
    v7 = _interlockedbittestandset64((volatile signed __int32 *)&SepRmCapTableLock, 0LL);
    v16 = v15;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx(&SepRmCapTableLock, v15, (ULONG_PTR)&SepRmCapTableLock);
    if ( v16 )
      v16[26] |= 1u;
    SepRmEnforceCap = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SepRmCapTableLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&SepRmCapTableLock);
    KeAbPostRelease((ULONG_PTR)&SepRmCapTableLock);
    result = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v17, v18, v19);
  }
  else
  {
    if ( v20 )
      *(_QWORD *)(v20 + 40) = 1LL;
    v5 = KeGetCurrentThread();
    --v5->KernelApcDisable;
    v6 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&SepRmCapTableLock, 0LL, 0);
    v7 = _interlockedbittestandset64((volatile signed __int32 *)&SepRmCapTableLock, 0LL);
    v8 = v6;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx(&SepRmCapTableLock, v6, (ULONG_PTR)&SepRmCapTableLock);
    if ( v8 )
      v8[26] |= 1u;
    v9 = (volatile signed __int64 *)SepRmCapTable;
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
    result = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
    if ( v9 )
      result = SepRmDereferenceCapTable(v9);
  }
  *(_DWORD *)(a2 + 40) = v4;
  return result;
}
