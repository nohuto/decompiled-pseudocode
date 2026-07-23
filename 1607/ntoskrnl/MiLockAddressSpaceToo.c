/*
 * XREFs of MiLockAddressSpaceToo @ 0x1400C446C
 * Callers:
 *     MiDeleteVad @ 0x140028450 (MiDeleteVad.c)
 *     MiPrepareVadDelete @ 0x14042D054 (MiPrepareVadDelete.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUnlockVad @ 0x140014020 (MiUnlockVad.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     LOCK_ADDRESS_SPACE @ 0x14002BF10 (LOCK_ADDRESS_SPACE.c)
 *     KeAbPostReleaseEx @ 0x1400C455C (KeAbPostReleaseEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall MiLockAddressSpaceToo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  volatile signed __int32 *v5; // rdi
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (volatile signed __int32 *)(a1 + 872);
  v6 = KeAbPreAcquire(a1 + 872, 0LL, 1);
  if ( _interlockedbittestandset64(v5, 0LL) )
  {
    if ( v6 )
      KeAbPostReleaseEx((ULONG_PTR)v5);
    LOBYTE(result) = 0;
  }
  else
  {
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
    LOBYTE(result) = 1;
  }
  result = (unsigned __int8)result;
  if ( (_BYTE)result )
  {
    LOBYTE(CurrentThread[1].Queue) |= 1u;
  }
  else
  {
    MiUnlockVad((__int64)CurrentThread, a2);
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
    --CurrentThread->SpecialApcDisable;
    v8 = KeAbPreAcquire(a2 + 40, 0LL, 0);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 40), 0LL) )
      ExfAcquirePushLockExclusiveEx(a2 + 40, v8, a2 + 40);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    LOBYTE(CurrentThread[1].Queue) |= 0x80u;
    return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return result;
}
