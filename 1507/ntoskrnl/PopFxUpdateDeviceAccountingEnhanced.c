/*
 * XREFs of PopFxUpdateDeviceAccountingEnhanced @ 0x140239A84
 * Callers:
 *     PopPepDeviceDState @ 0x140136CA4 (PopPepDeviceDState.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall PopFxUpdateDeviceAccountingEnhanced(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v7; // eax
  unsigned __int64 v8; // rcx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v4 = a1 + 568;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)(a1 + 568));
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 568));
  }
  if ( *(int *)(v4 + 16) <= 0 )
  {
    v7 = *(_DWORD *)(v4 + 12);
    if ( v7 != 5 )
    {
      if ( a3 )
      {
        if ( a2 >= v7 )
        {
          v8 = *(_QWORD *)(v4 + 24);
          if ( *(_BYTE *)(v4 + 8) && MEMORY[0xFFFFF78000000008] >= v8 )
            *(_QWORD *)(v4 + 40) += MEMORY[0xFFFFF78000000008] - v8;
          *(_BYTE *)(v4 + 8) = 0;
        }
      }
      else if ( a2 == 1 && !*(_BYTE *)(v4 + 8) )
      {
        *(_QWORD *)(v4 + 24) = MEMORY[0xFFFFF78000000008];
        *(_BYTE *)(v4 + 8) = 1;
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v4, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
