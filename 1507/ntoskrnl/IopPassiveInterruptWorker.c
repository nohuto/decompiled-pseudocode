/*
 * XREFs of IopPassiveInterruptWorker @ 0x1401FB130
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D4C6C (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D4F5C (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     xHalUnmaskInterrupt @ 0x14017DF24 (xHalUnmaskInterrupt.c)
 *     IopDereferencePassiveInterruptBlock @ 0x1401FACF4 (IopDereferencePassiveInterruptBlock.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     KiInterruptDispatchCommon @ 0x1402077A8 (KiInterruptDispatchCommon.c)
 *     IopAcquireReleaseDispatcherLock @ 0x14067DAB4 (IopAcquireReleaseDispatcherLock.c)
 */

void __fastcall IopPassiveInterruptWorker(char *P, __int64 a2)
{
  volatile signed __int32 *v3; // rdi
  unsigned __int8 CurrentIrql; // si
  struct _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-48h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  LOBYTE(a2) = 1;
  IopAcquireReleaseDispatcherLock(P, a2);
  if ( !P[24] )
  {
    Affinity = (struct _GROUP_AFFINITY)*((_OWORD *)P + 2);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  v3 = (volatile signed __int32 *)(P + 48);
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(P + 48);
    }
    else if ( _interlockedbittestandset64(v3, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)P + 12);
    }
    if ( !P[57] )
      break;
    P[57] = 0;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(P + 48, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
    __writecr8(CurrentIrql);
    KiInterruptDispatchCommon(P[24] != 0, *((_DWORD *)P + 4), 1, 0, 0LL);
  }
  P[56] = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(P + 48, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
  __writecr8(CurrentIrql);
  if ( !P[24] )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  IopAcquireReleaseDispatcherLock(P, 0LL);
  if ( !*((_DWORD *)P + 7) )
    off_140321938();
  IopDereferencePassiveInterruptBlock((volatile signed __int32 *)P);
}
