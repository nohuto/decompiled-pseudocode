/*
 * XREFs of PspLockQuotaExpansion @ 0x14012574C
 * Callers:
 *     PspReturnResourceQuota @ 0x140125584 (PspReturnResourceQuota.c)
 *     PspExpandQuota @ 0x140125608 (PspExpandQuota.c)
 *     PspInsertExpansionEntry @ 0x14016E910 (PspInsertExpansionEntry.c)
 *     PspExpandLimit @ 0x14024368C (PspExpandLimit.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 */

__int64 __fastcall PspLockQuotaExpansion(_DWORD *a1, unsigned __int8 *a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v5; // rcx
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v9; // rdi
  __int64 v10; // r9
  __int64 v11; // rbx

  if ( *a1 )
  {
    v5 = a1 + 4;
    CurrentIrql = KeGetCurrentIrql();
    result = 2LL;
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      result = KiAcquireSpinLockInstrumented(v5);
    }
    else if ( _interlockedbittestandset64(v5, 0LL) )
    {
      result = KxWaitForSpinLockAndAcquire(v5);
    }
    *a2 = CurrentIrql;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    *a2 = 0;
    --CurrentThread->SpecialApcDisable;
    v9 = (unsigned __int64 *)(a1 + 4);
    result = KeAbPreAcquire((ULONG_PTR)(a1 + 4), 0LL, 0LL, a4);
    v11 = result;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      result = ExfAcquirePushLockExclusiveEx(v9, result, (ULONG_PTR)v9, v10);
    if ( v11 )
    {
      result = *(_QWORD *)(v11 + 32);
      *(_BYTE *)(v11 + 26) |= 1u;
    }
  }
  return result;
}
