/*
 * XREFs of MiObtainReferencedSecureVad @ 0x14002C070
 * Callers:
 *     MmUnsecureVirtualMemory @ 0x1404294AC (MmUnsecureVirtualMemory.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiLocateAddress @ 0x14001EC10 (MiLocateAddress.c)
 *     MiUnlockAndDereferenceVad @ 0x14002B920 (MiUnlockAndDereferenceVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14002B9E0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiWaitForVadDeletion @ 0x1401F7544 (MiWaitForVadDeletion.c)
 */

unsigned __int64 __fastcall MiObtainReferencedSecureVad(ULONG_PTR BugCheckParameter3, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // rbp
  __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 Address; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rbp

  CurrentThread = KeGetCurrentThread();
  *a2 = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire(Process + 872, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(Process + 872), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(Process + 872, v6, Process + 872);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  LOBYTE(CurrentThread[1].Queue) |= 2u;
  if ( (*(_DWORD *)(Process + 772) & 0x20) != 0 )
  {
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
    *a2 = -1073741558;
  }
  else
  {
    v7 = *(_QWORD *)(BugCheckParameter3 + 16);
    Address = MiLocateAddress(v7);
    v9 = Address;
    if ( !Address )
      KeBugCheckEx(0x1Au, 0x15000uLL, v7, BugCheckParameter3, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(Address + 36));
    --CurrentThread->SpecialApcDisable;
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
    v10 = v7 >> 12;
    --CurrentThread->SpecialApcDisable;
    v11 = KeAbPreAcquire(v9 + 40, 0LL, 0);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 40), 0LL) )
      ExfAcquirePushLockExclusiveEx(v9 + 40, v11, v9 + 40);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    LOBYTE(CurrentThread[1].Queue) |= 0x80u;
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( (*(_DWORD *)(v9 + 48) & 0x80000) != 0 )
    {
      MiWaitForVadDeletion(v9);
    }
    else if ( v10 >= (*(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32))
           && v10 <= (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) )
    {
      return v9;
    }
    MiUnlockAndDereferenceVad((char *)v9);
    *a2 = -1073741664;
  }
  return 0LL;
}
