/*
 * XREFs of ExGetNextWakeTime @ 0x1404043CC
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KeQueryTimerDueTime @ 0x1401FF550 (KeQueryTimerDueTime.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     PoStoreDiagnosticContext @ 0x140233764 (PoStoreDiagnosticContext.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

bool __fastcall ExGetNextWakeTime(
        unsigned __int64 a1,
        unsigned __int64 a2,
        char a3,
        unsigned __int64 *a4,
        unsigned __int64 **a5)
{
  __int64 v5; // r15
  unsigned __int64 *v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 *v9; // r13
  unsigned __int64 v10; // r14
  __int64 v11; // rbp
  unsigned __int64 TimerDueTime; // rsi
  volatile signed __int32 *v13; // r12
  __int64 v14; // rax
  unsigned __int64 *PoolWithTag; // rax
  bool result; // al
  __int64 v17; // [rsp+20h] [rbp-68h]
  SIZE_T NumberOfBytes; // [rsp+28h] [rbp-60h] BYREF
  __int64 v19; // [rsp+30h] [rbp-58h]
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  unsigned __int8 CurrentIrql; // [rsp+98h] [rbp+10h]
  unsigned __int64 v23; // [rsp+98h] [rbp+10h]

  v5 = 0LL;
  v6 = 0LL;
  v7 = MEMORY[0xFFFFF78000000014];
  v8 = MEMORY[0xFFFFF78000000008];
  v9 = (__int64 *)ExpWakeTimerList;
  v17 = MEMORY[0xFFFFF78000000008];
  if ( (__int64 *)ExpWakeTimerList == &ExpWakeTimerList )
    goto LABEL_29;
  v10 = a2;
  do
  {
    v11 = (__int64)(v9 - 32);
    TimerDueTime = 0LL;
    v9 = (__int64 *)*v9;
    v13 = (volatile signed __int32 *)(v11 + 64);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)(v11 + 64));
LABEL_7:
      v8 = v17;
      goto LABEL_8;
    }
    if ( _interlockedbittestandset64(v13, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v11 + 64));
      goto LABEL_7;
    }
LABEL_8:
    v19 = *(_QWORD *)(v11 + 248);
    if ( !a3 || (*(_BYTE *)(v11 + 244) & 4) != 0 )
    {
      if ( (*(_BYTE *)(v11 + 244) & 2) != 0 )
      {
        if ( *(_BYTE *)(v11 + 245) == 1 )
        {
          v14 = *(_QWORD *)(v11 + 296);
          if ( v14 )
            TimerDueTime = v8 + v14 - v7;
        }
        else
        {
          TimerDueTime = *(_QWORD *)(v11 + 296);
        }
      }
      else
      {
        TimerDueTime = KeQueryTimerDueTime(v11);
      }
      if ( TimerDueTime < a1 )
        TimerDueTime = 0LL;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)(v11 + 64), retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v13, 0LL);
    __writecr8(CurrentIrql);
    if ( TimerDueTime - 1 < v10 - 1 )
    {
      v5 = v19;
      v10 = TimerDueTime;
    }
    v8 = v17;
  }
  while ( v9 != &ExpWakeTimerList );
  v23 = v10;
  v6 = 0LL;
  if ( v5 )
  {
    PoStoreDiagnosticContext(v5, 0LL, &NumberOfBytes);
    PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x53577254u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( (int)PoStoreDiagnosticContext(v5, PoolWithTag, &NumberOfBytes) < 0 )
      {
        ExFreePoolWithTag(v6, 0x53577254u);
        v6 = 0LL;
      }
    }
  }
  a2 = v23;
LABEL_29:
  *a4 = a2;
  result = v5 != 0;
  *a5 = v6;
  return result;
}
