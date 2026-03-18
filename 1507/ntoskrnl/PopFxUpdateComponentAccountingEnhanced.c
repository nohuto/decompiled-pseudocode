/*
 * XREFs of PopFxUpdateComponentAccountingEnhanced @ 0x140138650
 * Callers:
 *     PopPepDeviceDState @ 0x140136CA4 (PopPepDeviceDState.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x140138590 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepStartComponentIdleStateChangeActivity @ 0x140139630 (PopPepStartComponentIdleStateChangeActivity.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall PopFxUpdateComponentAccountingEnhanced(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 result; // rax
  unsigned int v9; // eax
  unsigned __int64 v10; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8LL * a2) + 200LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v6);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v6);
  }
  if ( *(int *)(v6 + 16) <= 0 )
  {
    v9 = *(_DWORD *)(v6 + 12);
    if ( v9 != -1 )
    {
      if ( a4 )
      {
        if ( a3 >= v9 )
        {
          v10 = *(_QWORD *)(v6 + 24);
          if ( *(_BYTE *)(v6 + 8) && MEMORY[0xFFFFF78000000008] >= v10 )
            *(_QWORD *)(v6 + 40) += MEMORY[0xFFFFF78000000008] - v10;
          *(_BYTE *)(v6 + 8) = 0;
        }
      }
      else if ( !a3 && !*(_BYTE *)(v6 + 8) )
      {
        *(_QWORD *)(v6 + 24) = MEMORY[0xFFFFF78000000008];
        *(_BYTE *)(v6 + 8) = 1;
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v6, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v6, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
