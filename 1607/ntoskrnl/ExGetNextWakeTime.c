/*
 * XREFs of ExGetNextWakeTime @ 0x1403DFDD0
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryTimerDueTime @ 0x1401D3604 (KeQueryTimerDueTime.c)
 *     PoStoreDiagnosticContext @ 0x1401FEDF8 (PoStoreDiagnosticContext.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

bool __fastcall ExGetNextWakeTime(
        unsigned __int64 a1,
        unsigned __int64 a2,
        char a3,
        unsigned __int64 *a4,
        unsigned __int64 **a5)
{
  __int64 v6; // r15
  unsigned __int64 *v7; // r14
  __int64 v8; // rbx
  __int64 *v9; // r12
  __int64 v11; // rbp
  unsigned __int64 v12; // rsi
  KIRQL v13; // cl
  __int64 v14; // rax
  __int64 TimerDueTime; // rax
  unsigned __int64 *PoolWithTag; // rax
  bool result; // al
  SIZE_T NumberOfBytes; // [rsp+20h] [rbp-68h] BYREF
  __int64 v19; // [rsp+28h] [rbp-60h]
  PKSPIN_LOCK SpinLock; // [rsp+30h] [rbp-58h]
  __int64 v21; // [rsp+38h] [rbp-50h]
  KIRQL v23; // [rsp+98h] [rbp+10h]

  v6 = 0LL;
  v7 = 0LL;
  v8 = MEMORY[0xFFFFF78000000014];
  v9 = (__int64 *)ExpWakeTimerList;
  v19 = MEMORY[0xFFFFF78000000008];
  if ( (__int64 *)ExpWakeTimerList != &ExpWakeTimerList )
  {
    do
    {
      v11 = (__int64)(v9 - 32);
      v12 = 0LL;
      v9 = (__int64 *)*v9;
      SpinLock = (PKSPIN_LOCK)(v11 + 64);
      v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 64));
      v13 = v23;
      v21 = *(_QWORD *)(v11 + 248);
      if ( !a3 || (*(_BYTE *)(v11 + 244) & 4) != 0 )
      {
        if ( (*(_BYTE *)(v11 + 244) & 2) != 0 )
        {
          if ( *(_BYTE *)(v11 + 245) == 1 )
          {
            v14 = *(_QWORD *)(v11 + 296);
            if ( v14 )
              v12 = v19 + v14 - v8;
          }
          else
          {
            v12 = *(_QWORD *)(v11 + 296);
          }
        }
        else
        {
          TimerDueTime = KeQueryTimerDueTime(v11);
          v13 = v23;
          v12 = TimerDueTime;
        }
        if ( v12 < a1 )
          v12 = 0LL;
      }
      KeReleaseSpinLock(SpinLock, v13);
      if ( v12 - 1 < a2 - 1 )
      {
        v6 = v21;
        a2 = v12;
      }
    }
    while ( v9 != &ExpWakeTimerList );
    v7 = 0LL;
    if ( v6 )
    {
      PoStoreDiagnosticContext(v6, 0LL, &NumberOfBytes);
      PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x53577254u);
      v7 = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( (int)PoStoreDiagnosticContext(v6, PoolWithTag, &NumberOfBytes) < 0 )
        {
          ExFreePoolWithTag(v7, 0x53577254u);
          v7 = 0LL;
        }
      }
    }
  }
  *a4 = a2;
  result = v6 != 0;
  *a5 = v7;
  return result;
}
