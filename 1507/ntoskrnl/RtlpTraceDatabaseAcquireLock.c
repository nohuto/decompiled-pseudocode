/*
 * XREFs of RtlpTraceDatabaseAcquireLock @ 0x14024A97C
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x14024A618 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x14024A818 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x14024A8D4 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x14024A934 (RtlTraceDatabaseLock.c)
 *     RtlTraceDatabaseValidate @ 0x14024A944 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 */

char __fastcall RtlpTraceDatabaseAcquireLock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v5; // rcx
  unsigned __int8 CurrentIrql; // di
  ULONG_PTR v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned __int8 v10; // bp
  char result; // al

  if ( (*(_DWORD *)(a1 + 4) & 4) != 0 )
  {
    v5 = (volatile signed __int32 *)(a1 + 56);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v5);
    }
    else if ( _interlockedbittestandset64(v5, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(v5);
    }
    *(_BYTE *)(a1 + 40) = CurrentIrql;
  }
  else
  {
    v7 = a1 + 56;
    v8 = KeAbPreAcquire(a1 + 56, 0LL, 0LL, a4);
    v9 = v8;
    v10 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)v7, 0) )
      ExpAcquireFastMutexContended(v7, v8);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    *(_QWORD *)(v7 + 8) = KeGetCurrentThread();
    *(_DWORD *)(v7 + 48) = v10;
  }
  result = 1;
  *(_QWORD *)(a1 + 48) = KeGetCurrentThread();
  return result;
}
