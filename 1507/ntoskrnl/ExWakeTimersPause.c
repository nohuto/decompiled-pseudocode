/*
 * XREFs of ExWakeTimersPause @ 0x1401485F0
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExpTimerPause @ 0x14012C9BC (ExpTimerPause.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall ExWakeTimersPause(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // r9
  signed __int8 v6; // cf
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v9; // r15
  __int64 v10; // r12
  __int64 *v11; // rdi
  __int64 result; // rax
  __int64 v13; // rsi
  volatile signed __int32 *v14; // rbx
  __int64 v15; // rbp
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL, 0LL, a4);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL);
  v7 = v4;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v4, (ULONG_PTR)&ExpWakeTimerLock, v5);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v9 = MEMORY[0xFFFFF78000000008];
  v10 = MEMORY[0xFFFFF78000000014];
  v11 = (__int64 *)ExpWakeTimerList;
  while ( v11 != &ExpWakeTimerList )
  {
    v13 = (__int64)(v11 - 32);
    v11 = (__int64 *)*v11;
    v14 = (volatile signed __int32 *)(v13 + 64);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v13 + 64);
    }
    else if ( _interlockedbittestandset64(v14, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v13 + 64));
    }
    v15 = *(_QWORD *)(v13 + 248);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v13 + 64, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v14, 0LL);
    if ( v15 )
      ExpTimerPause(v13, v10, v9);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
